
int FUN_0042ed30(undefined4 *param_1)

{
  undefined4 uVar1;
  int local_118 [2];
  undefined4 local_110 [65];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b8dfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_0042e430();
  local_110[0] = *param_1;
  FUN_0042efc0(uVar1);
  local_4 = 0;
  FUN_0042f720(local_118,local_110);
  ExceptionList = local_c;
  return local_118[0] + 0x10;
}

