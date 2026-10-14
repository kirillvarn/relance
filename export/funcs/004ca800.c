
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ca800(BaseWatcher *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bda03;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x60))();
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != *(int *)(param_1 + 0x2c)) {
    do {
      if ((*(int **)(iVar1 + 4) != (int *)0x0) && (*(char *)(iVar1 + 8) == '\x01')) {
        (**(code **)(**(int **)(iVar1 + 4) + 0x10))();
        *(undefined1 *)(iVar1 + 8) = 0;
      }
      if (*(int *)(iVar1 + 0xc) != 0) {
        FUN_00489dc0(iVar1 + 0xc);
      }
      iVar1 = iVar1 + 0x10;
    } while (iVar1 != *(int *)(param_1 + 0x2c));
  }
  FUN_00501f80(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x14] != (BaseWatcher)0x0) {
    FUN_00428de0();
    DAT_006735b0 = DAT_006735b0 + -1;
    if (DAT_006735b0 == 0) {
      DAT_006735a4 = 0;
      _DAT_006735ac = DAT_006108f8;
    }
    param_1[0x14] = (BaseWatcher)0x0;
  }
  FUN_004ca910();
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_4 = 0xffffffff;
  if (*(int *)param_1 != 0) {
    BaseWatcher::set_pointer(param_1,(Watchable *)0x0);
  }
  ExceptionList = pvStack_c;
  return;
}

