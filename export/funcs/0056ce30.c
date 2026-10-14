
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056ce30(int param_1)

{
  byte *pbVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  CHARACTER_ID *pCVar11;
  float10 fVar12;
  undefined4 uStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  uint uStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  CHARACTER_ID aCStack_208 [516];
  
  piVar8 = *(int **)(param_1 + 0xc);
  while (piVar8 != (int *)0x0) {
    piVar10 = (int *)piVar8[2];
    if ((*(byte *)(piVar8 + 0x1b) & 1) == 0) {
      (**(code **)(*piVar8 + 0x30))();
      piVar8 = piVar10;
    }
    else {
      (**(code **)(*piVar8 + 0x2c))();
      piVar8 = piVar10;
    }
  }
  iVar9 = *(int *)(param_1 + 0xd8);
  iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 0x7c);
  iVar5 = -1;
  if (*(int *)(iVar9 + 0x7c) != -1) {
    iVar5 = *(int *)(iVar9 + 0x7c);
  }
  if (iVar2 != -1) {
    iVar5 = iVar2;
  }
  if ((-2 < iVar5) && (iVar5 < *(int *)(iVar9 + 0x8a4))) {
    *(int *)(iVar9 + 0x80) = iVar5;
  }
  if ((-2 < iVar5) && (iVar5 < *(int *)(*(int *)(param_1 + 0xdc) + 0x8a4))) {
    *(int *)(*(int *)(param_1 + 0xdc) + 0x80) = iVar5;
  }
  if (_DAT_005c89b8 <= *(double *)(param_1 + 0x108)) {
    if (*(char *)(param_1 + 0x110) == '\0') goto LAB_0056d283;
  }
  else if (*(char *)(param_1 + 0x110) == '\0') {
    fVar12 = (float10)FUN_0042d680();
    if ((float10)_DAT_005c75e8 < fVar12) {
      fVar12 = (float10)_DAT_005c75e8;
    }
    uStack_218 = 2;
    *(double *)(param_1 + 0x108) =
         (double)(fVar12 * (float10)_DAT_005e2a58 + (float10)*(double *)(param_1 + 0x108));
    piVar8 = (int *)(param_1 + 0xf4);
    do {
      uVar4 = uStack_218;
      fVar3 = (float)(int)uStack_218 * (float)_DAT_005c7720 + (float)*(double *)(param_1 + 0x108);
      if (fVar3 <= (float)_DAT_005c8ba8) {
        pfVar6 = &fStack_224;
        fStack_220 = _DAT_005c7474;
        fStack_21c = _DAT_005c7474;
        fStack_224 = fVar3;
      }
      else {
        pfVar6 = &fStack_214;
        fStack_214 = _DAT_005c7474;
        fStack_210 = _DAT_005c7474;
        fStack_20c = _DAT_005c7474;
      }
      (**(code **)(*(int *)*piVar8 + 0x14))(pfVar6);
      piVar8 = piVar8 + 1;
      uStack_218 = uVar4 - 1;
    } while (uStack_218 < 0x80000000);
    fStack_21c = 0.0;
    fStack_220 = 0.0;
    if (*(double *)(param_1 + 0x108) <= _DAT_005c8ba8) {
      fStack_224 = (float)((float10)*(double *)(param_1 + 0x108) * (float10)_DAT_005e2bb0);
      (**(code **)(**(int **)(param_1 + 0x100) + 0x14))(&fStack_224);
      fStack_224 = (float)*(double *)(param_1 + 0x108);
      uStack_228 = 0;
      fStack_220 = 0.0;
      (**(code **)(**(int **)(param_1 + 0x104) + 0x14))(&uStack_228);
    }
    else {
      fStack_224 = 0.0;
      (**(code **)(**(int **)(param_1 + 0x100) + 0x14))(&fStack_224);
      uStack_228 = 0;
      fStack_224 = 0.0;
      fStack_220 = 0.0;
      (**(code **)(**(int **)(param_1 + 0x104) + 0x14))(&uStack_228);
      *(byte *)(*(int *)(param_1 + 0xb8) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x6c) | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xbc) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xc0) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xc4) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 200) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xcc) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xd0) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      if (*(int *)(*(int *)(param_1 + 0xd8) + 0x8a4) + -0x14 < 1) {
        pbVar1 = (byte *)(*(int *)(param_1 + 0xd4) + 0x6c);
        *pbVar1 = *pbVar1 & 0xfc;
      }
      else {
        pbVar1 = (byte *)(*(int *)(param_1 + 0xd4) + 0x6c);
        *pbVar1 = *pbVar1 | 3;
      }
      pbVar1 = (byte *)(*(int *)(param_1 + 0xd8) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xdc) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xe0) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xe4) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xe8) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xec) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xf0) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xf4) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xf8) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xfc) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0x40000000;
    }
    if ((_DAT_005e2a50 < *(double *)(param_1 + 0x108)) &&
       (*(double *)(param_1 + 0x108) < _DAT_005d5070)) {
      FUN_00564570(0x1b);
    }
    goto LAB_0056d283;
  }
  fVar12 = (float10)FUN_0042d680();
  piVar8 = (int *)(param_1 + 0xf4);
  uStack_218 = 2;
  *(double *)(param_1 + 0x108) =
       (double)((float10)*(double *)(param_1 + 0x108) - fVar12 * (float10)_DAT_005d3c48);
  piVar10 = piVar8;
  do {
    uVar4 = uStack_218;
    fVar3 = (float)(int)uStack_218 * (float)_DAT_005c7720 + (float)*(double *)(param_1 + 0x108);
    if (fVar3 <= (float)_DAT_005c8ba8) {
      pfVar6 = &fStack_214;
      fStack_210 = _DAT_005c7474;
      fStack_20c = _DAT_005c7474;
      fStack_214 = fVar3;
    }
    else {
      pfVar6 = &fStack_224;
      fStack_224 = _DAT_005c7474;
      fStack_220 = _DAT_005c7474;
      fStack_21c = _DAT_005c7474;
    }
    (**(code **)(*(int *)*piVar10 + 0x14))(pfVar6);
    piVar10 = piVar10 + 1;
    uStack_218 = uVar4 - 1;
  } while (uStack_218 < 0x80000000);
  if (_DAT_005e2a50 <= *(double *)(param_1 + 0x108)) {
    fStack_220 = 0.0;
    fStack_21c = 0.0;
    fStack_224 = (float)((float10)*(double *)(param_1 + 0x108) * (float10)_DAT_005e2bb0);
    (**(code **)(**(int **)(param_1 + 0x100) + 0x14))(&fStack_224);
    fStack_224 = (float)*(double *)(param_1 + 0x108);
    uStack_228 = 0;
    fStack_220 = 0.0;
    (**(code **)(**(int **)(param_1 + 0x104) + 0x14))(&uStack_228);
  }
  else {
    iVar9 = 3;
    do {
      iVar2 = *piVar8;
      piVar8 = piVar8 + 1;
      iVar9 = iVar9 + -1;
      *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) & 0xfc;
    } while (iVar9 != 0);
    *(undefined1 *)(param_1 + 0x110) = 0;
    if (*(int *)(param_1 + 0x114) == 1) {
      *(undefined1 *)(param_1 + 0x368) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xb4) = 1;
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xc0000000;
  }
LAB_0056d283:
  if (*(char *)(param_1 + 0x369) != '\0') {
    *(undefined1 *)(param_1 + 0x369) = 0;
    *(undefined1 *)(param_1 + 0x368) = 0;
    if (*(char *)(param_1 + 0x319) == '\0') {
      FUN_00579280(1);
      FUN_00579290();
      puVar7 = (undefined4 *)FUN_005a1f20(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x8ac));
      if (puVar7 != (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x319) = 1;
        pCVar11 = aCStack_208;
        for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)pCVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          pCVar11 = pCVar11 + 4;
        }
        CHARACTER_ID::operator=((CHARACTER_ID *)(param_1 + 0x118),aCStack_208);
        *(undefined4 *)(param_1 + 0xb4) = 0xc;
      }
    }
  }
  return;
}

