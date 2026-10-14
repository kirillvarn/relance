
int __thiscall FUN_005a1f50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  
  iVar1 = *(int *)(param_1 + 0x8a4);
  iVar4 = -1;
  if (iVar1 < 0x100) {
    *(int *)(param_1 + 0x8a4) = iVar1 + 1;
    if ((iVar1 < iVar1 + 1) && (iVar1 < 0x100)) {
      if (*(int *)(param_1 + 0x48c + iVar1 * 4) == 0) {
        uVar3 = FUN_00417620();
        *(undefined4 *)(param_1 + 0x48c + iVar1 * 4) = uVar3;
      }
      piVar2 = *(int **)(param_1 + 0x48c + iVar1 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x84));
        (**(code **)(**(int **)(param_1 + 0x48c + iVar1 * 4) + 0x14))(unaff_retaddr);
      }
    }
    iVar4 = iVar1;
    if ((iVar1 < *(int *)(param_1 + 0x8a4)) && (iVar1 < 0x100)) {
      *(undefined4 *)(param_1 + 0x8c + iVar1 * 4) = param_3;
    }
  }
  return iVar4;
}

