
void __thiscall FUN_0047e0e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2;
  FUN_004795f0(0);
  if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0x3c4) = 0;
    if (*(int **)(param_1 + 0x3d0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x3d0) + 0xa8))(0x38,0,0);
    }
  }
  iVar1 = *(int *)(param_1 + 0x360);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x978) == 2)) ||
     (param_2 = 0, *(int *)(iVar1 + 0x978) == 3)) {
    param_2 = 1;
  }
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3c4) + iVar3;
  if (iVar1 != 0) {
    iVar3 = 1;
    iVar1 = FUN_0047e790();
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x14);
    }
    iVar1 = *(int *)(param_1 + 0x360);
    if (1 < iVar3) {
      (**(code **)(**(int **)(iVar1 + 0x9b8) + 0xa8))(0x37,1,iVar3);
    }
    *(int *)(iVar1 + 0x988) = iVar3;
    (**(code **)(**(int **)(iVar1 + 0x9b8) + 0xa8))(0x38,iVar3,0);
    swprintf((wchar_t *)(iVar1 + 0x508),0x5d0ec4,*(wchar_t **)(iVar1 + 0x988));
    (**(code **)(**(int **)(iVar1 + 0x9cc) + 0xa8))(0x1d,(wchar_t *)(iVar1 + 0x508),0);
  }
  iVar3 = FUN_0047e790();
  if (iVar3 == 0) {
    uVar2 = 5;
  }
  else {
    uVar2 = FUN_0047e460(*(undefined4 *)(iVar3 + 4));
  }
  FUN_004c6a50(iVar3,param_2,uVar2);
  iVar3 = *(int *)(param_1 + 0x360);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x3a4) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x4f4) = 0;
    FUN_004c6a50(0,0,5);
    FUN_004795f0(0);
    if (*(int *)(iVar3 + 0x360) != 0) {
      *(undefined4 *)(*(int *)(iVar3 + 0x360) + 0x4e8) = 0;
      *(undefined4 *)(*(int *)(iVar3 + 0x360) + 0x4ec) = 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4e8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4ec) = 0;
  }
  return;
}

