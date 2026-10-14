
void __fastcall FUN_004a5d80(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x580) - *(int *)(param_1 + 0x578);
  iVar4 = *(int *)(param_1 + 0x660) - *(int *)(param_1 + 0x578);
  for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    piVar1[0x1c] = 100;
    if ((-1 < *(int *)(param_1 + 0x660)) &&
       ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == *(int *)(param_1 + 0x5d0 + iVar4 * 4) ||
        (iVar2 == *(int *)(param_1 + 0x5e4 + iVar4 * 4))))) {
      piVar1[0x1c] = 0x65;
    }
    if ((-1 < *(int *)(param_1 + 0x664)) &&
       ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == *(int *)(param_1 + 0x5d0 + iVar3 * 4) ||
        (iVar2 == *(int *)(param_1 + 0x5e4 + iVar3 * 4))))) {
      piVar1[0x1c] = 0x66;
    }
  }
  FUN_005a4b50(param_1 + 0x5e4,5);
  *(undefined4 *)(*(int *)(param_1 + 0x670) + 0x70) = 99;
  *(undefined4 *)(*(int *)(param_1 + 0x650) + 0x70) = 0x67;
  FUN_005a0760();
  FUN_00559c20();
  FUN_00559c10();
  return;
}

