
void __thiscall FUN_0054d920(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  param_3 = param_3 - *(int *)(param_1 + 0x5c);
  if (param_3 < 0) {
    param_3 = 0;
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x60) + 8 + param_3 * 0x18);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return;
}

