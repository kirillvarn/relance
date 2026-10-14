
void FUN_0041d440(undefined4 param_1,int *param_2)

{
  int *piVar1;
  size_t sVar2;
  wchar_t *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  wchar_t local_3c [24];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005b8a42;
  local_c = ExceptionList;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_4b = 0;
  local_4a = 0;
  local_49 = 0;
  local_48 = 0;
  local_47 = 0;
  local_46 = 0;
  local_45 = 0;
  local_44 = 0;
  local_43 = 0;
  local_42 = 0;
  local_41 = 0;
  local_40 = 0;
  local_3f = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0;
  local_60 = 0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0;
  local_5c = 0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0;
  local_58 = 0;
  local_57 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  Reputation::Vibe::GetName(&param_1,(FmtStr *)&local_54,(FmtStr *)&local_6c,(ushort **)&local_70);
  if ((local_70 == (wchar_t *)0x0) || (*local_70 == L'\0')) {
    FUN_0041c970(local_3c,0x18);
    Reputation::Vibe::SetName(&param_1,(FmtStr *)&local_54,(FmtStr *)&local_6c,(ushort *)local_3c);
    local_70 = local_3c;
  }
  sVar2 = wcslen(local_70);
  piVar1 = param_2;
  wcscpy((wchar_t *)*param_2,local_70);
  *piVar1 = *piVar1 + sVar2 * 2;
  local_4 = local_4 & 0xffffff00;
  FmtStr::~FmtStr((FmtStr *)&local_6c);
  local_4 = 0xffffffff;
  FmtStr::~FmtStr((FmtStr *)&local_54);
  ExceptionList = local_c;
  return;
}

