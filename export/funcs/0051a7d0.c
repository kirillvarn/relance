
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0051a7d0(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  float fStack_74;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [4];
  float afStack_54 [5];
  float afStack_40 [4];
  undefined1 auStack_30 [20];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float *pfStack_c;
  
  uVar4 = 0;
  if ((*(int *)(param_1 + 0xc0) == 0) || (uVar4 = 0, *(int *)(param_1 + 0xc0) == 8)) {
LAB_0051ac12:
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  iVar9 = *(int *)(param_1 + 0xc0);
  uVar4 = 0;
  if ((iVar9 == 0) || ((uVar4 = 0, iVar9 == 8 || (uVar4 = 0, iVar9 == -4)))) goto LAB_0051ac12;
  uVar4 = 0;
  if ((*(int *)(iVar9 + 8) == 0) ||
     (uVar4 = *(uint *)(*(int *)(iVar9 + 8) + 0x4c) & 0x503, uVar4 != 0x503)) goto LAB_0051ac12;
  if (*(int *)(param_1 + 0xc0) == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)(*(int *)(param_1 + 0xc0) + -8);
  }
  pfVar5 = (float *)(**(code **)(*piVar8 + 0xc))();
  fStack_74 = 0.0;
  if ((((byte)DAT_00616850 & 1) == 1) || (cVar3 = FUN_004c7c80(), cVar3 != '\0')) {
    fVar11 = (float10)FUN_0042d680();
    fVar11 = fVar11 + (float10)*(float *)(param_1 + 0x134);
    *(float *)(param_1 + 0x134) = (float)fVar11;
    if (fVar11 < (float10)_DAT_005c94f8) goto LAB_0051a9fa;
    fStack_74 = (((float)DAT_00616840 - (float)DAT_00610850 * _DAT_005c75e0) /
                ((float)DAT_00610850 * _DAT_005c75e0)) * *(float *)(param_1 + 0x128) * param_3;
    fVar1 = (((float)DAT_00616844 - (float)DAT_00610854 * _DAT_005c75e0) /
            ((float)DAT_00610854 * _DAT_005c75e0)) * *(float *)(param_1 + 300) * param_3;
  }
  else {
    *(undefined4 *)(param_1 + 0x134) = 0;
    if (*(float *)(param_1 + 0x11c) != _DAT_005c7474) {
      fStack_74 = *(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x11c) * param_3;
    }
    if (*(float *)(param_1 + 0x120) == _DAT_005c7474) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = *(float *)(param_1 + 300) * *(float *)(param_1 + 0x120) * param_3;
    }
  }
  fVar2 = _DAT_005da774;
  if ((fStack_74 != _DAT_005c7474) || (fVar1 != _DAT_005c7474)) {
    fStack_74 = fStack_74 + *(float *)(param_1 + 0x110);
    *(float *)(param_1 + 0x110) = fStack_74;
    if (fStack_74 <= fVar2) {
      if (fStack_74 < _DAT_005c7474) {
        *(float *)(param_1 + 0x110) = fStack_74 + _DAT_005da774;
        *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) + _DAT_005da774;
      }
    }
    else {
      *(float *)(param_1 + 0x110) = fStack_74 - _DAT_005da774;
      *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) - _DAT_005da774;
    }
    fVar2 = _DAT_005dbe10;
    fVar1 = fVar1 + *(float *)(param_1 + 0x118);
    *(float *)(param_1 + 0x118) = fVar1;
    if (fVar1 <= fVar2) {
      if (fVar1 < _DAT_005dbe0c) {
        *(undefined4 *)(param_1 + 0x118) = 0xbf860a92;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x118) = 0x3f860a92;
    }
  }
LAB_0051a9fa:
  param_3 = param_3 * *(float *)(param_1 + 0x130);
  if (param_3 <= _DAT_005c75dc) {
    *(float *)(param_1 + 0x10c) =
         (*(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x10c)) * param_3 +
         *(float *)(param_1 + 0x10c);
    *(float *)(param_1 + 0x114) =
         (*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x114)) * param_3 +
         *(float *)(param_1 + 0x114);
  }
  else {
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x118);
  }
  fVar1 = *(float *)(param_1 + 0x10c);
  pfVar6 = pfVar5;
  pfVar7 = afStack_54;
  for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  fVar11 = (float10)fcos(-(float10)fVar1);
  iVar9 = 3;
  fVar12 = (float10)fsin(-(float10)fVar1);
  pfVar6 = afStack_54 + 2;
  do {
    fVar1 = pfVar6[-2];
    iVar9 = iVar9 + -1;
    pfVar6[-2] = (float)((float10)(float)fVar11 * (float10)fVar1 - fVar12 * (float10)*pfVar6);
    *pfVar6 = (float)((float10)(float)fVar11 * (float10)*pfVar6 + (float10)fVar1 * fVar12);
    pfVar6 = pfVar6 + 3;
  } while (iVar9 != 0);
  iVar9 = 3;
  fVar11 = (float10)fcos(-(float10)*(float *)(param_1 + 0x114));
  fVar12 = (float10)fsin(-(float10)*(float *)(param_1 + 0x114));
  pfVar6 = afStack_54 + 2;
  do {
    fVar1 = pfVar6[-1];
    iVar9 = iVar9 + -1;
    pfVar6[-1] = (float)(fVar12 * (float10)*pfVar6 + (float10)(float)fVar11 * (float10)fVar1);
    *pfVar6 = (float)((float10)(float)fVar11 * (float10)*pfVar6 - (float10)fVar1 * fVar12);
    pfVar6 = pfVar6 + 3;
  } while (iVar9 != 0);
  afStack_64[1] = pfVar5[1];
  afStack_64[2] = pfVar5[4];
  afStack_64[3] = pfVar5[7];
  FUN_00516fe0(auStack_30,afStack_54,afStack_64 + 1);
  FUN_0051dbd0(afStack_54);
  if (DAT_00675220 == (int *)0x0) {
    DAT_00675220 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00675220 + 0x2c))(DAT_00675220,afStack_64 + 1,afStack_54,param_1 + 0x100);
  if (*(int *)(param_1 + 0xc0) == 0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10 = (undefined4 *)(*(int *)(param_1 + 0xc0) + -8);
  }
  pfVar7 = (float *)(**(code **)*puVar10)();
  fVar1 = *pfVar7;
  pfVar5 = afStack_64;
  pfVar6 = afStack_40;
  for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  fVar2 = pfVar7[2];
  fStack_1c = fVar1 + 0.0;
  fStack_14 = fStack_68 + fVar2;
  fStack_18 = fStack_6c + pfVar7[1];
  pfVar5 = afStack_40;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfStack_c = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfStack_c = pfStack_c + 1;
  }
  return (uint)(fStack_68 + fVar2) & 0xffffff00;
}

