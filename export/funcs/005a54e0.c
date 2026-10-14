
undefined4 FUN_005a54e0(int *param_1)

{
  char cVar1;
  bool bVar2;
  HANDLE pvVar3;
  undefined4 *lpBaseAddress;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceHandle;
  HANDLE hSourceProcessHandle;
  char *pcVar4;
  LSTATUS LVar5;
  size_t sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  undefined4 *puVar11;
  wchar_t *pwVar12;
  undefined4 *puVar13;
  _STARTUPINFOA *p_Var14;
  LPHANDLE lpTargetHandle;
  DWORD DVar15;
  BOOL BVar16;
  DWORD dwOptions;
  CHAR local_2a4 [260];
  _PROCESS_INFORMATION local_1a0;
  _STARTUPINFOA local_190;
  CHAR local_14c [260];
  int local_48 [2];
  HKEY local_40;
  HANDLE local_3c;
  HANDLE local_38;
  HANDLE local_34;
  HANDLE local_30;
  _SECURITY_ATTRIBUTES local_2c;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005e63e8;
  puStack_10 = &DAT_005b8082;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffd50;
  local_20 = 1;
  if ((*(int *)*param_1 == -0x7ffffffd) || (*(int *)*param_1 == -0x7ffffffc)) {
    return 0;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  CDPServer::CrashCleanup();
  local_8 = 0xffffffff;
  local_2c.lpSecurityDescriptor = (LPVOID)0x0;
  local_2c.nLength = 0xc;
  local_2c.bInheritHandle = 1;
  pvVar3 = CreateFileMappingA((HANDLE)0xffffffff,&local_2c,4,0,0x1c50,(LPCSTR)0x0);
  if (pvVar3 != (HANDLE)0x0) {
    local_30 = pvVar3;
    lpBaseAddress = MapViewOfFile(pvVar3,6,0,0,0);
    if (lpBaseAddress != (undefined4 *)0x0) {
      puVar11 = lpBaseAddress;
      for (iVar7 = 0x714; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      pvVar3 = CreateEventA(&local_2c,0,0,(LPCSTR)0x0);
      local_34 = pvVar3;
      if (pvVar3 != (HANDLE)0x0) {
        local_38 = CreateEventA(&local_2c,0,0,(LPCSTR)0x0);
        if (local_38 != (HANDLE)0x0) {
          pvVar3 = CreateMutexA(&local_2c,0,(LPCSTR)0x0);
          local_3c = pvVar3;
          if (pvVar3 != (HANDLE)0x0) {
            dwOptions = 0;
            BVar16 = 1;
            DVar15 = 0x1f0fff;
            lpTargetHandle = (LPHANDLE)(lpBaseAddress + 9);
            hTargetProcessHandle = GetCurrentProcess();
            hSourceHandle = GetCurrentProcess();
            hSourceProcessHandle = GetCurrentProcess();
            BVar16 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,
                                     lpTargetHandle,DVar15,BVar16,dwOptions);
            if (BVar16 != 0) {
              DVar15 = GetCurrentProcessId();
              lpBaseAddress[1] = DVar15;
              DVar15 = GetCurrentThreadId();
              lpBaseAddress[2] = DVar15;
              lpBaseAddress[7] = local_34;
              lpBaseAddress[5] = local_38;
              lpBaseAddress[8] = pvVar3;
              *lpBaseAddress = 0x1c50;
              lpBaseAddress[4] = param_1;
              lpBaseAddress[3] = *(undefined4 *)(*param_1 + 0xc);
              lpBaseAddress[0xd] = 1;
              lpBaseAddress[0xf] = 0x10;
              wcscpy((wchar_t *)(lpBaseAddress + 0x12),(wchar_t *)&DAT_0067e670);
              pcVar4 = "Microsoft\\PCHealth\\ErrorReporting\\DW";
              do {
                cVar1 = *pcVar4;
                *(char *)((int)(lpBaseAddress + -0x17949e) + (int)pcVar4) = cVar1;
                pcVar4 = pcVar4 + 1;
              } while (cVar1 != '\0');
              pcVar4 = 
              "HKLM\\Software\\Microsoft\\Microsoft Games\\Freelancer\\1.0\\DigitalProductID";
              do {
                cVar1 = *pcVar4;
                *(char *)((int)(lpBaseAddress + -0x1794ce) + (int)pcVar4) = cVar1;
                pcVar4 = pcVar4 + 1;
              } while (cVar1 != '\0');
              LVar5 = RegOpenKeyExA((HKEY)0x80000002,
                                    "Software\\Microsoft\\Microsoft Games\\Freelancer\\1.0",0,1,
                                    &local_40);
              if (LVar5 == 0) {
                local_48[1] = 4;
                LVar5 = RegQueryValueExA(local_40,"LangID",(LPDWORD)0x0,(LPDWORD)0x0,
                                         (LPBYTE)local_48,(LPDWORD)(local_48 + 1));
                if (LVar5 == 0) {
                  lpBaseAddress[0x451] = local_48[0] + 0x400;
                }
                RegCloseKey(local_40);
              }
              lpBaseAddress[10] = 0x100;
              pwVar10 = L"common.dll";
              pwVar12 = (wchar_t *)(lpBaseAddress + 0x484);
              for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(undefined4 *)pwVar12 = *(undefined4 *)pwVar10;
                pwVar10 = pwVar10 + 2;
                pwVar12 = pwVar12 + 2;
              }
              *pwVar12 = *pwVar10;
              GetModuleFileNameA((HMODULE)0x0,local_14c,0x104);
              (*(code *)PTR_FUN_0061641c)(0xfde9,0,local_14c,0xffffffff,lpBaseAddress + 0x2e,0x104);
              FUN_005a5390();
              sVar6 = wcslen((wchar_t *)&DAT_0067de50);
              uVar9 = sVar6 * 2 + 2;
              puVar11 = &DAT_0067de50;
              puVar13 = lpBaseAddress + 0x506;
              for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar13 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar13 = puVar13 + 1;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
                puVar13 = (undefined4 *)((int)puVar13 + 1);
              }
              ErrorHandler::deactivate();
              p_Var14 = &local_190;
              for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
                p_Var14->cb = 0;
                p_Var14 = (_STARTUPINFOA *)&p_Var14->lpReserved;
              }
              local_190.cb = 0x44;
              local_1a0.hProcess = (HANDLE)0x0;
              local_1a0.hThread = (HANDLE)0x0;
              local_1a0.dwProcessId = 0;
              local_1a0.dwThreadId = 0;
              wsprintfA(local_2a4," -x -s %u",local_30);
              BVar16 = CreateProcessA("dw15.exe",local_2a4,(LPSECURITY_ATTRIBUTES)0x0,
                                      (LPSECURITY_ATTRIBUTES)0x0,1,0x4000020,(LPVOID)0x0,(LPCSTR)0x0
                                      ,&local_190,&local_1a0);
              if (BVar16 == 0) {
                local_20 = 0;
                pvVar3 = local_3c;
              }
              else {
                bVar2 = true;
                do {
                  DVar15 = WaitForSingleObject(local_34,20000);
                  if (DVar15 == 0) {
                    DVar15 = WaitForSingleObject(local_38,1);
                    if ((DVar15 == 0) && (bVar2 = false, lpBaseAddress[0xb] == 0x10)) {
                      local_20 = 0;
                    }
                  }
                  else {
                    DVar15 = WaitForSingleObject(local_3c,20000);
                    if (DVar15 == 0x102) {
                      bVar2 = false;
                    }
                    else {
                      if (DVar15 == 0x80) {
                        bVar2 = false;
                      }
                      else {
                        DVar15 = WaitForSingleObject(local_34,1);
                        if (DVar15 == 0) {
                          DVar15 = WaitForSingleObject(local_38,1);
                          if (DVar15 != 0) goto LAB_005a589b;
                        }
                        else {
                          SetEvent(local_38);
                        }
                        bVar2 = false;
                      }
LAB_005a589b:
                      ReleaseMutex(local_3c);
                    }
                  }
                  pvVar3 = local_3c;
                } while (bVar2);
              }
            }
            CloseHandle(pvVar3);
          }
          CloseHandle(local_38);
          pvVar3 = local_34;
        }
        CloseHandle(pvVar3);
      }
      UnmapViewOfFile(lpBaseAddress);
      pvVar3 = local_30;
    }
    CloseHandle(pvVar3);
  }
  ExceptionList = local_14;
  return local_20;
}

