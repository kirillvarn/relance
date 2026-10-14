
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall FUN_0054e040(float *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  float unaff_retaddr;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((int *)param_1[6] == (int *)0x0) {
    return 1;
  }
  fVar1 = (param_1[1] + *param_1) * _DAT_005c9804;
  pfVar2 = (float *)(**(code **)(*(int *)param_1[6] + 0x10))();
  fStack_4 = param_2[2] - pfVar2[2];
  fStack_8 = param_2[1] - pfVar2[1];
  fStack_c = *param_2 - *pfVar2;
  fVar3 = (float10)(**(code **)(*(int *)param_1[6] + 0x30))();
  fVar3 = fVar3 + (float10)fVar1;
  fVar4 = (float10)fStack_8 * (float10)fStack_8 +
          (float10)fStack_4 * (float10)fStack_4 + (float10)fStack_c * (float10)fStack_c;
  if (fVar4 <= fVar3 * fVar3) {
    fVar1 = _DAT_005c75dc / SQRT((float)fVar4);
    fStack_c = fStack_c * fVar1;
    fStack_8 = fStack_8 * fVar1;
    fStack_4 = fStack_4 * fVar1;
    fVar3 = (float10)(**(code **)(*(int *)param_1[6] + 0x40))(&fStack_c);
    if ((float10)unaff_retaddr - fVar3 < (float10)unaff_ESI !=
        ((float10)unaff_retaddr - fVar3 == (float10)unaff_ESI)) {
      return 1;
    }
  }
  return 0;
}

