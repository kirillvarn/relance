
/* Library Function - Multiple Matches With Different Base Names
    _GodotFailExtTextOutW@32
    _GodotFailWideCharToMultiByte@32
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2015 Release */

undefined4 FID_conflict__GodotFailWideCharToMultiByte_32(void)

{
  HMODULE pHVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = "ExtTextOutW";
  pHVar1 = GetModuleHandleA("gdi32.dll");
  UNRECOVERED_JUMPTABLE = (code *)_GetProcAddressInternal_8(pHVar1,pcVar3);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b7dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  SetLastError(0x7f);
  return 0;
}

