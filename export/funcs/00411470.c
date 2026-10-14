
void __thiscall FUN_00411470(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0xb0) != 1) {
    *(float *)(param_1 + 0x4c) = *param_2;
    *(float *)(param_1 + 0x50) = param_2[1];
    *(float *)(param_1 + 0x54) = -param_2[2];
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *(float *)(param_1 + 0x7c) = -*param_2;
  *(float *)(param_1 + 0x94) = -fVar2;
  *(float *)(param_1 + 0x88) = -fVar1;
  if ((DAT_00610588 == 0) && ((*(byte *)(param_1 + 0xb4) & 4) != 0)) {
    (**(code **)(**(int **)Pipeline_exref + 300))(*(int **)Pipeline_exref,param_1 + 0xc);
  }
  return;
}

