
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005811b0(int *param_1)

{
  int iVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float fVar7;
  float fVar8;
  float *pfStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  float *pfStack_90;
  int *piStack_8c;
  undefined4 *puStack_88;
  int *piStack_84;
  float *pfStack_80;
  int *piStack_7c;
  float *pfStack_78;
  int *piStack_74;
  undefined4 *puStack_70;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float afStack_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (DAT_0067c4c0 == (int *)0x0) {
    puStack_70 = (undefined4 *)0x5811e0;
    DAT_0067c4c0 = (int *)FUN_005b73e0();
  }
  puStack_70 = &local_30;
  piStack_74 = param_1 + 0x150;
  pfStack_78 = afStack_40 + 1;
  pfStack_80 = (float *)0x5811fc;
  piStack_7c = DAT_0067c4c0;
  (**(code **)(*DAT_0067c4c0 + 0x28))();
  local_28 = uStack_4c;
  uStack_24 = uStack_48;
  uStack_20 = (uint)fStack_44;
  afStack_40[0] = 0.0;
  afStack_40[1] = 0.0;
  afStack_40[2] = 0.0;
  if (DAT_0067c4c0 == (int *)0x0) {
    pfStack_80 = (float *)0x58123a;
    DAT_0067c4c0 = (int *)FUN_005b73e0();
  }
  pfStack_80 = afStack_40;
  piStack_84 = param_1 + 0x15c;
  puStack_88 = &uStack_4c;
  pfStack_90 = (float *)0x581256;
  piStack_8c = DAT_0067c4c0;
  (**(code **)(*DAT_0067c4c0 + 0x28))();
  local_2c = uStack_5c;
  local_28 = uStack_58;
  pfStack_90 = afStack_40 + 2;
  puStack_94 = auStack_60;
  uStack_24 = uStack_54;
  puStack_98 = &stack0xffffff9c;
  pfStack_9c = (float *)&stack0xffffff98;
  cVar2 = (**(code **)(DAT_0067dbf8 + 0x34))();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(DAT_0067dbf8 + 0x34))
                      (&DAT_0067dbf8,&uStack_58,&uStack_54,auStack_50,afStack_40);
    if (cVar2 != '\0') {
      pfStack_78 = (float *)(float)(uint)fStack_44;
      fVar8 = 0.0;
      piStack_74 = (int *)(float)(uint)afStack_40[0];
      puStack_70 = (undefined4 *)0x0;
      FUN_00422b80(unaff_EDI - (float)pfStack_90,unaff_ESI - (float)piStack_8c,
                   unaff_EBX - (float)puStack_88);
      fVar3 = afStack_40[0] * afStack_40[0] + fVar8 * fVar8 + 0.0;
      fStack_44 = (float)(0x5f3759df - ((int)fVar3 >> 1));
      fVar7 = afStack_40[0];
      afStack_40[0] =
           (_DAT_005ca220 - fStack_44 * fStack_44 * fVar3 * _DAT_005c75e0) * fStack_44 * fVar3;
      FUN_00423b60(&pfStack_9c,&pfStack_78,&pfStack_90);
      fStack_44 = (float)pfStack_9c * (float)pfStack_9c +
                  (float)puStack_98 * (float)puStack_98 + (float)puStack_94 * (float)puStack_94;
      fVar3 = (float)(0x5f3759df - ((int)fStack_44 >> 1));
      fStack_44 = (_DAT_005ca220 - fVar3 * fVar3 * fStack_44 * _DAT_005c75e0) * fVar3 * fStack_44;
      if ((afStack_40[0] != _DAT_005c7474) && (fStack_44 != _DAT_005c7474)) {
        afStack_40[0] = _DAT_005c75dc / afStack_40[0];
        FUN_00422b80(afStack_40[0] * fVar7,fVar8 * afStack_40[0],afStack_40[0] * 9.537966e-39);
        fVar3 = _DAT_005c75dc / fStack_44;
        FUN_00422b80(fVar3 * (float)pfStack_9c,(float)puStack_98 * fVar3,(float)puStack_94 * fVar3);
        pfStack_9c = pfStack_78;
        puStack_98 = (undefined1 *)piStack_74;
        iVar1 = param_1[0x196];
        puStack_94 = (undefined1 *)puStack_70;
        fVar3 = ((float)piStack_7c * (float)puStack_70 +
                (float)pfStack_80 * (float)piStack_74 + (float)piStack_84 * (float)pfStack_78) *
                fStack_44;
        fStack_44 = (float)(param_1[0x197] - iVar1);
        floor((double)(fVar3 * afStack_40[0] * (float)(param_1[0x197] - iVar1) +
                      (float)_DAT_005c75e8));
        iVar4 = ftol();
        param_1[0x199] = iVar4 + iVar1;
        if (param_1[0x197] < iVar4 + iVar1) {
          param_1[0x199] = param_1[0x197];
        }
        if (param_1[0x199] < iVar1) {
          param_1[0x199] = iVar1;
        }
        FUN_00580290();
        if ((int *)param_1[1] != (int *)0x0) {
          piVar5 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
          if (piVar5 != (int *)0x0) {
            iVar1 = *piVar5;
            uVar6 = (**(code **)(*param_1 + 8))();
            (**(code **)(iVar1 + 0xa8))(0x3e,uVar6);
          }
        }
      }
    }
  }
  return;
}

