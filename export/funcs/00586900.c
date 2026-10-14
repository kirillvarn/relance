
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00586900(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  *(float *)(param_1 + 0x37c) = *param_2;
  *(float *)(param_1 + 0x380) = param_2[1];
  *(float *)(param_1 + 900) = param_2[2];
  fVar1 = *(float *)(param_1 + 900);
  fVar5 = (float10)*(float *)(param_1 + 0x37c) * (float10)_DAT_005c77f4;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  fVar6 = (float10)fcos(fVar5);
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(float *)(param_1 + 0x364) = 0.0;
  *(undefined4 *)(param_1 + 0x368) = 0x3f800000;
  fVar5 = (float10)fsin((float10)(float)fVar5);
  *(float *)(param_1 + 0x358) = (float)fVar6;
  *(float *)(param_1 + 0x360) = (float)fVar5;
  *(float *)(param_1 + 0x370) = (float)-fVar5;
  *(float *)(param_1 + 0x378) = (float)fVar6;
  iVar4 = 3;
  fVar5 = (float10)*(float *)(param_1 + 0x380) * (float10)_DAT_005c77f4;
  fVar6 = (float10)fcos(fVar5);
  fVar5 = (float10)fsin(fVar5);
  pfVar3 = (float *)(param_1 + 0x370);
  do {
    fVar2 = pfVar3[-3];
    iVar4 = iVar4 + -1;
    pfVar3[-3] = (float)((float10)(float)fVar6 * (float10)fVar2 - fVar5 * (float10)*pfVar3);
    *pfVar3 = (float)((float10)fVar2 * fVar5 + (float10)(float)fVar6 * (float10)*pfVar3);
    pfVar3 = pfVar3 + 1;
  } while (iVar4 != 0);
  fVar5 = (float10)fVar1 * (float10)_DAT_005c77f4;
  iVar4 = 3;
  fVar6 = (float10)fcos(fVar5);
  fVar5 = (float10)fsin(fVar5);
  pfVar3 = (float *)(param_1 + 0x364);
  do {
    fVar1 = pfVar3[-3];
    iVar4 = iVar4 + -1;
    pfVar3[-3] = (float)((float10)(float)fVar6 * (float10)fVar1 - fVar5 * (float10)*pfVar3);
    *pfVar3 = (float)((float10)fVar1 * fVar5 + (float10)(float)fVar6 * (float10)*pfVar3);
    pfVar3 = pfVar3 + 1;
  } while (iVar4 != 0);
  return;
}

