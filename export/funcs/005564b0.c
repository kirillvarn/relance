
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005564b0(int param_1,int *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3faaaaab;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f400000;
  piVar1 = (int *)(param_1 + 4);
  if (param_2 == (int *)0x0) {
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x27f;
    *(undefined4 *)(param_1 + 0x10) = 0x1df;
  }
  else {
    *piVar1 = *param_2;
    *(int *)(param_1 + 8) = param_2[1];
    *(int *)(param_1 + 0xc) = param_2[2];
    *(int *)(param_1 + 0x10) = param_2[3];
  }
  fVar2 = (float)(*(int *)(param_1 + 0xc) - *piVar1) * _DAT_005c75e0;
  *(float *)(param_1 + 0x30) = fVar2;
  fVar3 = (float)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) * _DAT_005c75e0;
  *(float *)(param_1 + 0x34) = fVar3;
  *(float *)(param_1 + 0x38) = fVar2;
  *(float *)(param_1 + 0x3c) = fVar3 * _DAT_005e139c;
  fVar4 = (float10)fpatan((float10)_DAT_005c89b8,(float10)1);
  *(float *)(param_1 + 0x14) = (float)(fVar4 * (float10)_DAT_005c8928);
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  fVar2 = _DAT_005c75dc /
          SQRT(*(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x48) +
               *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x44) +
               *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40));
  *(float *)(param_1 + 0x40) = fVar2 * *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) = fVar2 * *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x48) = fVar2 * *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x24);
  fVar4 = (float10)fpatan((float10)*(float *)(param_1 + 0x28),(float10)1);
  *(float *)(param_1 + 0x18) = (float)(fVar4 * (float10)_DAT_005c8928);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  fVar2 = _DAT_005c75dc /
          SQRT(*(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x54) +
               *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50) +
               *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c));
  *(float *)(param_1 + 0x4c) = fVar2 * *(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x50) = fVar2 * *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x54) = fVar2 * *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x3c) = -(*(float *)(param_1 + 0x34) / *(float *)(param_1 + 0x28));
  return;
}

