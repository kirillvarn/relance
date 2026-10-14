
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b06a0(int param_1,char param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int local_2c;
  int local_24;
  int local_18 [5];
  char local_4;
  char local_2;
  
  if (*(char *)(param_1 + 0x32e) == '\0') {
    pfVar6 = (float *)(param_1 + 0x7b8);
    local_18[0] = -1;
    local_4 = '\0';
    local_2 = '\0';
    local_2c = 0;
    local_24 = 0;
    do {
      iVar10 = *(int *)(param_1 + 0x7f4);
      if (iVar10 == 1) {
        iVar10 = *(int *)(param_1 + 0x508);
LAB_004b070b:
        piVar7 = (int *)(iVar10 + local_24);
        piVar9 = local_18;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar9 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
        }
      }
      else {
        if (iVar10 == 2) {
          iVar10 = *(int *)(param_1 + 0x548);
          goto LAB_004b070b;
        }
        if (iVar10 == 3) {
          iVar10 = *(int *)(param_1 + 0x528);
          goto LAB_004b070b;
        }
      }
      iVar10 = local_18[0];
      if (local_2 == '\0') {
        if (local_4 == '\0') {
          if ((*(byte *)((int)pfVar6[-0x67] + 0x6c) & 2) != 0) {
            fVar1 = *pfVar6;
            fVar2 = (float)_DAT_005c8b68;
            (**(code **)(*(int *)pfVar6[-0x75] + 0xa8))(0x30,fVar1 < fVar2,0);
            iVar10 = local_2c;
            if (param_2 == '\0') {
              iVar10 = -1;
            }
            FUN_004b1d20(local_18[0],fVar1 < fVar2,iVar10);
          }
        }
        else if (local_18[0] == 0x536) {
          if ((*(int *)(param_1 + 0x8b8) != *(int *)(param_1 + 0x330)) ||
             (*(char *)(param_1 + 0x8bc) != *(char *)(param_1 + 0x334))) {
            puVar8 = (undefined4 *)(param_1 + 0x954);
            piVar7 = (int *)(param_1 + 0x8d4);
            iVar10 = 0;
            do {
              if (((*(char *)(iVar10 + 0x944 + param_1) != '\0') &&
                  (piVar7[-2] == *(int *)(param_1 + 0x8b8))) &&
                 ((bool)*(char *)(param_1 + 0x8bc) == (*piVar7 == 0x20))) {
                uVar4 = *puVar8;
                if (param_2 == '\0') {
                  iVar5 = -1;
                }
                else {
                  (**(code **)(**(int **)(param_1 + 0x564) + 0xa8))(0x38,uVar4,0);
                  uVar4 = *puVar8;
                  iVar5 = local_2c;
                }
                FUN_004b1450(0x536,uVar4,iVar5);
              }
              iVar10 = iVar10 + 1;
              puVar8 = puVar8 + 1;
              piVar7 = piVar7 + 3;
            } while (iVar10 < 10);
          }
        }
        else {
          uVar3 = (**(code **)(*(int *)pfVar6[-0x59] + 0xa8))(0x3b,0,0);
          if ((float)uVar3 != *pfVar6) {
            if (param_2 == '\0') {
              uVar11 = 0xffffffff;
              uVar4 = ftol(0xffffffff);
              FUN_004b1450(iVar10,uVar4,uVar11);
            }
            else {
              iVar10 = *(int *)pfVar6[-0x59];
              uVar4 = ftol(0);
              (**(code **)(iVar10 + 0xa8))(0x38,uVar4);
              iVar10 = local_2c;
              uVar4 = ftol(local_2c);
              FUN_004b1450(local_18[0],uVar4,iVar10);
            }
          }
        }
      }
      local_24 = local_24 + 0x18;
      local_2c = local_2c + 1;
      pfVar6 = pfVar6 + 1;
    } while (local_24 < 0x150);
    FUN_005646e0(0x1e);
    FUN_005646e0(0x1f);
    FUN_005646e0(0x20);
  }
  return;
}

