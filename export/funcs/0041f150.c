
void FUN_0041f150(void)

{
  int iVar1;
  char cVar2;
  undefined4 unaff_ESI;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_EDI;
  undefined4 uVar6;
  bool bVar7;
  float10 fVar8;
  int *piVar9;
  undefined4 uStack_e4;
  int *piStack_e0;
  undefined4 uStack_dc;
  undefined4 *puStack_d8;
  int *piStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int *piStack_c8;
  undefined4 uStack_c4;
  float *pfStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  undefined *puStack_94;
  int *piStack_90;
  float afStack_78 [4];
  int *piStack_68;
  undefined4 uStack_64;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [8];
  undefined1 uStack_4c;
  int *piStack_44;
  undefined4 uStack_40;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [20];
  undefined4 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b8b00;
  local_c = ExceptionList;
  if (DAT_00616855 == '\0') {
    return;
  }
  ExceptionList = &local_c;
  if ((DAT_0061682c & 1) == 0) {
    DAT_0061682c = DAT_0061682c | 1;
    piStack_90 = (int *)0x41f197;
    ExceptionList = &local_c;
    FUN_0041e740();
    piStack_90 = (int *)&LAB_0041e880;
    puStack_94 = (undefined *)0x41f1a1;
    FUN_005b7e6c();
  }
  if (DAT_00616854 == '\0') {
    piStack_90 = (int *)0x1;
    puStack_94 = (undefined *)DAT_0067eca0;
    DAT_00616854 = '\x01';
    piStack_98 = (int *)0x41f1c6;
    FUN_00420060();
  }
  if ((DAT_006167c8 != (int *)0x0) && ((DAT_006167cc & 1) != 0)) {
    piStack_90 = (int *)0x41f1ea;
    cVar2 = FUN_0041f720();
    if (cVar2 != '\0') {
      piStack_90 = (int *)0x41f1fc;
      cVar2 = FUN_0041f7b0();
      if (cVar2 != '\0') {
        if ((DAT_006167cc & 0x20) != 0) {
          piStack_90 = DAT_006167c8;
          puStack_94 = (undefined *)0x41f218;
          (**(code **)(*DAT_006167c8 + 100))();
        }
        iVar3 = DAT_00616848;
        iVar1 = DAT_00616844;
        iVar4 = DAT_00616840;
        if ((DAT_006167cc & 0x40) == 0) {
          if (DAT_006167dc == 0) goto LAB_0041f267;
          piStack_90 = (int *)0x41f246;
          cVar2 = FUN_0041fa10();
        }
        else {
          piStack_90 = (int *)0x41f24d;
          cVar2 = FUN_0041fa10();
          DAT_006167cc = DAT_006167cc ^ (cVar2 << 2 ^ DAT_006167cc) & 4;
LAB_0041f267:
          piStack_90 = (int *)0x41f26c;
          cVar2 = FUN_0041fd90();
        }
        DAT_006167cc = DAT_006167cc ^ (cVar2 << 2 ^ DAT_006167cc) & 4;
        piStack_90 = (int *)(DAT_00616844 - iVar1);
        iVar3 = DAT_00616848 - iVar3;
        if (((float)(DAT_00616840 - iVar4) == 0.0) && (piStack_90 == (int *)0x0)) {
          DAT_00616828 = 0;
        }
        else {
          DAT_00616828 = 1;
          piStack_98 = (int *)0x41f2bb;
          puStack_94 = (undefined *)(DAT_00616840 - iVar4);
          cVar2 = FUN_0041f970();
          if (cVar2 != '\0') {
            piStack_90 = (int *)0x0;
            puStack_94 = (undefined *)0x41f2cb;
            FUN_004201a0();
          }
          piStack_90 = (int *)0x41f2d5;
          FUN_0041f850();
        }
        bVar7 = false;
        iVar4 = iVar3;
        if (iVar3 < 0) {
          iVar4 = -iVar3;
          bVar7 = iVar4 < 0;
        }
        DAT_0061684c = iVar3;
        if (iVar4 != 0 && !bVar7) {
          do {
            afStack_78[0] = (float)CONCAT31(afStack_78[0]._1_3_,DAT_0061684c < 0);
            piStack_90 = (int *)0x0;
            puStack_94 = (undefined *)afStack_78[0];
            piStack_98 = (int *)0x8;
            uStack_9c = 0x41f307;
            FUN_0041f8a0();
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
  }
  if (DAT_006107dc == '\0') {
    ExceptionList = local_c;
    return;
  }
  if (DAT_00616858 != 0) {
    piStack_90 = (int *)0x41f325;
    fVar8 = (float10)FUN_0042d660();
    piStack_90 = (int *)(float)fVar8;
    puStack_94 = &DAT_00616728;
    piStack_98 = (int *)0x41f33e;
    afStack_78[0] = (float)piStack_90;
    FUN_0041dae0();
  }
  piStack_90 = (int *)0x6;
  puStack_94 = (undefined *)0x41f345;
  iVar4 = FUN_005792b0();
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return;
  }
  piStack_90 = (int *)0xe;
  puStack_94 = (undefined *)0x41f357;
  iVar4 = FUN_005792b0();
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return;
  }
  if (DAT_00616858 == 0) {
    ExceptionList = local_c;
    return;
  }
  iVar4 = *(int *)(DAT_00616858 + 0x24);
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return;
  }
  piStack_90 = (int *)0x41f37f;
  FUN_004225e0();
  piStack_98 = *(int **)Pipeline_exref;
  piStack_90 = (int *)auStack_30;
  puStack_94 = (undefined *)0x7;
  uStack_34 = 7;
  uStack_9c = 0x41f3a3;
  piStack_38 = piStack_98;
  (**(code **)(*piStack_98 + 0xf4))();
  uStack_9c = 0;
  uStack_a0 = uStack_40;
  piStack_a4 = piStack_44;
  puStack_a8 = (undefined1 *)0x41f3b7;
  (**(code **)(*piStack_44 + 0xf0))();
  piStack_b0 = *(int **)Pipeline_exref;
  puStack_a8 = auStack_54;
  uStack_ac = 0x16;
  uStack_58 = 0x16;
  uStack_1c = 0;
  uStack_b4 = 0x41f3e5;
  piStack_5c = piStack_b0;
  (**(code **)(*piStack_b0 + 0xf4))();
  uStack_b4 = 1;
  uStack_b8 = uStack_64;
  piStack_bc = piStack_68;
  pfStack_c0 = (float *)0x41f3f9;
  (**(code **)(*piStack_68 + 0xf0))();
  piStack_c8 = *(int **)Pipeline_exref;
  pfStack_c0 = afStack_78;
  uStack_c4 = 0xf;
  uStack_34 = CONCAT31(uStack_34._1_3_,1);
  uStack_cc = 0x41f424;
  (**(code **)(*piStack_c8 + 0xf4))();
  uStack_cc = 0;
  puStack_d8 = (undefined4 *)0x41f438;
  piStack_d4 = unaff_EDI;
  uStack_d0 = unaff_ESI;
  (**(code **)(*unaff_EDI + 0xf0))();
  puStack_d8 = (undefined4 *)0x0;
  uStack_4c = 2;
  uStack_dc = 0x41f449;
  puStack_d8 = (undefined4 *)FUN_00425640();
  uStack_dc = 0x41f44f;
  FUN_004220a0();
  puStack_d8 = (undefined4 *)0x41f45b;
  FUN_004223d0();
  puStack_d8 = (undefined4 *)0x41f464;
  FUN_00422410();
  puStack_d8 = (undefined4 *)(DAT_00616858 + 0x4c);
  uVar5 = 2;
  uVar6 = 1;
  uStack_dc = 0x41f47c;
  FUN_00421ba0();
  switch(*(undefined4 *)(DAT_00616858 + 0x50)) {
  case 1:
    uVar5 = 2;
    uVar6 = 2;
    break;
  case 2:
    uVar5 = 2;
    goto LAB_0041f4c2;
  case 3:
    uVar5 = 5;
    uVar6 = 2;
    break;
  case 4:
    uVar5 = 5;
    uVar6 = 6;
    break;
  case 5:
    uVar5 = 5;
LAB_0041f4c2:
    uVar6 = 4;
  }
  piStack_e0 = *(int **)Pipeline_exref;
  puStack_d8 = &uStack_9c;
  uStack_dc = 0x13;
  uStack_a0 = 0x13;
  uStack_e4 = 0x41f4eb;
  piStack_a4 = piStack_e0;
  (**(code **)(*piStack_e0 + 0xf4))();
  uStack_e4 = uVar5;
  (**(code **)(*piStack_b0 + 0xf0))(piStack_b0,uStack_ac);
  piVar9 = *(int **)Pipeline_exref;
  uVar5 = 0x14;
  uStack_c4 = 0x14;
  uStack_64 = CONCAT31(uStack_64._1_3_,3);
  piStack_c8 = piVar9;
  (**(code **)(*piVar9 + 0xf4))(piVar9,0x14,&pfStack_c0);
  (**(code **)(*piStack_d4 + 0xf0))(piStack_d4,uStack_d0,uVar6);
  iVar1 = *(int *)(DAT_00616858 + 0x50);
  (**(code **)(**(int **)Pipeline_exref + 0xf4))(*(int **)Pipeline_exref,0x1b,&uStack_e4);
  (**(code **)(*piVar9 + 0xf0))(piVar9,uVar5,iVar1 != 0);
  puStack_94 = (undefined *)CONCAT31(puStack_94._1_3_,5);
  cVar2 = FUN_0041d9c0(&piStack_bc,DAT_00616840,DAT_00616844);
  piVar9 = piStack_d4;
  uVar5 = uStack_d0;
  if (cVar2 != '\0') {
    FUN_00421670(8);
    FUN_00421ca0(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
    FUN_00421cc0(piStack_bc,uStack_b8,0);
    FUN_00421ca0(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0xc));
    FUN_00421cc0(uStack_b4,piStack_b0,0);
    FUN_00421ca0(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
    FUN_00421cc0(uStack_ac,puStack_a8,0);
    FUN_00421ca0(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x14));
    FUN_00421cc0(piStack_a4,uStack_a0,0);
    FUN_00421690();
    piVar9 = piStack_d4;
    uVar5 = uStack_d0;
  }
  puStack_94 = (undefined *)CONCAT31(puStack_94._1_3_,4);
  (**(code **)(*piVar9 + 0xf0))(piVar9,uVar5,uVar6);
  uStack_a0 = CONCAT31(uStack_a0._1_3_,3);
  (**(code **)(*piVar9 + 0xf0))(piVar9,uVar5,uVar6);
  uStack_ac = CONCAT31(uStack_ac._1_3_,2);
  (**(code **)(*piVar9 + 0xf0))(piVar9,uVar5,uVar6);
  iStack_4._0_1_ = 1;
  piStack_90 = (int *)0x41f6c4;
  FUN_00405840();
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  piStack_90 = (int *)0x41f6d5;
  FUN_00405840();
  iStack_4 = 0xffffffff;
  piStack_90 = (int *)0x41f6e9;
  FUN_00405840();
  ExceptionList = local_c;
  return;
}

