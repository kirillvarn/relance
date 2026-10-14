
void FUN_005b7420(void)

{
  FUN_005b7b3d("gdi32.dll","ExtTextOutW",&PTR_FUN_0061640c,DAT_0067ee3c,
               FID_conflict__GodotFailWideCharToMultiByte_32);
                    /* WARNING: Could not recover jumptable at 0x005b743f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_0061640c)();
  return;
}

