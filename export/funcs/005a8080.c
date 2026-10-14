
undefined4 FUN_005a8080(char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  CHAR aCStack_214 [260];
  char acStack_110 [260];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined1 uStack_4;
  undefined1 uStack_3;
  
  RefreshLoadingProgress();
  cVar2 = FUN_00564b00();
  if (cVar2 == '\0') {
    FUN_0046b170();
    if (DAT_0067ecd0 != (int *)0x0) {
      FUN_005aa440();
      (**(code **)(*DAT_0067ecd0 + 0x28))();
      FUN_005b6fd0(DAT_0067ecd0);
      DAT_0067ecd0 = (int *)0x0;
      DAT_0067ecd4 = 0;
    }
    DAT_00673344 = 0;
  }
  FUN_004c4bc0();
  CleanUpDatabases();
  RefreshLoadingProgress();
  bVar3 = SinglePlayer();
  if (!bVar3) {
    FUN_005b6f40("RemoteServer.dll");
  }
  else {
    FUN_005b6f40(s_Server_dll_00615aec);
  }
  SetMultiPlayer(!bVar3);
  RefreshLoadingProgress();
  DAT_0067ecd0 = (int *)FUN_005b6fb0();
  DAT_0067ecd4 = FUN_005b6fc0();
  if (DAT_0067ecd0 != (int *)0x0) {
    GetModuleFileNameA(DAT_0067eca4,aCStack_214,0x104);
    uStack_c = 1;
    uStack_3 = 1;
    uStack_4 = 1;
    iVar1 = -(int)param_1;
    do {
      cVar2 = *param_1;
      param_1[(int)(acStack_110 + iVar1)] = cVar2;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    uStack_8 = 0x36d9;
    uVar4 = (**(code **)(*DAT_0067ecd0 + 0x24))(aCStack_214);
    return uVar4;
  }
  return 0;
}

