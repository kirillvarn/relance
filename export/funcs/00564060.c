
IMEFocus * FUN_00564060(void)

{
  HMODULE pHVar1;
  IMEFocus *this;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c1e84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pHVar1 = LoadLibraryA("ImeUi.dll");
  if (pHVar1 != (HMODULE)0x0) {
    this = operator_new(0x1c);
    local_4 = 0;
    if (this == (IMEFocus *)0x0) {
      DAT_0067a4a4 = (undefined4 *)0x0;
    }
    else {
      IMEFocus::IMEFocus(this,DAT_0067eca0);
      local_4 = CONCAT31(local_4._1_3_,1);
      *(undefined ***)this = &PTR_FUN_005e2210;
      uVar2 = FUN_00417620();
      *(undefined4 *)(this + 0x18) = uVar2;
      if (DAT_0067a4a0 == 0) {
        DAT_0067a4a0 = FUN_004177b0("ConfirmPlayerText");
      }
      (**(code **)(**(int **)(this + 0x18) + 8))(DAT_0067a4a0);
      (**(code **)(**(int **)(this + 0x18) + 0x20))(0);
      DAT_0067a4a4 = (undefined4 *)this;
    }
    local_4 = 0xffffffff;
    if (*(IMEFocus *)((int)DAT_0067a4a4 + 0x17) == (IMEFocus)0x0) {
      (**(code **)*DAT_0067a4a4)(1);
      DAT_0067a4a4 = (undefined4 *)0x0;
      ExceptionList = this;
      return (IMEFocus *)0x0;
    }
  }
  ExceptionList = local_c;
  return (IMEFocus *)DAT_0067a4a4;
}

