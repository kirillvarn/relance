
void __thiscall FUN_0058ce10(int param_1,uint param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x4a4) != 0) &&
       (param_2 < (uint)(*(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2))) &&
      (iVar1 = *(int *)(param_1 + 0x4b4), iVar1 != 0)) &&
     (param_3 < (uint)(*(int *)(param_1 + 0x4b8) - iVar1 >> 2))) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4b8) - iVar1 >> 2;
    }
    param_3 = iVar1 * param_2 + param_3;
    if (((*(int *)(param_1 + 0x494) != 0) &&
        (param_3 < (uint)((*(int *)(param_1 + 0x498) - *(int *)(param_1 + 0x494)) / 0x1c))) &&
       (iVar1 = param_3 * 0x1c + *(int *)(param_1 + 0x494), iVar1 != 0)) {
      *(undefined1 *)(iVar1 + 0x18) = param_4;
    }
  }
  return;
}

