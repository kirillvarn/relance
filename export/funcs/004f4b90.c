
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004f4b90(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  
  uVar4 = 0;
  if (((*(int *)(param_1 + 0x364) != 0) &&
      (iVar3 = *(int *)(param_1 + 0x364) + -8, uVar4 = 0, iVar3 != 0)) &&
     (uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),*(char *)(param_1 + 0x38c)),
     *(char *)(param_1 + 0x38c) != '\0')) {
    if (*(int *)(param_1 + 0x364) == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x364) + -8);
    }
    pfVar5 = (float *)(**(code **)*puVar7)();
    fVar1 = ABS(*pfVar5 - *param_2);
    fVar2 = (float)_DAT_005ca228;
    uVar6 = (undefined2)((uint)param_2 >> 0x10);
    uVar4 = CONCAT22(uVar6,(ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                           (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 < fVar2) {
      fVar1 = ABS(pfVar5[1] - param_2[1]);
      fVar2 = (float)_DAT_005ca228;
      uVar4 = CONCAT22(uVar6,(ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10
                             | (ushort)(fVar1 == fVar2) << 0xe);
      if (fVar1 < fVar2) {
        fVar1 = ABS(pfVar5[2] - param_2[2]);
        fVar2 = (float)_DAT_005ca228;
        uVar4 = CONCAT22(uVar6,(ushort)(fVar1 < fVar2) << 8 |
                               (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                               (ushort)(fVar1 == fVar2) << 0xe);
        if (fVar1 < fVar2) {
          return CONCAT31((int3)(uVar4 >> 8),1);
        }
      }
    }
  }
  return uVar4 & 0xffffff00;
}

