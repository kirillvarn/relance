
undefined4 * __fastcall FUN_0042b7b0(undefined4 *param_1)

{
  int iVar1;
  ID_String *this;
  
  ID_String::clear((ID_String *)(param_1 + 1));
  *param_1 = &PTR_LAB_005ca604;
  CacheString::clear((CacheString *)(param_1 + 2));
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0x42480000;
  param_1[5] = 0x43960000;
  param_1[6] = param_1[6] & 0xd000ffff | 0x10000000;
  this = (ID_String *)(param_1 + 7);
  iVar1 = 2;
  do {
    ID_String::clear(this);
    this = this + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  *param_1 = &PTR_FUN_005ca36c;
  return param_1;
}

