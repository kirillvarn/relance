
void __fastcall FUN_0044a030(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char *pcVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [4];
  char *local_6c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [4];
  char *local_5c;
  undefined4 local_50;
  undefined4 local_4c [12];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9ba3;
  local_c = ExceptionList;
  iVar10 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x818) = 0;
  do {
    iVar9 = *(int *)(param_1 + 0x40);
    if (*(int *)(iVar9 + 0x158) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar9 + 0x15c) - *(int *)(iVar9 + 0x158) >> 2;
    }
    if (iVar4 <= iVar10) {
      ExceptionList = local_c;
      return;
    }
    puVar2 = *(undefined4 **)(*(int *)(iVar9 + 0x158) + iVar10 * 4);
    bVar3 = RtcSlider::is_enabled(puVar2[0x13]);
    if (bVar3) {
      FUN_00445e20();
      pcVar12 = (char *)*puVar2;
      uVar7 = 0xffffffff;
      pcVar14 = pcVar12;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      local_4 = 0;
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (local_70,uVar7,true);
      if (bVar3) {
        pcVar14 = local_6c;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(local_70,uVar7);
      }
      pcVar12 = (char *)puVar2[1];
      uVar7 = 0xffffffff;
      pcVar14 = pcVar12;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (local_60,uVar7,true);
      if (bVar3) {
        pcVar14 = local_5c;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(local_60,uVar7);
      }
      local_50 = puVar2[2];
      puVar11 = puVar2 + 3;
      puVar13 = local_4c;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      pcVar12 = (char *)puVar2[0x12];
      uVar7 = 0xffffffff;
      pcVar14 = pcVar12;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (local_1c,uVar7,true);
      if (bVar3) {
        pcVar14 = local_18;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(local_1c,uVar7);
      }
      pvVar5 = operator_new(0x80);
      local_4._0_1_ = 1;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00445f40(param_1,local_70);
      }
      *(undefined4 *)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) = uVar6;
      *(undefined1 *)(*(int *)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) + 0x10) =
           *(undefined1 *)(puVar2 + 0xf);
      *(undefined1 *)(*(int *)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) + 0x11) =
           *(undefined1 *)((int)puVar2 + 0x3d);
      *(undefined1 *)(*(int *)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) + 0x12) =
           *(undefined1 *)((int)puVar2 + 0x3e);
      *(undefined1 *)(*(int *)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) + 0x49) =
           *(undefined1 *)((int)puVar2 + 0x3f);
      *(undefined1 *)(*(int *)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) + 0x15) =
           *(undefined1 *)(puVar2 + 0x10);
      *(undefined1 *)(*(int *)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) + 0x16) =
           *(undefined1 *)((int)puVar2 + 0x41);
      *(undefined4 *)(*(int *)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) + 0x18) =
           puVar2[0x11];
      *(undefined1 *)(*(int *)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) + 0x14) =
           *(undefined1 *)(puVar2 + 0x14);
      local_4 = (uint)local_4._1_3_ << 8;
      if (*(char *)((int)puVar2 + 0x3f) != '\0') {
        uVar6 = (**(code **)(**(int **)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) + 0x18))();
        *(undefined4 *)(param_1 + 0x44) = uVar6;
        *(undefined4 *)(param_1 + 0x48) =
             *(undefined4 *)(*(int *)(param_1 + 0x618 + *(int *)(param_1 + 0x818) * 4) + 0x58);
      }
      *(int *)(param_1 + 0x818) = *(int *)(param_1 + 0x818) + 1;
      local_4 = 0xffffffff;
      FUN_00445ea0();
    }
    iVar10 = iVar10 + 1;
  } while( true );
}

