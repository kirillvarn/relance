
void __fastcall FUN_00419d20(undefined4 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 1) = local_1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_005c8eb4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  return;
}

