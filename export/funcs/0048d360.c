
void __fastcall FUN_0048d360(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x458) == '\0') {
    iVar3 = *(int *)(param_1 + 0x378) - *(int *)(param_1 + 0x370);
    iVar4 = *(int *)(param_1 + 0x448) - *(int *)(param_1 + 0x370);
    for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      piVar1[0x1c] = 100;
      if ((-1 < *(int *)(param_1 + 0x448)) &&
         ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == *(int *)(param_1 + 0x3c4 + iVar4 * 4) ||
          (iVar2 == *(int *)(param_1 + 0x3d8 + iVar4 * 4))))) {
        piVar1[0x1c] = 0x65;
      }
      if ((-1 < *(int *)(param_1 + 0x44c)) &&
         ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == *(int *)(param_1 + 0x3c4 + iVar3 * 4) ||
          (iVar2 == *(int *)(param_1 + 0x3d8 + iVar3 * 4))))) {
        piVar1[0x1c] = 0x66;
      }
    }
    FUN_005a4b50(param_1 + 0x3c4,5);
    FUN_005a4b50(param_1 + 0x3d8,5);
    *(undefined4 *)(*(int *)(param_1 + 0x454) + 0x70) = 99;
    *(undefined4 *)(*(int *)(param_1 + 0x438) + 0x70) = 0x67;
  }
  FUN_005a0760();
  return;
}

