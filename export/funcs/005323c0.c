
void __fastcall FUN_005323c0(INotify *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c06d8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x18) != 0) {
    ExceptionList = &pvStack_c;
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
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

