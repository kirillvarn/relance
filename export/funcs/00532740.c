
void __fastcall FUN_00532740(INotify *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c06d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_LAB_005de17c;
  local_4 = 0;
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x60))();
    (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  local_4 = 0xffffffff;
  *(undefined ***)param_1 = &PTR_FUN_005de13c;
  if (*(CEquip **)(param_1 + 4) != (CEquip *)0x0) {
    CEquip::NotifyDisconnecting(*(CEquip **)(param_1 + 4),param_1);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00536170(*(int *)(param_1 + 0xc));
  }
  ExceptionList = pvStack_c;
  return;
}

