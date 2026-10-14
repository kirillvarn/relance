
void __thiscall FUN_004e69c0(float *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  CObject *this;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  float unaff_EBX;
  int *piStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  uint *puStack_88;
  int *piStack_84;
  float fStack_80;
  int *piStack_7c;
  int *piStack_78;
  uint uStack_74;
  float *pfStack_70;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_44;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_8;
  undefined4 uStack_4;
  
  piVar1 = *(int **)Engine_exref;
  uStack_54 = 0xffffffff;
  uStack_58 = 1;
  uVar4 = (**(code **)(*piVar1 + 0xd8))();
  fVar2 = fStack_8;
  do {
    if (uVar4 == 0xffffffff) {
      return;
    }
    if ((char)uStack_4 == '\0') {
      pfStack_70 = *(float **)Engine_exref;
      uStack_74 = 0x4e6a0a;
      this = (CObject *)(**(code **)((int)*pfStack_70 + 0x80))();
      for (puVar6 = *(uint **)(this + 0x68); puVar6 != *(uint **)(this + 0x6c); puVar6 = puVar6 + 3)
      {
        if (puVar6[1] == uVar4) {
          uVar7 = *puVar6;
          goto LAB_004e6a26;
        }
      }
      uVar7 = 0;
LAB_004e6a26:
      pfStack_70 = (float *)0x4e6a2f;
      bVar3 = CObject::is_shield_part(this,uVar7);
      if (!bVar3) goto LAB_004e6a37;
    }
    else {
LAB_004e6a37:
      fStack_8 = 0.0;
      piStack_7c = *(int **)Engine_exref;
      pfStack_70 = &fStack_8;
      uStack_74 = 0;
      fStack_80 = 7.201325e-39;
      piStack_78 = (int *)uVar4;
      (**(code **)(*piStack_7c + 0x88))();
      piStack_84 = *(int **)Engine_exref;
      puStack_88 = (uint *)0x4e6a6e;
      fStack_80 = (float)uVar4;
      uVar5 = (**(code **)(*piStack_84 + 0xa0))();
      if (DAT_00674b1c == (int *)0x0) {
        puStack_88 = (uint *)0x4e6a7e;
        DAT_00674b1c = (int *)FUN_005b73e0();
      }
      puStack_88 = &uStack_74;
      puStack_90 = &stack0xffffffb0;
      piStack_94 = DAT_00674b1c;
      uStack_8c = uVar5;
      (**(code **)(*DAT_00674b1c + 0x28))();
      fStack_80 = param_2;
      piStack_7c = (int *)uStack_58;
      piStack_84 = piVar1;
      if (DAT_00674b1c == (int *)0x0) {
        DAT_00674b1c = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00674b1c + 0x3c))(DAT_00674b1c,&uStack_54,fVar2,&piStack_84);
      piStack_84 = (int *)((float)piVar1 - fStack_44);
      fStack_80 = param_2 - fStack_44;
      if (unaff_EBX - fStack_44 < param_1[3]) {
        param_1[3] = unaff_EBX - fStack_44;
      }
      if ((float)piStack_84 < param_1[4]) {
        param_1[4] = (float)piStack_84;
      }
      if (fStack_80 < param_1[5]) {
        param_1[5] = fStack_80;
      }
      if (DAT_00674b1c == (int *)0x0) {
        DAT_00674b1c = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00674b1c + 0x3c))(DAT_00674b1c,&uStack_58,fVar2,&piStack_94);
      if (*param_1 < fStack_1c + fStack_8) {
        *param_1 = fStack_1c + fStack_8;
      }
      if (param_1[1] < fStack_18 + fStack_8) {
        param_1[1] = fStack_18 + fStack_8;
      }
      if (param_1[2] < fStack_14 + fStack_8) {
        param_1[2] = fStack_14 + fStack_8;
      }
      pfStack_70 = (float *)fVar2;
      piStack_78 = (int *)0x4e6bbf;
      uStack_74 = uVar4;
      FUN_004e69c0();
    }
    piStack_78 = *(int **)Engine_exref;
    pfStack_70 = (float *)0x1;
    piStack_7c = (int *)0x4e6bd7;
    uVar4 = (**(code **)(*piStack_78 + 0xd8))();
  } while( true );
}

