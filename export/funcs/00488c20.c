
/* WARNING: Removing unreachable block (ram,0x00488c32) */

void __fastcall FUN_00488c20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 4);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x24) {
    FUN_00487c30();
  }
  *(int *)(param_1 + 8) = iVar1;
  return;
}

