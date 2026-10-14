
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422c70(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_ESI;
  float unaff_EDI;
  float unaff_retaddr;
  undefined4 in_stack_0000001c;
  float fStack_30;
  float fStack_2c;
  undefined1 local_24 [24];
  float *pfStack_c;
  float *pfStack_8;
  
  if (DAT_006649c0 == (int *)0x0) {
    DAT_006649c0 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_006649c0 + 0x28))(DAT_006649c0,local_24,in_stack_0000001c);
  FUN_00422b80(1.0 - *pfStack_c,fStack_30 - pfStack_c[1],fStack_2c - pfStack_c[2]);
  fVar3 = unaff_EDI * pfStack_8[1] + unaff_ESI * pfStack_8[2] + param_3 * *pfStack_8;
  if (_DAT_005c7474 <= fVar3) {
    fVar1 = pfStack_8[1];
    fVar2 = pfStack_c[1];
    fVar5 = fVar3 * pfStack_8[2] + pfStack_c[2];
    *param_1 = fVar3 * *pfStack_8 + *pfStack_c;
    param_1[1] = fVar3 * fVar1 + fVar2;
  }
  else {
    *param_1 = *pfStack_c;
    param_1[1] = pfStack_c[1];
    fVar5 = pfStack_c[2];
  }
  param_1[2] = fVar5;
  fVar3 = *param_1 - 1.0;
  fVar1 = param_1[1] - fStack_30;
  fVar2 = param_1[2] - fStack_2c;
  fVar5 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar4 = unaff_retaddr / fVar5;
  fVar3 = fVar3 * fVar4 + 1.0;
  *param_2 = fVar3;
  fVar1 = fStack_30 + fVar1 * fVar4;
  fVar2 = fStack_2c + fVar2 * fVar4;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  if (fVar5 < unaff_retaddr) {
    *param_1 = fVar3;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
  }
  return;
}

