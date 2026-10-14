
undefined4 * __fastcall FUN_0059d080(undefined4 *param_1)

{
  uint uVar1;
  void *local_3c [13];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c4e18;
  local_3c[0xc] = ExceptionList;
  uVar1 = 0;
  local_4 = 0;
  ExceptionList = local_3c + 0xc;
  *param_1 = &PTR_LAB_005e5dcc;
  local_3c[0] = (void *)0x5;
  local_3c[1] = (void *)0x4;
  local_3c[2] = (void *)0x6;
  local_3c[3] = (void *)0x7;
  local_3c[4] = (void *)0x8;
  local_3c[5] = (void *)0x9;
  local_3c[6] = (void *)0xa;
  local_3c[7] = (void *)0xb;
  local_3c[8] = (void *)0xc;
  local_3c[9] = (void *)0xd;
  local_3c[10] = (void *)0x1;
  local_3c[0xb] = (void *)0x2;
  do {
    FUN_005760d0(local_3c[uVar1]);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xc);
  ExceptionList = local_3c[0xc];
  return param_1;
}

