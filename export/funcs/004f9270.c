
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004f9270(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte bVar4;
  
  fVar1 = *(float *)(param_1 + 0x80);
  uVar2 = FUN_004f86c0(param_2,param_3);
  bVar4 = (*(byte *)(param_1 + 0x7c) ^ (byte)uVar2) & 1 ^ *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x7c) = bVar4;
  if ((bVar4 & 1) == 0) {
    uVar3 = (undefined2)((uint)uVar2 >> 0x10);
    uVar2 = CONCAT22(uVar3,(ushort)(fVar1 < _DAT_005c7474) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_005c7474)) << 10 |
                           (ushort)(fVar1 == _DAT_005c7474) << 0xe);
    if (fVar1 < _DAT_005c7474 == 0 && (fVar1 == _DAT_005c7474) == 0) {
      fVar1 = fVar1 - param_2 * _DAT_005c75e0;
      uVar2 = CONCAT22(uVar3,(ushort)(fVar1 < _DAT_005c7474) << 8 |
                             (ushort)(NAN(fVar1) || NAN(_DAT_005c7474)) << 10 |
                             (ushort)(fVar1 == _DAT_005c7474) << 0xe);
      if (fVar1 < _DAT_005c7474) {
        fVar1 = _DAT_005c7474;
      }
      *(float *)(param_1 + 0x80) = fVar1;
      *(byte *)(param_1 + 0x7c) = bVar4 | 1;
    }
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),*(undefined1 *)(param_1 + 0x7c)) & 0xffffff01;
}

