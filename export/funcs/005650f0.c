
undefined1 __thiscall FUN_005650f0(int param_1,char *param_2)

{
  char cVar1;
  code cVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  code *pcVar6;
  HANDLE h;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  int iVar13;
  char *pcVar14;
  undefined4 *puVar15;
  HANDLE local_ac;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_a8 [4];
  code *local_a4;
  int local_a0;
  int *local_94;
  undefined1 local_90 [4];
  undefined4 local_8c;
  char *local_88;
  undefined4 local_84;
  undefined4 local_80;
  HANDLE *local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  code *local_64;
  undefined4 local_60 [5];
  undefined4 local_4c;
  short local_3a;
  int local_38;
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 uVar12;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c1f1c;
  local_c = ExceptionList;
  local_94 = (int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) != 0) {
    return 1;
  }
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_a8,false);
  uVar8 = 0xffffffff;
  pcVar14 = &DAT_00679e0c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_a8,&DAT_00679e0c,~uVar8 - 1);
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Freeze(local_a8);
  pcVar6 = local_a4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Freeze(local_a8);
  pcVar5 = local_a4;
  if (local_a4 != (code *)0x0) {
    pcVar5 = local_a4 + local_a0;
  }
  if (pcVar5 != pcVar6) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Freeze(local_a8);
    pcVar6 = local_a4;
    if (local_a4 != (code *)0x0) {
      pcVar6 = local_a4 + local_a0;
    }
    if (pcVar6[-1] != (code)0x5c) {
      uVar8 = 0xffffffff;
      pcVar14 = "\\";
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                (local_a8,"\\",~uVar8 - 1);
    }
  }
  uVar8 = 0xffffffff;
  pcVar14 = &DAT_0067c18c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (local_a8,&DAT_0067c18c,~uVar8 - 1);
  uVar8 = 0xffffffff;
  pcVar14 = param_2;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (local_a8,param_2,~uVar8 - 1);
  uVar12 = 0;
  uVar11 = 0;
  pcVar6 = local_a4;
  if (local_a4 == (code *)0x0) {
    pcVar6 = _C_exref;
  }
  h = LoadImageA((HINSTANCE)0x0,(LPCSTR)pcVar6,0,0,0,0x2010);
  local_ac = h;
  if (h != (HANDLE)0x0) {
    puVar15 = local_60;
    for (iVar9 = 0x15; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    iVar9 = GetObjectA(h,0x54,local_60);
    uVar11 = uVar12;
    if (((iVar9 == 0x54) && ((local_38 == 0 || (local_38 == 3)))) &&
       ((local_3a == 0x10 || ((local_3a == 0x18 || (local_3a == 0x20)))))) {
      if (local_38 == 0) {
        iVar7 = 8;
        iVar10 = 8;
        iVar9 = 8;
      }
      else {
        iVar9 = 0;
        iVar10 = 0x20;
        do {
          if ((local_20 & 1) != 0) {
            iVar9 = iVar9 + 1;
          }
          local_20 = local_20 >> 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar10 = 0;
        iVar7 = 0x20;
        do {
          if ((local_1c & 1) != 0) {
            iVar10 = iVar10 + 1;
          }
          local_1c = local_1c >> 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar7 = 0;
        iVar13 = 0x20;
        do {
          if ((local_18 & 1) != 0) {
            iVar7 = iVar7 + 1;
          }
          local_18 = local_18 >> 1;
          iVar13 = iVar13 + -1;
          h = local_ac;
        } while (iVar13 != 0);
      }
      FUN_005b7050(local_3a,iVar9,iVar10,iVar7,0);
      FUN_005b7050(0x20,8,8,8,0);
      piVar4 = local_94;
      local_84 = *(undefined4 *)Pipeline_exref;
      local_7c = &local_ac;
      local_78 = local_90;
      local_70 = local_60[1];
      piVar3 = (int *)*local_94;
      local_74 = local_4c;
      local_88 = "BigImage";
      local_80 = 0;
      local_6c = local_60[2];
      local_68 = local_60[3];
      local_8c = 0x2c;
      local_64 = FUN_00404720;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *piVar4 = 0;
      }
      iVar9 = (**(code **)(**(int **)Dacom_exref + 0xc))(*(int **)Dacom_exref,&local_8c,piVar4);
      if (iVar9 == 0) {
        uVar11 = 1;
      }
      else {
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : ERROR:General:%s",
                   "E:\\FL\\Scratch\\Source\\Client\\Interface\\Intro.cpp",0x1ab,
                   "Failed to create a BigImage from an image source!\n");
        uVar11 = 0;
      }
    }
    DeleteObject(h);
  }
  if (local_a4 != (code *)0x0) {
    cVar2 = local_a4[-1];
    if ((cVar2 == (code)0x0) || (cVar2 == (code)0xff)) {
      FUN_005b7e1d(local_a4 + -1);
    }
    else {
      local_a4[-1] = (code)((char)cVar2 + -1);
    }
  }
  ExceptionList = local_c;
  return uVar11;
}

