
void FUN_00402500(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = *param_1;
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x30);
    FUN_005b7e1d(iVar3);
    iVar3 = iVar2;
  }
  iVar3 = 0;
  *param_1 = 0;
  while (param_2 != (undefined4 *)0x0) {
    puVar1 = operator_new(0x34);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[9] = 0;
      puVar4 = param_2;
      puVar5 = puVar1;
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    *param_1 = (int)puVar1;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 0x30) = puVar1;
    }
    iVar3 = *param_1;
    param_2 = (undefined4 *)param_2[0xc];
    *param_1 = *(int *)(iVar3 + 0x30);
  }
  return;
}

