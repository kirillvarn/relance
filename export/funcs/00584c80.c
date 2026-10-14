
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00584c80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  char local_10 [4];
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0059da70(&local_24);
  local_c = local_24 * _DAT_005e4d14;
  local_8 = local_20 * _DAT_005e4d14;
  local_4 = local_1c * _DAT_005e4d14;
  (**(code **)(DAT_0067dbf8 + 0x34))(&DAT_0067dbf8,local_18,local_14,local_10,&local_c);
  fVar1 = (float)*(int *)(param_1 + 0x494);
  if ((fVar1 < fStack_2c) && (fStack_2c < (float)*(int *)(param_1 + 0x49c))) {
    fVar2 = (float)*(int *)(param_1 + 0x498);
    if ((fVar2 < fStack_28) && (fStack_28 < (float)*(int *)(param_1 + 0x4a0))) {
      fVar3 = (float)(*(int *)(param_1 + 0x49c) - *(int *)(param_1 + 0x494)) * _DAT_005c75e0;
      fVar4 = (float)(*(int *)(param_1 + 0x4a0) - *(int *)(param_1 + 0x498)) * _DAT_005c75e0;
      fVar1 = _DAT_005da41c - (((fVar1 + fVar3) - fStack_2c) / ABS(fVar3)) * _DAT_005c77f0;
      fVar2 = _DAT_005e4d2c - (((fVar2 + fVar4) - fStack_28) / ABS(fVar4)) * _DAT_005c77f0;
      if (local_10[0] != '\0') {
        *(float *)(param_1 + 0x52c) = fVar1;
        *(float *)(param_1 + 0x530) = fVar2;
        *(undefined4 *)(param_1 + 0x534) = 0;
        return;
      }
      fVar3 = fVar1 - *(float *)(param_1 + 0x52c);
      if ((_DAT_005da41c < *(float *)(param_1 + 0x524)) ||
         (*(float *)(param_1 + 0x524) < _DAT_005e4d28)) {
        fVar3 = -fVar3;
      }
      *(float *)(param_1 + 0x520) = fVar3 + *(float *)(param_1 + 0x520);
      *(float *)(param_1 + 0x524) =
           (fVar2 - *(float *)(param_1 + 0x530)) + *(float *)(param_1 + 0x524);
      *(float *)(param_1 + 0x528) = -*(float *)(param_1 + 0x534) + *(float *)(param_1 + 0x528);
      *(float *)(param_1 + 0x52c) = fVar1;
      fVar1 = *(float *)(param_1 + 0x520);
      fVar3 = (float)_DAT_005e4d20;
      *(float *)(param_1 + 0x530) = fVar2;
      *(undefined4 *)(param_1 + 0x534) = 0;
      if (fVar1 < fVar3) {
        do {
          fVar1 = fVar1 + _DAT_005ca23c;
        } while (fVar1 < (float)_DAT_005e4d20);
        *(float *)(param_1 + 0x520) = fVar1;
      }
      fVar1 = *(float *)(param_1 + 0x524);
      if (fVar1 < (float)_DAT_005e4d20) {
        do {
          fVar1 = fVar1 + _DAT_005ca23c;
        } while (fVar1 < (float)_DAT_005e4d20);
        *(float *)(param_1 + 0x524) = fVar1;
      }
      fVar1 = *(float *)(param_1 + 0x520);
      if ((float)_DAT_005e4d18 < fVar1) {
        do {
          fVar1 = fVar1 - _DAT_005ca23c;
        } while ((float)_DAT_005e4d18 < fVar1);
        *(float *)(param_1 + 0x520) = fVar1;
      }
      fVar1 = *(float *)(param_1 + 0x524);
      if ((float)_DAT_005e4d18 < fVar1) {
        do {
          fVar1 = fVar1 - _DAT_005ca23c;
        } while ((float)_DAT_005e4d18 < fVar1);
        *(float *)(param_1 + 0x524) = fVar1;
      }
      *(float *)(param_1 + 0x37c) = *(float *)(param_1 + 0x520);
      *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_1 + 0x524);
      *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_1 + 0x528);
      fVar1 = *(float *)(param_1 + 900);
      fVar7 = (float10)*(float *)(param_1 + 0x37c) * (float10)_DAT_005c77f4;
      *(undefined4 *)(param_1 + 0x35c) = 0;
      *(float *)(param_1 + 0x364) = 0.0;
      *(undefined4 *)(param_1 + 0x36c) = 0;
      fVar8 = (float10)fcos(fVar7);
      *(undefined4 *)(param_1 + 0x374) = 0;
      *(undefined4 *)(param_1 + 0x368) = 0x3f800000;
      iVar6 = 3;
      fVar7 = (float10)fsin((float10)(float)fVar7);
      *(float *)(param_1 + 0x358) = (float)fVar8;
      *(float *)(param_1 + 0x360) = (float)fVar7;
      *(float *)(param_1 + 0x370) = (float)-fVar7;
      *(float *)(param_1 + 0x378) = (float)fVar8;
      fVar7 = (float10)*(float *)(param_1 + 0x380) * (float10)_DAT_005c77f4;
      fVar8 = (float10)fcos(fVar7);
      fVar7 = (float10)fsin(fVar7);
      pfVar5 = (float *)(param_1 + 0x370);
      do {
        fVar2 = pfVar5[-3];
        iVar6 = iVar6 + -1;
        pfVar5[-3] = (float)((float10)(float)fVar8 * (float10)fVar2 - fVar7 * (float10)*pfVar5);
        *pfVar5 = (float)((float10)fVar2 * fVar7 + (float10)(float)fVar8 * (float10)*pfVar5);
        pfVar5 = pfVar5 + 1;
      } while (iVar6 != 0);
      fVar7 = (float10)fVar1 * (float10)_DAT_005c77f4;
      iVar6 = 3;
      fVar8 = (float10)fcos(fVar7);
      fVar7 = (float10)fsin(fVar7);
      pfVar5 = (float *)(param_1 + 0x364);
      do {
        fVar1 = pfVar5[-3];
        iVar6 = iVar6 + -1;
        pfVar5[-3] = (float)((float10)(float)fVar8 * (float10)fVar1 - fVar7 * (float10)*pfVar5);
        *pfVar5 = (float)((float10)fVar1 * fVar7 + (float10)(float)fVar8 * (float10)*pfVar5);
        pfVar5 = pfVar5 + 1;
      } while (iVar6 != 0);
    }
  }
  return;
}

