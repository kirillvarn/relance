
void __thiscall FUN_00482120(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  FUN_0047e0e0(param_2,1);
  *(undefined4 *)(param_1 + 0x988) = 1;
  (**(code **)(**(int **)(param_1 + 0x9b8) + 0xa8))(0x38,1,0);
  swprintf((wchar_t *)(param_1 + 0x508),0x5d0ec4,*(wchar_t **)(param_1 + 0x988));
  (**(code **)(**(int **)(param_1 + 0x9cc) + 0xa8))(0x1d,(wchar_t *)(param_1 + 0x508),0);
  if ((*(int *)(param_1 + 0x978) == 2) || (uVar4 = 0, *(int *)(param_1 + 0x978) == 3)) {
    uVar4 = 1;
  }
  iVar1 = FUN_0047e790();
  if (iVar1 == 0) {
    uVar2 = 5;
  }
  else {
    uVar2 = FUN_0047e460(*(undefined4 *)(iVar1 + 4));
  }
  FUN_004c6a50(iVar1,uVar4,uVar2);
  if (((*(int *)(param_1 + 0x974) != 0) && (*(int *)(param_1 + 0x978) == 1)) &&
     (*(int *)(*(int *)(param_1 + 0x974) + 0x32c) != 4)) {
    FUN_0047f240(4,0);
  }
  if (*(int *)(param_1 + 0x974) != 0) {
    CacheString::clear((CacheString *)(*(int *)(param_1 + 0x974) + 0x394));
    iVar1 = FUN_00483580();
    if ((iVar1 != 0) && ((*(int *)(param_1 + 0x32c) == 0 || (*(int *)(param_1 + 0x32c) == 2)))) {
      pcVar3 = (char *)FUN_00585f20(iVar1,0);
      if (pcVar3 != (char *)0x0) {
        pcVar3 = StringAlloc(pcVar3,false);
        *(char **)(*(int *)(param_1 + 0x974) + 0x394) = pcVar3;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x974);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x3a4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x4f4) = 0;
    FUN_004c6a50(0,0,5);
    FUN_004795f0(0);
    if (*(int *)(iVar1 + 0x360) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x360) + 0x4e8) = 0;
      *(undefined4 *)(*(int *)(iVar1 + 0x360) + 0x4ec) = 0;
    }
  }
  return;
}

