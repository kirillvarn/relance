
undefined4 __thiscall FUN_004045d0(int param_1,int *param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  piVar1 = (int *)(param_1 + 0x1c);
  piVar6 = piVar1;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *param_2;
    param_2 = param_2 + 1;
    piVar6 = piVar6 + 1;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != *piVar1)) {
    if (param_4 == '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 0x18) = iVar2;
      while ((iVar2 != 0 && ((*(int **)(param_1 + 0x18))[8] != *piVar1))) {
        iVar2 = **(int **)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar2;
      }
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar4 = (undefined4 *)FUN_00402ed0();
    *(undefined4 **)(param_1 + 0x18) = puVar4;
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *(undefined4 **)(param_1 + 0x10) = puVar4;
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 0xc) = puVar4;
    }
    else {
      *puVar3 = puVar4;
    }
    *puVar4 = 0;
    puVar4[1] = puVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar2 = *(int *)(param_1 + 0x18);
    *(int *)(iVar2 + 0x20) = *piVar1;
    *(undefined4 *)(iVar2 + 0x24) = param_3;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  return *(undefined4 *)(param_1 + 0x18);
}

