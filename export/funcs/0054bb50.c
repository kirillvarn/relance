
void FUN_0054bb50(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00679570 = 1;
  puVar2 = &DAT_00679540;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (DAT_00678ba0 != '\0') {
    FUN_00549e70("static",0);
  }
  return;
}

