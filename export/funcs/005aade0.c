
/* WARNING: Removing unreachable block (ram,0x005aae0c) */
/* WARNING: Removing unreachable block (ram,0x005aae10) */
/* WARNING: Removing unreachable block (ram,0x005aae4e) */
/* WARNING: Removing unreachable block (ram,0x005aae85) */
/* WARNING: Removing unreachable block (ram,0x005aae9a) */

undefined4 __fastcall FUN_005aade0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1e0);
  iVar1 = *(int *)(param_1 + 0x1dc);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x50) {
    FUN_005af7f0();
  }
  *(int *)(param_1 + 0x1e0) = iVar1;
  (**(code **)(**(int **)TheDB_exref + 0x10))(&LAB_005aaee0,param_1 + 0x1d8);
  return 1;
}

