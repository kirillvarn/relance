
void FUN_0041a9a0(char *param_1,int *param_2)

{
  int local_2c;
  char local_28;
  ulong local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b89d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
  local_24[0] = DACOM_CRC::GetCRC32(param_1);
  local_24[1] = 0xffffffff;
  local_24[2] = 0xffffffff;
  local_24[3] = 0;
  local_24[4] = 0;
  local_24[5] = 1;
  local_4 = 0;
  FUN_0041b380(&local_2c,local_24);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
  *param_2 = local_2c + 0xc;
  if (local_28 == '\0') {
    *(int *)(local_2c + 0x20) = *(int *)(local_2c + 0x20) + 1;
  }
  ExceptionList = local_c;
  return;
}

