
void __fastcall FUN_00445280(int param_1)

{
  char *_Str1;
  int iVar1;
  
  if (*(int *)(param_1 + 0x360) == 0) {
    _Str1 = *(char **)(param_1 + 0x1ac);
    if (((_Str1 != (char *)0x0) && (*(char **)(param_1 + 0x364) != (char *)0x0)) &&
       (iVar1 = stricmp(_Str1,*(char **)(param_1 + 0x364)), iVar1 == 0)) {
      return;
    }
    if (*(int *)(param_1 + 0x360) != 0) {
      FUN_004568d0(*(int *)(param_1 + 0x360));
      *(undefined4 *)(param_1 + 0x360) = 0;
      *(undefined1 *)(param_1 + 0x368) = 0;
      malloc_strfree((char **)(param_1 + 0x364));
    }
    malloc_strcpy((char **)(param_1 + 0x364),_Str1);
    iVar1 = FUN_00445340(_Str1,0);
    *(int *)(param_1 + 0x360) = iVar1;
    if (*(int *)(param_1 + 0x36c) != 0) {
      return;
    }
    if (iVar1 == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x368) != '\0') {
    FUN_004562e0();
    return;
  }
  FUN_00454f80();
  *(undefined1 *)(param_1 + 0x368) = 1;
  return;
}

