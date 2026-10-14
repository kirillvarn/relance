
void __thiscall FUN_004293b0(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
    iVar1 = (**(code **)(**(int **)Sound_exref + 0xb0))();
    *(int *)(param_1 + 0x14) = iVar1 - param_2;
    return;
  }
  *(int *)(param_1 + 0x14) = param_2;
  return;
}

