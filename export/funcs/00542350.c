
void __thiscall FUN_00542350(int *param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_2 + 0x18) = param_1[2];
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 0x14) = param_2;
      param_1[2] = param_2;
      *(undefined4 *)(param_2 + 0x14) = 0;
      *param_1 = *param_1 + 1;
      return;
    }
    param_1[1] = param_2;
    param_1[2] = param_2;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *param_1 + 1;
  }
  return;
}

