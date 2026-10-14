
/* WARNING: Removing unreachable block (ram,0x004f61dc) */
/* WARNING: Removing unreachable block (ram,0x004f61e0) */

void __fastcall FUN_004f6190(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_004e5620();
        FUN_005b7e1d(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  FUN_004f5c20();
  return;
}

