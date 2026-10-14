
bool __thiscall FUN_005b6be0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_0052c7a0(&param_2);
  if ((iVar2 != *(int *)(param_1 + 8)) && (*(uint *)(iVar2 + 0xc) <= param_2)) {
    return iVar2 != iVar1;
  }
  return *(int *)(param_1 + 8) != iVar1;
}

