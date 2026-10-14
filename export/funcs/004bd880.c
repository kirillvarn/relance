
void FUN_004bd880(undefined4 param_1,int param_2,undefined4 param_3,wchar_t param_4)

{
  char cVar1;
  int iVar2;
  int *extraout_ECX;
  int *in_stack_00001214;
  wchar_t *_Source;
  
  FUN_005b7e90();
  extraout_ECX[0x3d] = *in_stack_00001214;
  extraout_ECX[0x3e] = in_stack_00001214[1];
  extraout_ECX[0x4f] = in_stack_00001214[0x12];
  extraout_ECX[0x50] = in_stack_00001214[0x13];
  extraout_ECX[0x51] = in_stack_00001214[0x14];
  extraout_ECX[0x52] = in_stack_00001214[0x15];
  extraout_ECX[0x53] = in_stack_00001214[0x16];
  extraout_ECX[0x54] = in_stack_00001214[0x17];
  *(char *)(extraout_ECX + 0x55) = (char)in_stack_00001214[0x18];
  *(undefined1 *)((int)extraout_ECX + 0xe1) = 1;
  *(undefined1 *)(extraout_ECX + 0x38) = 1;
  extraout_ECX[0x36] = -0x8f9ebd;
  extraout_ECX[0x35] = 0x19e0c387;
  extraout_ECX[0x33] = -0x847;
  extraout_ECX[0x2c] = 0x3a902de0;
  _Source = (wchar_t *)in_stack_00001214[2];
  if (_Source == (wchar_t *)0x0) {
    iVar2 = FUN_004347e0();
    if (iVar2 == 0) {
      param_4 = L'\0';
    }
    _Source = &param_4;
  }
  wcscpy((wchar_t *)&stack0x00000210,_Source);
  iVar2 = _wcsicmp((wchar_t *)&stack0x00000210,L" ");
  if (iVar2 != 0) {
    if (((in_stack_00001214[0x11] != 0) && (cVar1 = FUN_00577dd0(), cVar1 != '\0')) &&
       (param_2 != 0)) {
      FUN_00577f50();
      wcscat((wchar_t *)&stack0x00000210,L" (");
      wcscat((wchar_t *)&stack0x00000210,&param_4);
      wcscat((wchar_t *)&stack0x00000210,L")");
    }
    (**(code **)(*extraout_ECX + 0x70))();
    FUN_004bda70();
    return;
  }
  *(undefined1 *)((int)extraout_ECX + 0x159) = 0;
  *(byte *)(extraout_ECX + 0x1b) = *(byte *)(extraout_ECX + 0x1b) & 0xfd;
  return;
}

