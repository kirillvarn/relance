
void __thiscall FUN_0041fd00(int param_1,uint param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 local_24 [9];
  
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = param_2;
  local_24[0] = 0xffffffff;
  local_24[1] = 0xfffffffe;
  local_24[2] = 0xfffffffd;
  local_24[3] = 0xfffffffc;
  local_24[4] = 0xfffffffb;
  local_24[5] = 0xfffffffa;
  local_24[6] = 0xfffffff9;
  local_24[7] = 0xfffffff8;
  local_24[8] = 0xfffffff7;
  if (8 < param_2) {
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 4) = local_24[param_2];
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 0x1a) = param_4;
  return;
}

