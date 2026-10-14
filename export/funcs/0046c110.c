
int * __thiscall FUN_0046c110(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb8cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x4a0);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0057b1b0();
    *piVar2 = (int)&PTR_FUN_005cffc4;
    piVar2[0x1f] = (int)&PTR_OnReceive_005cffb8;
    piVar2[0x127] = 0;
    piVar2[0x126] = 0;
  }
  local_4 = 0xffffffff;
  piVar2[4] = param_1 + 0xc;
  cVar1 = (**(code **)(*piVar2 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar2)(1);
    ExceptionList = unaff_ESI;
    return (int *)0x0;
  }
  ExceptionList = unaff_EBX;
  return piVar2;
}

