
IMEInputBox * __thiscall FUN_00564280(IMEInputBox *param_1,undefined4 param_2)

{
  tagLOGFONTA *ptVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c1eb9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0067a4a0 == (int *)0x0) {
    ExceptionList = &pvStack_c;
    DAT_0067a4a0 = (int *)FUN_004177b0("ConfirmPlayerText");
  }
  ptVar1 = (tagLOGFONTA *)(**(code **)(*DAT_0067a4a0 + 0x10))();
  IMEInputBox::IMEInputBox(param_1,ptVar1);
  uStack_4 = 0;
  *(undefined4 *)(param_1 + 0x94) = param_2;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined ***)param_1 = &PTR_FUN_005e2250;
  uVar2 = FUN_00417620();
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  if (DAT_0067a4a0 == (int *)0x0) {
    DAT_0067a4a0 = (int *)FUN_004177b0("ConfirmPlayerText");
  }
  (**(code **)(**(int **)(param_1 + 0x98) + 8))(DAT_0067a4a0);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x20))();
  uVar2 = FUN_00417620();
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  if (DAT_0067a4a0 == (int *)0x0) {
    DAT_0067a4a0 = (int *)FUN_004177b0("ConfirmPlayerText");
  }
  (**(code **)(**(int **)(param_1 + 0x9c) + 8))(DAT_0067a4a0);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x20))(0);
  ExceptionList = (void *)0x0;
  return param_1;
}

