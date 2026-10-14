
int __thiscall FUN_0046eab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x29) != '\0') {
    if (((byte)*(undefined4 *)(param_1 + 0x2c) & 3) == 3) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 2;
      FUN_0046ecd0();
      puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) * 3 + -0xf) * 8);
      puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) * 3 + -6) * 8);
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) * 3 + -9) * 8);
      puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + -0x18 + *(int *)(param_1 + 8) * 0x18);
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xe + *(int *)(param_1 + 8) * 0x18) =
       *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xd + *(int *)(param_1 + 8) * 0x18) =
       *(undefined1 *)(param_1 + 0x31);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xc + *(int *)(param_1 + 8) * 0x18) =
       *(undefined1 *)(param_1 + 0x32);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xf + *(int *)(param_1 + 8) * 0x18) =
       *(undefined1 *)(param_1 + 0x33);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10 + *(int *)(param_1 + 8) * 0x18) =
       *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14 + *(int *)(param_1 + 8) * 0x18) =
       *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 4 + *(int *)(param_1 + 8) * 0x18) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 4) + 8 + *(int *)(param_1 + 8) * 0x18) = param_4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  FUN_0046ecd0();
  return *(int *)(param_1 + 8) + -1;
}

