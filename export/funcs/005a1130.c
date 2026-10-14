
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_005a1130(float *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float unaff_EDI;
  ushort uVar7;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_c [12];
  
  if ((*param_1 == _DAT_005c7474) && (param_1[1] == _DAT_005c7474)) {
    fVar1 = param_1[2];
    if (fVar1 == _DAT_005c7474) {
      return (uint)(ushort)((ushort)(fVar1 < _DAT_005c7474) << 8 |
                            (ushort)(NAN(fVar1) || NAN(_DAT_005c7474)) << 10 |
                           (ushort)(fVar1 == _DAT_005c7474) << 0xe);
    }
  }
  fVar1 = *(float *)(param_2 + 0x24);
  fVar2 = *(float *)(param_2 + 0x28);
  if (DAT_0067dd4c == (int *)0x0) {
    DAT_0067dd4c = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_0067dd4c + 0x3c))(DAT_0067dd4c,local_c,param_2,param_3);
  fVar4 = fStack_1c - unaff_EDI;
  fVar1 = -fVar1 - fStack_24;
  fVar2 = -fVar2 - fStack_20;
  if ((((fVar4 != _DAT_005c7474) && (fVar3 = -(unaff_EDI / fVar4), _DAT_005c7474 < fVar3)) &&
      (ABS(fVar1 * fVar3 + fStack_24) < param_1[1])) &&
     (fVar5 = ABS(fVar2 * fVar3 + fStack_20), fVar3 = param_1[2], fVar3 >= fVar5 && fVar3 != fVar5))
  {
    return CONCAT31((uint3)(fVar3 < fVar5),1);
  }
  if (((fVar1 != _DAT_005c7474) && (fVar3 = -(fStack_24 / fVar1), _DAT_005c7474 < fVar3)) &&
     ((ABS(fVar3 * fVar4 + unaff_EDI) < *param_1 &&
      (fVar5 = ABS(fVar2 * fVar3 + fStack_20), fVar3 = param_1[2], fVar3 >= fVar5 && fVar3 != fVar5)
      ))) {
    return CONCAT31((uint3)(fVar3 < fVar5),1);
  }
  uVar6 = (uint)(ushort)((ushort)(fVar2 < _DAT_005c7474) << 8 |
                         (ushort)(NAN(fVar2) || NAN(_DAT_005c7474)) << 10 |
                        (ushort)(fVar2 == _DAT_005c7474) << 0xe);
  if (fVar2 != _DAT_005c7474) {
    fVar2 = -(fStack_20 / fVar2);
    uVar6 = (uint)(ushort)((ushort)(fVar2 < _DAT_005c7474) << 8 |
                           (ushort)(NAN(fVar2) || NAN(_DAT_005c7474)) << 10 |
                          (ushort)(fVar2 == _DAT_005c7474) << 0xe);
    if (fVar2 >= _DAT_005c7474 && (fVar2 == _DAT_005c7474) == 0) {
      fVar3 = ABS(fVar2 * fVar1 + fStack_24);
      fVar1 = param_1[1];
      uVar6 = (uint)(ushort)((ushort)(fVar1 < fVar3) << 8 | (ushort)(NAN(fVar1) || NAN(fVar3)) << 10
                            | (ushort)(fVar1 == fVar3) << 0xe);
      if (fVar1 >= fVar3 && (fVar1 == fVar3) == 0) {
        fVar2 = ABS(fVar2 * fVar4 + unaff_EDI);
        fVar1 = *param_1;
        uVar7 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                (ushort)(fVar1 == fVar2) << 0xe;
        uVar6 = (uint)uVar7;
        if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
          return CONCAT31((uint3)(byte)(uVar7 >> 8),1);
        }
      }
    }
  }
  return uVar6;
}

