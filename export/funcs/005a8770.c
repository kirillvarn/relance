
undefined4 FUN_005a8770(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  RefreshLoadingProgress();
  FUN_004c4a80();
  cVar1 = FUN_005a8080(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_005a9990(1);
    if (iVar2 == 1) {
      return 1;
    }
    if (iVar2 == 4) {
      uVar3 = 0x73e;
    }
    else if (iVar2 == 6) {
      uVar3 = 0x73f;
    }
    else {
      if (DAT_0067ecbe != '\0') goto LAB_005a87da;
      uVar3 = 0x73d;
    }
    FUN_00473cb0(uVar3,1,0);
  }
LAB_005a87da:
  cVar1 = FUN_00564b00();
  if (cVar1 == '\0') {
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

