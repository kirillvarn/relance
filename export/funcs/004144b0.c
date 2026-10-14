
void __fastcall FUN_004144b0(undefined4 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = local_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0x7fff;
  param_1[2] = 0x7fff;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  return;
}

