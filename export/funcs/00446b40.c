
void __thiscall FUN_00446b40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar1 = FUN_005792b0(0x19);
    if (iVar1 < 1) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x34) == 1) {
    iVar1 = FUN_005792b0(0x1b);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_005792b0(0x1d);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_005792b0(0x1b);
    if (iVar1 == 0) {
      return;
    }
  }
  if ((*(char *)(param_1 + 0x48) == '\0') && (*(char *)(param_1 + 0x14) != '\0')) {
    FUN_00558580(param_2);
  }
  return;
}

