
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004fdd00(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  undefined2 extraout_var;
  double dVar5;
  undefined2 uVar4;
  
  fVar1 = *(float *)(param_1 + 0x74);
  uVar4 = (undefined2)((uint)in_EAX >> 0x10);
  uVar3 = CONCAT22(uVar4,(ushort)(fVar1 < _DAT_005c7474) << 8 |
                         (ushort)(NAN(fVar1) || NAN(_DAT_005c7474)) << 10 |
                         (ushort)(fVar1 == _DAT_005c7474) << 0xe);
  if (fVar1 != _DAT_005c7474) {
    fVar1 = param_2 * *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x78);
    fVar2 = (float)_DAT_005c89b8;
    *(float *)(param_1 + 0x78) = fVar1;
    if (fVar2 <= fVar1) {
      dVar5 = floor((double)fVar1);
      *(float *)(param_1 + 0x78) = fVar1 - (float)dVar5;
      uVar4 = extraout_var;
    }
    fVar1 = *(float *)(param_1 + 0x78);
    fVar2 = *(float *)(param_1 + 0x70);
    if (fVar1 < fVar2 == 0 && (fVar1 == fVar2) == 0) {
      *(float *)(param_1 + 0x7c) = _DAT_005c7474;
      return CONCAT31((int3)(CONCAT22(uVar4,(ushort)(fVar1 < fVar2) << 8 |
                                            (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                            (ushort)(fVar1 == fVar2) << 0xe) >> 8),1);
    }
    fVar1 = (_DAT_005d55b4 / *(float *)(param_1 + 0x70)) * fVar1;
    uVar3 = CONCAT22(uVar4,(ushort)(fVar1 < _DAT_005c75dc) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_005c75dc)) << 10 |
                           (ushort)(fVar1 == _DAT_005c75dc) << 0xe);
    if (fVar1 < _DAT_005c75dc == 0 && (fVar1 == _DAT_005c75dc) == 0) {
      fVar1 = _DAT_005d55b4 - fVar1;
    }
    *(float *)(param_1 + 0x7c) = fVar1;
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

