
bool FUN_00567350(void)

{
  uint uVar1;
  char cVar2;
  LSTATUS LVar3;
  bool bVar4;
  HKEY local_98;
  DWORD local_94;
  uint local_90 [33];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c2e1b;
  local_c = ExceptionList;
  bVar4 = false;
  local_4 = 0;
  local_90[1] = 0x80000001;
  local_90[0] = 1;
  ExceptionList = &local_c;
  LVar3 = RegCreateKeyExA((HKEY)0x80000001,PTR_s_Software_Microsoft_Microsoft_Gam_006143b0,0,"",0,
                          0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_98,&local_94);
  uVar1 = local_90[0];
  if (LVar3 == 0) {
    local_90[local_90[0] + 1] = (uint)local_98;
    local_90[0] = local_90[0] + 1;
    uVar1 = local_90[0];
    if (local_98 != (HKEY)0x0) {
      if ((int)local_90[0] < 1) {
        ExceptionList = local_c;
        return false;
      }
      if ((((HKEY)local_90[local_90[0]] != (HKEY)0x0) && (local_90[0] < 0x20)) &&
         (LVar3 = RegCreateKeyExA((HKEY)local_90[local_90[0]],"CharacterTable",0,"",0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&local_98,&local_94),
         uVar1 = local_90[0], LVar3 == 0)) {
        local_90[local_90[0] + 1] = (uint)local_98;
        local_90[0] = local_90[0] + 1;
        uVar1 = local_90[0];
        if (local_98 != (HKEY)0x0) {
          cVar2 = FUN_0058c370(local_90);
          uVar1 = local_90[0];
          bVar4 = cVar2 != '\0';
          if ((int)local_90[0] < 1) {
            ExceptionList = local_c;
            return bVar4;
          }
          local_90[0] = local_90[0] - 1;
          RegCloseKey((HKEY)local_90[uVar1]);
          uVar1 = local_90[0];
        }
      }
    }
  }
  while (0 < (int)uVar1) {
    local_90[0] = uVar1 - 1;
    RegCloseKey((HKEY)local_90[uVar1]);
    uVar1 = local_90[0];
  }
  ExceptionList = local_c;
  return bVar4;
}

