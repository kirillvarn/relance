
void FUN_0058a5f0(void)

{
  wchar_t *pwVar1;
  int iVar2;
  size_t _Count;
  int extraout_ECX;
  void *in_stack_00002008;
  int in_stack_00002018;
  wchar_t *local_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_005c457b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  if (in_stack_00002018 == 0) {
    FUN_004145d0(*(undefined4 *)(extraout_ECX + 0x32c),
                 *(float *)(extraout_ECX + 0xb0) + *(float *)(extraout_ECX + 0x68));
    FUN_00415860(&DAT_005c8ce0);
  }
  else {
    local_c = (wchar_t *)0x0;
    local_8 = (undefined1 *)0x0;
    iVar2 = FUN_004347e0(DAT_0067eca8,in_stack_00002018,&stack0x00000008,0x1000);
    if (iVar2 == 0) {
      _Count = wcslen(L"IDS?");
      FUN_004142a0(_Count + 1);
      wcsncpy(local_c,L"IDS?",_Count);
      local_c[_Count] = L'\0';
    }
    else {
      FUN_00413df0(&stack0x00000008,iVar2);
    }
    pwVar1 = local_c;
    FUN_004145d0(*(undefined4 *)(extraout_ECX + 0x32c),
                 *(float *)(extraout_ECX + 0xb0) + *(float *)(extraout_ECX + 0x68));
    FUN_00415860(pwVar1);
    if (local_c != (wchar_t *)0x0) {
      free(local_c);
    }
  }
  ExceptionList = in_stack_00002008;
  return;
}

