
void FUN_005b6fd0(void)

{
  if (DAT_0067ed54 != (HMODULE)0x0) {
    FreeLibrary(DAT_0067ed54);
    DAT_0067ed54 = (HMODULE)0x0;
    DAT_0067ed5c = 0;
    DAT_0067ed58 = 0;
  }
  return;
}

