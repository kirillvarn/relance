
undefined4 * __fastcall FUN_00559050(undefined4 *param_1)

{
  uint uVar1;
  void *local_14 [4];
  undefined4 local_4;
  
  local_14[3] = &LAB_005c1558;
  local_14[2] = ExceptionList;
  uVar1 = 0;
  local_4 = 0;
  ExceptionList = local_14 + 2;
  *param_1 = &PTR_LAB_005e1494;
  local_14[0] = (void *)0x5;
  local_14[1] = (void *)0x6;
  do {
    FUN_005760d0(local_14[uVar1]);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  ExceptionList = local_14[2];
  return param_1;
}

