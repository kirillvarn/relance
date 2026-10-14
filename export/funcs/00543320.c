
int __fastcall FUN_00543320(int param_1)

{
  int iVar1;
  
  if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 == 0)) ||
     ((*(uint *)(iVar1 + 0x4c) & 0x503) != 0x503)) {
    iVar1 = 0;
  }
  return iVar1;
}

