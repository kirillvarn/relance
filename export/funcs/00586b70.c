
void __fastcall FUN_00586b70(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  code *_Str2;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  HardpointSummary *this;
  int iVar12;
  code *_Str1;
  undefined4 *puVar13;
  allocator<char> local_75;
  int local_74;
  int local_70;
  int local_6c;
  HardpointSummary *local_68;
  char *local_64;
  int local_60;
  allocator<char> local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  allocator<char> local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  allocator<char> local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4404;
  local_c = ExceptionList;
  local_60 = param_1 + 0x560;
  ExceptionList = &local_c;
  local_6c = param_1;
  FUN_005873a0(*(undefined4 *)(param_1 + 0x564),*(undefined4 *)(param_1 + 0x568));
  if (*(int **)(param_1 + 0x4d4) != (int *)0x0) {
    this = (HardpointSummary *)**(int **)(param_1 + 0x4d4);
    local_4c = local_75;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_4 = 0;
    local_70 = 0;
    local_68 = this;
    if (this != (HardpointSummary *)0x0) {
      while (iVar7 = local_70, iVar4 = HardpointSummary::get_count(this), iVar7 < iVar4) {
        HardpointSummary::get_info(this,iVar7);
        local_64 = HardpointSummary::get_name(this,iVar7);
        FUN_00586560(local_64);
        if ((*(int *)(param_1 + 0x550) != 0) &&
           (iVar4 = *(int *)(param_1 + 0x554) - *(int *)(param_1 + 0x550) >> 2, iVar4 != 0)) {
          iVar9 = -1;
          iVar11 = 0;
          iVar7 = 0;
          do {
            iVar12 = (&DAT_00615240)[iVar7 * 2];
            iVar6 = 0;
            if (0 < iVar4) {
              piVar1 = (int *)(param_1 + 0x550);
              do {
                if ((iVar12 == *(int *)(*piVar1 + iVar6 * 4)) && (iVar11 < iVar12)) {
                  iVar9 = iVar7;
                  iVar11 = iVar12;
                }
                iVar6 = iVar6 + 1;
                param_1 = local_6c;
              } while (iVar6 < iVar4);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x3c);
          iVar7 = local_70;
          this = local_68;
          if (-1 < iVar9) {
            switch(iVar11) {
            case 4:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
              uVar10 = 0;
              break;
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3a:
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x41:
            case 0x42:
              uVar10 = 1;
              break;
            default:
              uVar10 = 2;
            }
            uVar5 = FUN_00585b10(iVar11);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      (local_3c,local_64,&local_75);
            uVar3 = (&DAT_00615244)[iVar9 * 2];
            local_28[0] = local_75;
            local_4._0_1_ = 1;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_28,
                       false);
            local_4._0_1_ = 2;
            local_2c = uVar3;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_28,
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)local_3c,0,*(uint *)npos_exref);
            local_4._0_1_ = 0;
            local_18 = iVar9;
            local_14 = uVar10;
            local_10 = uVar5;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                      (local_3c,true);
            local_4._0_1_ = 3;
            FUN_00587200(local_44,&local_2c);
            local_4 = (uint)local_4._1_3_ << 8;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_28,
                       true);
            iVar7 = local_70;
            this = local_68;
            param_1 = local_6c;
          }
        }
        local_70 = iVar7 + 1;
      }
    }
    local_5c = local_75;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4 = CONCAT31(local_4._1_3_,4);
    if (local_48 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = local_44 - local_48 >> 5;
    }
    local_74 = 0;
    if (0 < iVar7) {
      do {
        FUN_00537260(local_54,1,&local_74);
        local_74 = local_74 + 1;
      } while (local_74 < iVar7);
    }
    local_70 = iVar7 + -1;
    iVar7 = local_58;
    do {
      bVar8 = true;
      local_74 = 0;
      iVar4 = local_70;
      if (local_70 < 1) break;
      do {
        iVar12 = *(int *)(iVar7 + local_74 * 4) * 0x20;
        iVar4 = *(int *)(iVar12 + 0x14 + local_48);
        iVar11 = *(int *)(iVar7 + 4 + local_74 * 4) * 0x20 + local_48;
        iVar9 = *(int *)(iVar11 + 0x14);
        if (iVar4 < iVar9) {
LAB_00586e44:
          uVar10 = *(undefined4 *)(iVar7 + local_74 * 4);
          *(undefined4 *)(iVar7 + local_74 * 4) = *(undefined4 *)(iVar7 + 4 + local_74 * 4);
          *(undefined4 *)(local_58 + 4 + local_74 * 4) = uVar10;
          bVar8 = false;
          iVar7 = local_58;
        }
        else if (iVar4 == iVar9) {
          _Str2 = *(code **)(iVar11 + 8);
          if (_Str2 == (code *)0x0) {
            _Str2 = _C_exref;
          }
          _Str1 = *(code **)(iVar12 + local_48 + 8);
          if (_Str1 == (code *)0x0) {
            _Str1 = _C_exref;
          }
          iVar4 = stricmp((char *)_Str1,(char *)_Str2);
          iVar7 = local_58;
          if (iVar4 < 0) goto LAB_00586e44;
        }
        local_74 = local_74 + 1;
      } while (local_74 < local_70);
      iVar4 = local_70;
    } while (!bVar8);
    while (local_74 = iVar4, -1 < local_74) {
      iVar7 = *(int *)(iVar7 + local_74 * 4) * 0x20;
      uVar10 = *(undefined4 *)(iVar7 + 0x1c + local_48);
      puVar13 = (undefined4 *)(iVar7 + local_48);
      uVar3 = puVar13[6];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_3c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)(puVar13 + 1));
      uVar5 = *puVar13;
      local_28[0] = local_75;
      local_4._0_1_ = 5;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_28,false);
      local_4 = CONCAT31(local_4._1_3_,6);
      local_2c = uVar5;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_28,
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 local_3c,0,*(uint *)npos_exref);
      local_18 = 0;
      local_14 = uVar3;
      local_10 = uVar10;
      if (local_38 != 0) {
        cVar2 = *(char *)(local_38 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005b7e1d((char *)(local_38 + -1));
        }
        else {
          *(char *)(local_38 + -1) = cVar2 + -1;
        }
      }
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_4._0_1_ = 7;
      FUN_00587470(*(undefined4 *)(local_60 + 8),1,&local_2c);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (local_24 != 0) {
        cVar2 = *(char *)(local_24 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005b7e1d((char *)(local_24 + -1));
        }
        else {
          *(char *)(local_24 + -1) = cVar2 + -1;
        }
      }
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      iVar7 = local_58;
      iVar4 = local_74 + -1;
    }
    FUN_005b7e1d(iVar7);
    iVar4 = local_44;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4 = 0xffffffff;
    for (iVar7 = local_48; iVar7 != iVar4; iVar7 = iVar7 + 0x20) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(iVar7 + 4),true
                );
    }
    FUN_005b7e1d(local_48);
  }
  ExceptionList = local_c;
  return;
}

