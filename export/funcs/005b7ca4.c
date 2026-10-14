
/* Library Function - Single Match
    _GodotFailMultiByteToWideChar@24
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2015 Release */

undefined4 _GodotFailMultiByteToWideChar_24(void)

{
  HMODULE pHVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = "MultiByteToWideChar";
  pHVar1 = GetModuleHandleA("kernel32.dll");
  UNRECOVERED_JUMPTABLE = (code *)_GetProcAddressInternal_8(pHVar1,pcVar3);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b7cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  SetLastError(0x7f);
  return 0;
}

