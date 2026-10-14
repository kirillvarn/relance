
void FUN_005b748f(void)

{
  FUN_005b7b3d("user32.dll","GetWindowLongA",&PTR_FUN_0061642c,DAT_0067ee30,&LAB_005b7d15);
                    /* WARNING: Could not recover jumptable at 0x005b74ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_0061642c)();
  return;
}

