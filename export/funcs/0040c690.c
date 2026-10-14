
void __fastcall FUN_0040c690(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar1 = FUN_0040f080(param_1 + 0x54);
    *(int *)(param_1 + 0xb4) = iVar1;
    if (iVar1 == 0) {
      uVar2 = FUN_0040f080(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0xb4) = uVar2;
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      FUN_0040e960(0);
    }
    iVar1 = FUN_0040f080(param_1 + 0x58);
    *(int *)(param_1 + 0xb8) = iVar1;
    if (iVar1 == 0) {
      uVar2 = FUN_0040f080(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0xb8) = uVar2;
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_0040e960(0);
    }
    iVar1 = FUN_0040f080(param_1 + 0x5c);
    *(int *)(param_1 + 0xbc) = iVar1;
    if (iVar1 == 0) {
      uVar2 = FUN_0040f080(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0xbc) = uVar2;
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_0040e960(0);
    }
    iVar1 = FUN_0040f080(param_1 + 0x60);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 == 0) {
      uVar2 = FUN_0040f080(param_1 + 0x74);
      *(undefined4 *)(param_1 + 0xc0) = uVar2;
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      FUN_0040e960(0);
    }
    iVar1 = FUN_0040f080(param_1 + 100);
    *(int *)(param_1 + 0xc4) = iVar1;
    if (iVar1 == 0) {
      uVar2 = FUN_0040f080(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0xc4) = uVar2;
    }
    if (*(int *)(param_1 + 0xc4) != 0) {
      FUN_0040e960(0);
    }
  }
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  return;
}

