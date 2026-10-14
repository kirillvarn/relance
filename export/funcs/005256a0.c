
undefined4 * __thiscall FUN_005256a0(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0x3f800000;
  param_1[0x33] = 0x3f800000;
  param_1[0x34] = 0x3f800000;
  param_1[0x35] = 0x3f800000;
  param_1[0x36] = 0x3f800000;
  param_1[0x37] = 0x3f800000;
  param_1[0x38] = 0x3f800000;
  param_1[6] = 0x42480000;
  param_1[7] = 0x40a00000;
  param_1[4] = 10;
  param_1[8] = 0x43160000;
  param_1[9] = 0x42960000;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *param_1 = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  if (param_1[1] == 0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x8ab,
               "NULL common field passed to dynamic asteroid manager");
  }
  return param_1;
}

