
undefined4 __thiscall FUN_0046ffe0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = FUN_0045a740();
  if (cVar4 != '\0') {
    return 0;
  }
  if (param_2 == 0xf) {
    piVar1 = (int *)(param_1 + -0x32c);
    if (piVar1 != (int *)0x0) {
      iVar3 = *(int *)(param_1 + -800);
      while (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 8);
        FUN_0043d2a0(iVar3);
        iVar3 = iVar2;
      }
      (**(code **)(*piVar1 + 0x28))();
      (**(code **)*piVar1)(1);
    }
    return 1;
  }
  return 0;
}

