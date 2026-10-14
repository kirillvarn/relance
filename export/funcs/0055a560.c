
undefined4 * __fastcall FUN_0055a560(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_0059f860();
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 0xd4) = local_1;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined1 *)(param_1 + 0xd8) = local_1;
  *(undefined1 *)((int)param_1 + 0x373) = 0;
  *(undefined1 *)((int)param_1 + 0x372) = 0;
  *(undefined1 *)((int)param_1 + 0x371) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0x80;
  param_1[0xcb] = 0;
  param_1[0xd3] = 0;
  param_1[0xdd] = 0;
  *(undefined1 *)((int)param_1 + 0x336) = 0;
  *(undefined1 *)((int)param_1 + 0x337) = 0;
  param_1[0xcf] = 0;
  *(undefined1 *)((int)param_1 + 0x332) = 0;
  *(undefined1 *)((int)param_1 + 0x333) = 0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  param_1[0xd1] = 0;
  *(undefined1 *)((int)param_1 + 0x335) = 0;
  *param_1 = &PTR_FUN_005e15f4;
  param_1[0x1f] = &PTR_OnReceive_005e15e8;
  *(byte *)((int)param_1 + 0x331) = *(byte *)((int)param_1 + 0x331) & 0xee | 0xe;
  param_1[0xd0] = 0x43340000;
  return param_1;
}

