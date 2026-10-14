
undefined4 * __thiscall
FUN_00509fb9(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 unaff_EBX;
  bool in_ZF;
  
  *param_1 = 1;
  param_1[1] = unaff_EBX;
  param_1[2] = unaff_EBX;
  param_1[3] = 0x242;
  param_1[4] = unaff_EBX;
  param_1[5] = unaff_EBX;
  param_1[6] = in_EAX;
  if (!in_ZF) {
    (**(code **)(*in_EAX + 4))();
  }
  *(undefined1 *)((int)param_1 + 0x33) = 0xff;
  *(undefined1 *)((int)param_1 + 0x32) = 0xff;
  *(undefined1 *)((int)param_1 + 0x31) = 0xff;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  param_1[8] = unaff_EBX;
  param_1[9] = unaff_EBX;
  *(char *)(param_1 + 10) = (char)unaff_EBX;
  *(char *)((int)param_1 + 0x29) = (char)unaff_EBX;
  param_1[0xb] = unaff_EBX;
  param_1[0xe] = unaff_EBX;
  param_1[0xd] = unaff_EBX;
  param_1[0x10] = unaff_EBX;
  param_1[0xf] = unaff_EBX;
  param_1[7] = param_4;
  param_1[3] = 0x242;
  return param_1;
}

