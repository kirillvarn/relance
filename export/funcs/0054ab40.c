
bool __fastcall FUN_0054ab40(int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *unaff_EBX;
  uint uVar7;
  undefined1 *local_234 [7];
  char acStack_218 [260];
  char acStack_114 [260];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c12bb;
  pvStack_c = ExceptionList;
  puVar1 = (undefined1 *)(param_1 + 0xb);
  ExceptionList = &pvStack_c;
  *puVar1 = 1;
  local_4 = 0;
  local_234[0] = puVar1;
  FUN_00579290();
  FUN_0045a100(1);
  RefreshLoadingProgress();
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00577490("IDR_SPACE");
  (**(code **)(*DAT_0067ecd0 + 0x100))(DAT_00673344);
  DAT_00678b95 = '\0';
  DAT_00678b94 = 0;
  FUN_005a89b0(&DAT_00678b95,0x40a00000,0x42700000);
  if (DAT_00678b95 == '\0') {
    bVar3 = SinglePlayer();
    if (bVar3) {
      DAT_0067ecbd = 1;
      DAT_00679778 = 0;
      *puVar1 = 0;
      bVar3 = true;
    }
    else {
      DAT_0067ecbe = 1;
      DAT_00679778 = 0;
      *puVar1 = 0;
      bVar3 = true;
    }
  }
  else {
    RefreshLoadingProgress();
    FUN_005020a0();
    FUN_00510f90();
    RefreshLoadingProgress();
    if (DAT_00679788 == (int *)0x0) {
      GetFileSysPath(acStack_114,"fx\\lightanim.ini",(IFileSystem *)0x0);
      FUN_00538b20(acStack_114);
      FUN_0052a7a0();
      GetFileSysPath(acStack_114,&DAT_0067a22c,(IFileSystem *)0x0);
      FUN_004fe1c0(acStack_114);
      FUN_0042acb0(1);
    }
    else {
      SafeWaitForSingleObject((void *)DAT_00679788[2],0xffffffff);
      if (DAT_00679788 != (int *)0x0) {
        (**(code **)(*DAT_00679788 + 4))(1);
      }
      DAT_00679788 = (int *)0x0;
    }
    RefreshLoadingProgress();
    uVar5 = FUN_004c4830();
    FUN_005545a0(uVar5);
    RefreshLoadingProgress();
    FUN_0054b520();
    RefreshLoadingProgress();
    (**(code **)(*DAT_0067ecd0 + 0x2c))();
    RefreshLoadingProgress();
    iVar6 = FUN_00543350();
    pcVar2 = *(char **)(*(int *)(iVar6 + 4) + 0x60);
    if (*pcVar2 == '\0') {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\space.cpp",0x5d5,
                 "ship has no cockpit definition");
      GetFileSysPath(acStack_218,"cockpits\\cockpit.ini",(IFileSystem *)0x0);
    }
    else {
      GetFileSysPath(acStack_218,pcVar2,(IFileSystem *)0x0);
    }
    FUN_005173c0(acStack_218);
    FUN_005187d0(acStack_218);
    FUN_0051a2b0(acStack_218);
    FUN_0051ad80(acStack_218);
    FUN_004c73d0();
    *(undefined1 *)(param_1 + 0xbaa) = 0;
    RefreshLoadingProgress();
    FUN_00549bc0(0,0);
    DAT_00675294 = 0;
    RefreshLoadingProgress();
    FUN_00549830();
    RefreshLoadingProgress();
    FUN_004120d0(1);
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    local_234[0] = (undefined1 *)0xc3;
    local_234[1] = (undefined1 *)0xc4;
    local_234[2] = (undefined1 *)0xf;
    local_234[3] = (undefined1 *)0x31;
    local_234[4] = (undefined1 *)0x39;
    local_234[5] = (undefined1 *)0x38;
    local_234[6] = (undefined1 *)0xbf;
    uVar7 = 0;
    do {
      FUN_005760d0(local_234[uVar7]);
      uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
    RefreshLoadingProgress();
    FUN_0045b490();
    *(undefined1 *)(param_1 + 0xba9) = 1;
    cVar4 = FUN_004c8110(8);
    if (cVar4 != '\0') {
      *(undefined4 *)(param_1 + 0xba4) = 0;
    }
    if (*(int *)(param_1 + 0xba0) == 0) {
      FUN_00549e70("player",0);
    }
    FUN_005a89b0(&DAT_00678b96,0x40a00000,0x42700000);
    if (DAT_00678b96 == '\0') {
      bVar3 = SinglePlayer();
      if (bVar3) {
        DAT_0067ecbd = 1;
      }
      else {
        DAT_0067ecbe = 1;
      }
    }
    DAT_00679778 = 0;
    bVar3 = SinglePlayer();
    if ((!bVar3) && (DAT_00679778 == 0)) {
      FUN_0046a4a0(1);
    }
    RefreshLoadingProgress();
    bVar3 = DAT_00679778 == 0;
    *unaff_EBX = 0;
  }
  ExceptionList = pvStack_10;
  return bVar3;
}

