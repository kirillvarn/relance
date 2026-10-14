
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00522a60(char *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float fVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  Vector *pVVar16;
  int iVar17;
  float unaff_EBX;
  int **ppiVar18;
  undefined4 *puVar19;
  undefined *puVar20;
  int **ppiVar21;
  float *pfVar22;
  undefined4 *puVar23;
  float10 fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  int *piStack_2f4;
  int *piStack_2f0;
  undefined4 uStack_2ec;
  float fVar27;
  float fVar28;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  int *piStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  char *pcStack_2c0;
  float fStack_2bc;
  undefined8 uStack_2b8;
  float fStack_2b0;
  char *pcStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  int *piStack_294;
  char *local_290;
  float fStack_28c;
  float fStack_288;
  float fStack_27c;
  int *piStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float afStack_244 [6];
  int *apiStack_22c [2];
  float afStack_224 [4];
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  Vector aVStack_208 [12];
  Vector aVStack_1fc [12];
  int iStack_1f0;
  undefined4 auStack_1ec [2];
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 uStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float afStack_198 [4];
  float fStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  float fStack_17c;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_128 [12];
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float afStack_104 [3];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 auStack_b4 [4];
  Vector aVStack_a4 [32];
  undefined4 auStack_84 [4];
  undefined1 auStack_74 [112];
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (*param_1 != '\0') {
    return;
  }
  uStack_2ec = param_2;
  piStack_2f0 = (int *)0x522a92;
  local_290 = param_1;
  puVar9 = (undefined4 *)(**(code **)(*param_2 + 0x40))();
  puVar19 = auStack_b4 + 3;
  for (iVar17 = 0xc; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar19 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar19 = puVar19 + 1;
  }
  if ((DAT_006753b0 & 1) == 0) {
    DAT_006753b0 = DAT_006753b0 | 1;
    piStack_2f0 = (int *)&DAT_00524720;
    piStack_2f4 = (int *)0x522ac0;
    FUN_005b7e6c();
  }
  if ((DAT_006753b0 & 2) == 0) {
    DAT_006753b0 = DAT_006753b0 | 2;
    piStack_2f0 = (int *)&DAT_00524710;
    piStack_2f4 = (int *)0x522ae3;
    FUN_005b7e6c();
  }
  piStack_2f0 = param_2;
  piStack_2f4 = (int *)0x522aef;
  fVar24 = (float10)(**(code **)(*param_2 + 0x18))();
  piStack_2f4 = param_2;
  fStack_2a4 = (float)(fVar24 * (float10)_DAT_005c77f4);
  fVar24 = (float10)(**(code **)(*param_2 + 0x1c))();
  fStack_270 = (float)(fVar24 * (float10)_DAT_005c77f4);
  fVar24 = (float10)fsin((float10)_DAT_005dc88c - (float10)fStack_2a8);
  pcStack_2ac = (char *)(float)fVar24;
  fVar24 = (float10)fcos((float10)_DAT_005dc88c - (float10)fStack_2a8);
  fStack_2c8 = (float)fVar24;
  fVar24 = (float10)fsin((float10)_DAT_005dc88c - (float10)fStack_270);
  fStack_2c4 = (float)fVar24;
  fVar24 = (float10)fcos((float10)_DAT_005dc88c - (float10)fStack_270);
  piStack_2cc = (int *)(float)fVar24;
  pfVar10 = (float *)(**(code **)(*param_2 + 0x10))();
  pfVar22 = afStack_224;
  for (iVar17 = 9; iVar17 != 0; iVar17 = iVar17 + -1) {
    *pfVar22 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar22 = pfVar22 + 1;
  }
  pfVar10 = (float *)(**(code **)(*param_2 + 0xc))();
  afStack_198[1] = *pfVar10;
  afStack_198[2] = pfVar10[1];
  afStack_198[3] = pfVar10[2];
  (**(code **)(*param_2 + 0x18))();
  if (DAT_006753e0 == 0) {
    ppiVar18 = apiStack_22c;
    ppiVar21 = &DAT_0067538c;
    for (iVar17 = 9; iVar17 != 0; iVar17 = iVar17 + -1) {
      *ppiVar21 = *ppiVar18;
      ppiVar18 = ppiVar18 + 1;
      ppiVar21 = ppiVar21 + 1;
    }
    piStack_278 = apiStack_22c[0];
    fStack_274 = afStack_224[1];
    fStack_270 = fStack_214;
    piStack_2cc = apiStack_22c[1];
    fStack_2c8 = afStack_224[2];
    fStack_2a0 = afStack_224[0];
    fStack_2c4 = fStack_210;
    fStack_26c = afStack_198[0];
    fStack_268 = afStack_198[1];
    fStack_264 = afStack_198[2];
    fVar27 = afStack_224[3];
    fVar28 = fStack_20c;
  }
  else {
    piStack_278 = DAT_0067538c;
    fStack_274 = _DAT_00675398;
    fStack_270 = _DAT_006753a4;
    fStack_2a0 = _DAT_00675394;
    piStack_2cc = DAT_00675390;
    fStack_2c8 = _DAT_0067539c;
    fStack_2c4 = _DAT_006753a8;
    fStack_26c = DAT_00675380;
    fStack_268 = DAT_00675384;
    fStack_264 = DAT_00675388;
    fVar27 = _DAT_006753a0;
    fVar28 = _DAT_006753ac;
  }
  fVar1 = fVar27 * fStack_2d4;
  fStack_2b0 = fStack_2a0 * fStack_2d4;
  DAT_00675380 = fStack_26c;
  DAT_00675384 = fStack_268;
  DAT_00675388 = fStack_264;
  uStack_2ec = (int *)fStack_2a0;
  fStack_2a4 = fVar1;
  fStack_29c = fVar27;
  fStack_298 = fVar28;
  FUN_00422b80(fStack_2b0,fVar1,fVar28 * fStack_2d4);
  fVar2 = -(float)uStack_2b8;
  FUN_00422b80((float)piStack_278 * fVar2,fStack_274 * fVar2,fStack_270 * fVar2);
  FUN_00423b60(afStack_104,&fStack_2a0,&fStack_28c);
  FUN_00422b80(fStack_2b0,fVar1,fVar28 * fStack_2d4);
  FUN_00422b80((float)piStack_278 * (float)uStack_2b8,fStack_274 * (float)uStack_2b8,
               fStack_270 * (float)uStack_2b8);
  FUN_00423b60(auStack_128,&fStack_2a0,&fStack_28c);
  fVar1 = fVar27 * fStack_2d8;
  fStack_2b0 = (float)uStack_2ec * fStack_2d8;
  fStack_2a4 = fVar1;
  FUN_00422b80(fStack_2b0,fVar1,fVar28 * fStack_2d8);
  fVar2 = -fStack_2d0;
  FUN_00422b80((float)piStack_2cc * fVar2,fStack_2c8 * fVar2,fStack_2c4 * fVar2);
  FUN_00423b60(&fStack_11c,&fStack_2a0,&fStack_28c);
  FUN_00422b80(fStack_2b0,fVar1,fVar28 * fStack_2d8);
  FUN_00422b80((float)piStack_2cc * fStack_2d0,fStack_2c8 * fStack_2d0,fStack_2c4 * fStack_2d0);
  FUN_00423b60(&fStack_134,&fStack_2a0,&fStack_28c);
  fVar2 = (float)*(int *)(param_1 + 0x20) * _DAT_005c9804;
  FUN_00422b80((float)uStack_2ec * fVar2,fVar27 * fVar2,fVar28 * fVar2);
  FUN_00423b30(auStack_f8,&fStack_26c,&fStack_28c);
  fVar24 = (float10)fptan((float10)uStack_2b8._4_4_);
  fStack_1b4 = (float)fVar24;
  fVar24 = (float10)fptan((float10)fStack_27c);
  fStack_1c0 = (float)fVar24;
  fVar11 = (float)ftol();
  fStack_2a4 = (float)ftol();
  fVar1 = (float)*(int *)(param_1 + 0x20);
  FUN_00422b80((float)uStack_2ec * fVar1,fVar27 * fVar1,fVar28 * fVar1);
  FUN_00422b80(fStack_2a0 + fStack_26c,fStack_29c + fStack_268,fStack_298 + fStack_264);
  CmnAsteroid::CAsteroidField::closest_cube_pos(*(CAsteroidField **)(param_1 + 4),aVStack_1fc);
  piVar12 = (int *)ftol();
  iVar17 = ftol();
  fStack_2bc = (float)iVar17;
  pcStack_2c0 = (char *)ftol();
  fStack_1c4 = -fVar28;
  fStack_1c8 = -fVar27;
  fStack_1b8 = -(float)uStack_2ec;
  pcStack_2ac = pcStack_2c0;
  FUN_00422b80(fStack_1b8,fStack_1c8,fStack_1c4);
  fVar1 = (float)*(int *)(param_1 + 0x24) * *(float *)(param_1 + 0x230);
  FUN_00422b80((float)uStack_2ec * fVar1,fVar27 * fVar1,fVar28 * fVar1);
  fVar1 = (float)(int)fVar11;
  FUN_00422b80((float)piStack_278 * fVar1,fStack_274 * fVar1,fStack_270 * fVar1);
  fVar1 = (float)(int)fStack_2a4;
  FUN_00422b80(fVar1 * (float)piStack_2cc,fStack_2c8 * fVar1,fStack_2c4 * fVar1);
  FUN_00422b80(fStack_110 + fStack_26c,fStack_10c + fStack_268,fStack_108 + fStack_264);
  FUN_00422b80(fStack_248 + fStack_260,afStack_244[0] + fStack_25c,afStack_244[1] + fStack_258);
  FUN_00422b80(fStack_254 + (float)uStack_2ec,fStack_250 + fVar27,fStack_24c + fVar28);
  CmnAsteroid::CAsteroidField::closest_cube_pos
            (*(CAsteroidField **)(param_1 + 4),(Vector *)&fStack_1e4);
  piVar13 = (int *)ftol();
  if ((int)piVar12 <= (int)piVar13) {
    piVar13 = piVar12;
  }
  iVar14 = ftol();
  fStack_2d8 = (float)iVar14;
  if (((int)fStack_2bc <= iVar14) && (fStack_2d8 = (float)iVar17, (int)fStack_2bc < iVar14)) {
    fStack_2bc = (float)iVar14;
  }
  pcVar15 = (char *)ftol();
  pcVar4 = pcVar15;
  if (((int)pcStack_2c0 <= (int)pcVar15) && (pcVar4 = pcStack_2ac, (int)pcStack_2c0 < (int)pcVar15))
  {
    pcStack_2c0 = pcVar15;
  }
  pcStack_2ac = pcVar4;
  FUN_00422b80(fStack_248 + fStack_260,afStack_244[0] + fStack_25c,afStack_244[1] + fStack_258);
  FUN_00422b80((float)uStack_2ec - fStack_254,fVar27 - fStack_250,fVar28 - fStack_24c);
  CmnAsteroid::CAsteroidField::closest_cube_pos(*(CAsteroidField **)(param_1 + 4),aVStack_208);
  piVar12 = (int *)ftol();
  if ((int)piVar13 <= (int)piVar12) {
    piVar12 = piVar13;
  }
  iVar17 = ftol();
  fVar1 = (float)iVar17;
  if (((int)fStack_2d8 <= iVar17) && (fVar1 = fStack_2d8, (int)fStack_2bc < iVar17)) {
    fStack_2bc = (float)iVar17;
  }
  fStack_2d8 = fVar1;
  pcVar15 = (char *)ftol();
  pcVar4 = pcVar15;
  if (((int)pcStack_2ac <= (int)pcVar15) && (pcVar4 = pcStack_2ac, (int)pcStack_2c0 < (int)pcVar15))
  {
    pcStack_2c0 = pcVar15;
  }
  pcStack_2ac = pcVar4;
  FUN_00422b80(fStack_260 - fStack_248,fStack_25c - afStack_244[0],fStack_258 - afStack_244[1]);
  FUN_00422b80((float)uStack_2ec - fStack_254,fVar27 - fStack_250,fVar28 - fStack_24c);
  CmnAsteroid::CAsteroidField::closest_cube_pos
            (*(CAsteroidField **)(param_1 + 4),(Vector *)&iStack_1f0);
  piVar13 = (int *)ftol();
  if ((int)piVar12 <= (int)piVar13) {
    piVar13 = piVar12;
  }
  iVar17 = ftol();
  fVar1 = (float)iVar17;
  if (((int)fStack_2d8 <= iVar17) && (fVar1 = fStack_2d8, (int)fStack_2bc < iVar17)) {
    fStack_2bc = (float)iVar17;
  }
  fStack_2d8 = fVar1;
  pcVar15 = (char *)ftol();
  pcVar4 = pcVar15;
  if (((int)pcStack_2ac <= (int)pcVar15) && (pcVar4 = pcStack_2ac, (int)pcStack_2c0 < (int)pcVar15))
  {
    pcStack_2c0 = pcVar15;
  }
  pcStack_2ac = pcVar4;
  FUN_00422b80(fStack_260 - fStack_248,fStack_25c - afStack_244[0],fStack_258 - afStack_244[1]);
  FUN_00422b80((float)uStack_2ec + fStack_254,fVar27 + fStack_250,fVar28 + fStack_24c);
  CmnAsteroid::CAsteroidField::closest_cube_pos
            (*(CAsteroidField **)(param_1 + 4),(Vector *)&fStack_1d8);
  piVar12 = (int *)ftol();
  if ((int)piVar13 <= (int)piVar12) {
    piVar12 = piVar13;
  }
  iVar17 = ftol();
  fVar1 = (float)iVar17;
  if (((int)fStack_2d8 <= iVar17) && (fVar1 = fStack_2d8, (int)fStack_2bc < iVar17)) {
    fStack_2bc = (float)iVar17;
  }
  fStack_2d8 = fVar1;
  pcVar15 = (char *)ftol();
  pcVar4 = pcVar15;
  if (((int)pcStack_2ac <= (int)pcVar15) && (pcVar4 = pcStack_2ac, (int)pcStack_2c0 < (int)pcVar15))
  {
    pcStack_2c0 = pcVar15;
  }
  pcStack_2ac = pcVar4;
  uStack_1bc = 0;
  puVar9 = &uStack_1bc;
  cVar5 = '\0';
  uStack_2b8 = (double)((ulonglong)(uint)uStack_2b8._4_4_ << 0x20);
  fStack_2b0 = 0.0;
  (**(code **)(**(int **)Pipeline_exref + 0xf4))(*(int **)Pipeline_exref);
  uStack_2ec._0_3_ = CONCAT12(1,(ushort)uStack_2ec);
  if (_DAT_005c75dc <= *(float *)(param_1 + 0xcc)) {
    uStack_2ec._0_3_ = (uint3)(ushort)uStack_2ec;
  }
  uStack_2fc = (float)CONCAT13(1,(int3)param_2);
  if (_DAT_005c75dc <= *(float *)(param_1 + 0xcc)) {
    uStack_2fc = (float)((uint)param_2 & 0xffffff);
  }
  uStack_1a8 = 0;
  (**(code **)(**(int **)Pipeline_exref + 0xf4))(*(int **)Pipeline_exref,0xe,&uStack_1a8);
  if (cVar5 != '\0') {
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,0);
    FUN_004101e0();
    fStack_298 = (float)CONCAT13(fStack_298._3_1_,0xffffff);
    FUN_00410240(&fStack_298);
  }
  pfVar10 = afStack_198;
  for (iVar17 = 0x11; iVar17 != 0; iVar17 = iVar17 + -1) {
    *pfVar10 = 0.0;
    pfVar10 = pfVar10 + 1;
  }
  iVar17 = FUN_005792b0(0x18);
  if (iVar17 == 0) {
    afStack_198[0] = *(float *)(param_1 + 0xb4);
    afStack_198[1] = *(float *)(param_1 + 0xb8);
    afStack_198[2] = *(float *)(param_1 + 0xbc);
    fStack_17c = afStack_198[3];
    fStack_188 = afStack_198[0];
    uStack_184 = afStack_198[1];
    uStack_180 = afStack_198[2];
  }
  else {
    afStack_198[0] = *(float *)(param_1 + 0xb4);
    afStack_198[1] = *(float *)(param_1 + 0xb8);
    afStack_198[2] = *(float *)(param_1 + 0xbc);
    if (cVar5 == '\0') {
      fStack_188 = *(float *)(param_1 + 0xc0);
      uStack_184 = *(undefined4 *)(param_1 + 0xc4);
      uStack_180 = *(undefined4 *)(param_1 + 200);
    }
    else {
      fStack_17c = afStack_198[3];
      fStack_188 = afStack_198[0];
      uStack_184 = afStack_198[1];
      uStack_180 = afStack_198[2];
    }
  }
  fStack_2bc = (float)*(int *)(param_1 + 0x20) * _DAT_005c75e0;
  fStack_298 = (float)*(int *)(param_1 + 0x24) * *(float *)(param_1 + 0x230) + (float)uStack_2ec;
  fStack_1a4 = fStack_298 - fStack_2bc;
  pVVar16 = (Vector *)
            CmnAsteroid::CAsteroidField::closest_cube_pos
                      (*(CAsteroidField **)(param_1 + 4),(Vector *)&fStack_2a4);
  piStack_2f4 = (int *)CmnAsteroid::compute_cube_id(pVVar16);
  uStack_2f8 = (uint)param_2 & 0xffffff;
  bVar8 = false;
  uVar26 = 0x1000000;
  cVar5 = '\x01';
  piStack_2cc = piVar12;
  piVar13 = piStack_2f0;
  if ((int)piVar12 <= (int)fVar27) {
    do {
      while (piStack_294 = piVar13, (int)piStack_294 <= (int)fVar2) {
        fStack_254 = fStack_2c4;
        if ((int)fStack_2c4 <= (int)fStack_2d8) {
          fStack_1a0 = (float)(int)piStack_2cc;
          fStack_19c = (float)(int)piStack_294;
          do {
            pcVar4 = pcStack_2c0;
            fStack_29c = (float)(int)fStack_254;
            fStack_2a4 = fStack_1a0;
            fStack_2a0 = fStack_19c;
            pfVar10 = (float *)CmnAsteroid::CAsteroidField::closest_cube_pos
                                         (*(CAsteroidField **)(pcStack_2c0 + 4),aVStack_a4);
            fStack_250 = *pfVar10;
            fStack_24c = pfVar10[1];
            fStack_248 = pfVar10[2];
            FUN_00422b80(fStack_250 - fStack_110,fStack_24c - fStack_10c,fStack_248 - fStack_108);
            fStack_2c8 = (float)((int)fStack_2c8 + 1);
            if (DAT_00613854 == '\0') {
LAB_00523ccc:
              fVar24 = (float10)(**(code **)**(undefined4 **)(pcVar4 + 0x1c))(&fStack_250);
              if ((float10)_DAT_005d1494 < fVar24) {
                fStack_1c8 = *(float *)(pcVar4 + 0x28);
                cVar5 = '\x01';
                if (*(int **)(pcVar4 + 0xdc) != (int *)0x0) {
                  uStack_2ec = (int *)0xbf800000;
                  cVar5 = (**(code **)(**(int **)(pcVar4 + 0xdc) + 4))(&fStack_250,0,&uStack_2ec);
                  cVar5 = '\x01' - (cVar5 != '\0');
                  if ((cVar5 != '\0') && (_DAT_005c7474 <= (float)uStack_2ec)) {
                    fStack_1c8 = (float)uStack_2ec;
                  }
                }
                piVar13 = (int *)CmnAsteroid::compute_cube_id((Vector *)&fStack_250);
                if ((piVar13 != (int *)0x0) && (cVar5 != '\0')) {
                  if (piVar13 == piStack_2f4) {
                    uStack_2f8 = CONCAT13(1,(undefined3)uStack_2f8);
                    bVar8 = true;
                  }
                  afStack_224[0] = 1.0;
                  afStack_244[4] = 1.0;
                  afStack_244[0] = 1.0;
                  apiStack_22c[1] = (int *)0x0;
                  apiStack_22c[0] = (int *)0x0;
                  afStack_244[5] = 0.0;
                  afStack_244[3] = 0.0;
                  afStack_244[2] = 0.0;
                  afStack_244[1] = 0.0;
                  bVar6 = CmnAsteroid::compute_cube_orientation
                                    ((ulong)piVar13,(Matrix *)afStack_244,
                                     (AxisRotations *)(*(int *)(pcVar4 + 4) + 0x50),fStack_1c8);
                  pcVar4 = pcStack_2c0;
                  if (bVar6) {
                    if ((char)((uint)uVar26 >> 0x18) != '\0') {
                      pcVar15 = pcStack_2c0 + 0x30;
                      uVar26 = 0;
                      iVar17 = (**(code **)(**(int **)VertexBuffer_exref + 0x14))
                                         (*(int **)VertexBuffer_exref,
                                          *(undefined4 *)(pcStack_2c0 + 0x98),
                                          *(undefined4 *)(pcStack_2c0 + 0x9c),&fStack_1c4);
                      if (iVar17 < 0) {
                        (**(code **)FDUMP_exref)
                                  (0x100002,"%s(%d) : *** WARNING: %s",
                                   "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x524,
                                   "Vertex buffer copy in asteroid field failed");
                        return;
                      }
                      (**(code **)(**(int **)VertexBuffer_exref + 0x20))
                                (*(int **)VertexBuffer_exref,fStack_1c8,fStack_1d0,pcVar15,0,
                                 *(undefined4 *)(pcVar4 + 0x9c));
                      (**(code **)(**(int **)VertexBuffer_exref + 0x18))
                                (*(int **)VertexBuffer_exref,auStack_1ec);
                      piVar13 = *(int **)(pcVar4 + 0xa0);
                      if (piVar13 != (int *)0x0) {
                        (**(code **)(*piVar13 + 0x20))(piVar13,0);
                      }
                      piVar13 = *(int **)Pipeline_exref;
                      puVar20 = &DAT_005dc3c4;
                      iVar17 = 0x8d;
                      do {
                        (**(code **)(*piVar13 + 0xf0))(piVar13,iVar17,*(undefined4 *)(puVar20 + 4));
                        iVar17 = *(int *)(puVar20 + 8);
                        puVar20 = puVar20 + 8;
                      } while (iVar17 != 0);
                      iVar17 = 0x89;
                      if ((float)_DAT_005c89b8 <= (float)piStack_2f0[0x33]) {
                        piVar13 = *(int **)Pipeline_exref;
                        puVar20 = &DAT_005dc374;
                        do {
                          (**(code **)(*piVar13 + 0xf0))
                                    (piVar13,iVar17,*(undefined4 *)(puVar20 + 4));
                          iVar17 = *(int *)(puVar20 + 8);
                          puVar20 = puVar20 + 8;
                        } while (iVar17 != 0);
                        piVar13 = *(int **)Pipeline_exref;
                        uVar25 = 0x7f;
                      }
                      else {
                        piVar13 = *(int **)Pipeline_exref;
                        puVar20 = &DAT_005dc394;
                        do {
                          (**(code **)(*piVar13 + 0xf0))
                                    (piVar13,iVar17,*(undefined4 *)(puVar20 + 4));
                          iVar17 = *(int *)(puVar20 + 8);
                          puVar20 = puVar20 + 8;
                        } while (iVar17 != 0);
                        piVar13 = *(int **)Pipeline_exref;
                        uVar25 = 5;
                      }
                      (**(code **)(*piVar13 + 0xf0))(piVar13,0x18,uVar25);
                    }
                    pfVar10 = afStack_244;
                    pfVar22 = afStack_104;
                    for (iVar17 = 9; iVar17 != 0; iVar17 = iVar17 + -1) {
                      *pfVar22 = *pfVar10;
                      pfVar10 = pfVar10 + 1;
                      pfVar22 = pfVar22 + 1;
                    }
                    fStack_e0 = fStack_250;
                    fStack_dc = fStack_24c;
                    fStack_d8 = fStack_248;
                    fStack_1e4 = 1.4013e-45;
                    (**(code **)(**(int **)Pipeline_exref + 0x18))
                              (*(int **)Pipeline_exref,7,&fStack_1e4);
                    if (iStack_1f0 == 0) {
                      (**(code **)(**(int **)Pipeline_exref + 0x6c))
                                (*(int **)Pipeline_exref,&fStack_110);
                      (**(code **)(**(int **)Pipeline_exref + 0x74))
                                (*(int **)Pipeline_exref,auStack_e8);
                    }
                    else {
                      if (DAT_006753d8 == (int *)0x0) {
                        DAT_006753d8 = (int *)FUN_005b73e0();
                      }
                      (**(code **)(*DAT_006753d8 + 0x1c))
                                (DAT_006753d8,auStack_74,&fStack_e0,&fStack_110);
                      puVar19 = auStack_84;
                      puVar23 = auStack_b4;
                      for (iVar17 = 0xc; iVar17 != 0; iVar17 = iVar17 + -1) {
                        *puVar23 = *puVar19;
                        puVar19 = puVar19 + 1;
                        puVar23 = puVar23 + 1;
                      }
                      (**(code **)(**(int **)Pipeline_exref + 0x7c))
                                (*(int **)Pipeline_exref,auStack_b4);
                    }
                    pcVar4 = pcStack_2c0;
                    if ((float)uStack_2b8 <= fStack_1a4) {
                      afStack_198[3] = *(float *)(pcStack_2c0 + 0xcc);
                    }
                    else {
                      afStack_198[3] =
                           ((fStack_298 - (float)uStack_2b8) / fStack_2bc) *
                           *(float *)(pcStack_2c0 + 0xcc);
                      if (afStack_198[3] <= *(float *)(pcStack_2c0 + 0xcc)) {
                        if (afStack_198[3] < _DAT_005c7474) {
                          afStack_198[3] = _DAT_005c7474;
                        }
                      }
                      else {
                        afStack_198[3] = *(float *)(pcStack_2c0 + 0xcc);
                      }
                      if (afStack_198[3] < _DAT_005d1494 != (afStack_198[3] == _DAT_005d1494))
                      goto LAB_00523b7e;
                    }
                    if (DAT_00613855 != '\0') {
                      if ((float)_DAT_005c89b8 <= afStack_198[3]) {
                        piVar13 = *(int **)Pipeline_exref;
                        puVar20 = &DAT_005dc374;
                        iVar17 = 0x89;
                        do {
                          (**(code **)(*piVar13 + 0xf0))
                                    (piVar13,iVar17,*(undefined4 *)(puVar20 + 4));
                          iVar17 = *(int *)(puVar20 + 8);
                          puVar20 = puVar20 + 8;
                        } while (iVar17 != 0);
                        (**(code **)(**(int **)Pipeline_exref + 0xf0))
                                  (*(int **)Pipeline_exref,0x18,0x7f);
                        uStack_2f8 = 0;
                      }
                      else if (uStack_2f8._2_1_ == '\0') {
                        piVar13 = *(int **)Pipeline_exref;
                        puVar20 = &DAT_005dc394;
                        iVar17 = 0x89;
                        do {
                          (**(code **)(*piVar13 + 0xf0))
                                    (piVar13,iVar17,*(undefined4 *)(puVar20 + 4));
                          iVar17 = *(int *)(puVar20 + 8);
                          puVar20 = puVar20 + 8;
                        } while (iVar17 != 0);
                        (**(code **)(**(int **)Pipeline_exref + 0xf0))
                                  (*(int **)Pipeline_exref,0x18,5);
                        uStack_2f8 = 0x10000;
                      }
                    }
                    (**(code **)(**(int **)Pipeline_exref + 0xac))
                              (*(int **)Pipeline_exref,afStack_198);
                    if (DAT_006753e4 == 0) {
                      (**(code **)(**(int **)Pipeline_exref + 0x120))
                                (*(int **)Pipeline_exref,*(undefined4 *)(pcVar4 + 0xb0),fStack_1c4,
                                 uStack_1bc,*(undefined4 *)(pcVar4 + 0x9c),
                                 *(undefined4 *)(pcVar4 + 0xa8),*(undefined4 *)(pcVar4 + 0xac),0);
                    }
                  }
                }
              }
            }
            else {
              fVar1 = ABS((float)param_2 * fStack_1e0 +
                          uStack_2fc * fStack_1dc + fStack_1d0 * (float)puVar9);
              uStack_2b8 = (double)fVar1;
              if (fVar1 <= fStack_298) {
                fVar3 = ((float)param_2 * fStack_28c +
                        uStack_2fc * fStack_288 + (float)puVar9 * (float)local_290) *
                        ((float)_DAT_005c89b8 / fVar1);
                if (fStack_1cc < ABS(fVar3)) {
                  if (fVar3 <= _DAT_005c7474) {
                    fVar3 = fStack_13c * (float)param_2 +
                            fStack_138 * uStack_2fc + fStack_140 * (float)puVar9;
                  }
                  else {
                    fVar3 = fStack_118 * (float)param_2 +
                            fStack_114 * uStack_2fc + fStack_11c * (float)puVar9;
                  }
                  if (fVar3 < _DAT_005c7474) goto LAB_00523b7e;
                }
                fVar1 = ((float)param_2 * unaff_EBX + uStack_2fc * fVar11 + (float)puVar9 * fVar28)
                        * ((float)_DAT_005c89b8 / fVar1);
                if (fStack_1d8 < ABS(fVar1)) {
                  if (fVar1 <= _DAT_005c7474) {
                    fVar1 = fStack_148 * (float)param_2 +
                            fStack_144 * uStack_2fc + fStack_14c * (float)puVar9;
                  }
                  else {
                    fVar1 = fStack_130 * (float)param_2 +
                            fStack_12c * uStack_2fc + fStack_134 * (float)puVar9;
                  }
                  if (fVar1 < _DAT_005c7474) goto LAB_00523b7e;
                }
                goto LAB_00523ccc;
              }
            }
LAB_00523b7e:
            fStack_254 = (float)((int)fStack_254 + *(int *)(pcStack_2c0 + 0x20));
          } while ((int)fStack_254 <= (int)fStack_2d8);
        }
        param_1 = pcStack_2c0;
        piVar13 = (int *)((int)piStack_294 + *(int *)(pcStack_2c0 + 0x20));
      }
      cVar5 = (char)((uint)uVar26 >> 0x18);
      piStack_2cc = (int *)((int)piStack_2cc + *(int *)(param_1 + 0x20));
      piVar13 = piStack_2f0;
    } while ((int)piStack_2cc <= (int)fVar27);
    if (bVar8) goto LAB_00524690;
  }
  piVar13 = piStack_2f4;
  if (piStack_2f4 == (int *)0x0) goto LAB_00524690;
  CmnAsteroid::CAsteroidField::closest_cube_pos
            (*(CAsteroidField **)(param_1 + 4),(Vector *)&stack0xfffffd1c);
  fVar24 = (float10)(**(code **)**(undefined4 **)(param_1 + 0x1c))(&stack0xfffffd1c);
  piStack_2f4 = *(int **)(param_1 + 0x28);
  if (fVar24 <= (float10)_DAT_005d1494) goto LAB_00524690;
  if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
    piStack_2cc = (int *)0xbf800000;
    cVar7 = (**(code **)(**(int **)(param_1 + 0xdc) + 4))(&stack0xfffffd1c,0,&piStack_2cc);
    if (cVar7 != '\0') goto LAB_00524690;
    if (_DAT_005c7474 <= (float)piStack_2cc) {
      piStack_2f4 = piStack_2cc;
    }
  }
  afStack_224[0] = 1.0;
  afStack_244[4] = 1.0;
  afStack_244[0] = 1.0;
  apiStack_22c[1] = (int *)0x0;
  apiStack_22c[0] = (int *)0x0;
  afStack_244[5] = 0.0;
  afStack_244[3] = 0.0;
  afStack_244[2] = 0.0;
  afStack_244[1] = 0.0;
  bVar8 = CmnAsteroid::compute_cube_orientation
                    ((ulong)piVar13,(Matrix *)afStack_244,
                     (AxisRotations *)(*(int *)(param_1 + 4) + 0x50),(float)piStack_2f4);
  if (!bVar8) goto LAB_00524690;
  if (cVar5 != '\0') {
    iVar17 = (**(code **)(**(int **)VertexBuffer_exref + 0x14))
                       (*(int **)VertexBuffer_exref,*(undefined4 *)(param_1 + 0x98),
                        *(undefined4 *)(param_1 + 0x9c),&fStack_1c4);
    if (iVar17 < 0) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x580,
                 "Vertex buffer copy in asteroid field failed");
      return;
    }
    (**(code **)(**(int **)VertexBuffer_exref + 0x20))
              (*(int **)VertexBuffer_exref,fStack_1c8,fStack_1d0,param_1 + 0x30,0,
               *(undefined4 *)(param_1 + 0x9c));
    (**(code **)(**(int **)VertexBuffer_exref + 0x18))(*(int **)VertexBuffer_exref,auStack_1ec);
    piVar13 = *(int **)(param_1 + 0xa0);
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 0x20))(piVar13,0);
    }
    piVar13 = *(int **)Pipeline_exref;
    puVar20 = &DAT_005dc3c4;
    iVar17 = 0x8d;
    do {
      (**(code **)(*piVar13 + 0xf0))(piVar13,iVar17,*(undefined4 *)(puVar20 + 4));
      iVar17 = *(int *)(puVar20 + 8);
      puVar20 = puVar20 + 8;
    } while (iVar17 != 0);
    if ((float)_DAT_005c89b8 <= *(float *)(param_1 + 0xcc)) {
      piVar13 = *(int **)Pipeline_exref;
      puVar20 = &DAT_005dc374;
      iVar17 = 0x89;
      do {
        (**(code **)(*piVar13 + 0xf0))(piVar13,iVar17,*(undefined4 *)(puVar20 + 4));
        iVar17 = *(int *)(puVar20 + 8);
        puVar20 = puVar20 + 8;
      } while (iVar17 != 0);
      uVar26 = 0x7f;
    }
    else {
      piVar13 = *(int **)Pipeline_exref;
      puVar20 = &DAT_005dc394;
      iVar17 = 0x89;
      do {
        (**(code **)(*piVar13 + 0xf0))(piVar13,iVar17,*(undefined4 *)(puVar20 + 4));
        iVar17 = *(int *)(puVar20 + 8);
        puVar20 = puVar20 + 8;
      } while (iVar17 != 0);
      uVar26 = 5;
    }
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,uVar26);
  }
  pfVar10 = afStack_244;
  pfVar22 = afStack_104;
  for (iVar17 = 9; iVar17 != 0; iVar17 = iVar17 + -1) {
    *pfVar22 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar22 = pfVar22 + 1;
  }
  piStack_2f4 = (int *)0x1;
  cVar5 = (char)((uint)&piStack_2f4 >> 0x10);
  fStack_e0 = fVar28;
  fStack_dc = unaff_EBX;
  fStack_d8 = fVar11;
  (**(code **)(**(int **)Pipeline_exref + 0x18))(*(int **)Pipeline_exref,7);
  if (param_2 == (int *)0x0) {
    (**(code **)(**(int **)Pipeline_exref + 0x6c))(*(int **)Pipeline_exref,&fStack_110);
    (**(code **)(**(int **)Pipeline_exref + 0x74))(*(int **)Pipeline_exref,auStack_e8);
  }
  else {
    if (DAT_006753d8 == (int *)0x0) {
      DAT_006753d8 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_006753d8 + 0x1c))(DAT_006753d8,aVStack_a4,&fStack_e0,&fStack_110);
    puVar9 = auStack_b4;
    puVar19 = auStack_84;
    for (iVar17 = 0xc; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar19 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar19 = puVar19 + 1;
    }
    (**(code **)(**(int **)Pipeline_exref + 0x7c))(*(int **)Pipeline_exref,auStack_84);
  }
  fStack_1b0 = *(float *)(param_1 + 0xcc);
  if (DAT_00613855 != '\0') {
    if ((float)_DAT_005c89b8 <= fStack_1b0) {
      piVar13 = *(int **)Pipeline_exref;
      puVar20 = &DAT_005dc374;
      iVar17 = 0x89;
      do {
        (**(code **)(*piVar13 + 0xf0))(piVar13,iVar17,*(undefined4 *)(puVar20 + 4));
        iVar17 = *(int *)(puVar20 + 8);
        puVar20 = puVar20 + 8;
      } while (iVar17 != 0);
      piVar13 = *(int **)Pipeline_exref;
      uVar26 = 0x7f;
    }
    else {
      if (cVar5 != '\0') goto LAB_0052462c;
      piVar13 = *(int **)Pipeline_exref;
      puVar20 = &DAT_005dc394;
      iVar17 = 0x89;
      do {
        (**(code **)(*piVar13 + 0xf0))(piVar13,iVar17,*(undefined4 *)(puVar20 + 4));
        iVar17 = *(int *)(puVar20 + 8);
        puVar20 = puVar20 + 8;
      } while (iVar17 != 0);
      piVar13 = *(int **)Pipeline_exref;
      uVar26 = 5;
    }
    (**(code **)(*piVar13 + 0xf0))(piVar13,0x18,uVar26);
  }
LAB_0052462c:
  (**(code **)(**(int **)Pipeline_exref + 0xac))(*(int **)Pipeline_exref,&uStack_1bc);
  if (DAT_006753e4 == 0) {
    (**(code **)(**(int **)Pipeline_exref + 0x120))
              (*(int **)Pipeline_exref,*(undefined4 *)(param_1 + 0xb0),fStack_1c4,uStack_1bc,
               *(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa8),
               *(undefined4 *)(param_1 + 0xac),0);
  }
LAB_00524690:
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,uStack_1d4);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,fStack_1c0);
  DAT_006753bc = DAT_006753bc + (int)fVar27;
  DAT_006753b8 = DAT_006753b8 + (int)unaff_EBX;
  DAT_006753b4 = DAT_006753b4 + (*(uint *)(param_1 + 0xac) / 3) * (int)fVar27;
  return;
}

