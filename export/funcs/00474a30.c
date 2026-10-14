
int * __thiscall FUN_00474a30(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bbbfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x354);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0059f860();
    piVar2[0xcb] = (int)&PTR_LAB_005cbed8;
    *piVar2 = (int)&PTR_FUN_005d07bc;
    piVar2[0x1f] = (int)&PTR_OnReceive_005d07ac;
    piVar2[0xcb] = (int)&PTR_LAB_005d07a4;
    piVar2[0xce] = 0;
    piVar2[0xd0] = 0;
    piVar2[0xd1] = 0;
    piVar2[0xd2] = 0;
    piVar2[0xcd] = 0;
    piVar2[0xd3] = 0;
    piVar2[0xd4] = 0;
    *(undefined1 *)((int)piVar2 + 0x331) = 0;
    piVar2[0xcf] = 0;
    DAT_0067dccc = DAT_0067dccc + 1;
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

