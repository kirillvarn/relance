
void __fastcall FUN_0048d140(int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  bool bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  MissionVendorProperties *this_00;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  
  if (*(int *)(param_1 + 0x378) < 0) {
    (**(code **)(**(int **)(param_1 + 0x450) + 0xa8))(1,1,0);
    return;
  }
  this_00 = (MissionVendorProperties *)
            (*(int *)(param_1 + 0x378) * 0x60 + *(int *)(param_1 + 0x394));
  pcVar3 = MissionVendorProperties::get_icon_texture(this_00);
  uVar4 = *(uint *)npos_exref;
  pcVar9 = *(char **)(param_1 + 0x350);
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x34c);
  if (((pcVar9 != (char *)0x0) && (pcVar9[-1] != '\0')) && (pcVar9[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
    uVar7 = 0xffffffff;
    pcVar8 = pcVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (this,pcVar9,~uVar7 - 1);
  }
  uVar7 = *(uint *)(param_1 + 0x354);
  if (uVar7 < uVar4) {
    uVar4 = uVar7;
  }
  if (uVar4 != 0) {
    memmove(*(void **)(param_1 + 0x350),(void *)((int)*(void **)(param_1 + 0x350) + uVar4),
            uVar7 - uVar4);
    uVar4 = *(int *)(param_1 + 0x354) - uVar4;
    bVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (this,uVar4,false);
    if (bVar1) {
      *(uint *)(param_1 + 0x354) = uVar4;
      *(undefined1 *)(uVar4 + *(int *)(param_1 + 0x350)) = 0;
    }
  }
  FUN_0042cc50();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            (this,0,*(uint *)npos_exref);
  FUN_0042cc30();
  uVar4 = 0xffffffff;
  pcVar9 = pcVar3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4 - 1;
  bVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (this,uVar4,true);
  if (bVar1) {
    pcVar9 = *(char **)(param_1 + 0x350);
    for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
    *(uint *)(param_1 + 0x354) = uVar4;
    *(undefined1 *)(uVar4 + *(int *)(param_1 + 0x350)) = 0;
  }
  cVar2 = FUN_0042d4c0("MV_vidmaterial");
  if (cVar2 == '\0') {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Cannot find material %s in vendor\n",
               "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_MissionVendor.cpp",0x3af,"MV_vidmaterial");
  }
  pcVar5 = _C_exref;
  if (*(code **)(param_1 + 0x350) != (code *)0x0) {
    pcVar5 = *(code **)(param_1 + 0x350);
  }
  FUN_0042d4f0(pcVar5,"Interface\\NeuroNet\\MissionVendor\\MissionVendor.txm");
  uVar4 = *(uint *)(this_00 + 0x10);
  uVar6 = **(undefined4 **)(param_1 + 0x39c);
  uVar10 = 0;
  if (uVar4 < *(uint *)(param_1 + 0x3a0)) {
    uVar6 = (*(undefined4 **)(param_1 + 0x39c))[uVar4];
    uVar10 = *(undefined4 *)(&DAT_00611bf0 + uVar4 * 4);
  }
  (**(code **)(**(int **)(param_1 + 0x450) + 0xa8))(4,uVar6,0);
  (**(code **)(**(int **)(param_1 + 0x450) + 0xa8))(3,uVar10,0);
  (**(code **)(**(int **)(param_1 + 0x450) + 0xa8))(1,0,0);
  return;
}

