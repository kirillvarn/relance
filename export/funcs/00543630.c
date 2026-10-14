
void __thiscall FUN_00543630(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0e4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x15c) = 1;
  iVar1 = FUN_0054baf0();
  if (param_1 == iVar1) {
    iVar1 = *(int *)(param_1 + 0x188);
    *(undefined4 *)(iVar1 + 0x74) = *param_2;
    *(undefined4 *)(iVar1 + 0x78) = param_2[1];
    *(undefined4 *)(iVar1 + 0x7c) = param_2[2];
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x188) + 0x80);
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_0054bd50();
    ExceptionList = local_c;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x188);
  if (iVar1 != 0) {
    FUN_00503a80();
    FUN_005b7e1d(iVar1);
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  pvVar2 = operator_new(0xdc);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_005038c0(param_1);
  }
  *(int *)(param_1 + 0x188) = iVar1;
  *(undefined4 *)(iVar1 + 0x74) = *param_2;
  *(undefined4 *)(iVar1 + 0x78) = param_2[1];
  *(undefined4 *)(iVar1 + 0x7c) = param_2[2];
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x188) + 0x80);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4 = 0xffffffff;
  FUN_005437d0(4);
  ExceptionList = local_c;
  return;
}

