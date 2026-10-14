
int __thiscall FUN_005abdb0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x144);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x148)) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x90) == param_2) break;
    iVar1 = iVar1 + 0x9c;
  }
  return iVar1;
}

