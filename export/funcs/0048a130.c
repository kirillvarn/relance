
void FUN_0048a130(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_00671ff4;
  if (DAT_00671ff4 != (int *)0x0) {
    DAT_0067dcc8 = 0;
    iVar2 = DAT_00671ff4[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*piVar3 + 0x28))();
    (**(code **)*piVar3)(1);
  }
  return;
}

