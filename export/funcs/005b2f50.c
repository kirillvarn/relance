
undefined4 FUN_005b2f50(HINSTANCE param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  HANDLE hObject;
  DWORD DVar2;
  int iVar3;
  uchar *puVar4;
  undefined4 uVar5;
  _STARTUPINFOA *p_Var6;
  float10 fVar7;
  _func_int_char_ptr_char_ptr_bool *p_Var8;
  WNDCLASSA local_618;
  char local_5f0 [4];
  char local_5ec [4];
  char local_5e8 [2];
  char local_5e6;
  undefined1 local_5e4 [580];
  undefined4 local_3a0;
  int local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  BOOL local_38c;
  _PROCESS_INFORMATION local_388;
  _STARTUPINFOA local_378;
  char local_334 [260];
  char local_230 [4];
  char local_22c [260];
  CHAR local_128 [260];
  HANDLE local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005e6de0;
  puStack_10 = &DAT_005b8082;
  local_14 = ExceptionList;
  local_1c = &stack0xfffff9d0;
  local_20 = 1;
  local_8 = 0;
  ExceptionList = &local_14;
  hObject = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"FreelancerClient");
  local_24 = hObject;
  if (hObject != (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 0xb7) {
      GetModuleFileNameA((HMODULE)0x0,local_128,0x104);
      _splitpath(local_128,local_230,local_22c,(char *)0x0,(char *)0x0);
      _makepath(local_334,local_230,local_22c,(char *)0x0,(char *)0x0);
      SetCurrentDirectoryA(local_334);
      iVar3 = _access("..\\DATA\\CHARACTERS\\ANIMATIONS\\FACIALMALE.ANM",0);
      if (iVar3 != 0) {
        p_Var6 = &local_378;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          p_Var6->cb = 0;
          p_Var6 = (_STARTUPINFOA *)&p_Var6->lpReserved;
        }
        local_378.cb = 0x44;
        local_388.hProcess = (HANDLE)0x0;
        local_388.hThread = (HANDLE)0x0;
        local_388.dwProcessId = 0;
        local_388.dwThreadId = 0;
        local_38c = CreateProcessA("FLServer.exe",(LPSTR)0x0,(LPSECURITY_ATTRIBUTES)0x0,
                                   (LPSECURITY_ATTRIBUTES)0x0,0,0x20,(LPVOID)0x0,(LPCSTR)0x0,
                                   &local_378,&local_388);
        if (local_38c != 0) {
          CloseHandle(local_388.hProcess);
          CloseHandle(local_388.hThread);
        }
        ExceptionList = local_14;
        return 1;
      }
      cVar1 = FUN_005b2d60();
      if (cVar1 == '\0') {
        ExceptionList = local_14;
        return 1;
      }
      *(undefined **)FatalErrorFn_exref = &DAT_005b08a0;
      *(undefined1 **)CriticalWarningFn_exref = &LAB_005b09b0;
      CoInitialize((LPVOID)0x0);
      FUN_005b7e6c(&LAB_005b2190);
      DAT_0067eca4 = param_1;
      DAT_0067eca8 = LoadLibraryA("resources.dll");
      FUN_0057d800(DAT_0067eca8);
      local_39c = DACOM_GetDllVersion(local_128,&local_398,&local_394,&local_390);
      if (local_39c == 0) {
        FUN_005a5910(L"Freelancer");
      }
      else {
        local_398 = 1;
        local_394 = 0;
        local_390 = 0xb;
      }
      DAT_0067ecb8 = FUN_005b34b0(local_398,local_394,local_390);
      local_3a0 = 0;
      FUN_005b33f0();
      FUN_005b3400(param_3);
      FUN_005b2cb0(local_5e4);
      FUN_005621a0(local_5e4);
      p_Var8 = (_func_int_char_ptr_char_ptr_bool *)&LAB_005b0b00;
      puVar4 = MD5Hash::GetStatePtr((MD5Hash *)&DAT_00679d00);
      ErrorHandler::activate((char *)puVar4,p_Var8);
      FUN_005b2800();
      puVar4 = MD5Hash::GetStatePtr((MD5Hash *)&DAT_00679d00);
      FUN_005a82d0(local_5e4,puVar4);
      if (DAT_0067ecbc != '\0') {
        FUN_005b27c0(1);
      }
      local_5f0[0] = s_Freelancer_005e2038[0];
      local_5f0[1] = s_Freelancer_005e2038[1];
      local_5f0[2] = s_Freelancer_005e2038[2];
      local_5f0[3] = s_Freelancer_005e2038[3];
      local_5ec[0] = s_Freelancer_005e2038[4];
      local_5ec[1] = s_Freelancer_005e2038[5];
      local_5ec[2] = s_Freelancer_005e2038[6];
      local_5ec[3] = s_Freelancer_005e2038[7];
      local_5e8[0] = s_Freelancer_005e2038[8];
      local_5e8[1] = s_Freelancer_005e2038[9];
      local_5e6 = s_Freelancer_005e2038[10];
      local_618.style = 8;
      local_618.lpfnWndProc = (WNDPROC)&LAB_005b2570;
      local_618.cbClsExtra = 0;
      local_618.cbWndExtra = 0;
      local_618.hInstance = DAT_0067eca4;
      local_618.hIcon = LoadIconA(DAT_0067eca4,(LPCSTR)0x67);
      local_618.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
      local_618.hbrBackground = GetStockObject(4);
      local_618.lpszMenuName = (LPCSTR)0x0;
      local_618.lpszClassName = local_5f0;
      RegisterClassA(&local_618);
      DAT_0067eca0 = FUN_004246e0(local_5f0,&DAT_00679bc0,"Freelancer");
      ShowCursor(0);
      cVar1 = FUN_005b1300(local_5e4);
      if (cVar1 != '\0') {
        DAT_0067ecc8 = 1;
        if (DAT_0067ecc9 != '\0') {
          FUN_00471f30(0);
        }
        uVar5 = FUN_005b20a0(0);
        DAT_0067ecac = FUN_005b2a30(uVar5);
        FUN_00577490("IDR_ALWAYS_PRESENT");
        while( true ) {
          FUN_005b2360();
          fVar7 = (float10)FUN_0042d680();
          cVar1 = FUN_005b0b60(&local_20);
          if (cVar1 == '\0') break;
          if (DAT_00615ba8 != '\0') {
            FUN_005b2890((double)fVar7);
          }
        }
      }
      ExceptionList = local_14;
      return local_20;
    }
  }
  CloseHandle(hObject);
  ExceptionList = local_14;
  return 1;
}

