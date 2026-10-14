
int * __thiscall FUN_004b48a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd0cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x494);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0059f860();
    piVar2[0xcb] = (int)&PTR_LAB_005cbed8;
    *(undefined1 *)(piVar2 + 0xcc) = (undefined1)param_3;
    piVar2[0xcd] = 0;
    piVar2[0xce] = 0;
    piVar2[0xcf] = 0;
    *piVar2 = (int)&PTR_FUN_005d51e4;
    piVar2[0x1f] = (int)&PTR_OnReceive_005d51d4;
    piVar2[0xcb] = (int)&PTR_LAB_005d51cc;
    piVar2[0xd1] = 0;
    piVar2[0xd2] = 0;
    piVar2[0xd0] = 0;
    piVar2[0x121] = -1;
    piVar2[0x122] = -1;
    piVar2[0x123] = -1;
    piVar2[0x124] = -0x40800000;
  }
  local_4 = 0xffffffff;
  piVar2[4] = param_1 + 0xc;
  cVar1 = (**(code **)(*piVar2 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar2)(1);
    piVar2 = (int *)0x0;
  }
  ExceptionList = unaff_EBX;
  return piVar2;
}

