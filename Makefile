#   make linux   -> build/linux/libdacom.so, libsystem.so, libreadfile.so,
#                   libximage.so  (native gcc)
#   make test    -> dacom + readfile + ximage tests (readfile: every 10th UTF
#                   archive in game/DATA, diffed against tests/utf_oracle.py;
#                   ximage: tests/ximage_cases.txt diffed against
#                   tests/ximage_golden.txt, recorded from the original DLL)
#   make check32 -> compile src/dalibs/ as 32-bit (stub libc in tools/stub32/)
#                   to check the _Static_asserts on original layouts; part of test
#   make decomp  -> regenerate decomp/ for every module (slow)
#   make golden  -> re-record tests/*_golden.txt by running the ORIGINAL DLLs
#                   under unicorn (tools/emu/; needs tools/requirements.txt)
#   make win32   -> build/win32/system.dll    (MSVC x86 on the Windows host, via WSL)
ROOT   := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
CC     ?= gcc
CFLAGS := -std=c11 -Wall -Wextra -Werror -O2 -fPIC \
          -fwrapv -fno-strict-aliasing -ffp-contract=off -I$(ROOT)/include
OUT    := $(ROOT)/build/linux

PYTHON ?= $(ROOT)/venv/bin/python

PLATFORM_SRC := $(wildcard $(ROOT)/src/platform/*.c) $(ROOT)/src/compat/msvc_compat.c
DACOM_SRC    := $(wildcard $(ROOT)/src/dalibs/dacom/*.c)
SYSTEM_SRC   := $(wildcard $(ROOT)/src/dalibs/system/*.c)
READFILE_SRC := $(wildcard $(ROOT)/src/dalibs/readfile/*.c)
XIMAGE_SRC   := $(wildcard $(ROOT)/src/dalibs/ximage/*.c)
HEADERS      := $(wildcard $(ROOT)/include/*.h $(ROOT)/src/dalibs/*/*.h $(ROOT)/src/platform/*.h)

.PHONY: all linux test check32 win32 decomp golden golden-ximage clean-linux
all: linux win32

linux: $(OUT)/libdacom.so $(OUT)/libsystem.so $(OUT)/libreadfile.so $(OUT)/libximage.so

# libdacom.so carries the platform layer and the CRT compat wrappers for now.
$(OUT)/libdacom.so: $(DACOM_SRC) $(PLATFORM_SRC) $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -shared -o $@ $(DACOM_SRC) $(PLATFORM_SRC) -ldl

$(OUT)/libsystem.so: $(SYSTEM_SRC) $(OUT)/libdacom.so $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -shared -o $@ $(SYSTEM_SRC) -L$(OUT) -ldacom -Wl,-rpath,'$$ORIGIN'

$(OUT)/libreadfile.so: $(READFILE_SRC) $(OUT)/libdacom.so $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -shared -o $@ $(READFILE_SRC) -L$(OUT) -ldacom -Wl,-rpath,'$$ORIGIN'

$(OUT)/libximage.so: $(XIMAGE_SRC) $(OUT)/libdacom.so $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -shared -o $@ $(XIMAGE_SRC) -L$(OUT) -ldacom -Wl,-rpath,'$$ORIGIN'

$(OUT)/test_dacom: $(ROOT)/tests/test_dacom.c $(OUT)/libdacom.so $(OUT)/libsystem.so
	$(CC) $(CFLAGS) -fsanitize=address,undefined -o $@ $< \
	    $(DACOM_SRC) $(PLATFORM_SRC) -ldl -rdynamic

# Sanitizer build of the library under test (loaded by DACOM AddLibrary).
$(OUT)/asan/libreadfile.so: $(READFILE_SRC) $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -fsanitize=address,undefined -shared -o $@ $(READFILE_SRC)

$(OUT)/test_readfile: $(ROOT)/tests/test_readfile.c $(OUT)/libdacom.so $(OUT)/asan/libreadfile.so
	$(CC) $(CFLAGS) -fsanitize=address,undefined -o $@ $< \
	    $(DACOM_SRC) $(PLATFORM_SRC) -ldl -rdynamic

$(OUT)/asan/libximage.so: $(XIMAGE_SRC) $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -fsanitize=address,undefined -shared -o $@ $(XIMAGE_SRC)

$(OUT)/test_ximage: $(ROOT)/tests/test_ximage.c $(OUT)/libdacom.so $(OUT)/asan/libximage.so
	$(CC) $(CFLAGS) -fsanitize=address,undefined -o $@ $< \
	    $(DACOM_SRC) $(PLATFORM_SRC) -ldl -rdynamic

# No i386 libc needed: declarations only, -fsyntax-only.
check32:
	@for f in $(wildcard $(ROOT)/src/dalibs/*/*.c); do \
	    $(CC) -m32 -ffreestanding -std=c11 -Wall -Wextra -Werror -fsyntax-only \
	        -isystem $(ROOT)/tools/stub32 -I$(ROOT)/include -I$$(dirname $$f) $$f || exit 1; \
	done; echo "check32: 32-bit layouts OK"

test: check32 $(OUT)/test_dacom $(OUT)/test_readfile $(OUT)/test_ximage
	$(OUT)/test_dacom $(ROOT)/game/EXE $(OUT)
	sh $(ROOT)/tests/utf_list.sh $(ROOT)/game/DATA > $(OUT)/utf_list.txt
	$(OUT)/test_readfile $(ROOT)/game $(OUT)/asan $(OUT)/utf_list.txt $(OUT)/utf_port.txt
	python3 $(ROOT)/tests/utf_oracle.py $(ROOT)/game/DATA $(OUT)/utf_list.txt > $(OUT)/utf_oracle.txt
	cmp $(OUT)/utf_oracle.txt $(OUT)/utf_port.txt && echo "utf walk: identical to oracle"
	$(OUT)/test_ximage $(OUT)/asan $(ROOT)/tests/ximage_cases.txt $(OUT)/ximage_port.txt
	cmp $(ROOT)/tests/ximage_golden.txt $(OUT)/ximage_port.txt && echo "ximage: identical to the original"

# Regenerate the case list and record the original's behaviour on it.
golden: golden-ximage

golden-ximage:
	python3 $(ROOT)/tests/ximage_cases.py > $(ROOT)/tests/ximage_cases.txt
	$(PYTHON) $(ROOT)/tools/emu/emu_ximage.py $(ROOT)/game/EXE/ximage.dll \
	    $(ROOT)/tests/ximage_cases.txt $(ROOT)/tests/ximage_golden.txt

win32:
	sh $(ROOT)/tools/win32/build_system_dll.sh

# Regenerate decomp/ for every module (slow; meta only: tools/decomp/meta_all.sh).
decomp:
	FORCE=1 sh $(ROOT)/tools/decomp/decomp_all.sh

clean-linux:
	rm -rf $(OUT)
