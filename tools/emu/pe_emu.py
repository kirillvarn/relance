"""pe_emu.py — run original 32-bit DLL code under unicorn, for differential
tests against the ports (notes/dll_porting.md, step 4).

What it gives a per-module harness (see emu_ximage.py):
- The DLL mapped at its image base. Its imports resolve to stubs: CRT
  basics, DACOM_Acquire (a mock ICOManager that records RegisterComponent)
  and FDUMP (logged as "dump <flags> <text>"). Any other import raises
  when called; add it to `imports` when a module needs it.
- `stub(fn, nargs)`: a code address that runs a Python handler and then
  returns (`ret 4*nargs`, i.e. stdcall; nargs=0 → cdecl `ret`). The
  handler's return value goes to EAX.
- `vtable(nslots, {slot: (fn, nargs incl. this)})`: a mock COM-style
  object. Slots not given raise when called.
- `call(fn, *args)` / `vcall(obj, slot, *args)`: run original code until it
  returns.
- `put_bytes`/`put_str`/`put_u32s`: test inputs in a scratch area,
  reset with `reset_data()`.
- `out(line)` / `log`: the log the port runner must reproduce.

The FPU starts in MSVC's default mode (0x27f: 53-bit, round to nearest).
Fresh heap memory is filled with 0xcd so that reads of uninitialized
memory change the log.

Needs `unicorn` (tools/requirements.txt, installed in venv/).
"""
import struct

from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ESP, UC_X86_REG_FPCW

# Emulator regions sit above every game module's image (the highest is
# 0x30000000, plus unicows.dll at 0x7f2d0000, which is skipped).
STUB = 0x7a000000      # Python-handled stubs (hooked), 16 bytes each
NATIVE = 0x7a008000    # hand-assembled native helpers (not hooked)
HEAP = 0x74000000      # 64 MB bump heap
STACK = 0x79000000
DATA = 0x7b000000      # test inputs (put_*)

# _ftol: truncate st0 to EDX:EAX (fnstcw; RC=chop; fistp qword; restore).
FTOL = bytes.fromhex("558BEC83EC0CD97DFE668B45FE80CC0C668945FCD96DFCDF7DF4D96DFE"
                     "8B45F48B55F8C9C3")
# _initterm(begin, end): call every non-NULL pointer in [begin, end).
INITTERM = bytes.fromhex("56578B74240C8B7C24103BF7730D8B0685C07402FFD083C604EBEF5F5EC3")


def s32(v):
    v &= 0xffffffff
    return v - (1 << 32) if v & 0x80000000 else v


def f32(bits):
    return struct.unpack("<f", struct.pack("<I", bits & 0xffffffff))[0]


def f32_bits(f):
    return struct.unpack("<I", struct.pack("<f", f))[0]


