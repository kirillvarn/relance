
int * __thiscall FUN_004bd170(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd47b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x340);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0059f860();
    *piVar2 = (int)&PTR_FUN_005d5a8c;
    piVar2[0x1f] = (int)&PTR_OnReceive_005d5a80;
    DAT_00672400 = piVar2;
    piVar2[0xcb] = 0;
    *(undefined1 *)((int)piVar2 + 0x331) = 1;
    *(undefined1 *)((int)piVar2 + 0x332) = 0xff;
    piVar2[0xcd] = 0x40200000;
    *(undefined1 *)(piVar2 + 0xcc) = 0;
    *(undefined1 *)(piVar2 + 0xce) = 0;
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

