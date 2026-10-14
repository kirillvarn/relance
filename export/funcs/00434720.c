
uint FUN_00434720(undefined4 param_1,uint param_2,wchar_t *param_3,int param_4)

{
  wchar_t *_Dest;
  int iVar1;
  HMODULE hModule;
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar2;
  uint uVar3;
  uint _Count;
  
  hModule = (HMODULE)FUN_0057d980(&param_2);
  iVar1 = param_4;
  _Dest = param_3;
  if ((param_3 != (wchar_t *)0x0) && (param_4 < 1)) {
    return 0;
  }
  uVar3 = param_2 & 0xf;
  hResInfo = FindResourceExA(hModule,(LPCSTR)0x6,(LPCSTR)(uint)(ushort)((short)(param_2 >> 4) + 1),0
                            );
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(hModule,hResInfo);
    puVar2 = LockResource(hResData);
    if (puVar2 != (ushort *)0x0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar2 = puVar2 + *puVar2 + 1;
      }
      uVar3 = (uint)*puVar2;
      if (_Dest == (wchar_t *)0x0) {
        return uVar3;
      }
      _Count = iVar1 - 1U;
      if (uVar3 <= iVar1 - 1U) {
        _Count = uVar3;
      }
      wcsncpy(_Dest,(wchar_t *)(puVar2 + 1),_Count);
      _Dest[_Count] = L'\0';
      return _Count;
    }
  }
  if (_Dest != (wchar_t *)0x0) {
    *_Dest = L'\0';
  }
  return 0;
}

