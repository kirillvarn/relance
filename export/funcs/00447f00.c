
void __fastcall FUN_00447f00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xa0) + iVar3);
      iVar4 = *(int *)(param_1 + 0xa0) + iVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x34))(piVar1,1);
      }
      *(undefined1 *)(iVar4 + 0x3c) = 1;
      *(undefined4 *)(iVar4 + 0x40) = 0;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x44;
    } while (iVar2 < *(int *)(param_1 + 0x78));
  }
  return;
}

