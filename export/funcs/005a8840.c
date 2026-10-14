
undefined4 FUN_005a8840(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_0067ecd0 == (int *)0x0) {
    return 0;
  }
  bVar1 = SinglePlayer();
  if (bVar1) {
    DAT_0067e960 = 0;
    iVar3 = FUN_005aa510();
    if (iVar3 == 1) goto LAB_005a894a;
    if (DAT_0067e969 == '\x02') {
      DAT_0067e960 = 1;
      goto LAB_005a8888;
    }
  }
  else {
LAB_005a8888:
    iVar3 = FUN_005aa510();
  }
  if (iVar3 == 1) {
LAB_005a894a:
    FUN_0046b2b0();
    return 1;
  }
  if (iVar3 != 2) {
    if (DAT_0067e969 == '\0') {
      uVar4 = 0x742;
    }
    else if (DAT_0067e969 == '\x01') {
      uVar4 = 0x753;
    }
    else if (DAT_0067e969 == '\a') {
      uVar4 = 0x743;
    }
    else {
      if (DAT_0067ecbe != '\0') goto LAB_005a88ce;
      uVar4 = 0x739;
    }
    FUN_00473cb0(uVar4,1,0);
  }
LAB_005a88ce:
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
  return 0;
}

