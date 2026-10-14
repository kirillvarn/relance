
undefined4 __thiscall FUN_00565490(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined1 **ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_8c;
  int *local_88;
  undefined1 auStack_84 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *pbStack_74;
  undefined4 uStack_6c;
  char *pcStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined4 *puStack_58;
  byte *pbStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  code *pcStack_44;
  undefined4 local_40;
  char *local_3c;
  undefined1 *local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c1f63;
  local_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) == 0) {
    local_3c = "FileSystem";
    ppuVar6 = local_38;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar6 = (undefined1 *)0x0;
      ppuVar6 = ppuVar6 + 1;
    }
    local_38[2] = (undefined1 *)0x80000000;
    local_38[3] = (undefined1 *)0x1;
    local_24 = 3;
    local_20 = 0x8000080;
    local_38[1] = &DAT_0067c18c;
    local_40 = 0x34;
    local_10 = 0xffffffff;
    local_88 = (int *)0x0;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_00526a20();
    iVar5 = (**(code **)(**(int **)Data_exref + 0xc))(*(int **)Data_exref,&local_40,&local_88);
    if (iVar5 == 0) {
      FUN_00575570(local_88);
      uStack_80 = 0xffffffff;
      uStack_7c = 0;
      pbStack_74 = (byte *)0x0;
      local_4._0_1_ = 1;
      iVar5 = FUN_005658d0(param_2,0xffffffff);
      pbVar3 = pbStack_74;
      if (iVar5 < 0) {
        local_4._0_1_ = 2;
      }
      else {
        uStack_8c = FUN_005b7010(0);
        if (((pbVar3[2] & 7) == 1) && (pbVar3[1] == 1)) {
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 8;
        }
        else if (pbVar3[0x10] == 0x10) {
          uVar11 = 0;
          uVar10 = 5;
          uVar9 = 5;
          uVar8 = 5;
          uVar7 = 0x10;
        }
        else if ((pbVar3[2] & 7) == 3) {
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 8;
          uVar7 = 8;
        }
        else {
          iVar5 = FUN_005657d0();
          if (iVar5 == 0) {
            uVar11 = 0;
            uVar10 = 8;
            uVar9 = 8;
            uVar8 = 8;
            uVar7 = 0x18;
          }
          else {
            uVar11 = 8;
            uVar10 = 8;
            uVar9 = 8;
            uVar8 = 8;
            uVar7 = 0x20;
          }
        }
        FUN_005b7050(uVar7,uVar8,uVar9,uVar10,uVar11);
        iVar5 = FUN_005b7030(uStack_8c);
        if (0x1f < *(uint *)(iVar5 + 4)) {
          iVar5 = FUN_005b7030(uStack_8c);
          iVar5 = (*(int *)(iVar5 + 4) + 7U >> 3) * (int)*(short *)(pbVar3 + 0xc);
          FUN_005b7050(0x20,8,8,8,8);
          if ((pbVar3[2] & 7) == 1) {
            iVar4 = FUN_00565800();
            iVar4 = (uint)*pbVar3 + (iVar4 + 6) * 3;
          }
          else {
            iVar4 = *pbVar3 + 0x12;
          }
          pbStack_54 = pbVar3 + iVar4;
          iStack_4c = (int)*(short *)(pbVar3 + 0xe);
          iStack_50 = (int)*(short *)(pbVar3 + 0xc);
          uStack_64 = *(undefined4 *)Pipeline_exref;
          piVar2 = (int *)*piVar1;
          puStack_5c = auStack_84;
          puStack_58 = &uStack_8c;
          pcStack_68 = "BigImage";
          uStack_60 = 0;
          uStack_6c = 0x2c;
          pcStack_44 = FUN_00404720;
          iStack_48 = iVar5;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *piVar1 = 0;
          }
          iVar5 = (**(code **)(**(int **)Dacom_exref + 0xc))(*(int **)Dacom_exref,&uStack_6c,piVar1)
          ;
          if (iVar5 != 0) {
            (**(code **)FDUMP_exref)
                      (0x100001,"%s(%d) : ERROR:General:%s",
                       "E:\\FL\\Scratch\\Source\\Client\\Interface\\Intro.cpp",0x1ff,
                       "Failed to create a BigImage from an image source!\n");
            local_4._0_1_ = 4;
            FUN_005659b0();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00526a20();
            local_4 = 0xffffffff;
            if (local_88 != (int *)0x0) {
              (**(code **)(*local_88 + 8))(local_88);
            }
            ExceptionList = local_c;
            return 0;
          }
          local_4._0_1_ = 5;
          FUN_005659b0();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00526a20();
          local_4 = 0xffffffff;
          if (local_88 != (int *)0x0) {
            (**(code **)(*local_88 + 8))(local_88);
          }
          goto LAB_005657ad;
        }
        local_4._0_1_ = 3;
      }
      FUN_005659b0();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00526a20();
    }
    local_4 = 0xffffffff;
    FUN_00526a20();
    uVar7 = 0;
  }
  else {
LAB_005657ad:
    uVar7 = 1;
  }
  ExceptionList = local_c;
  return uVar7;
}

