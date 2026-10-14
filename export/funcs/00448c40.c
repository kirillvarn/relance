
void FUN_00448c40(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  float fVar3;
  ulong uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 unaff_EDI;
  int **ppiVar7;
  float fStack_194;
  undefined1 *puStack_190;
  undefined4 *puVar8;
  int *apiStack_188 [2];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 auStack_148 [14];
  undefined1 auStack_110 [12];
  undefined4 auStack_104 [9];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [20];
  undefined4 auStack_c0 [4];
  undefined1 auStack_b0 [32];
  undefined4 auStack_90 [16];
  undefined1 auStack_50 [56];
  undefined4 *puStack_18;
  
  apiStack_188[0] = *(int **)Engine_exref;
  apiStack_188[1] = (int *)param_1;
  fVar3 = (float)(**(code **)(*apiStack_188[0] + 100))();
  puStack_190 = (undefined1 *)0x448c73;
  uVar4 = DACOM_CRC::GetCRC32("HpMount");
  puVar8 = auStack_148 + 2;
  puStack_190 = &stack0xfffffe84;
  fStack_194 = fVar3;
  cVar2 = (**(code **)(**(int **)Hardpoint_exref + 0xc))(*(int **)Hardpoint_exref);
  if (cVar2 == '\0') {
    puVar8 = (undefined4 *)0x0;
    apiStack_188[0] = (int *)0x0;
    apiStack_188[1] = (int *)0x0;
    uStack_14c = 0;
    auStack_148[0] = 0;
    auStack_148[1] = 0;
    auStack_148[10] = 0x3f800000;
    auStack_148[6] = 0x3f800000;
    auStack_148[2] = 0x3f800000;
    auStack_148[9] = 0;
    auStack_148[8] = 0;
    auStack_148[7] = 0;
    auStack_148[5] = 0;
    auStack_148[4] = 0;
    auStack_148[3] = 0;
  }
  (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,fVar3);
  puVar6 = auStack_148;
  ppiVar7 = apiStack_188;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppiVar7 = (int *)*puVar6;
    puVar6 = puVar6 + 1;
    ppiVar7 = ppiVar7 + 1;
  }
  uStack_164 = uStack_154;
  uStack_160 = uStack_150;
  uStack_15c = uStack_14c;
  FUN_00447be0(&fStack_194,apiStack_188,&uStack_164);
  FUN_00422b80(-fStack_194,-(float)puStack_190,-(float)puVar8);
  FUN_00447b60(apiStack_188[0],"HpMount",uStack_170,apiStack_188[1],uVar4,uStack_16c,unaff_EDI,
               uStack_174,uStack_168);
  FUN_00447bb0(auStack_d4,auStack_110);
  uVar1 = puStack_18[1];
  puVar8 = puStack_18 + 3;
  puVar6 = auStack_104;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
  }
  uStack_e0 = *puStack_18;
  uStack_d8 = puStack_18[2];
  uStack_dc = uVar1;
  if (DAT_00668aac == (int *)0x0) {
    DAT_00668aac = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00668aac + 0x1c))(DAT_00668aac,auStack_b0,auStack_104,auStack_50);
  puVar8 = auStack_c0;
  puVar6 = auStack_90;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
  }
  (**(code **)(**(int **)Engine_exref + 0x9c))(*(int **)Engine_exref,param_1,auStack_90);
  (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1,0,0);
  return;
}

