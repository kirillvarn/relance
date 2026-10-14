
void __thiscall FUN_00543530(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  IAction *pIVar3;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005c0e27;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x188);
  ExceptionList = &pvStack_c;
  if (iVar1 != 0) {
    ExceptionList = &pvStack_c;
    FUN_00503a80();
    FUN_005b7e1d(iVar1);
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  local_10 = operator_new(0xdc);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00503440(param_1,param_2);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  local_14 = 0;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x88))(&local_14);
  }
  FUN_005437d0(1);
  local_10 = IAction::operator_new(100);
  local_4 = 1;
  if (local_10 == (void *)0x0) {
    pIVar3 = (IAction *)0x0;
  }
  else {
    pIVar3 = (IAction *)
             FUN_00542f10(param_1,*(undefined4 *)(*(int *)(param_1 + 0x188) + 4),local_14);
  }
  local_4 = 0xffffffff;
  ActionDB::add((ActionDB *)(param_1 + 0x20),pIVar3);
  ExceptionList = pvStack_c;
  return;
}

