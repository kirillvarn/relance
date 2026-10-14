
void __fastcall FUN_004d6140(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_0041dd90();
  if ((cVar2 != '\0') && (iVar3 = FUN_0054baf0(), iVar3 != 0)) {
    FUN_005a0c30(0);
  }
  for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if ((*(byte *)(piVar1 + 0x1b) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))();
    }
  }
  return;
}

