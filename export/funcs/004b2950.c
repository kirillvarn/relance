
int * __thiscall FUN_004b2950(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd01b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x980);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0059f860();
    *(undefined1 *)(piVar2 + 0x141) = (undefined1)param_3;
    piVar2[0x142] = 0;
    piVar2[0x143] = 0;
    piVar2[0x144] = 0;
    *(undefined1 *)(piVar2 + 0x145) = (undefined1)param_3;
    piVar2[0x146] = 0;
    piVar2[0x147] = 0;
    piVar2[0x148] = 0;
    *(undefined1 *)(piVar2 + 0x149) = (undefined1)param_3;
    piVar2[0x14a] = 0;
    piVar2[0x14b] = 0;
    piVar2[0x14c] = 0;
    *(undefined1 *)(piVar2 + 0x14d) = (undefined1)param_3;
    piVar2[0x14e] = 0;
    piVar2[0x14f] = 0;
    piVar2[0x150] = 0;
    *(undefined1 *)(piVar2 + 0x151) = (undefined1)param_3;
    piVar2[0x152] = 0;
    piVar2[0x153] = 0;
    piVar2[0x154] = 0;
    *(undefined1 *)(piVar2 + 0x155) = (undefined1)param_3;
    piVar2[0x156] = 0;
    piVar2[0x157] = 0;
    piVar2[0x158] = 0;
    FUN_005a6900(&param_3);
    FUN_005a6900(&param_3);
    FUN_005a6900(&param_3);
    *piVar2 = (int)&PTR_FUN_005d4a5c;
    piVar2[0x1f] = (int)&PTR_OnReceive_005d4a4c;
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

