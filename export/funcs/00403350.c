
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403350(float *param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  float *unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  float *pfStack_c;
  float fStack_8;
  
  fVar2 = (float)(**(code **)((int)*param_1 + 0x40))();
  if (DAT_00616494 == (int *)0x0) {
    DAT_00616494 = (int *)FUN_005b73e0();
  }
  piVar1 = DAT_00616494;
  (**(code **)(*DAT_00616494 + 0x28))();
  fVar4 = (float10)(**(code **)((int)*param_1 + 0x20))(param_1);
  if ((float10)_DAT_005c7474 <= (float10)(float)param_1 - fVar4) {
    return 0;
  }
  *param_2 = _DAT_005c7500 / (float)param_1;
  (**(code **)((int)*param_1 + 0x2c))(param_1);
  fVar4 = (float10)(**(code **)((int)*param_1 + 0x20))();
  (**(code **)((int)*param_1 + 0x30))();
  fVar5 = (float10)(**(code **)((int)*param_1 + 0x20))(param_1);
  fVar2 = fVar2 * (float)&stack0xfffffff0 * (float)param_1 * _DAT_005c75e0;
  *unaff_ESI = fVar2;
  *pfStack_c = ABS((float)(fVar5 * (float10)fStack_8) * (float)&stack0xfffffff0 * (float)param_1 *
                   _DAT_005c75e0);
  if (fVar2 < _DAT_005c75dc) {
    return 0;
  }
  piVar3 = (int *)(**(code **)((int)*param_1 + 0x14))(param_1);
  fVar2 = (float)(piVar3[3] - piVar3[1]) * _DAT_005c75e0;
  *param_1 = (float)param_1 * (float)&stack0xfffffff0 * (float)piVar1 +
             (float)(piVar3[2] - *piVar3) * _DAT_005c75e0 + (float)*piVar3;
  *(float *)(float)(fVar4 * (float10)(float)param_1) =
       (float)param_1 * (float)pfStack_c * (float)piVar1 + (float)piVar3[1] + fVar2;
  return 1;
}

