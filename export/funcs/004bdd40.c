
void __thiscall FUN_004bdd40(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x6c);
  fVar2 = *(float *)(param_1 + 0xa4);
  fVar3 = *(float *)(param_1 + 0x7c);
  fVar4 = *(float *)(param_1 + 0xa4);
  *param_2 = (*(float *)(param_1 + 0xa4) / *(float *)(param_1 + 0x78)) *
             (param_3 - *(float *)(param_1 + 0x68));
  param_2[1] = (fVar2 / fVar3) * (param_4 - fVar1);
  param_2[2] = -fVar4;
  return;
}

