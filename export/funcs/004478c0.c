
void FUN_004478c0(undefined4 *param_1,HardpointSummary *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  HardpointInfo *pHVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *puVar6;
  int *piStack_1f4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 auStack_1d0 [32];
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4 [4];
  undefined1 auStack_194 [12];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [4];
  undefined1 auStack_16c [28];
  undefined4 auStack_150 [4];
  undefined1 auStack_140 [20];
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120 [4];
  undefined4 local_110 [10];
  undefined1 auStack_e8 [20];
  undefined1 auStack_d4 [52];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  iVar1 = HardpointSummary::find_name(param_2,param_3);
  if (iVar1 == -1) {
    local_1a4[0] = 0;
    local_1a4[1] = 0;
    local_1a4[2] = 0;
    FUN_004215b0();
  }
  else {
    piStack_1f4 = (int *)0x44792b;
    lVar2 = HardpointSummary::get_instance(param_2,iVar1);
    piStack_1f4 = (int *)0x447936;
    pHVar3 = HardpointSummary::get_info(param_2,iVar1);
    puVar4 = local_120;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pHVar3;
      pHVar3 = pHVar3 + 4;
      puVar4 = puVar4 + 1;
    }
    puVar4 = local_110;
    puVar6 = &local_1d4;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    local_1b0 = local_120[1];
    local_1ac = local_120[2];
    local_1a8 = local_120[3];
    piStack_1f4 = *(int **)Engine_exref;
    puVar4 = (undefined4 *)(**(code **)(*piStack_1f4 + 0xa0))();
    uVar5 = (**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,param_2);
    FUN_00447be0(&stack0xfffffe10,puVar4,puVar4 + 9);
    FUN_00411350(auStack_16c);
    FUN_00447b60(*puVar4,puVar4[3],puVar4[6],puVar4[1],puVar4[4],puVar4[7],puVar4[2],puVar4[5],
                 puVar4[8]);
    FUN_00447bb0(auStack_e8,auStack_16c);
    if (DAT_00668a98 == (int *)0x0) {
      DAT_00668a98 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00668a98 + 0x1c))(DAT_00668a98,auStack_40,auStack_a0,uVar5);
    FUN_00406880(auStack_50);
    FUN_00447be0(auStack_194,&piStack_1f4,auStack_1d0);
    FUN_00411350(auStack_188);
    FUN_00447b60(piStack_1f4,unaff_EDI,local_1dc,lVar2,unaff_ESI,local_1d8,unaff_EBX,local_1e0,
                 local_1d4);
    FUN_00447bb0(auStack_d4,auStack_188);
    if (DAT_00668a98 == (int *)0x0) {
      DAT_00668a98 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00668a98 + 0x1c))(DAT_00668a98,auStack_170,auStack_140,auStack_80);
    local_1a4[1] = uStack_128;
    local_1a4[0] = uStack_12c;
    local_1a4[2] = uStack_124;
    puVar4 = auStack_150;
    puVar6 = local_1a4 + 3;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar4 = local_1a4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

