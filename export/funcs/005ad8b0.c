
int __thiscall FUN_005ad8b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = param_2;
  for (; param_3 != iVar1; param_3 = param_3 + 0x9c) {
    FUN_005a9ea0(param_3);
    iVar2 = iVar2 + 0x9c;
  }
  iVar1 = *(int *)(param_1 + 8);
  for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x9c) {
    FUN_005686b0();
  }
  *(int *)(param_1 + 8) = iVar2;
  return param_2;
}

