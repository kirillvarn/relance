
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d6f10(int param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 *puStack_b0;
  undefined1 *puStack_ac;
  int *piStack_a8;
  undefined1 *puStack_a4;
  undefined4 *puStack_a0;
  float *pfStack_9c;
  int *piStack_98;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined1 auStack_54 [12];
  undefined4 uStack_48;
  undefined1 auStack_44 [12];
  undefined4 auStack_38 [9];
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar2 = (int *)FUN_0054baf0();
  if (piVar2 != (int *)0x0) {
    piStack_98 = &local_6c;
    pfStack_9c = &local_7c;
    puStack_a0 = (undefined4 *)0x4d6f3b;
    (**(code **)(*piVar2 + 0x2c))();
    puStack_a0 = (undefined4 *)0x4d6f42;
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
    fStack_88 = -fStack_84;
    puVar5 = auStack_38;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    uStack_c = local_6c;
    fStack_14 = fStack_74;
    uStack_10 = uStack_70;
    if (DAT_00674a0c == (int *)0x0) {
      pfStack_9c = (float *)0x4d6f99;
      DAT_00674a0c = (int *)FUN_005b73e0();
    }
    pfStack_9c = (float *)&stack0xffffff70;
    puStack_a0 = auStack_38;
    puStack_a4 = auStack_44;
    puStack_ac = (undefined1 *)0x4d6fb3;
    piStack_a8 = DAT_00674a0c;
    (**(code **)(*DAT_00674a0c + 0x30))();
    puStack_ac = auStack_54;
    puStack_b0 = (undefined4 *)0x4d6fc4;
    FUN_004d7270();
    if (DAT_00674a0c == (int *)0x0) {
      puStack_ac = (undefined1 *)0x4d6fd2;
      DAT_00674a0c = (int *)FUN_005b73e0();
    }
    puStack_ac = (undefined1 *)fStack_14;
    puStack_b0 = &uStack_48;
    (**(code **)(*DAT_00674a0c + 0x3c))(DAT_00674a0c,&puStack_a0);
    puStack_a0 = puStack_b0;
    pfStack_9c = (float *)puStack_ac;
    piStack_98 = piStack_a8;
    if ((ABS((float)puStack_b0) < ABS((float)piStack_a8)) &&
       (ABS((float)puStack_ac) < ABS((float)piStack_a8))) {
      if ((float)piStack_a8 < _DAT_005c7474) {
        return;
      }
      fVar1 = _DAT_005d8008 + *(float *)(param_1 + 0x38c);
      *(float *)(param_1 + 0x38c) = fVar1;
      if (_DAT_005d8004 <= fVar1) {
        fVar1 = _DAT_005d8004;
      }
      *(float *)(param_1 + 0x38c) = fVar1;
      fVar1 = _DAT_005d8008 + *(float *)(param_1 + 0x3b8);
      *(float *)(param_1 + 0x3b8) = fVar1;
      if (_DAT_005d8004 <= fVar1) {
        fVar1 = _DAT_005d8004;
      }
      *(float *)(param_1 + 0x3b8) = fVar1;
      fVar1 = _DAT_005d8008 + *(float *)(param_1 + 0x3e4);
      *(float *)(param_1 + 0x3e4) = fVar1;
      if (_DAT_005d8004 <= fVar1) {
        fVar1 = _DAT_005d8004;
      }
      *(float *)(param_1 + 0x3e4) = fVar1;
      fVar1 = _DAT_005d8008 + *(float *)(param_1 + 0x410);
      *(float *)(param_1 + 0x410) = fVar1;
      if (_DAT_005d8004 <= fVar1) {
        fVar1 = _DAT_005d8004;
      }
      *(float *)(param_1 + 0x410) = fVar1;
    }
    fVar6 = (float10)fcos((float10)_DAT_005d8158);
    uStack_80 = 0;
    fStack_74 = 0.0;
    uStack_70 = 0;
    local_6c = 0;
    uStack_68 = 0x3f800000;
    fVar7 = (float10)fsin((float10)_DAT_005d8158);
    fStack_88 = (float)fVar6;
    fStack_84 = (float)-fVar7;
    local_7c = (float)fVar7;
    fStack_78 = (float)fVar6;
    if (DAT_00674a0c == (int *)0x0) {
      DAT_00674a0c = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00674a0c + 0x38))(DAT_00674a0c,&puStack_b0);
    if (_DAT_005c7474 < (float)&puStack_a0) {
      if (_DAT_005c7474 < (float)&fStack_88) {
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
    if (_DAT_005c7474 < (float)&fStack_88) {
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

