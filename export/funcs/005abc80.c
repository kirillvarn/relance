
/* WARNING: Removing unreachable block (ram,0x005abcf0) */
/* WARNING: Removing unreachable block (ram,0x005abd30) */
/* WARNING: Removing unreachable block (ram,0x005abca9) */
/* WARNING: Removing unreachable block (ram,0x005abcb0) */

void __fastcall FUN_005abc80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  CDPClient::CancelEnums((CDPClient *)(param_1 + 4));
  uVar1 = *(undefined4 *)(param_1 + 0x144);
  FUN_005ad910(uVar1,*(undefined4 *)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x164);
  FUN_005ad910(uVar1,*(undefined4 *)(param_1 + 0x168));
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x174);
  FUN_005ad910(uVar1,*(undefined4 *)(param_1 + 0x178));
  *(undefined4 *)(param_1 + 0x178) = uVar1;
  iVar2 = *(int *)(param_1 + 0x158);
  iVar3 = *(int *)(param_1 + 0x154);
  *(undefined4 *)(param_1 + 0x25c) = 0;
  for (; iVar3 != iVar2; iVar3 = iVar3 + 0x9c) {
    *(undefined1 *)(iVar3 + 0x3d) = 0;
    FUN_005adfc0(*(undefined4 *)(param_1 + 0x168),1,iVar3);
  }
  return;
}

