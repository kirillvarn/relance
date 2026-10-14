
void __thiscall FUN_00579970(int param_1,undefined4 *param_2,int *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x360);
  switch(*(undefined4 *)(param_1 + 0x408)) {
  case 0:
    *param_3 = *(int *)(param_1 + 0x364);
    return;
  case 1:
    *param_3 = 0;
    return;
  case 2:
    *param_3 = -((*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x380)) / 2);
    return;
  case 3:
    *param_3 = *(int *)(param_1 + 0x380) - *(int *)(param_1 + 0x35c);
  }
  return;
}

