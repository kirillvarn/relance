
void __thiscall FUN_00447f50(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xa0) + iVar3);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x18))(piVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x44;
    } while (iVar2 < *(int *)(param_1 + 0x78));
  }
  return;
}

