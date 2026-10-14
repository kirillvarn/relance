
void __thiscall
FUN_0055ee80(int *param_1,int param_2,int *param_3,undefined1 param_4,int param_5,int param_6,
            int param_7)

{
  int *piVar1;
  int *unaff_retaddr;
  
  (**(code **)(*param_1 + 0x98))(param_2,0);
  param_1[0x2a] = *unaff_retaddr;
  param_1[0x2b] = unaff_retaddr[1];
  param_1[0x2c] = unaff_retaddr[2];
  if (param_2 != 0) {
    param_1[0xc6] = 0x3f800000;
    param_1[0xc2] = 0x3f800000;
    param_1[0xbe] = 0x3f800000;
    param_1[0xc5] = 0;
    param_1[0xc4] = 0;
    param_1[0xc3] = 0;
    param_1[0xc1] = 0;
    param_1[0xc0] = 0;
    param_1[0xbf] = 0;
    param_1[0xc9] = 0;
    param_1[200] = 0;
    param_1[199] = 0;
    if ((int *)param_1[1] != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x90))(param_2,param_1 + 0xbe);
      }
    }
  }
  param_1[0x2d] = *param_3;
  param_1[0x2e] = param_3[1];
  param_1[0x2f] = param_3[2];
  *(undefined1 *)(param_1 + 0xd2) = param_4;
  param_1[0xcb] = param_5;
  *(bool *)((int)param_1 + 0x34a) = param_5 != 0;
  param_1[0xd0] = param_6;
  param_1[0xd1] = param_7;
  return;
}

