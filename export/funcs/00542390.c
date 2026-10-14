
void __thiscall FUN_00542390(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_2 + 0x14);
      param_1[1] = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(param_2 + 0x18) = 0;
        *(undefined4 *)(param_2 + 0x14) = 0;
        *param_1 = *param_1 + -1;
        return;
      }
      param_1[2] = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
      *param_1 = *param_1 + -1;
      return;
    }
    if (*(int *)(param_2 + 0x14) == 0) {
      param_1[2] = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(param_2 + 0x18) = 0;
        *(undefined4 *)(param_2 + 0x14) = 0;
        *param_1 = *param_1 + -1;
        return;
      }
    }
    else {
      *(int *)(iVar1 + 0x14) = *(int *)(param_2 + 0x14);
      *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  *param_1 = *param_1 + -1;
  return;
}

