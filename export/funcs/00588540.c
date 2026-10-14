
void __thiscall
FUN_00588540(int *param_1,int param_2,float *param_3,char *param_4,int *param_5,undefined1 param_6,
            undefined1 param_7,undefined1 param_8,undefined1 param_9,undefined1 param_10,
            undefined1 param_11,undefined1 param_12,int param_13,int param_14,undefined1 param_15,
            int *param_16)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x98))(param_2,0);
  }
  param_1[0x2d] = *param_5;
  param_1[0x2e] = param_5[1];
  param_1[0x2f] = param_5[2];
  param_1[0x2a] = (int)*param_3;
  param_1[0x2b] = (int)param_3[1];
  param_1[0x2c] = (int)param_3[2];
  if (param_1[0x21] != -1) {
    fStack_c = (float)param_1[0x2a] + (float)param_1[0x18];
    uStack_10 = 0x3f800000;
    uStack_20 = 0x3f800000;
    uStack_30 = 0x3f800000;
    fStack_8 = (float)param_1[0x2b] + (float)param_1[0x19];
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    fStack_4 = (float)param_1[0x2c] + (float)param_1[0x1a];
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    (**(code **)(**(int **)Engine_exref + 0x9c))(*(int **)Engine_exref,param_1[0x21],&uStack_30);
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x21],0,0);
  }
  if (param_4 != (char *)0x0) {
    pcVar3 = param_4;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)param_1 + (0x1d0 - (int)param_4)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
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
      piVar4 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
      if (piVar4 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar4 + 0x90))(param_4,param_1 + 0xbe);
        *(undefined1 *)(param_1 + 0xca) = uVar2;
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x2d1) = param_6;
  param_1[0x106] = (int)(float)param_13;
  *(undefined1 *)(param_1 + 0xd3) = param_7;
  *(undefined1 *)(param_1 + 0xd1) = param_8;
  param_1[0x107] = (int)(float)param_14;
  *(undefined1 *)((int)param_1 + 0x345) = param_9;
  *(undefined1 *)((int)param_1 + 0x346) = param_10;
  *(undefined1 *)((int)param_1 + 0x34b) = param_11;
  *(undefined1 *)((int)param_1 + 0x34a) = param_12;
  *(undefined1 *)((int)param_1 + 0x349) = param_15;
  param_1[0xce] = *param_16;
  param_1[0xcf] = param_16[1];
  param_1[0xd0] = param_16[2];
  param_1[0xcd] = param_1[0xce];
  param_1[0xcc] = param_1[0xcf];
  param_1[0xcb] = param_1[0xd0];
  return;
}

