
void __thiscall FUN_004fc920(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_1[1];
    *param_2 = 0;
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = param_2;
      param_1[1] = (int)param_2;
      *param_1 = *param_1 + 1;
      return;
    }
    param_1[2] = (int)param_2;
    param_1[1] = (int)param_2;
    *param_1 = *param_1 + 1;
  }
  return;
}

