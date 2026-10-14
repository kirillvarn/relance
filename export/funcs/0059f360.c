
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0059f360(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined1 local_54 [20];
  undefined4 auStack_40 [4];
  Vector local_30 [20];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  fVar8 = (float10)FUN_0042d680();
  if (_DAT_005c7474 < *(float *)(param_1 + 0xe4)) {
    fVar8 = fVar8 * (float10)*(float *)(param_1 + 0xe4);
    if (*(char *)(param_1 + 0xdc) == '\0') {
      if (*(float *)(param_1 + 0xe0) <= _DAT_005da41c) {
        fVar8 = (float10)*(float *)(param_1 + 0xe0) - (fVar8 + fVar8);
        *(float *)(param_1 + 0xe0) = (float)fVar8;
        if (fVar8 < (float10)_DAT_005c75dc) {
          *(undefined4 *)(param_1 + 0xe0) = 0;
        }
      }
      else {
        fVar8 = fVar8 + fVar8 + (float10)*(float *)(param_1 + 0xe0);
        *(float *)(param_1 + 0xe0) = (float)fVar8;
        if ((float10)_DAT_005e1734 < fVar8) {
          *(undefined4 *)(param_1 + 0xe0) = 0;
        }
      }
    }
    else {
      *(float *)(param_1 + 0xe0) = (float)(fVar8 + (float10)*(float *)(param_1 + 0xe0));
    }
  }
  fVar1 = *(float *)(param_1 + 0xe0);
  if (*(float *)(param_1 + 0xe0) < _DAT_005ca23c) {
    if (fVar1 < _DAT_005e1730 == (fVar1 == _DAT_005e1730)) goto LAB_0059f43f;
    fVar1 = *(float *)(param_1 + 0xe0) + _DAT_005ca23c;
  }
  else {
    fVar1 = fVar1 - _DAT_005ca23c;
  }
  *(float *)(param_1 + 0xe0) = fVar1;
LAB_0059f43f:
  uVar4 = RotateMatrix(local_30);
  if (DAT_0067dd10 == (int *)0x0) {
    DAT_0067dd10 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_0067dd10 + 0x20))(DAT_0067dd10,local_54,param_1 + 0xac,uVar4);
  uStack_1c = *(undefined4 *)(param_1 + 0xd0);
  puVar6 = (undefined4 *)&stack0xffffff9c;
  puVar7 = auStack_40;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xd4);
  uStack_14 = *(undefined4 *)(param_1 + 0xd8);
  puVar6 = auStack_40;
  puVar7 = (undefined4 *)(param_1 + 0x3c);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00421050((undefined4 *)(param_1 + 0x3c));
  FUN_00421070();
  piVar3 = *(int **)(param_1 + 0xc);
  while (piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    if ((*(byte *)(piVar3 + 0x1b) & 1) == 0) {
      (**(code **)(*piVar3 + 0x30))();
      piVar3 = piVar2;
    }
    else {
      (**(code **)(*piVar3 + 0x2c))();
      piVar3 = piVar2;
    }
  }
  return;
}

