
int * __thiscall FUN_0048b1c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_ESI;
  void *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bc33b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x36c);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0059f860();
    *piVar2 = (int)&PTR_FUN_005d24f4;
    piVar2[0x1f] = (int)&PTR_OnReceive_005d24e4;
    DAT_00671ff4 = piVar2;
    piVar2[0xd9] = 0;
    *(undefined1 *)(piVar2 + 0xda) = 0;
  }
  local_4 = 0xffffffff;
  piVar2[4] = param_1 + 0xc;
  cVar1 = (**(code **)(*piVar2 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar2)(1);
    ExceptionList = unaff_EDI;
    return (int *)0x0;
  }
  ExceptionList = unaff_ESI;
  return piVar2;
}

