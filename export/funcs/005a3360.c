
void __thiscall
FUN_005a3360(int param_1,float *param_2,undefined4 *param_3,char param_4,undefined1 param_5,
            undefined4 param_6,int param_7)

{
  if (param_7 == 0) {
    param_7 = 0xf;
  }
  *(int *)(param_1 + 900) = param_7;
  *(float *)(param_1 + 0xa8) = *param_2;
  *(float *)(param_1 + 0xac) = param_2[1];
  *(float *)(param_1 + 0xb0) = param_2[2];
  *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0xac) + *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x358) = *(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xb4) = *param_3;
  *(undefined4 *)(param_1 + 0xb8) = param_3[1];
  *(undefined4 *)(param_1 + 0xbc) = param_3[2];
  *(byte *)(param_1 + 0x35c) =
       (param_4 << 3 ^ *(byte *)(param_1 + 0x35c)) & 8 ^ *(byte *)(param_1 + 0x35c);
  *(undefined1 *)(param_1 + 0x2d1) = param_5;
  *(undefined4 *)(param_1 + 0xcc) = param_6;
  return;
}

