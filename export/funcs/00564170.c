
void __fastcall FUN_00564170(IMEFocus *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c1e99;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_005e2210;
  local_4 = 0;
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  }
  local_4 = 0xffffffff;
  IMEFocus::~IMEFocus(param_1);
  ExceptionList = pvStack_c;
  return;
}

