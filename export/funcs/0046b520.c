
void FUN_0046b520(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_0066da84;
  if (DAT_0066da84 != 0) {
    for (piVar1 = (int *)**(int **)(DAT_0066da84 + 0x358); piVar1 != *(int **)(DAT_0066da84 + 0x358)
        ; piVar1 = (int *)*piVar1) {
      if ((piVar1[4] != 0) && (piVar1[4] == param_1)) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        FUN_005b7e1d(piVar1);
        *(int *)(iVar2 + 0x35c) = *(int *)(iVar2 + 0x35c) + -1;
        FUN_00462e30();
        return;
      }
    }
  }
  return;
}

