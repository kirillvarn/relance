
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00528240(int param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float unaff_retaddr;
  undefined1 *puVar8;
  float fVar9;
  undefined4 uStack_18;
  undefined1 auStack_10 [12];
  float fStack_4;
  
  fVar9 = param_2;
  cVar3 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  if (cVar3 == '\0') {
    return;
  }
  if (*(char *)(*(int *)(param_1 + 4) + 0x54) == '\0') {
    if (*(int *)(param_1 + 0x38) != 0) {
      fVar9 = (float)((int)&uStack_18 + 3);
      uStack_18 = uStack_18 & 0xffffff;
      (**(code **)(**(int **)(param_1 + 8) + 0x134))();
      puVar8 = auStack_10;
      pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 8) + 4))(puVar8);
      fVar2 = SQRT(pfVar4[2] * pfVar4[2] + pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4);
      if ((fVar2 <= (float)_DAT_005c75f8) || ((char)((uint)fVar9 >> 0x18) != '\0')) {
        cVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0x14))
                          (*(int **)(param_1 + 0x38),puVar8,fVar9,fVar2);
        if (cVar3 != '\0') {
          (**(code **)(**(int **)(param_1 + 0x38) + 0x60))();
        }
      }
      else {
        cVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0x14))(*(int **)(param_1 + 0x38));
        if (cVar3 == '\0') {
          FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x38) + 100),0);
        }
        fVar9 = fVar9 / *(float *)(param_1 + 0x30);
        iVar5 = FUN_005792b0(0x2d);
        if ((iVar5 == 2) && (_DAT_005c75dc <= fVar9)) {
          fVar9 = 1.0;
        }
        iVar5 = *(int *)(param_1 + 4);
        if (iVar5 == 0) {
          iVar7 = 0;
          iVar6 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
          iVar6 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
        }
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
        }
        (**(code **)(**(int **)(param_1 + 0x38) + 0x98))
                  ((float)(*(int *)(iVar7 + 0x68) - *(int *)(iVar6 + 100)) * fVar9 +
                   (float)*(int *)(iVar5 + 100));
        iVar5 = *(int *)(param_1 + 4);
        if (iVar5 == 0) {
          iVar7 = 0;
          iVar6 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
          iVar6 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
        }
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
        }
        (**(code **)(**(int **)(param_1 + 0x38) + 0x80))
                  ((float)(*(int *)(iVar7 + 0x70) - *(int *)(iVar6 + 0x6c)) * (float)puVar8 +
                   (float)*(int *)(iVar5 + 0x6c));
      }
    }
    piVar1 = *(int **)(param_1 + 0x40);
    if (piVar1 == (int *)0x0) {
      return;
    }
    cVar3 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (cVar3 == '\0') {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x40) + 100),0);
    }
    cVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))(*(int **)(param_1 + 0x40));
    if (cVar3 != '\0') {
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 == 0) {
        iVar7 = 0;
        iVar6 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
        iVar6 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
      }
      uStack_18 = *(int *)(iVar7 + 0x80) - *(int *)(iVar6 + 0x7c);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
      }
      (**(code **)(**(int **)(param_1 + 0x40) + 0x98))
                ((float)(int)uStack_18 * fStack_4 + (float)*(int *)(iVar5 + 0x7c));
    }
    if (*(float *)THROTTLE_STEADY_TIME_exref <= *(float *)(param_1 + 0x24)) {
      fVar9 = unaff_retaddr * *(float *)DELTA_THROTTLE_ATTEN_MOD_STEADY_exref +
              *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x2c) = fVar9;
      if (fVar9 < -*(float *)THROTTLE_ATTEN_MOD_RANGE_exref) {
        fVar9 = -*(float *)THROTTLE_ATTEN_MOD_RANGE_exref;
      }
    }
    else {
      fVar9 = unaff_retaddr * *(float *)DELTA_THROTTLE_ATTEN_MOD_CHANGING_exref +
              *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x2c) = fVar9;
      if (_DAT_005c7474 < fVar9) {
        fVar9 = _DAT_005c7474;
      }
    }
    *(float *)(param_1 + 0x2c) = fVar9;
    (**(code **)(**(int **)(param_1 + 0x40) + 0x80))(*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  if ((piVar1 == (int *)0x0) || (cVar3 = (**(code **)(*piVar1 + 0x14))(piVar1), cVar3 == '\0')) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  param_2 = 0.0;
  fVar9 = fVar9 + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x28) = fVar9;
  fVar2 = param_2;
  if (*(float *)CRUISE_STEADY_TIME_exref < fVar9) {
    fVar2 = (fVar9 - *(float *)CRUISE_STEADY_TIME_exref) *
            *(float *)DELTA_CRUISE_ATTEN_MOD_STEADY_exref;
    param_2 = -*(float *)CRUISE_ATTEN_MOD_RANGE_exref;
    if (fVar2 < param_2) goto LAB_0052853a;
  }
  param_2 = fVar2;
LAB_0052853a:
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x80))(param_2);
  return;
}

