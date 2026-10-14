
void FUN_005791c0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_0067c3bc != (undefined4 *)0x0) {
    (**(code **)*DAT_0067c3bc)(1);
  }
  piVar3 = DAT_0067c3c0;
  DAT_0067c3bc = (undefined4 *)0x0;
  if (DAT_0067c3c0 != (int *)0x0) {
    iVar2 = DAT_0067c3c0[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*piVar3 + 0x28))();
    (**(code **)*piVar3)(1);
  }
  DAT_0067c3db = 1;
  return;
}

