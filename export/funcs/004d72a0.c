
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004d72a0(undefined4 *param_1,undefined4 param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  float fStack_3c;
  float fStack_38;
  undefined4 local_34;
  float fStack_30;
  float fStack_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005be258;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00420d40();
  param_1[8] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[9] = 0x3f800000;
  *param_1 = &PTR_FUN_005d2efc;
  param_1[4] = 0xffffffff;
  local_4 = 0;
  param_1[10] = 0;
  FUN_0059ec80(param_2,0,1);
  if (param_1[1] == -1) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: HUD_DamageIndicator is missing: %s.",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_DamageIndicator.cpp",0xf7,param_2);
  }
  local_18 = 0;
  fVar1 = (float10)fcos((float10)param_3 * (float10)_DAT_005c77f4);
  local_14 = 0;
  local_10 = 0xbf800000;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  fVar2 = (float10)fsin((float10)(float)((float10)param_3 * (float10)_DAT_005c77f4));
  fStack_3c = (float)fVar1;
  fStack_38 = (float)-fVar2;
  fStack_30 = (float)fVar2;
  fStack_2c = (float)fVar1;
  (**(code **)(**(int **)Engine_exref + 0x9c))(*(int **)Engine_exref,param_1[1],&fStack_3c);
  (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[1],0,0);
  ExceptionList = local_28;
  return param_1;
}

