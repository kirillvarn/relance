
/* WARNING: Removing unreachable block (ram,0x00529935) */
/* WARNING: Removing unreachable block (ram,0x00529937) */
/* WARNING: Removing unreachable block (ram,0x00529944) */
/* WARNING: Removing unreachable block (ram,0x0052994c) */
/* WARNING: Removing unreachable block (ram,0x00529956) */
/* WARNING: Removing unreachable block (ram,0x0052995b) */
/* WARNING: Removing unreachable block (ram,0x00529962) */
/* WARNING: Removing unreachable block (ram,0x0052996a) */
/* WARNING: Removing unreachable block (ram,0x00529974) */
/* WARNING: Removing unreachable block (ram,0x00529979) */
/* WARNING: Removing unreachable block (ram,0x00529983) */

void __fastcall FUN_00529920(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 4);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0xc) {
    FUN_00528d00();
  }
  *(int *)(param_1 + 8) = iVar1;
  return;
}

