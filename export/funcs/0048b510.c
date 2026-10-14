
void __fastcall FUN_0048b510(undefined4 *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bc3fd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d26bc;
  param_1[0x1f] = &PTR_OnReceive_005d26ac;
  param_1[0xcb] = &PTR_LAB_005d26a4;
  local_4 = 4;
  FmtStr::destroy((FmtStr *)(param_1 + 0xdf));
  iVar2 = param_1[0xe5];
  if (iVar2 != 0) {
    FUN_005b7ec6(iVar2,0x60,*(undefined4 *)(iVar2 + -4),~MissionVendorProperties_exref);
    FUN_005b7e1d(iVar2 + -4);
  }
  FUN_005b7e1d(param_1[0xe7]);
  pcVar3 = (char *)param_1[0xd4];
  uVar6 = *(uint *)npos_exref;
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xd3);
  if (((pcVar3 != (char *)0x0) && (pcVar3[-1] != '\0')) && (pcVar3[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
    uVar5 = 0xffffffff;
    pcVar7 = pcVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (this,pcVar3,~uVar5 - 1);
  }
  uVar5 = param_1[0xd5];
  if (uVar5 < uVar6) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    memmove((void *)param_1[0xd4],(void *)((int)param_1[0xd4] + uVar6),uVar5 - uVar6);
    iVar2 = param_1[0xd5];
    bVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (this,iVar2 - uVar6,false);
    if (bVar4) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(this,iVar2 - uVar6)
      ;
    }
  }
  FUN_0042cc50();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            (this,0,*(uint *)npos_exref);
  FUN_0042cc30();
  (**(code **)(**(int **)MaterialLib_exref + 0x28))(*(int **)MaterialLib_exref,param_1[0xd2]);
  param_1[0xd2] = 0xffffffff;
  pvStack_c._0_1_ = 3;
  FmtStr::~FmtStr((FmtStr *)(param_1 + 0xdf));
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
  FUN_0042cc50();
  iVar2 = param_1[0xd4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
  FUN_00576010();
  pvStack_c = (void *)0xffffffff;
  FUN_0059fa50();
  ExceptionList = pcVar3;
  return;
}

