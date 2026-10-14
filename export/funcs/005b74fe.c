
void FUN_005b74fe(void)

{
  FUN_005b7b3d("kernel32.dll","GetProcAddress",&PTR_FUN_00616418,DAT_0067ee24,&LAB_005b7c9f);
                    /* WARNING: Could not recover jumptable at 0x005b751d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00616418)();
  return;
}

