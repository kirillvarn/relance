
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00596140(int param_1,float *param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = FUN_00425640(0);
  FUN_004220a0(uVar1);
  if ((char)param_3 != '\0') {
    if (*(char *)(param_2 + 4) == '\0') {
      FUN_00421ba0(param_1 + 0x410);
    }
    else {
      param_3 = *(undefined4 *)(param_1 + 0x418);
      FUN_00561f20(&param_3,param_3);
      FUN_00421ba0(&param_3);
    }
    FUN_00421670(4);
    if (param_4 == '\0') {
      FUN_00421ca0(0,0x3f800000);
      FUN_00421cc0(*param_2,param_2[1],0);
      FUN_00421ca0(0x3f800000,0);
      FUN_00421cc0(param_2[2],param_2[1],0);
      FUN_00421ca0(0x3f800000,0x3f800000);
      fVar2 = param_2[3];
    }
    else {
      FUN_00421ca0(0x3f800000,0x3f800000);
      FUN_00421cc0(param_2[2],param_2[3],0);
      FUN_00421ca0(0,0x3f800000);
      FUN_00421cc0(*param_2,param_2[3],0);
      FUN_00421ca0(0x3f800000,0);
      fVar2 = param_2[1];
    }
    FUN_00421cc0((param_2[2] + *param_2) * _DAT_005c75e0,fVar2,0);
    FUN_00421690();
  }
  if (*(char *)(param_2 + 4) != '\0') {
    FUN_00421ba0(param_1 + 0x414);
    return;
  }
  FUN_00421ba0(param_1 + 0x40c);
  return;
}

