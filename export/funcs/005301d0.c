
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005301d0(int *param_1,int *param_2)

{
  float fVar1;
  bool bVar2;
  Explosion *pEVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float unaff_EBX;
  float *pfVar10;
  float10 fVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float local_bc;
  int local_b8;
  undefined1 auStack_b4 [28];
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  Vector aVStack_8c [36];
  undefined1 auStack_68 [32];
  float afStack_48 [4];
  undefined1 auStack_38 [56];
  
  FUN_00539740();
  param_1[0x2a] = param_2[2];
  param_1[0x2b] = *param_2;
  param_1[0x2c] = param_2[1];
  bVar2 = ID_String::IsEmpty((ID_String *)(param_2 + 3));
  if (bVar2) {
    param_1[0x2d] = 0;
  }
  else {
    pEVar3 = Archetype::GetExplosion((ID_String *)(param_2 + 3));
    param_1[0x2d] = (int)pEVar3;
    if (pEVar3 != (Explosion *)0x0) {
      FUN_00536100(pEVar3);
    }
  }
  local_bc = (float)param_1[0x2c];
  fVar1 = (float)param_1[0x2b];
  local_b8 = rand();
  param_1[0x2e] = (int)((local_bc - fVar1) * (float)local_b8 * _DAT_005caeec + fVar1);
  bVar2 = ID_String::IsEmpty((ID_String *)(param_2 + 4));
  if (!bVar2) {
    if (((int *)param_1[4])[0x15] == 0) {
      puVar4 = (undefined4 *)(**(code **)*param_1)();
    }
    else {
      puVar4 = (undefined4 *)(**(code **)(*(int *)param_1[4] + 0x68))(&local_c8);
    }
    fStack_d4 = (float)puVar4[1];
    fStack_d0 = (float)puVar4[2];
    uVar6 = *puVar4;
    (**(code **)(*param_1 + 4))(&fStack_cc);
    pfVar5 = (float *)LookMatrix(aVStack_8c);
    iVar8 = *param_1;
    pfVar10 = &local_bc;
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar10 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar10 = pfVar10 + 1;
    }
    fStack_90 = fStack_d4;
    uStack_98 = uVar6;
    fStack_94 = fVar1;
    puVar4 = (undefined4 *)(**(code **)(iVar8 + 0x10))();
    FUN_00447be0(&stack0xffffff24,puVar4,puVar4 + 9);
    FUN_00422b80(-unaff_EBX,-fVar1,-fStack_d4);
    FUN_00447b60(*puVar4,puVar4[3],puVar4[6],puVar4[1],puVar4[4],puVar4[7],puVar4[2],puVar4[5],
                 puVar4[8]);
    FUN_00447bb0(aVStack_8c,&fStack_d0);
    if (DAT_00675514 == (int *)0x0) {
      DAT_00675514 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00675514 + 0x1c))(DAT_00675514,auStack_38,auStack_68,&local_bc);
    iVar8 = *param_1;
    pfVar5 = afStack_48;
    pfVar10 = &fStack_cc;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar10 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar10 = pfVar10 + 1;
    }
    uVar6 = (**(code **)(iVar8 + 0x1c))();
    bVar2 = ID_String::IsEmpty((ID_String *)(param_2 + 4));
    if (!bVar2) {
      uVar14 = 0;
      puVar13 = auStack_b4;
      piVar12 = param_1;
      uVar7 = FUN_0040f080((ID_String *)(param_2 + 4),param_1,uVar6,puVar13,0);
      FUN_00503070(uVar7,piVar12,uVar6,puVar13,uVar14);
    }
  }
  if (((int *)param_1[4])[0x15] != 0) {
    fVar1 = (float)param_2[5];
    fVar11 = (float10)(**(code **)(*(int *)param_1[4] + 0x6c))();
    if (*(int *)(param_1[4] + 0x54) == 0) {
      fStack_d4 = 0.0;
      fStack_d0 = 0.0;
      fStack_cc = 0.0;
    }
    else {
      PhySys::GetMomentOfInertia((CObject *)&fStack_d4);
    }
    local_c8 = (float)param_2[6] / fStack_d4;
    fStack_c4 = (float)param_2[7] / fStack_d0;
    fStack_c0 = (float)param_2[8] / fStack_cc;
    PhySys::SetDamping((CObject *)param_1[4],(float)((float10)fVar1 / fVar11),(Vector *)&local_c8);
  }
  uVar6 = (**(code **)*param_1)(param_1 + 0xf,0);
  iVar8 = FUN_005553b0(uVar6);
  param_1[0xe] = iVar8;
  return;
}