class PeEmu:
    def __init__(self, dll_path, fpcw=0x27f):
        pe = open(dll_path, "rb").read()
        self.mu = mu = Uc(UC_ARCH_X86, UC_MODE_32)
        pe_off = struct.unpack_from("<I", pe, 0x3c)[0]
        nsec = struct.unpack_from("<H", pe, pe_off + 6)[0]
        opt = pe_off + 24
        opt_size = struct.unpack_from("<H", pe, pe_off + 20)[0]
        self.base = struct.unpack_from("<I", pe, opt + 28)[0]
        image_size = struct.unpack_from("<I", pe, opt + 56)[0]
        self.entry = self.base + struct.unpack_from("<I", pe, opt + 16)[0]
        mu.mem_map(self.base, (image_size + 0xfff) & ~0xfff)
        mu.mem_write(self.base, pe[:0x400])
        sec = opt + opt_size
        for i in range(nsec):
            vsize, vaddr, rsize, roff = struct.unpack_from("<IIII", pe, sec + 40 * i + 8)
            mu.mem_write(self.base + vaddr, pe[roff:roff + min(rsize, vsize or rsize)])
        for base, size in ((STUB, 0x10000), (HEAP, 0x4000000), (STACK, 0x100000),
                           (DATA, 0x100000)):
            mu.mem_map(base, size)
        self.log = []
        self.handlers = {}
        self.next_stub = STUB
        self.heap = HEAP
        self.freed = []
        self.data_top = DATA
        self.halt = self.stub(lambda: None, 0)       # return address of call(); never runs
        mu.mem_write(NATIVE, FTOL)
        mu.mem_write(NATIVE + 0x40, INITTERM)
        self.factories = {}                          # name -> (factory, priority)
        self.com = self._mock_com()
        self.imports = self._default_imports()
        self._resolve_imports(pe, opt)
        mu.hook_add(UC_HOOK_CODE, self._on_stub, begin=STUB, end=NATIVE - 1)
        mu.reg_write(UC_X86_REG_FPCW, fpcw)

    # ---- memory
    def rd(self, a):
        return struct.unpack("<I", self.mu.mem_read(a, 4))[0]

    def wr(self, a, v):
        self.mu.mem_write(a, struct.pack("<I", v & 0xffffffff))

    def rd_u32s(self, a, n):
        return list(struct.unpack("<%dI" % n, self.mu.mem_read(a, 4 * n)))

    def cstr(self, a):
        out = bytearray()
        while True:
            b = self.mu.mem_read(a, 64)
            i = b.find(0)
            if i >= 0:
                return (out + b[:i]).decode("latin-1")
            out += b
            a += 64

    def alloc(self, n):
        a = self.heap
        self.heap = (self.heap + max(n, 1) + 15) & ~15
        if n:
            self.mu.mem_write(a, b"\xcd" * n)
        return a

    def put_bytes(self, b):
        a = self.data_top
        self.mu.mem_write(a, bytes(b))
        self.data_top = (a + len(b) + 15) & ~15
        return a

    def put_str(self, s):
        return self.put_bytes(s.encode("latin-1") + b"\0")

    def put_u32s(self, vals):
        return self.put_bytes(struct.pack("<%dI" % len(vals), *[v & 0xffffffff for v in vals]))

    def reset_data(self):
        self.data_top = DATA

    # ---- stubs and mock objects
    def stub(self, fn, nargs=0):
        a = self.next_stub
        if a + 16 > NATIVE:
            raise RuntimeError("out of stub space")
        self.next_stub += 16
        self.mu.mem_write(a, b"\xc3" if nargs == 0 else b"\xc2" + struct.pack("<H", 4 * nargs))
        self.handlers[a] = fn
        return a

    def _on_stub(self, mu, addr, size, user):
        fn = self.handlers.get(addr)
        if fn is None:
            raise RuntimeError("unexpected execution at stub %#x" % addr)
        r = fn()
        if r is not None:
            mu.reg_write(UC_X86_REG_EAX, r & 0xffffffff)

    def arg(self, i):
        """i-th stack argument inside a stub (for a method, arg(0) is `this`)."""
        return self.rd(self.mu.reg_read(UC_X86_REG_ESP) + 4 + 4 * i)

    def vtable(self, nslots, impl, name="obj"):
        """Mock object; returns its address. impl: {slot: (fn, nargs incl. this)}."""
        vt = self.alloc(4 * nslots)
        for s in range(nslots):
            if s in impl:
                fn, n = impl[s]
                self.wr(vt + 4 * s, self.stub(fn, n))
            else:
                def missing(s=s):
                    raise RuntimeError("%s: unexpected call to vtable slot %d" % (name, s))
                self.wr(vt + 4 * s, self.stub(missing))
        obj = self.alloc(4)
        self.wr(obj, vt)
        return obj

    # ---- calling original code
    def call(self, fn, *args):
        esp = STACK + 0xff000
        for a in reversed(args):
            esp -= 4
            self.wr(esp, a)
        esp -= 4
        self.wr(esp, self.halt)
        self.mu.reg_write(UC_X86_REG_ESP, esp)
        self.mu.emu_start(fn, self.halt)
        return self.mu.reg_read(UC_X86_REG_EAX)

    def vcall(self, obj, slot, *args):
        return self.call(self.rd(self.rd(obj) + 4 * slot), obj, *args)

    def attach(self):
        """Run the DLL entry point with DLL_PROCESS_ATTACH (CRT init + DllMain)."""
        return self.call(self.entry, self.base, 1, 0)

    def out(self, line):
        self.log.append(line)

    def write_log(self, path):
        with open(path, "w") as f:
            f.write("\n".join(self.log) + "\n")

    # ---- printf subset (%s %d %u %x %c %%), args from a pointer walk
    def printf(self, fmt, argp):
        out, i = [], 0
        p = [argp]

        def nxt():
            v = self.rd(p[0])
            p[0] += 4
            return v
        while i < len(fmt):
            ch = fmt[i]
            i += 1
            if ch != "%":
                out.append(ch)
                continue
            spec = fmt[i]
            i += 1
            if spec == "s":
                out.append(self.cstr(nxt()))
            elif spec == "d":
                out.append(str(s32(nxt())))
            elif spec == "u":
                out.append(str(nxt()))
            elif spec == "x":
                out.append("%x" % nxt())
            elif spec == "c":
                out.append(chr(nxt() & 0xff))
            elif spec == "%":
                out.append("%")
            else:
                raise RuntimeError("printf: unsupported %" + spec)
        return "".join(out)

    # ---- imports
    def _mock_com(self):
        def register():
            self.factories[self.cstr(self.arg(2))] = (self.arg(1), self.arg(3))
            return 0
        return self.vtable(11, {1: (lambda: 1, 1), 2: (lambda: 1, 1), 4: (register, 4)},
                           "ICOManager")

    def _default_imports(self):
        def malloc():
            return self.alloc(self.arg(0))

        def free():
            self.freed.append(self.arg(0))

        def vsnprintf():
            buf, n, fmt, va = self.arg(0), self.arg(1), self.arg(2), self.arg(3)
            s = self.printf(self.cstr(fmt), va).encode("latin-1")
            self.mu.mem_write(buf, s[:n] + (b"\0" if len(s) < n else b""))
            return len(s) if len(s) <= n else -1

        def fdump():
            esp = self.mu.reg_read(UC_X86_REG_ESP)
            text = self.printf(self.cstr(self.rd(esp + 8)), esp + 12)
            self.out("dump %x %s" % (self.rd(esp + 4), text))
            return 0

        def stricmp():          # DACOM.dll stricmp: ASCII fold, -1/0/1
            a, b = self.cstr(self.arg(0)).lower(), self.cstr(self.arg(1)).lower()
            return (a > b) - (a < b)

        fdump_var = self.alloc(4)
        self.wr(fdump_var, self.stub(fdump))
        zero_var = self.alloc(4)
        self.wr(zero_var, 0)
        return {
            "DACOM_Acquire": self.stub(lambda: self.com),
            "FDUMP": fdump_var,                       # data import
            "stricmp": self.stub(stricmp),
            "malloc": self.stub(malloc),
            "free": self.stub(free),
            "??2@YAPAXI@Z": self.stub(malloc),        # operator new
            "??3@YAXPAX@Z": self.stub(free),          # operator delete
            "_vsnprintf": self.stub(vsnprintf),
            "_ftol": NATIVE,
            "_initterm": NATIVE + 0x40,
            "_adjust_fdiv": zero_var,                 # data import
            "_onexit": self.stub(lambda: self.arg(0)),
            "__dllonexit": self.stub(lambda: self.arg(0)),
            "DisableThreadLibraryCalls": self.stub(lambda: 1, 1),
            "SetRect": self.stub(self._setrect, 5),
        }

    def _setrect(self):
        r = self.arg(0)
        for k in range(4):
            self.wr(r + 4 * k, self.arg(1 + k))
        return 1

    def _resolve_imports(self, pe, opt):
        imp_rva = struct.unpack_from("<I", pe, opt + 96 + 8)[0]
        p = self.base + imp_rva
        while True:
            desc = struct.unpack("<5I", self.mu.mem_read(p, 20))
            if desc[0] == 0 and desc[3] == 0:
                break
            dll = self.cstr(self.base + desc[3])
            ilt, iat = self.base + (desc[0] or desc[4]), self.base + desc[4]
            k = 0
            while True:
                ent = self.rd(ilt + 4 * k)
                if ent == 0:
                    break
                if ent & 0x80000000:
                    name = "%s#%d" % (dll, ent & 0xffff)
                else:
                    name = self.cstr(self.base + ent + 2)
                addr = self.imports.get(name)
                if addr is None:
                    def missing(name=name):
                        raise RuntimeError("unimplemented import " + name)
                    addr = self.stub(missing)
                self.wr(iat + 4 * k, addr)
                k += 1
            p += 20
