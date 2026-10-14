
undefined4 * __fastcall FUN_00417d50(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = &PTR_LAB_005c8e1c;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x57) = local_1;
  *(undefined1 *)((int)param_1 + 0x15d) = local_1;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  *(undefined1 *)((int)pvVar2 + 0x14) = 1;
  param_1[0x59] = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x15) = 1;
  *(undefined4 *)param_1[0x59] = 0;
  *(undefined4 *)(param_1[0x59] + 8) = 0;
  uVar1 = param_1[0x59];
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x14) = 0;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  param_1[0x58] = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(undefined4 *)(param_1[0x58] + 8) = param_1[0x58];
  param_1[0x5b] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x56] = 0;
  *param_1 = &PTR_LAB_005c8dec;
  return param_1;
}

