
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0049a1e0(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  
  param_2 = param_2 * (float)_DAT_005d3ed8;
  fVar3 = param_2 + param_4 * (float)_DAT_005d3ed0;
  uVar4 = (uint)(ushort)((ushort)(fVar3 < _DAT_005d3efc) << 8 |
                         (ushort)(NAN(fVar3) || NAN(_DAT_005d3efc)) << 10 |
                        (ushort)(fVar3 == _DAT_005d3efc) << 0xe);
  if ((fVar3 < _DAT_005d3efc || (fVar3 == _DAT_005d3efc) != 0) &&
     (uVar4 = (uint)(ushort)((ushort)(param_2 < _DAT_005d3ef8) << 8 |
                             (ushort)(NAN(param_2) || NAN(_DAT_005d3ef8)) << 10 |
                            (ushort)(param_2 == _DAT_005d3ef8) << 0xe), param_2 >= _DAT_005d3ef8)) {
    fVar1 = param_5 - param_3;
    uVar4 = (uint)(ushort)((ushort)(fVar1 < _DAT_005d3ef4) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_005d3ef4)) << 10 |
                          (ushort)(fVar1 == _DAT_005d3ef4) << 0xe);
    if (fVar1 < _DAT_005d3ef4 || (fVar1 == _DAT_005d3ef4) != 0) {
      fVar1 = -param_3;
      uVar4 = (uint)(ushort)((ushort)(fVar1 < _DAT_005d3ef0) << 8 |
                             (ushort)(NAN(fVar1) || NAN(_DAT_005d3ef0)) << 10 |
                            (ushort)(fVar1 == _DAT_005d3ef0) << 0xe);
      if (fVar1 >= _DAT_005d3ef0) {
        if (*(int *)(param_1 + 0x86c) == 0) {
          iVar6 = 0;
          uVar4 = 0;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x870) - *(int *)(param_1 + 0x86c);
          iVar6 = iVar7 / 0x14;
          uVar4 = -(iVar7 >> 0x1f);
        }
        iVar7 = 0;
        if (0 < iVar6) {
          pfVar5 = *(float **)(param_1 + 0x86c);
          do {
            fVar1 = pfVar5[2] + *pfVar5;
            uVar4 = (uint)(ushort)((ushort)(fVar1 < param_2) << 8 |
                                   (ushort)(NAN(fVar1) || NAN(param_2)) << 10 |
                                  (ushort)(fVar1 == param_2) << 0xe);
            if (fVar1 >= param_2) {
              fVar1 = *pfVar5;
              uVar4 = (uint)(ushort)((ushort)(fVar1 < fVar3) << 8 |
                                     (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
                                    (ushort)(fVar1 == fVar3) << 0xe);
              if (fVar1 < fVar3 != 0 || (fVar1 == fVar3) != 0) {
                fVar1 = pfVar5[1] + pfVar5[3];
                uVar4 = (uint)(ushort)((ushort)(fVar1 < param_3) << 8 |
                                       (ushort)(NAN(fVar1) || NAN(param_3)) << 10 |
                                      (ushort)(fVar1 == param_3) << 0xe);
                if (fVar1 >= param_3) {
                  fVar2 = param_3 + param_5;
                  fVar1 = pfVar5[1];
                  uVar4 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 |
                                         (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                        (ushort)(fVar2 == fVar1) << 0xe);
                  if (fVar2 >= fVar1) {
                    return uVar4;
                  }
                }
              }
            }
            iVar7 = iVar7 + 1;
            pfVar5 = pfVar5 + 5;
          } while (iVar7 < iVar6);
        }
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
    }
  }
  return uVar4;
}

