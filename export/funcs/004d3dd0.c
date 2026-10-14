
void __fastcall FUN_004d3dd0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_004e5470(0);
  if ((((iVar3 == 0) || (iVar3 == 2)) && (cVar2 = FUN_0041dd90(), cVar2 != '\0')) &&
     ((iVar3 = FUN_0054baf0(), iVar3 != 0 && (cVar2 = FUN_0041a3e0(), cVar2 == '\0')))) {
    FUN_005a0c30(0);
  }
  for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if ((*(byte *)(piVar1 + 0x1b) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))();
    }
  }
  return;
}

