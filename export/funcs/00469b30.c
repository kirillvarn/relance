
void FUN_00469b30(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_0066da84;
  if (DAT_0066da84 != (int *)0x0) {
    iVar2 = DAT_0066da84[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*piVar3 + 0x28))();
    (**(code **)*piVar3)(1);
    DAT_0066da84 = (int *)0x0;
  }
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
  iVar2 = DAT_0066da7c;
  if (DAT_0066da7c != 0) {
    FUN_00469e60();
    FUN_005b7e1d(iVar2);
    DAT_0066da7c = 0;
  }
  iVar2 = DAT_0066da60;
  if (DAT_0066da60 != 0) {
    FUN_004688b0();
    FUN_005b7e1d(iVar2);
    DAT_0066da60 = 0;
    DAT_0066da64 = 0;
    DAT_0066da68 = 0;
  }
  iVar2 = DAT_0066da70;
  if (DAT_0066da70 != 0) {
    FUN_00469d20();
    FUN_005b7e1d(iVar2);
    DAT_0066da70 = 0;
  }
  iVar2 = DAT_0066da74;
  if (DAT_0066da74 != 0) {
    FUN_00469d20();
    FUN_005b7e1d(iVar2);
    DAT_0066da74 = 0;
  }
  iVar2 = DAT_0066da78;
  if (DAT_0066da78 != 0) {
    FUN_00469d20();
    FUN_005b7e1d(iVar2);
    DAT_0066da78 = 0;
  }
  return;
}

