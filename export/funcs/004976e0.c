
void __thiscall FUN_004976e0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x810);
      puVar1 != *(undefined4 **)(param_1 + 0x810); puVar1 = (undefined4 *)*puVar1) {
    piVar2 = (int *)puVar1[2];
    if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
      return;
    }
    if ((*piVar2 == param_3) && (piVar2[1] == param_2)) {
      *(undefined1 *)((int)piVar2 + 9) = 1;
      return;
    }
  }
  piVar2 = operator_new(0x10);
  *piVar2 = param_2;
  piVar2[1] = param_3;
  *(undefined1 *)(piVar2 + 2) = 1;
  *(undefined1 *)((int)piVar2 + 9) = 0;
  piVar2[3] = 0;
  iVar3 = FUN_004c4830();
  iVar4 = (**(code **)**(undefined4 **)(param_2 + 100))();
  if (iVar3 == iVar4) {
LAB_00497799:
    iVar3 = FUN_004c4830();
    iVar4 = (**(code **)**(undefined4 **)(param_3 + 100))();
    if (iVar3 == iVar4) {
LAB_00497815:
      piVar2[3] = 2;
      goto LAB_00497869;
    }
    iVar3 = FUN_004c4fb0();
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = FUN_0049a8f0(iVar4);
        if (iVar5 == *(int *)(param_3 + 100)) goto LAB_00497815;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
  else {
    iVar3 = FUN_004c4fb0();
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = FUN_0049a8f0(iVar4);
        if (iVar5 == *(int *)(param_2 + 100)) goto LAB_00497799;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
  iVar3 = FUN_004c4830();
  iVar4 = (**(code **)**(undefined4 **)(param_2 + 100))();
  if (iVar3 == iVar4) {
LAB_00497826:
    iVar3 = FUN_004c4830();
    iVar4 = (**(code **)**(undefined4 **)(param_3 + 100))();
    if (iVar3 == iVar4) {
LAB_004978b0:
      piVar2[3] = 1;
    }
    else {
      iVar3 = FUN_004c4690();
      iVar4 = 0;
      if (0 < iVar3) {
        do {
          iVar5 = FUN_004c46a0(iVar4);
          iVar6 = (**(code **)**(undefined4 **)(param_3 + 100))();
          if (*(int *)(iVar5 + 0xc) == iVar6) goto LAB_004978b0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
    }
  }
  else {
    iVar3 = FUN_004c4690();
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = FUN_004c46a0(iVar4);
        iVar6 = (**(code **)**(undefined4 **)(param_2 + 100))();
        if (*(int *)(iVar5 + 0xc) == iVar6) goto LAB_00497826;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
LAB_00497869:
  iVar3 = *(int *)(param_1 + 0x810);
  piVar8 = *(int **)(iVar3 + 4);
  piVar7 = operator_new(0xc);
  *piVar7 = iVar3;
  if (piVar8 == (int *)0x0) {
    piVar8 = piVar7;
  }
  piVar7[1] = (int)piVar8;
  *(int **)(iVar3 + 4) = piVar7;
  *(int **)piVar7[1] = piVar7;
  if (piVar7 + 2 != (int *)0x0) {
    piVar7[2] = (int)piVar2;
  }
  *(int *)(param_1 + 0x814) = *(int *)(param_1 + 0x814) + 1;
  return;
}

