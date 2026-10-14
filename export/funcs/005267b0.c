
void __fastcall FUN_005267b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x14))) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xc) + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x15c))(1);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return;
}

