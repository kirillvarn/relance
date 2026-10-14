
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00498470(float param_1,float param_2,undefined4 param_3,float param_4,float param_5,
                 undefined4 param_6,undefined1 *param_7,undefined1 *param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar4 = (float10)fpatan((float10)param_4 - (float10)param_1,(float10)param_5 - (float10)param_2);
  fVar3 = (float10)fsin(fVar4 + (float10)_DAT_005d3e88);
  fVar4 = (float10)fcos(fVar4 + (float10)_DAT_005d3e88);
  fVar1 = (float)(fVar3 * (float10)param_9);
  fVar2 = (float)(fVar3 * (float10)param_9 + (float10)param_1);
  param_9 = (float)fVar4 * param_9;
  FUN_00421b70(*param_7,param_7[1],param_7[2],param_7[3]);
  FUN_00421cc0(param_1,param_2,param_3);
  FUN_00421b70(*param_8,param_8[1],param_8[2],param_8[3]);
  FUN_00421cc0(fVar2,param_9 + param_2,param_3);
  FUN_00421b70(*param_7,param_7[1],param_7[2],param_7[3]);
  FUN_00421cc0(param_4,param_5,param_6);
  FUN_00421cc0(param_4,param_5,param_6);
  FUN_00421b70(*param_8,param_8[1],param_8[2],param_8[3]);
  FUN_00421cc0(fVar1 + param_4,param_9 + param_5,param_6);
  FUN_00421cc0(fVar2,param_9 + param_2,param_3);
  FUN_00421b70(*param_7,param_7[1],param_7[2],param_7[3]);
  FUN_00421cc0(param_1,param_2,param_3);
  FUN_00421b70(*param_8,param_8[1],param_8[2],param_8[3]);
  FUN_00421cc0(param_1 - fVar1,param_2 - param_9,param_3);
  FUN_00421b70(*param_7,param_7[1],param_7[2],param_7[3]);
  FUN_00421cc0(param_4,param_5,param_6);
  FUN_00421cc0(param_4,param_5,param_6);
  FUN_00421b70(*param_8,param_8[1],param_8[2],param_8[3]);
  FUN_00421cc0(param_4 - fVar1,param_5 - param_9,param_6);
  FUN_00421cc0(param_1 - fVar1,param_2 - param_9,param_3);
  return;
}

