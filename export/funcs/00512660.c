
void __thiscall FUN_00512660(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 0x14)) {
    iVar1 = _stricmp((char *)(*(int *)(param_1 + 0x14) + 0x10),(char *)(param_3 + 4));
    if (iVar1 == 0) {
      *param_2 = *(int *)(param_1 + 0x14);
      return;
    }
  }
  iVar1 = FUN_005129f0(param_3);
  if (iVar1 != *(int *)(param_1 + 4)) {
    iVar2 = _stricmp((char *)(param_3 + 4),(char *)(iVar1 + 0x10));
    if (-1 < iVar2) {
      *(int *)(param_1 + 0x14) = iVar1;
      *param_2 = iVar1;
      return;
    }
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 4);
  *param_2 = *(int *)(param_1 + 4);
  return;
}

