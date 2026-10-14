
void FUN_005a8260(void)

{
  char cVar1;
  
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
                    /* WARNING: Could not recover jumptable at 0x005a82be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CleanUpDatabases();
  return;
}

