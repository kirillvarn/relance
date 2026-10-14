
int * __thiscall FUN_005a4f40(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c511b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x398);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_005a3210();
    *(byte *)(piVar2 + 0xe2) = *(byte *)(piVar2 + 0xe2) & 0xfe | 4;
    piVar2[0xe3] = 0;
    piVar2[0xe5] = (int)(piVar2 + 0xe4);
    *piVar2 = (int)&PTR_FUN_005e622c;
    piVar2[0x1f] = (int)&PTR_OnReceive_005e6220;
    piVar2[0xe4] = 0;
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

