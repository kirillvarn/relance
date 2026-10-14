
void FUN_00403ea0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  undefined *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iStack_134;
  undefined4 uStack_130;
  int *piStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  int iStack_120;
  int *piStack_11c;
  int *piStack_118;
  int iStack_114;
  int iStack_110;
  int *piStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  undefined4 *puStack_f8;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined1 *puStack_c8;
  int *piStack_a8;
  int *piStack_9c;
  int iStack_94;
  int *local_90;
  undefined4 local_8c;
  undefined1 local_88 [8];
  int aiStack_80 [13];
  undefined1 uStack_4c;
  undefined1 uStack_34;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b8401;
  pvStack_c = ExceptionList;
  puStack_c8 = local_88;
  uStack_cc = 0x88;
  local_90 = param_1;
  local_8c = 0x88;
  piStack_d0 = param_1;
  piStack_d4 = (int *)0x403ee5;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xf4))();
  piStack_d4 = (int *)0x0;
  piStack_dc = piStack_9c;
  piStack_e0 = (int *)0x403ef9;
  (**(code **)(*piStack_9c + 0xf0))();
  piStack_e0 = &iStack_94;
  uStack_e4 = 0x8b;
  piStack_e8 = param_1;
  uStack_1c = 0;
  uStack_ec = 0x403f23;
  (**(code **)(*param_1 + 0xf4))();
  uStack_ec = 0xffffffff;
  puStack_f8 = (undefined4 *)0x403f37;
  (**(code **)(*piStack_a8 + 0xf0))();
  puStack_f8 = &uStack_cc;
  uStack_fc = 0x16;
  piStack_d4 = param_1;
  piStack_d0 = (int *)0x16;
  piStack_100 = param_1;
  uStack_34 = 1;
  uStack_104 = 0x403f5b;
  (**(code **)(*param_1 + 0xf4))();
  uStack_104 = 1;
  piStack_108 = piStack_dc;
  piStack_10c = piStack_e0;
  iStack_110 = 0x403f6f;
  (**(code **)(*piStack_e0 + 0xf0))();
  uStack_4c = 2;
  puVar5 = &DAT_005c7520;
  iStack_114 = 0x89;
  do {
    iStack_110 = *(int *)(puVar5 + 4);
    piStack_118 = param_1;
    piStack_11c = (int *)0x403f90;
    (**(code **)(*param_1 + 0xf0))();
    iStack_114 = *(int *)(puVar5 + 8);
    puVar5 = puVar5 + 8;
  } while (iStack_114 != 0);
  puVar5 = &DAT_005c7540;
  iVar3 = 0x8d;
  do {
    iStack_110 = *(int *)(puVar5 + 4);
    piStack_118 = param_1;
    piStack_11c = (int *)0x403fb2;
    iStack_114 = iVar3;
    (**(code **)(*param_1 + 0xf0))();
    iVar3 = *(int *)(puVar5 + 8);
    puVar5 = puVar5 + 8;
  } while (iVar3 != 0);
  iStack_114 = 0xb;
  piStack_11c = param_1;
  iStack_120 = 0x403fc9;
  piStack_118 = (int *)iVar3;
  iStack_110 = iVar3;
  (**(code **)(*param_1 + 0xf8))();
  puVar5 = &DAT_005c7568;
  iStack_124 = 1;
  do {
    iStack_120 = *(int *)(puVar5 + 4);
    uStack_128 = 0;
    piStack_12c = param_1;
    uStack_130 = 0x403fe3;
    (**(code **)(*param_1 + 0xf8))();
    iStack_124 = *(int *)(puVar5 + 8);
    puVar5 = puVar5 + 8;
  } while (iStack_124 != 0);
  puVar5 = &DAT_005c75a0;
  iStack_124 = 1;
  do {
    iStack_120 = *(int *)(puVar5 + 4);
    uStack_128 = 1;
    piStack_12c = param_1;
    uStack_130 = 0x404007;
    (**(code **)(*param_1 + 0xf8))();
    iStack_124 = *(int *)(puVar5 + 8);
    puVar5 = puVar5 + 8;
  } while (iStack_124 != 0);
  iStack_120 = 0;
  iStack_124 = 0x18;
  uStack_128 = 0;
  piStack_12c = param_1;
  uStack_130 = 0x404020;
  (**(code **)(*param_1 + 0xf8))();
  uStack_130 = 3;
  iStack_134 = 0xd;
  (**(code **)(*param_1 + 0xf8))(param_1,0);
  uVar8 = 0xe;
  uVar7 = 0;
  piVar6 = param_1;
  (**(code **)(*param_1 + 0xf8))(param_1,0,0xe,3);
  if (aiStack_80[0] == DAT_0061648c) {
    if (DAT_00616498 == 0) {
      uVar4 = FUN_004045b0();
      local_8c._0_1_ = 3;
      uVar4 = FUN_00404f00(&DAT_00616474,uVar4);
      local_8c._0_1_ = 4;
      FUN_00404e40(&iStack_120,uVar4);
      FUN_00403200();
      local_8c = CONCAT31(local_8c._1_3_,2);
      FUN_00403200();
      DAT_00616498 = iStack_120 + 0x10;
      if ((char)piStack_11c != '\0') {
        FUN_004045d0(&DAT_006101d8,0,1);
      }
    }
    uVar4 = *(undefined4 *)Pipeline_exref;
    iStack_134 = *(int *)VertexBuffer_exref;
    uVar9 = *(undefined4 *)RPIndexBuffer_exref;
    uStack_130 = *(undefined4 *)RPDraw_exref;
    piVar1 = (int *)(DAT_00616498 + 0xc);
    iVar3 = DAT_00616498;
    while (iVar2 = *piVar1, iVar2 != 0) {
      if (*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) * 4 != 0) {
        FUN_004042c0(uVar4,iStack_134,uVar9,uStack_130);
      }
      FUN_00404d90(iVar2);
      FUN_00404580(iVar2);
    }
    *(undefined4 *)(iVar3 + 0x18) = 0;
  }
  else {
    FUN_00432240(&iStack_134,aiStack_80);
    iVar3 = iStack_134;
    if (iStack_134 != DAT_0061647c) {
      iStack_120 = *(int *)Pipeline_exref;
      uVar4 = *(undefined4 *)VertexBuffer_exref;
      uStack_130 = *(undefined4 *)RPIndexBuffer_exref;
      uVar9 = *(undefined4 *)RPDraw_exref;
      piVar1 = (int *)(iStack_134 + 0x1c);
      while (iVar2 = *piVar1, iVar2 != 0) {
        if (*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) * 4 != 0) {
          FUN_004042c0(iStack_120,uVar4,uStack_130,uVar9);
        }
        FUN_00404d90(iVar2);
        FUN_00404580(iVar2);
      }
      *(undefined4 *)(iVar3 + 0x28) = 0;
    }
  }
  puVar5 = &DAT_005c7558;
  iVar3 = 0x8d;
  do {
    (**(code **)(*param_1 + 0xf0))(param_1,iVar3,*(undefined4 *)(puVar5 + 4));
    iVar3 = *(int *)(puVar5 + 8);
    puVar5 = puVar5 + 8;
  } while (iVar3 != 0);
  (**(code **)(*param_1 + 0xf8))(param_1,0,0xd,1);
  (**(code **)(*param_1 + 0xf8))(param_1,0,0xe,1);
  if (DAT_00616474 != DAT_00616490) {
    DAT_00616474 = DAT_00616490;
    DAT_00616498 = 0;
  }
  (**(code **)(*piVar6 + 0xf0))(piVar6,uVar7,uVar8);
  FUN_00405840();
  FUN_00405840();
  ExceptionList = unaff_ESI;
  return;
}

