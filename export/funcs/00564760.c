
undefined4 FUN_00564760(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_0067a4a8;
  do {
    if (*piVar2 != 0) {
      iVar1 = FUN_00428000(*piVar2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x67a55c);
  return 0;
}

