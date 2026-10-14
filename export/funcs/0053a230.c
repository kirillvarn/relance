
void __thiscall FUN_0053a230(int *param_1,int param_2,float param_3)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float unaff_EDI;
  Vector *pVVar7;
  float fStack_b4;
  int *piStack_b0;
  undefined4 *puStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  Vector aVStack_60 [36];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_1c;
  float *pfStack_10;
  float fStack_4;
  
  piVar3 = (int *)FUN_0054baf0();
  if ((param_1 == piVar3) && (iVar4 = FUN_005792b0(), iVar4 == 0)) {
    return;
  }
  if ((param_2 != 0) && (cVar2 = FUN_004fd570(), cVar2 != '\0')) {
    iVar4 = param_1[4];
    if (DAT_006789d0 == (int *)0x0) {
      fStack_a4 = 7.68066e-39;
      DAT_006789d0 = (int *)FUN_005b73e0();
    }
    fStack_a4 = param_3;
    puStack_ac = &local_3c;
    fStack_b4 = 7.680695e-39;
    piStack_b0 = DAT_006789d0;
    fStack_a8 = (float)(iVar4 + 8);
    (**(code **)(*DAT_006789d0 + 0x3c))();
    iVar4 = param_1[4];
    if (DAT_006789d0 == (int *)0x0) {
      fStack_b4 = 7.680723e-39;
      DAT_006789d0 = (int *)FUN_005b73e0();
    }
    fStack_b4 = fStack_4;
    (**(code **)(*DAT_006789d0 + 0x34))(DAT_006789d0,auStack_88,iVar4 + 8);
    iVar4 = param_1[4];
    if (DAT_006789d0 == (int *)0x0) {
      DAT_006789d0 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_006789d0 + 0x34))(DAT_006789d0,&piStack_b0,iVar4 + 8,pfStack_10);
    FUN_00422b80(-*pfStack_10,-pfStack_10[1],-pfStack_10[2]);
    fVar1 = fStack_a8 * fStack_b4 + fStack_a4 * (float)piStack_b0 + unaff_EDI * (float)puStack_ac;
    FUN_00507ea0(fVar1 + fVar1);
    puVar5 = (undefined4 *)FUN_0053a490(&fStack_b4);
    uStack_78 = *puVar5;
    uStack_74 = puVar5[1];
    uStack_70 = puVar5[2];
    puVar5 = (undefined4 *)(param_1[4] + 8);
    pVVar7 = aVStack_60;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pVVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      pVVar7 = pVVar7 + 4;
    }
    uStack_34 = 0;
    uStack_38 = 0;
    local_3c = 0;
    GetDirectionMatrix((Transform *)&stack0xffffff64,aVStack_60);
    fVar1 = fStack_7c;
    puStack_ac = (undefined4 *)fStack_80;
    fStack_7c = fStack_80;
    fStack_80 = -fVar1;
    puVar5 = (undefined4 *)&stack0xffffff64;
    pVVar7 = aVStack_60;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pVVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      pVVar7 = pVVar7 + 4;
    }
    local_3c = uStack_6c;
    uStack_38 = uStack_68;
    pVVar7 = aVStack_60;
    uStack_34 = uStack_64;
    uVar6 = (**(code **)(*param_1 + 0x1c))(pVVar7,uStack_1c);
    FUN_00503070(param_2,param_1,uVar6,pVVar7,uStack_1c);
  }
  return;
}

