
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004c7a00(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0054baf0();
  if (iVar1 == 0) {
    return (float10)_DAT_005c7474;
  }
  piVar2 = (int *)FUN_0054baf0();
  (**(code **)(*piVar2 + 0x4c))(&DAT_00673564);
  return (float10)DAT_00673564;
}

