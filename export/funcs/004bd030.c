
int * __thiscall FUN_004bd030(int param_1,undefined4 param_2,undefined4 param_3)

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
  piVar2 = operator_new(0x390);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0059f860();
    *piVar2 = (int)&PTR_FUN_005d5b74;
    piVar2[0x1f] = (int)&PTR_OnReceive_005d5b64;
    DAT_006723fc = piVar2;
    piVar2[0xce] = 0;
    *(undefined1 *)(piVar2 + 0xdf) = 1;
    piVar2[0xdb] = 0;
    piVar2[0xdd] = 0;
    *(undefined1 *)(piVar2 + 0xe3) = 0;
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

