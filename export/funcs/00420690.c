
undefined4 __thiscall FUN_00420690(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 0x14)) {
    iVar1 = _stricmp((char *)(*(int *)(param_1 + 0x14) + 0x10),(char *)(param_2 + 4));
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

