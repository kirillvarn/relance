
void __fastcall FUN_0055dec0(undefined4 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 1) = local_1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_OnDisconnect_005e18f8;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

