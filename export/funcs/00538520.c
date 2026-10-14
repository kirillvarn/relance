
void FUN_00538520(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = DAT_00675570;
  while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
    iVar1 = puVar3[0x34];
    puVar2 = (undefined4 *)puVar3[0x32];
    puVar3[0x34] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}

