
void FUN_00556b70(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x80) = *param_2;
  *(undefined4 *)(param_1 + 0x84) = param_2[1];
  *(undefined4 *)(param_1 + 0x88) = param_2[2];
  return;
}

