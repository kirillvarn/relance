
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00411370(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = *(int *)(param_1 + 0xb0);
  if ((iVar3 == 1) || (((*(byte *)(param_1 + 0xb4) & 2) != 0 && ((iVar3 == 3 || (iVar3 == 2)))))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((param_3 != (float *)0x0) && ((bVar4 || (param_4 != (float *)0x0)))) {
    fVar2 = *param_3 - *(float *)(param_1 + 0x98);
    fVar1 = param_3[1] - *(float *)(param_1 + 0x9c);
    fVar6 = param_3[2] - *(float *)(param_1 + 0xa0);
    fVar5 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar6 * fVar6);
    if (param_4 != (float *)0x0) {
      *param_4 = fVar5;
    }
    if (bVar4) {
      fVar5 = (float)_DAT_005c89b8 / fVar5;
      *param_2 = fVar2 * fVar5;
      param_2[1] = fVar1 * fVar5;
      param_2[2] = fVar6 * fVar5;
      return;
    }
  }
  fVar1 = *(float *)(param_1 + 0x88);
  fVar2 = *(float *)(param_1 + 0x94);
  *param_2 = -*(float *)(param_1 + 0x7c);
  param_2[1] = -fVar1;
  param_2[2] = -fVar2;
  return;
}

