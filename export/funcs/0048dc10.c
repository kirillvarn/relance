
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048dc10(float *param_1,wchar_t *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  uint uVar5;
  ISystem *pIVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined1 auStack_c0 [32];
  wchar_t awStack_a0 [16];
  undefined1 local_80 [128];
  
  uVar5 = FUN_004c4830();
  pIVar6 = Universe::get_system(uVar5);
  if (pIVar6 == (ISystem *)0x0) {
    fVar9 = (float10)1.0;
  }
  else {
    fVar9 = (float10)(**(code **)(*(int *)pIVar6 + 0x50))();
  }
  fVar1 = param_1[2];
  fVar3 = (float10)_DAT_005d2ef4;
  fVar2 = *param_1;
  FUN_004347e0(DAT_0067eca8,0x54d,local_80,0x40);
  iVar7 = 0;
  fVar4 = _DAT_005d2ef0;
  do {
    if ((float)(fVar9 * (float10)fVar1 + fVar3) < fVar4) break;
    fVar4 = fVar4 + _DAT_005d2eec;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  iVar8 = 0;
  fVar1 = _DAT_005d2ef0;
  do {
    if ((float)(fVar9 * (float10)fVar2) < fVar1) break;
    fVar1 = fVar1 + _DAT_005d2eec;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  FUN_004347e0(DAT_0067eca8,iVar7 + 0x515,awStack_a0,0x10);
  FUN_004347e0(DAT_0067eca8,iVar8 + 0x506,auStack_c0,0x10);
  swprintf(param_2,(size_t)local_80,awStack_a0);
  return;
}

