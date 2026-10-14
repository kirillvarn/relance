
void __fastcall FUN_004abdb0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0045a9f0();
  for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if ((*(byte *)(piVar1 + 0x1b) & 2) != 0) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == *(int *)(param_1 + 0x4e4)) {
        FUN_0045a9f0();
      }
      (**(code **)(*piVar1 + 0x34))();
    }
  }
  return;
}

