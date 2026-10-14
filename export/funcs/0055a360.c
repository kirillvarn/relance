
int FUN_0055a360(undefined4 param_1,code *param_2)

{
  code cVar1;
  code *_Str1;
  int iVar2;
  code *_Str2;
  int iVar3;
  int iVar4;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c1609;
  local_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (DAT_00679af0 == '\0') {
    ExceptionList = &local_c;
    FUN_00559db0();
  }
  if (DAT_00679a48 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (DAT_00679a4c - DAT_00679a48) / 0x24;
  }
  if (0 < local_10) {
    iVar3 = 0;
    do {
      _Str2 = _C_exref;
      if (param_2 != (code *)0x0) {
        _Str2 = param_2;
      }
      _Str1 = *(code **)(iVar3 + 4 + DAT_00679a48);
      if (_Str1 == (code *)0x0) {
        _Str1 = _C_exref;
      }
      iVar2 = stricmp((char *)_Str1,(char *)_Str2);
      if (iVar2 == 0) {
        iVar4 = DAT_00679a48 + iVar4 * 0x24;
        if (param_2 != (code *)0x0) {
          cVar1 = param_2[-1];
          if ((cVar1 != (code)0x0) && (cVar1 != (code)0xff)) {
            param_2[-1] = (code)((char)cVar1 + -1);
            ExceptionList = local_c;
            return iVar4;
          }
          FUN_005b7e1d(param_2 + -1);
        }
        ExceptionList = local_c;
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar4 < local_10);
  }
  if (param_2 != (code *)0x0) {
    cVar1 = param_2[-1];
    if ((cVar1 == (code)0x0) || (cVar1 == (code)0xff)) {
      FUN_005b7e1d(param_2 + -1);
    }
    else {
      param_2[-1] = (code)((char)cVar1 + -1);
    }
  }
  ExceptionList = local_c;
  return 0;
}

