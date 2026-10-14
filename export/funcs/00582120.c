
void __thiscall
FUN_00582120(int *param_1,char *param_2,int *param_3,int param_4,int *param_5,undefined1 param_6,
            char *param_7,int *param_8,int param_9,int *param_10,undefined1 param_11,char *param_12,
            int *param_13,int param_14,int *param_15,undefined1 param_16,char *param_17,
            int *param_18,int *param_19,int param_20,int param_21,int *param_22,undefined1 param_23,
            int param_24,int param_25,int param_26,undefined1 param_27,undefined1 param_28)

{
  int *piVar1;
  
  if (param_2 != (char *)0x0) {
    FUN_0059eee0();
    if (*param_2 != '\0') {
      FUN_0059ec80(param_2,0,0);
    }
    if (param_1[0xcc] != -1) {
      (**(code **)(**(int **)Engine_exref + 0x9c))
                (*(int **)Engine_exref,param_1[0xcc],param_1 + 0xd8);
      (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0xcc],0,0);
    }
    (**(code **)(*param_1 + 0x8c))();
  }
  param_1[0xd5] = *param_3;
  param_1[0xd6] = param_3[1];
  param_1[0xd7] = param_3[2];
  FUN_005803d0();
  if (param_1[0xcc] != -1) {
    (**(code **)(**(int **)Engine_exref + 0x8c))(*(int **)Engine_exref,param_1[0xcc],param_1 + 0xe1)
    ;
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0xcc],0,0);
  }
  if (param_4 != 0) {
    param_1[0xf0] = 0x3f800000;
    param_1[0xec] = 0x3f800000;
    param_1[0xe8] = 0x3f800000;
    param_1[0xef] = 0;
    param_1[0xee] = 0;
    param_1[0xed] = 0;
    param_1[0xeb] = 0;
    param_1[0xea] = 0;
    param_1[0xe9] = 0;
    param_1[0xf3] = 0;
    param_1[0xf2] = 0;
    param_1[0xf1] = 0;
    if ((int *)param_1[1] != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x90))(param_4,param_1 + 0xe8);
      }
    }
  }
  param_1[0xe4] = *param_5;
  param_1[0xe5] = param_5[1];
  param_1[0xe6] = param_5[2];
  *(undefined1 *)(param_1 + 0xe7) = param_6;
  if (param_7 != (char *)0x0) {
    FUN_0059eee0();
    if (*param_7 != '\0') {
      FUN_0059ec80(param_7,0,0);
    }
    if (param_1[0xf5] != -1) {
      (**(code **)(**(int **)Engine_exref + 0x9c))
                (*(int **)Engine_exref,param_1[0xf5],param_1 + 0x101);
      (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0xf5],0,0);
    }
    (**(code **)(*param_1 + 0x8c))();
  }
  param_1[0xfe] = *param_8;
  param_1[0xff] = param_8[1];
  param_1[0x100] = param_8[2];
  FUN_005803d0();
  if (param_1[0xf5] != -1) {
    (**(code **)(**(int **)Engine_exref + 0x8c))
              (*(int **)Engine_exref,param_1[0xf5],param_1 + 0x10a);
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0xf5],0,0);
  }
  if (param_9 != 0) {
    param_1[0x119] = 0x3f800000;
    param_1[0x115] = 0x3f800000;
    param_1[0x111] = 0x3f800000;
    param_1[0x118] = 0;
    param_1[0x117] = 0;
    param_1[0x116] = 0;
    param_1[0x114] = 0;
    param_1[0x113] = 0;
    param_1[0x112] = 0;
    param_1[0x11c] = 0;
    param_1[0x11b] = 0;
    param_1[0x11a] = 0;
    if ((int *)param_1[1] != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x90))(param_9,param_1 + 0x111);
      }
    }
  }
  param_1[0x10d] = *param_10;
  param_1[0x10e] = param_10[1];
  param_1[0x10f] = param_10[2];
  *(undefined1 *)(param_1 + 0x110) = param_11;
  if (param_12 != (char *)0x0) {
    FUN_0059eee0();
    if (*param_12 != '\0') {
      FUN_0059ec80(param_12,0,0);
    }
    if (param_1[0x11e] != -1) {
      (**(code **)(**(int **)Engine_exref + 0x9c))
                (*(int **)Engine_exref,param_1[0x11e],param_1 + 0x12a);
      (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x11e],0,0);
    }
    (**(code **)(*param_1 + 0x8c))();
    param_1[0x127] = *param_13;
    param_1[0x128] = param_13[1];
    param_1[0x129] = param_13[2];
    FUN_005803d0();
    if (param_1[0x11e] != -1) {
      (**(code **)(**(int **)Engine_exref + 0x8c))
                (*(int **)Engine_exref,param_1[0x11e],param_1 + 0x133);
      (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x11e],0,0);
    }
    if (param_14 != 0) {
      param_1[0x142] = 0x3f800000;
      param_1[0x13e] = 0x3f800000;
      param_1[0x13a] = 0x3f800000;
      param_1[0x141] = 0;
      param_1[0x140] = 0;
      param_1[0x13f] = 0;
      param_1[0x13d] = 0;
      param_1[0x13c] = 0;
      param_1[0x13b] = 0;
      param_1[0x145] = 0;
      param_1[0x144] = 0;
      param_1[0x143] = 0;
      if ((int *)param_1[1] != (int *)0x0) {
        piVar1 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x90))(param_14,param_1 + 0x13a);
        }
      }
    }
    param_1[0x136] = *param_15;
    param_1[0x137] = param_15[1];
    param_1[0x138] = param_15[2];
    *(undefined1 *)(param_1 + 0x139) = param_16;
  }
  if (param_17 != (char *)0x0) {
    FUN_0059eee0();
    if (*param_17 != '\0') {
      FUN_0059ec80(param_17,0,0);
    }
    if (param_1[0x147] != -1) {
      (**(code **)(**(int **)Engine_exref + 0x9c))
                (*(int **)Engine_exref,param_1[0x147],param_1 + 0x16e);
      (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x147],0,0);
    }
    (**(code **)(*param_1 + 0x8c))();
  }
  param_1[0x168] = *param_18;
  param_1[0x169] = param_18[1];
  param_1[0x16a] = param_18[2];
  FUN_005803d0();
  if (param_1[0x147] != -1) {
    (**(code **)(**(int **)Engine_exref + 0x8c))
              (*(int **)Engine_exref,param_1[0x147],param_1 + 0x177);
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x147],0,0);
  }
  param_1[0x16b] = *param_19;
  param_1[0x16c] = param_19[1];
  param_1[0x16d] = param_19[2];
  FUN_005803d0();
  if (param_1[0x147] != -1) {
    (**(code **)(**(int **)Engine_exref + 0x8c))
              (*(int **)Engine_exref,param_1[0x147],param_1 + 0x177);
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x147],0,0);
  }
  if (param_20 != 0) {
    param_1[0x186] = 0x3f800000;
    param_1[0x182] = 0x3f800000;
    param_1[0x17e] = 0x3f800000;
    param_1[0x185] = 0;
    param_1[0x184] = 0;
    param_1[0x183] = 0;
    param_1[0x181] = 0;
    param_1[0x180] = 0;
    param_1[0x17f] = 0;
    param_1[0x189] = 0;
    param_1[0x188] = 0;
    param_1[0x187] = 0;
    if ((int *)param_1[1] != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x90))(param_20,param_1 + 0x17e);
      }
    }
  }
  if (param_21 != 0) {
    param_1[0x192] = 0x3f800000;
    param_1[0x18e] = 0x3f800000;
    param_1[0x18a] = 0x3f800000;
    param_1[0x191] = 0;
    param_1[400] = 0;
    param_1[399] = 0;
    param_1[0x18d] = 0;
    param_1[0x18c] = 0;
    param_1[0x18b] = 0;
    param_1[0x195] = 0;
    param_1[0x194] = 0;
    param_1[0x193] = 0;
    if ((int *)param_1[1] != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x90))(param_21,param_1 + 0x18a);
      }
    }
  }
  param_1[0x17a] = *param_22;
  param_1[0x17b] = param_22[1];
  param_1[0x17c] = param_22[2];
  *(undefined1 *)(param_1 + 0x17d) = param_23;
  param_1[0x196] = param_24;
  param_1[0x197] = param_25;
  param_1[0x198] = param_26;
  *(undefined1 *)(param_1 + 0x19b) = param_27;
  *(undefined1 *)((int)param_1 + 0x2d1) = param_28;
  return;
}

