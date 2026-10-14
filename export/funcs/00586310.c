
void __thiscall FUN_00586310(int param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float unaff_EBX;
  float unaff_ESI;
  float *pfStack_38;
  float *pfStack_34;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfStack_38 = &local_1c;
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = *(float *)(param_1 + 0x47c) + *(float *)(param_1 + 0x488) + *param_2;
  local_14 = *(float *)(param_1 + 0x480) + *(float *)(param_1 + 0x48c) + param_2[1];
  local_10 = *(float *)(param_1 + 0x484) + *(float *)(param_1 + 0x490) + param_2[2];
  pfStack_34 = &local_c;
  local_c = local_18 - *(float *)(param_1 + 0x470);
  local_8 = local_14 - *(float *)(param_1 + 0x474);
  local_4 = local_10 - *(float *)(param_1 + 0x478);
  (**(code **)(DAT_0067dbf8 + 0x34))(&DAT_0067dbf8,&local_24,&local_20);
  piVar1 = (int *)(param_1 + 0x494);
  iVar2 = ftol();
  *piVar1 = iVar2;
  uVar3 = ftol();
  *(undefined4 *)(param_1 + 0x498) = uVar3;
  local_20 = unaff_ESI + *(float *)(param_1 + 0x470);
  local_1c = unaff_EBX + *(float *)(param_1 + 0x474);
  local_18 = local_24 + *(float *)(param_1 + 0x478);
  (**(code **)(DAT_0067dbf8 + 0x34))
            (&DAT_0067dbf8,&pfStack_38,&pfStack_34,&stack0xffffffd0,&local_20);
  iVar2 = ftol();
  *(int *)(param_1 + 0x49c) = iVar2;
  iVar4 = ftol();
  *(int *)(param_1 + 0x4a0) = iVar4;
  if ((((*piVar1 < 0) || (*(int *)(param_1 + 0x498) < 0)) || (iVar2 < 0)) || (iVar4 < 0)) {
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x49c) = 0;
    *(undefined4 *)(param_1 + 0x498) = 0;
    *piVar1 = 0;
  }
  else if (local_20._0_1_ != '\0') {
    FUN_0040fb80(piVar1,1);
    FUN_0040fb60(0x3dcccccd,0x461c4000);
    return;
  }
  return;
}

