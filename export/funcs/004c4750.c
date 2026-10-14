
void FUN_004c4750(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < DAT_00673374) {
    piVar2 = &DAT_0067298c;
    iVar3 = DAT_00673374;
    do {
      if (iVar1 < *piVar2) {
        iVar1 = *piVar2;
      }
      piVar2 = piVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

