
uint __thiscall FUN_0058cd00(int param_1,uint param_2,uint param_3,int *param_4)

{
  uint in_EAX;
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a4) != 0) {
    in_EAX = *(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2;
    if ((param_2 < in_EAX) && (iVar1 = *(int *)(param_1 + 0x4b4), iVar1 != 0)) {
      in_EAX = *(int *)(param_1 + 0x4b8) - iVar1 >> 2;
      if (param_3 < in_EAX) {
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x4b8) - iVar1 >> 2;
        }
        param_3 = iVar1 * param_2 + param_3;
        in_EAX = 0;
        if (*(int *)(param_1 + 0x494) != 0) {
          iVar1 = *(int *)(param_1 + 0x498) - *(int *)(param_1 + 0x494);
          in_EAX = -(iVar1 >> 0x1f);
          if ((param_3 < (uint)(iVar1 / 0x1c)) &&
             (iVar1 = param_3 * 0x1c + *(int *)(param_1 + 0x494), iVar1 != 0)) {
            *param_4 = iVar1;
            return 1;
          }
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

