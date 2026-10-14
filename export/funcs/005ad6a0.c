
int __thiscall FUN_005ad6a0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc) - iVar4;
  iVar2 = iVar5 >> 0x1f;
  if (iVar5 / 0x9c + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar6 = (iVar4 - iVar1) / 0x9c, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (iVar4 - iVar1) / 0x9c;
    }
    iVar4 = iVar4 + uVar6;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x9c);
    pvVar7 = pvVar3;
    for (iVar2 = *(int *)(param_1 + 4); iVar2 != param_2; iVar2 = iVar2 + 0x9c) {
      FUN_005af3b0(pvVar7,iVar2);
      pvVar7 = (void *)((int)pvVar7 + 0x9c);
    }
    FUN_005af3b0(pvVar7,param_3);
    FUN_005ae610(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar7 + 0x9c);
    FUN_005ad910(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)(iVar4 * 0x9c + (int)pvVar3);
    iVar4 = FUN_005ad5b0();
    pvVar7 = (void *)((iVar4 + 1) * 0x9c + (int)pvVar3);
    *(void **)(param_1 + 4) = pvVar3;
  }
  else {
    iVar2 = iVar4 - param_2 >> 0x1f;
    if ((iVar4 - param_2) / 0x9c + iVar2 == iVar2) {
      FUN_005ae610(param_2,iVar4,param_2 + 0x9c);
      FUN_005ae650(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - param_2) / 0x9c,param_3);
      FUN_005aecc0(param_2,*(undefined4 *)(param_1 + 8),param_3);
    }
    else {
      FUN_005ae610(iVar4 + -0x9c,iVar4,iVar4);
      FUN_005aef00(param_2,*(int *)(param_1 + 8) + -0x9c,*(int *)(param_1 + 8));
      FUN_005aecc0(param_2,param_2 + 0x9c,param_3);
    }
    pvVar7 = (void *)(*(int *)(param_1 + 8) + 0x9c);
  }
  *(void **)(param_1 + 8) = pvVar7;
  return ((param_2 - iVar1) / 0x9c) * 0x9c + *(int *)(param_1 + 4);
}

