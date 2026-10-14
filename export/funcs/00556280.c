
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00556280(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  float param_6,int param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  undefined4 *puVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c14c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (undefined4 *)Rect_to_ViewRect((Rect *)local_1c);
  local_2c = *puVar3;
  local_28 = puVar3[1];
  local_24 = puVar3[2];
  local_20 = puVar3[3];
  piVar4 = operator_new(0xbc);
  local_4 = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_005564a0();
    *piVar4 = (int)&PTR_LAB_005e1304;
    piVar4[0x16] = 1;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004215b0();
    piVar4[0x22] = 0;
    piVar4[0x21] = 0;
    piVar4[0x20] = 0;
    FUN_004b5150();
    *piVar4 = (int)&PTR_LAB_005e12a4;
    FUN_005564b0(&local_2c);
  }
  local_4 = 0xffffffff;
  fVar5 = (float10)fptan(((float10)param_6 + (float10)param_6) * (float10)_DAT_005c901c);
  fVar2 = (float)fVar5;
  fVar5 = (float10)fpatan((float10)fVar2,(float10)1);
  piVar4[9] = (int)fVar2;
  piVar4[5] = (int)(float)(fVar5 * (float10)_DAT_005c8928);
  FUN_00556480(0x3f800000,0,fVar2);
  FUN_0041a390();
  pfVar1 = (float *)(piVar4 + 0x13);
  piVar4[0xe] = (int)((float)piVar4[0xc] / (float)piVar4[9]);
  piVar4[0xb] = (int)((float)piVar4[9] / (float)piVar4[10]);
  piVar4[0xb] = (int)(float)((float10)param_4 / (float10)param_5);
  fVar5 = (float10)(float)piVar4[9] / ((float10)param_4 / (float10)param_5);
  piVar4[10] = (int)(float)fVar5;
  fVar5 = (float10)fpatan(fVar5,(float10)1);
  piVar4[6] = (int)(float)(fVar5 * (float10)_DAT_005c8928);
  *pfVar1 = 0.0;
  piVar4[0x15] = piVar4[10];
  piVar4[0x14] = 0x3f800000;
  fVar5 = (float10)FUN_00410190();
  fVar5 = (float10)_DAT_005c75dc / fVar5;
  *pfVar1 = (float)(fVar5 * (float10)*pfVar1);
  piVar4[0x14] = (int)(float)(fVar5 * (float10)(float)piVar4[0x14]);
  piVar4[0x15] = (int)(float)(fVar5 * (float10)(float)piVar4[0x15]);
  piVar4[7] = param_7;
  piVar4[0xf] = (int)-((float)piVar4[0xd] / (float)piVar4[10]);
  fVar5 = ((float10)(float)piVar4[5] + (float10)(float)piVar4[5]) * (float10)_DAT_005c75e0;
  piVar4[5] = (int)(float)fVar5;
  fVar5 = (float10)fptan(fVar5 * (float10)_DAT_005c77f4);
  piVar4[9] = (int)(float)fVar5;
  FUN_005566a0();
  piVar4[0xb] = (int)((float)piVar4[9] / (float)piVar4[10]);
  fVar5 = ((float10)(float)piVar4[6] + (float10)(float)piVar4[6]) * (float10)_DAT_005c75e0;
  piVar4[6] = (int)(float)fVar5;
  fVar5 = (float10)fptan(fVar5 * (float10)_DAT_005c77f4);
  piVar4[10] = (int)(float)fVar5;
  FUN_00556710();
  piVar4[8] = param_8;
  piVar4[0xb] = (int)((float)piVar4[9] / (float)piVar4[10]);
  (**(code **)(*piVar4 + 0x4c))(piVar4,param_1);
  (**(code **)(*piVar4 + 0x50))(piVar4,param_1 + 0xc);
  ExceptionList = local_1c[0];
  return piVar4;
}

