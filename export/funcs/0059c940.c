
int * __thiscall FUN_0059c940(void *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4dab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x100);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_004b6790();
    local_4._0_1_ = 1;
    FUN_00420d40();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00492250();
    piVar2[0x1f] = (int)&PTR_FUN_005d2efc;
    piVar2[0x23] = -1;
    FUN_004b5140();
    *(byte *)(piVar2 + 0x29) = *(byte *)(piVar2 + 0x29) & 0xf8;
    FUN_004215b0();
    piVar2[0x39] = 0;
    piVar2[0x38] = 0;
    piVar2[0x37] = 0;
    *piVar2 = (int)&PTR_FUN_005e5d34;
    piVar3 = piVar2;
  }
  piVar3[4] = (int)param_1 + 0xc;
  local_4 = 0xffffffff;
  cVar1 = (**(code **)(*piVar3 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar3)(1);
    ExceptionList = param_1;
    return (int *)0x0;
  }
  ExceptionList = piVar2;
  return piVar3;
}

