
void __thiscall FUN_0047e270(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  if ((*(int *)(param_1 + 0x360) != 0) && (*(int *)(*(int *)(param_1 + 0x360) + 0x978) == 1)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  FUN_004795f0(0);
  iVar4 = FUN_0047e790();
  if ((iVar4 != 0) && (iVar5 = stricmp(*(char **)(iVar4 + 8),param_2), iVar5 == 0)) {
    if ((*(int *)(param_1 + 0x360) == 0) ||
       ((iVar5 = *(int *)(*(int *)(param_1 + 0x360) + 0x978), iVar5 == 2 ||
        (param_2 = (char *)0x0, iVar5 == 3)))) {
      param_2 = (char *)0x1;
    }
    uVar6 = FUN_0047e460(*(undefined4 *)(iVar4 + 4));
    FUN_004c6a50(iVar4,param_2,uVar6);
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x3c4);
  uVar1 = *(undefined4 *)(param_1 + 0x3a4);
  uVar2 = *(undefined4 *)(param_1 + 0x32c);
  FUN_00586560(param_2);
  cVar3 = FUN_00586800(0);
  if (cVar3 == '\0') {
    cVar3 = FUN_00586800(1);
    if (cVar3 == '\0') {
      cVar3 = FUN_00586510(1);
      if (cVar3 == '\0') goto LAB_0047e38f;
      uVar9 = 3;
    }
    else {
      uVar9 = 2;
    }
  }
  else {
    uVar9 = 0;
  }
  FUN_0047f240(uVar9,1);
LAB_0047e38f:
  FUN_0047e0e0(0xffffffff,1);
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  do {
    iVar5 = 0;
    do {
      FUN_0047e0e0(iVar5,1);
      iVar7 = FUN_0047e790();
      if ((iVar7 != 0) && (iVar8 = stricmp(*(char **)(iVar7 + 8),param_2), iVar8 == 0)) {
        if (*(int **)(param_1 + 0x3d0) == (int *)0x0) {
          return;
        }
        (**(code **)(**(int **)(param_1 + 0x3d0) + 0xa8))(0x38,*(undefined4 *)(param_1 + 0x3c4),0);
        return;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 5);
    *(int *)(param_1 + 0x3c4) = *(int *)(param_1 + 0x3c4) + 1;
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x3c4) = uVar6;
      *(undefined4 *)(param_1 + 0x3a4) = uVar1;
      *(int *)(param_1 + 0x4f4) = iVar4;
      *(undefined4 *)(param_1 + 0x32c) = uVar2;
      return;
    }
  } while( true );
}

