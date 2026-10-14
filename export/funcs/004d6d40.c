
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d6d40(int param_1,undefined4 param_2)

{
  float fVar1;
  int *piVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_3c [2];
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar2 = (int *)FUN_0054baf0();
  if (piVar2 != (int *)0x0) {
    uStack_48 = 0x4d6d5b;
    uStack_4c = (**(code **)(*piVar2 + 0x10))();
    if (DAT_00674a0c == (int *)0x0) {
      uStack_48 = 0x4d6d6b;
      DAT_00674a0c = (int *)FUN_005b73e0();
    }
    uStack_48 = param_2;
    (**(code **)(*DAT_00674a0c + 0x3c))(DAT_00674a0c,auStack_3c);
    fVar3 = (float10)fcos((float10)_DAT_005d8158);
    auStack_3c[0] = uStack_48;
    uStack_2c = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0x3f800000;
    fVar4 = (float10)fsin((float10)_DAT_005d8158);
    fStack_34 = (float)fVar3;
    fStack_30 = (float)-fVar4;
    fStack_28 = (float)fVar4;
    fStack_24 = (float)fVar3;
    if (DAT_00674a0c == (int *)0x0) {
      DAT_00674a0c = (int *)FUN_005b73e0();
    }
    pfVar6 = &fStack_34;
    puVar5 = &uStack_4c;
    (**(code **)(*DAT_00674a0c + 0x38))(DAT_00674a0c,puVar5,pfVar6,&stack0xffffffc0);
    if (_DAT_005c7474 < (float)pfVar6) {
      if (_DAT_005c7474 < (float)puVar5) {
        fVar1 = _DAT_005d800c + *(float *)(param_1 + 0x38c);
        *(float *)(param_1 + 0x38c) = fVar1;
        if (_DAT_005d8004 <= fVar1) {
          fVar1 = _DAT_005d8004;
        }
        *(float *)(param_1 + 0x38c) = fVar1;
        return;
      }
      fVar1 = _DAT_005d800c + *(float *)(param_1 + 0x3e4);
      *(float *)(param_1 + 0x3e4) = fVar1;
      if (_DAT_005d8004 <= fVar1) {
        fVar1 = _DAT_005d8004;
      }
      *(float *)(param_1 + 0x3e4) = fVar1;
      return;
    }
    if (_DAT_005c7474 < (float)puVar5) {
      fVar1 = _DAT_005d800c + *(float *)(param_1 + 0x410);
      *(float *)(param_1 + 0x410) = fVar1;
      if (_DAT_005d8004 <= fVar1) {
        fVar1 = _DAT_005d8004;
      }
      *(float *)(param_1 + 0x410) = fVar1;
      return;
    }
    fVar1 = _DAT_005d800c + *(float *)(param_1 + 0x3b8);
    *(float *)(param_1 + 0x3b8) = fVar1;
    if (_DAT_005d8004 <= fVar1) {
      fVar1 = _DAT_005d8004;
    }
    *(float *)(param_1 + 0x3b8) = fVar1;
  }
  return;
}

