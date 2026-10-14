
void __thiscall FUN_0054fd30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  **(undefined4 **)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 8) = param_4;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x70);
  **(undefined4 **)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x68);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x78);
  **(undefined4 **)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 4) = *(undefined4 *)(param_1 + 100);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x80);
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_3;
    *(undefined4 *)(param_1 + 0x30) = param_4;
  }
  if ((*(byte *)(param_1 + 0x58) & 4) != 0) {
    if ((*(uint *)(param_1 + 0x5c) & 1) == 0) {
      uVar3 = *(uint *)(param_1 + 0x5c) >> 1;
      iVar1 = param_1 + uVar3 * 0x18;
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(iVar1 + 0x28) = param_2;
      *(undefined4 *)(param_1 + (uVar3 * 3 + 6) * 8) = param_4;
      *(undefined4 *)(iVar1 + 0x2c) = param_3;
    }
    uVar3 = *(int *)(param_1 + 0x5c) + 1;
    *(uint *)(param_1 + 0x5c) = uVar3;
    if (3 < uVar3) {
      puVar2 = *(undefined4 **)(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *puVar2 = *(undefined4 *)(param_1 + 0x28);
      puVar2[1] = *(undefined4 *)(param_1 + 0x2c);
      puVar2[2] = *(undefined4 *)(param_1 + 0x30);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x70);
      **(undefined4 **)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x34);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x78);
      **(undefined4 **)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(*(int *)(param_1 + 0x7c) + 4) = *(undefined4 *)(param_1 + 0x3c);
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x80);
      puVar2 = *(undefined4 **)(param_1 + 0x6c);
      *puVar2 = *(undefined4 *)(param_1 + 0x40);
      puVar2[1] = *(undefined4 *)(param_1 + 0x44);
      puVar2[2] = *(undefined4 *)(param_1 + 0x48);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x70);
      **(undefined4 **)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x78);
      **(undefined4 **)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(*(int *)(param_1 + 0x7c) + 4) = *(undefined4 *)(param_1 + 0x54);
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
    }
  }
  return;
}

