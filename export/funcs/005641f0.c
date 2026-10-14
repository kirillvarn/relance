
void __fastcall FUN_005641f0(IMEInputBox *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c1eb9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_005e2250;
  local_4 = 0;
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 4))();
  }
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 4))();
  }
  local_4 = 0xffffffff;
  IMEInputBox::~IMEInputBox(param_1);
  ExceptionList = pvStack_c;
  return;
}

