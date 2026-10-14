
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f7480(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int **ppiVar9;
  int *piStack_88;
  ulong uStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  undefined4 *puStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 *puStack_2c;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int *local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bf490;
  local_c = ExceptionList;
  puStack_50 = (undefined1 *)0x25;
  uStack_54 = 0x4f74a3;
  ExceptionList = &local_c;
  iVar4 = FUN_005792b0();
  if (iVar4 != 0) {
    puStack_50 = (undefined1 *)param_1;
    uStack_54 = 0x4f74b8;
    FUN_00422910();
    piStack_58 = *(int **)Pipeline_exref;
    puStack_50 = local_10;
    uStack_54 = 0x17;
    local_14 = 0x17;
    uStack_5c = 0x4f74de;
    local_18 = piStack_58;
    (**(code **)(*piStack_58 + 0xf4))();
    uStack_5c = 4;
    uStack_60 = uStack_20;
    piStack_64 = piStack_24;
    puStack_68 = (undefined4 *)0x4f74f2;
    (**(code **)(*piStack_24 + 0xf0))();
    piStack_70 = *(int **)Pipeline_exref;
    puStack_68 = &uStack_34;
    piStack_6c = (int *)0x1a;
    uStack_1c = 0;
    piStack_74 = (int *)0x4f751d;
    (**(code **)(*piStack_70 + 0xf4))();
    piStack_74 = (int *)0x0;
    uStack_80 = 0x4f7531;
    piStack_7c = unaff_ESI;
    piStack_78 = unaff_EBP;
    (**(code **)(*unaff_ESI + 0xf0))();
    puStack_2c = (undefined1 *)&uStack_80;
    uStack_34 = (float)CONCAT31(uStack_34._1_3_,1);
    piStack_88 = (int *)0x4f7548;
    uStack_80 = DACOM_CRC::GetCRC32("effects");
    FUN_00402d30();
    if (*(int *)Alchemy_exref != 0) {
      uStack_80 = 0x43;
      iVar4 = FUN_005792b0();
      if (iVar4 == 0) {
        uStack_80 = 0;
        piStack_88 = (int *)0x4f757e;
        (**(code **)(**(int **)Alchemy_exref + 0x7c))();
      }
      else {
        uStack_80 = 1;
        piStack_88 = (int *)0x4f758f;
        (**(code **)(**(int **)Alchemy_exref + 0x7c))();
      }
      piStack_88 = (int *)0x44;
      uStack_34 = (float)CONCAT22(uStack_34._2_2_,0x101);
      iVar4 = FUN_005792b0();
      uStack_34 = (float)CONCAT31(uStack_34._1_3_,'\x01' - (iVar4 != 1));
      iVar4 = FUN_005792b0(0x45);
      uStack_34._0_2_ = CONCAT11('\x01' - (iVar4 != 1),(undefined1)uStack_34);
      piStack_88 = &uStack_34;
      (**(code **)(**(int **)Alchemy_exref + 0x8c))(*(int **)Alchemy_exref);
    }
    piStack_88 = *(int **)MaterialBatcher_exref;
    uStack_80 = 0xffffffff;
    (**(code **)(*piStack_88 + 0x20))();
    if (_DAT_005d3ee0 < uStack_34) {
      uStack_34 = 0.1;
    }
    fVar3 = uStack_34;
    if (iStack_30 < 0x2b) {
      iVar4 = FUN_005792b0(0x26);
      if ((iVar4 != 0) && (piVar7 = *(int **)Alchemy_exref, piVar7 != (int *)0x0)) {
        iVar4 = (**(code **)(*piVar7 + 0x74))(piVar7);
        if (-1 < iVar4) {
          if (iStack_30 < 0) {
            iVar4 = 0;
            do {
              FUN_004f7810(param_1,fVar3,iVar4);
              iVar4 = iVar4 + 1;
            } while (iVar4 < 0x2b);
          }
          else {
            FUN_004f7810(param_1,fVar3,iStack_30);
          }
          (**(code **)(**(int **)Alchemy_exref + 0x78))(*(int **)Alchemy_exref);
        }
      }
    }
    if (iStack_30 < 0) {
      if ((DAT_00674f58 == 0) || (DAT_00674f54 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        DAT_00674c84 = 0;
        DAT_00674ca5 = 0;
        DAT_00674ca4 = 0;
        DAT_00674ca8 = 0;
        DAT_00674c90 = 0;
        FUN_0046ecd0();
        FUN_004fcb40(1);
      }
      iVar4 = 0x2c;
      do {
        FUN_004f7810(param_1,fVar3,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x2f);
      if (bVar1) {
        FUN_004f9de0(param_1);
      }
    }
    piStack_6c = *(int **)Pipeline_exref;
    puStack_68 = (undefined4 *)0x17;
    (**(code **)(*piStack_6c + 0xf4))(piStack_6c,0x17,&piStack_64);
    piVar2 = piStack_74;
    (**(code **)(*piStack_78 + 0xf0))(piStack_78);
    piVar7 = *(int **)Pipeline_exref;
    ppiVar9 = &piStack_88;
    piVar8 = (int *)0xe;
    piStack_58 = (int *)CONCAT31(piStack_58._1_3_,2);
    (**(code **)(*piVar7 + 0xf4))(piVar7,0xe,ppiVar9);
    uVar6 = 0;
    piVar5 = (int *)0x4;
    (**(code **)(*piVar2 + 0xf0))(piVar2,4,0);
    piStack_70._0_1_ = 3;
    FUN_00403ea0(*(undefined4 *)Pipeline_exref,DAT_00674f3c);
    piStack_70 = (int *)CONCAT31(piStack_70._1_3_,2);
    (**(code **)(*piVar8 + 0xf0))(piVar8,ppiVar9,piStack_78);
    piStack_7c = (int *)CONCAT31(piStack_7c._1_3_,1);
    (**(code **)(*piVar8 + 0xf0))(piVar8,ppiVar9,piStack_78);
    (**(code **)(**(int **)MaterialBatcher_exref + 0x1c))(*(int **)MaterialBatcher_exref,1,2);
    (**(code **)(*piVar5 + 0xf0))(piVar5,uVar6,piVar7);
    (**(code **)(*piVar5 + 0xf0))(piVar5,uVar6,piVar7);
  }
  ExceptionList = local_c;
  return;
}

