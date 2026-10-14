
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  undefined4 *puVar1;
  uint uVar2;
  HMODULE pHVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char **local_74;
  _startupinfo local_70;
  int local_6c;
  char **local_68;
  int local_64;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005e74e0;
  puStack_10 = &DAT_005b8082;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  __set_app_type(2);
  _DAT_0067ee44 = 0xffffffff;
  DAT_0067ee48 = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_0067ed74;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_0067ed70;
  _DAT_0067ee40 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_005b821f();
  if (DAT_00616408 == 0) {
    __setusermatherr(&LAB_005b821c);
  }
  FUN_005b820a();
  initterm(&DAT_006101c0,&DAT_006101c4);
  local_70.newmode = DAT_0067ed6c;
  __getmainargs(&local_64,&local_74,&local_68,DAT_0067ed68,&local_70);
  initterm(&DAT_0060f000,&DAT_006101bc);
  pbVar4 = *(byte **)_acmdln_exref;
  if (*pbVar4 != 0x22) {
    do {
      if (*pbVar4 < 0x21) goto LAB_005b8181;
      pbVar4 = pbVar4 + 1;
    } while( true );
  }
  do {
    pbVar4 = pbVar4 + 1;
    if (*pbVar4 == 0) break;
  } while (*pbVar4 != 0x22);
  if (*pbVar4 != 0x22) goto LAB_005b8181;
  do {
    pbVar4 = pbVar4 + 1;
LAB_005b8181:
  } while ((*pbVar4 != 0) && (*pbVar4 < 0x21));
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  if ((local_60.dwFlags & 1) == 0) {
    uVar2 = 10;
  }
  else {
    uVar2 = (uint)local_60.wShowWindow;
  }
  uVar5 = 0;
  pHVar3 = GetModuleHandleA((LPCSTR)0x0);
  local_6c = FUN_005b2f50(pHVar3,uVar5,pbVar4,uVar2);
                    /* WARNING: Subroutine does not return */
  exit(local_6c);
}

