
int * __thiscall FUN_00597bc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_ESI;
  void *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4afb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x430);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00595420();
    *piVar2 = (int)&PTR_FUN_005e5684;
    piVar2[0x1f] = (int)&PTR_OnReceive_005e5674;
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

