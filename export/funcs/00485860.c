
int * __thiscall FUN_00485860(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  void *unaff_ESI;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bc0cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0xa00);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_0047fbe0();
  }
  local_4 = 0xffffffff;
  piVar3[4] = param_1 + 0xc;
  cVar1 = (**(code **)(*piVar3 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar3)(1);
    ExceptionList = unaff_EDI;
    return (int *)0x0;
  }
  ExceptionList = unaff_ESI;
  return piVar3;
}

