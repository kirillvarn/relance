
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b3c0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_0066d398;
  if (DAT_0066d398 != (int *)0x0) {
    if ((float)DAT_0066d398[0xcd] <= _DAT_005c7474) {
      iVar2 = DAT_0066d398[3];
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 8);
        FUN_0043d2a0(iVar2);
        iVar2 = iVar1;
      }
      (**(code **)(*piVar3 + 0x28))();
      (**(code **)*piVar3)(1);
    }
    else if (_DAT_005c75dc < (float)DAT_0066d398[0xcd]) {
      DAT_0066d398[0xcd] = 0x3f800000;
      return;
    }
  }
  return;
}

