
int __thiscall FUN_00587200(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0xc) - iVar2 >> 5 == 0) {
    if ((iVar1 == 0) || (uVar5 = iVar2 - iVar1 >> 5, uVar5 < 2)) {
      uVar5 = 1;
    }
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 - iVar1 >> 5;
    }
    iVar2 = iVar2 + uVar5;
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    pvVar4 = operator_new(iVar3 << 5);
    pvVar6 = pvVar4;
    for (iVar3 = *(int *)(param_1 + 4); iVar3 != param_2; iVar3 = iVar3 + 0x20) {
      FUN_00587af0(pvVar6,iVar3);
      pvVar6 = (void *)((int)pvVar6 + 0x20);
    }
    FUN_00587af0(pvVar6,param_3);
    FUN_00587770(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar6 + 0x20);
    FUN_00587440(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)(iVar2 * 0x20 + (int)pvVar4);
    iVar2 = FUN_00587380();
    pvVar6 = (void *)((iVar2 + 1) * 0x20 + (int)pvVar4);
    *(void **)(param_1 + 4) = pvVar4;
  }
  else {
    if (iVar2 - param_2 >> 5 == 0) {
      FUN_00587770(param_2,iVar2,param_2 + 0x20);
      FUN_005877b0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - param_2 >> 5),param_3);
      FUN_005877e0(param_2,*(undefined4 *)(param_1 + 8),param_3);
    }
    else {
      FUN_00587770(iVar2 + -0x20,iVar2,iVar2);
      FUN_00587960(param_2,*(int *)(param_1 + 8) + -0x20,*(int *)(param_1 + 8));
      FUN_005877e0(param_2,param_2 + 0x20,param_3);
    }
    pvVar6 = (void *)(*(int *)(param_1 + 8) + 0x20);
  }
  *(void **)(param_1 + 8) = pvVar6;
  return (param_2 - iVar1 >> 5) * 0x20 + *(int *)(param_1 + 4);
}

