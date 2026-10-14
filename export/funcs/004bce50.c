
void __fastcall FUN_004bce50(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = FUN_0055e280();
  if (cVar3 != '\0') {
    FUN_005a17b0();
    FUN_0055e170();
    return;
  }
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

