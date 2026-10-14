
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004963d0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  float unaff_EBX;
  float unaff_ESI;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 local_68 [4];
  undefined4 uStack_58;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float afStack_38 [4];
  float fStack_28;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  if (param_2 == 2) {
    uVar5 = *(undefined4 *)(param_1 + 0x828);
    local_68[0] = *(undefined4 *)(param_1 + 0x82c);
    local_68[1] = *(undefined4 *)(param_1 + 0x830);
    puVar7 = (undefined4 *)
             (**(code **)(**(int **)Engine_exref + 0xa0))
                       (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x37c));
    fVar1 = *(float *)(param_1 + 0x46c);
    fVar2 = *(float *)(param_1 + 0x3f8);
    fVar3 = *(float *)(param_1 + 0x470);
    fVar4 = *(float *)(param_1 + 0x3f8);
    puVar10 = local_68;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    fStack_40 = unaff_EBX + fVar3 * fVar4;
    local_68[0] = uStack_4;
    uStack_58 = uStack_4;
    fStack_44 = unaff_ESI + fVar1 * fVar2;
    uStack_3c = uVar5;
    (**(code **)(**(int **)Engine_exref + 0x9c))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x37c),local_68);
    bVar6 = ftol();
    *(undefined4 *)(param_1 + 0x38c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x390) = 0x3f800000;
    fVar1 = (float)bVar6 * _DAT_005c7f68;
    *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
    *(float *)(param_1 + 0x39c) = fVar1;
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x81c);
  local_68[0] = *(undefined4 *)(param_1 + 0x820);
  local_68[1] = *(undefined4 *)(param_1 + 0x824);
  pfVar8 = (float *)(**(code **)(**(int **)Engine_exref + 0xa0))
                              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x354));
  fVar1 = *(float *)(param_1 + 0x3f8) * _DAT_005ca220;
  pfVar11 = afStack_38;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar11 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar11 = pfVar11 + 1;
  }
  fStack_14 = unaff_ESI + *(float *)(param_1 + 0x46c) * *(float *)(param_1 + 0x3f8);
  fStack_10 = unaff_EBX + *(float *)(param_1 + 0x470) * *(float *)(param_1 + 0x3f8);
  afStack_38[0] = fVar1;
  fStack_28 = fVar1;
  uStack_c = uVar5;
  (**(code **)(**(int **)Engine_exref + 0x9c))
            (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x354),afStack_38);
  bVar6 = ftol();
  *(undefined4 *)(param_1 + 0x364) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x368) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x36c) = 0x3f800000;
  *(float *)(param_1 + 0x374) = (float)bVar6 * _DAT_005c7f68;
  return;
}

