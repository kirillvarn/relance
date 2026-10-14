
void FUN_005a5390(void)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  size_t sVar4;
  int iVar5;
  _STARTUPINFOA *p_Var6;
  char *pcVar7;
  char *pcVar8;
  _PROCESS_INFORMATION local_25c;
  _STARTUPINFOA local_24c;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  p_Var6 = &local_24c;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    p_Var6->cb = 0;
    p_Var6 = (_STARTUPINFOA *)&p_Var6->lpReserved;
  }
  local_25c.hProcess = (HANDLE)0x0;
  local_25c.hThread = (HANDLE)0x0;
  local_25c.dwProcessId = 0;
  local_24c.cb = 0x44;
  local_25c.dwThreadId = 0;
  GetTempPathA(0x104,local_208);
  iVar5 = -1;
  pcVar7 = local_208;
  do {
    pcVar8 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar8 + -1) = s_dxdiag_txt_005e6334._0_4_;
  *(undefined4 *)(pcVar8 + 3) = s_dxdiag_txt_005e6334._4_4_;
  *(undefined2 *)(pcVar8 + 7) = s_dxdiag_txt_005e6334._8_2_;
  pcVar8[9] = s_dxdiag_txt_005e6334[10];
  wsprintfA(local_104,"dxdiag.exe %s",local_208);
  BVar2 = CreateProcessA((LPCSTR)0x0,local_104,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                         ,0,0x4000020,(LPVOID)0x0,(LPCSTR)0x0,&local_24c,&local_25c);
  if (BVar2 != 0) {
    DVar3 = WaitForSingleObject(local_25c.hProcess,60000);
    if (DVar3 != 0x102) {
      sVar4 = wcslen((wchar_t *)&DAT_0067de50);
      if (sVar4 != 0) {
        wcscat((wchar_t *)&DAT_0067de50,L"|");
      }
      sVar4 = wcslen((wchar_t *)&DAT_0067de50);
      (*(code *)PTR_FUN_0061641c)
                (0xfde9,0,local_208,0xffffffff,(int)&DAT_0067de50 + sVar4 * 2,0x410 - sVar4);
      *(undefined2 *)(&DAT_0067e058 + sVar4 * 2) = 0;
    }
    CloseHandle(local_25c.hProcess);
    CloseHandle(local_25c.hThread);
  }
  return;
}

