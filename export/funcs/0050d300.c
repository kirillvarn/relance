
int __fastcall FUN_0050d300(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  iVar2 = 0xd;
  do {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[-1] = 0;
    puVar1[-2] = 0;
    puVar1[2] = 0x3f800000;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_1 + 0x138);
  iVar2 = 0xc;
  do {
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[4] = 0x3f800000;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_1 + 600);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 1;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x290) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x294) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x298) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x29c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e8) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x2ec) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x2ac) = 0x40000000;
  *(undefined4 *)(param_1 + 0x2b4) = 5;
  *(undefined4 *)(param_1 + 0x2f8) = 8;
  *(undefined4 *)(param_1 + 0x2fc) = 0xf;
  *(undefined4 *)(param_1 + 0x300) = 0x19;
  *(undefined4 *)(param_1 + 0x304) = 0x28;
  *(undefined4 *)(param_1 + 0x308) = 0x3c;
  return param_1;
}

