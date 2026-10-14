
undefined4 FUN_00402e30(int *param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  iVar4 = FUN_00402f40();
  iVar2 = *(int *)(iVar4 + 0x18);
  piVar1 = (int *)(iVar4 + 0x1c);
  piVar7 = piVar1;
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = *param_1;
    param_1 = param_1 + 1;
    piVar7 = piVar7 + 1;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != *piVar1)) {
    if (param_3 == '\0') {
      *(undefined4 *)(iVar4 + 0x18) = 0;
    }
    else {
      iVar2 = *(int *)(iVar4 + 0xc);
      *(int *)(iVar4 + 0x18) = iVar2;
      while ((iVar2 != 0 && ((*(int **)(iVar4 + 0x18))[8] != *piVar1))) {
        iVar2 = **(int **)(iVar4 + 0x18);
        *(int *)(iVar4 + 0x18) = iVar2;
      }
    }
  }
  if (*(int *)(iVar4 + 0x18) == 0) {
    puVar5 = (undefined4 *)FUN_00402ed0();
    *(undefined4 **)(iVar4 + 0x18) = puVar5;
    puVar3 = *(undefined4 **)(iVar4 + 0x10);
    *(undefined4 **)(iVar4 + 0x10) = puVar5;
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 **)(iVar4 + 0xc) = puVar5;
    }
    else {
      *puVar3 = puVar5;
    }
    *puVar5 = 0;
    puVar5[1] = puVar3;
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
    iVar2 = *(int *)(iVar4 + 0x18);
    *(int *)(iVar2 + 0x20) = *piVar1;
    *(undefined4 *)(iVar2 + 0x24) = param_2;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  return *(undefined4 *)(iVar4 + 0x18);
}

