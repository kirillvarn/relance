
int * __fastcall FUN_0052a0f0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c03a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x40);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = -0x40800000;
    piVar1[2] = -0x40800000;
    piVar1[3] = 0;
    *(undefined1 *)(piVar1 + 4) = 0;
    *(undefined1 *)(piVar1 + 5) = local_11;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    *piVar1 = (int)&PTR_FUN_005dd2e4;
    local_4 = 1;
    ID_String::clear((ID_String *)(piVar1 + 10));
    CacheString::clear((CacheString *)(piVar1 + 0xb));
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    piVar1[0xe] = 0;
    piVar1[0xf] = 0;
    *piVar1 = (int)&PTR_FUN_005dd2ac;
    piVar2 = piVar1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x30))(param_1);
  ExceptionList = piVar1;
  return piVar2;
}

