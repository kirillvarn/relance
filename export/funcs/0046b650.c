
void FUN_0046b650(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_0066da80;
  if (DAT_0066da80 != (int *)0x0) {
    iVar2 = DAT_0066da80[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*piVar3 + 0x28))();
    (**(code **)*piVar3)(1);
    DAT_0066da80 = (int *)0x0;
  }
  return;
}

