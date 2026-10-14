
void FUN_00520170(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_005792b0(0x21);
  if (iVar1 != 0) {
    DAT_006753b4 = 0;
    DAT_006753b8 = 0;
    DAT_006753bc = 0;
    piVar2 = (int *)*DAT_006753c4;
    if (piVar2 != DAT_006753c4) {
      do {
        FUN_005225d0(param_1);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != DAT_006753c4);
    }
  }
  return;
}

