
void __thiscall FUN_004c8b40(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_2);
  param_1[1] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 1.0;
  param_1[5] = 0.0;
  param_1[7] = 0.0;
  fVar2 = (float10)fsin((float10)param_2);
  *param_1 = (float)fVar1;
  param_1[2] = (float)fVar2;
  param_1[6] = (float)-fVar2;
  param_1[8] = (float)fVar1;
  return;
}

