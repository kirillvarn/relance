
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004256c0(undefined4 *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  uint uVar9;
  float10 extraout_ST0;
  undefined4 *puVar10;
  float fVar11;
  undefined4 ***pppuVar12;
  float fVar13;
  undefined4 uStack_50;
  undefined4 **ppuStack_4c;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float *local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  ppuStack_4c = &local_14;
  uStack_50 = 0;
  (**(code **)(**(int **)TextureLib_exref + 0x58))(*(int **)TextureLib_exref,*param_1);
  pppuVar12 = &ppuStack_4c;
  puVar10 = &uStack_50;
  (**(code **)(**(int **)Pipeline_exref + 0xcc))
            (*(int **)Pipeline_exref,uStack_24,puVar10,pppuVar12,&stack0xffffffb8);
  if ((fStack_20 < _DAT_005c75dc != (fStack_20 == _DAT_005c75dc)) &&
     (fStack_1c < _DAT_005c75dc != (fStack_1c == _DAT_005c75dc))) {
    fStack_20 = (float)puVar10 * fStack_20;
    fStack_1c = (float)pppuVar12 * fStack_1c;
  }
  if ((fStack_18 == _DAT_005c7474) || ((float)local_14 == _DAT_005c7474)) {
    fStack_18 = (float)puVar10;
    local_14 = (float *)(float)pppuVar12;
  }
  else if ((fStack_18 < _DAT_005c75dc != (fStack_18 == _DAT_005c75dc)) &&
          ((float)local_14 < _DAT_005c75dc != ((float)local_14 == _DAT_005c75dc))) {
    fStack_18 = (float)puVar10 * fStack_18;
    local_14 = (float *)((float)pppuVar12 * (float)local_14);
  }
  param_1[2] = (fStack_20 + _DAT_005c99c8) / (float)puVar10;
  param_1[3] = (fStack_1c + _DAT_005c99c8) / (float)pppuVar12;
  fVar13 = fStack_20 + fStack_18;
  param_1[4] = (fVar13 - _DAT_005c99c8) / (float)puVar10;
  fVar11 = fStack_1c + (float)local_14;
  param_1[5] = (fVar11 - _DAT_005c99c8) / (float)pppuVar12;
  uVar8 = ftol();
  param_1[6] = uVar8;
  uVar8 = ftol();
  bVar1 = fStack_10 < _DAT_005c7474;
  param_1[7] = uVar8;
  if (bVar1) {
    fStack_10 = fStack_20;
  }
  if (fStack_c < _DAT_005c7474) {
    fStack_c = fStack_1c;
  }
  if (fStack_8 < _DAT_005c7474) {
    fStack_8 = fVar13;
  }
  if (fStack_4 < _DAT_005c7474) {
    fStack_4 = fVar11;
  }
  fVar13 = 0.0;
  uVar9 = ftol();
  uVar9 = uVar9 & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  if (uVar9 == 1) {
    fVar13 = 0.5;
  }
  if (fStack_18 == _DAT_005c7474) {
    fStack_18 = _DAT_005c75dc;
  }
  ppuStack_4c = (undefined4 **)local_14;
  if ((float)local_14 == _DAT_005c7474) {
    ppuStack_4c = (undefined4 **)0x3f800000;
  }
  fVar11 = fStack_18 * _DAT_005c75e0;
  fVar2 = (float)ppuStack_4c * _DAT_005c75e0;
  fVar3 = (float)extraout_ST0 * _DAT_005c75e0;
  fVar4 = (fStack_4 - fStack_c) * _DAT_005c75e0;
  fVar5 = _DAT_005c75dc / fVar11;
  fVar6 = _DAT_005c75dc / fVar2;
  fVar7 = fVar6 * (fStack_4 - fStack_c) * _DAT_005c75e0;
  param_1[8] = fVar5 * (float)extraout_ST0 * _DAT_005c75e0;
  param_1[9] = fVar7;
  param_1[10] = ((fVar3 + fStack_10 + fVar13) - (fStack_20 + fVar11)) * fVar5;
  param_1[0xb] = ((fVar4 + fStack_c) - (fStack_1c + fVar2)) * fVar6;
  return;
}

