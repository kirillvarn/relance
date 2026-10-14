
void __fastcall FUN_0048c720(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004424f0(0);
  if (param_1 != (int *)0x0) {
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
  }
  return;
}

