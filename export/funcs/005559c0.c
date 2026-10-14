
/* WARNING: Removing unreachable block (ram,0x005559ed) */
/* WARNING: Removing unreachable block (ram,0x005559f0) */

void __fastcall FUN_005559c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != *(int *)(param_1 + 0x1c)) {
    do {
      FUN_0040e990();
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  return;
}

