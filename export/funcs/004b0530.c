
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b0530(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  int local_18 [5];
  char local_4;
  char local_2;
  
  if (*(char *)(param_1 + 0x32e) == '\0') {
    pfVar2 = (float *)(param_1 + 0x7b8);
    local_18[0] = -1;
    local_4 = '\0';
    local_2 = '\0';
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x7f4);
      if (iVar4 == 1) {
        iVar4 = *(int *)(param_1 + 0x508);
LAB_004b0590:
        piVar5 = (int *)(iVar4 + iVar3);
        piVar6 = local_18;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      else {
        if (iVar4 == 2) {
          iVar4 = *(int *)(param_1 + 0x548);
          goto LAB_004b0590;
        }
        if (iVar4 == 3) {
          iVar4 = *(int *)(param_1 + 0x528);
          goto LAB_004b0590;
        }
      }
      if (local_2 == '\0') {
        if (local_4 == '\0') {
          (**(code **)(*(int *)pfVar2[-0x75] + 0xa8))(0x2f,&uStack_34,0);
          uStack_20 = uStack_34;
          uStack_1c = 0;
          uStack_38 = (uint)(_DAT_005c8b68 <= (double)uStack_34);
          *pfVar2 = (float)uStack_38;
        }
        else if (local_18[0] == 0x536) {
          uStack_30 = (**(code **)(**(int **)(param_1 + 0x564) + 0xa8))();
          uStack_2c = 0;
          *pfVar2 = (float)uStack_30;
        }
        else {
          uStack_28 = (**(code **)(*(int *)pfVar2[-0x59] + 0xa8))(0x3b,0);
          uStack_24 = 0;
          *pfVar2 = (float)uStack_28;
        }
      }
      else {
        *pfVar2 = -1.0;
      }
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar3 < 0x150);
    FUN_005646e0(0x1e);
    FUN_005646e0(0x1f);
    FUN_005646e0(0x20);
  }
  return;
}

