
void FUN_005b74b4(void)

{
  FUN_005b7b3d("user32.dll","SetWindowLongA",&PTR_FUN_00616434,DAT_0067ee2c,&LAB_005b7d67);
                    /* WARNING: Could not recover jumptable at 0x005b74d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00616434)();
  return;
}

