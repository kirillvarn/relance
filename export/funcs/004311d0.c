
undefined4 * __fastcall FUN_004311d0(undefined4 *param_1)

{
  ID_String::clear((ID_String *)(param_1 + 1));
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  param_1[3] = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *param_1 = &PTR_LAB_005cabfc;
  param_1[2] = 0xffffffff;
  return param_1;
}

