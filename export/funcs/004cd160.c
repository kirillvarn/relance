
void __fastcall FUN_004cd160(int param_1)

{
  char cVar1;
  int local_4;
  
  local_4 = param_1;
  FUN_004101e0();
  local_4 = CONCAT13(local_4._3_1_,0xffffff);
  FUN_00410240(&local_4);
  cVar1 = FUN_00420d60();
  if (cVar1 != '\0') {
    FUN_00422950(&DAT_0067dbf8);
    FUN_00421050(param_1 + 0x78);
    FUN_00421120(&DAT_0067dbf8,0x100);
    FUN_00421050(param_1 + 0xa8);
    FUN_00421120(&DAT_0067dbf8,0x100);
    FUN_00421050(param_1 + 0xd8);
    FUN_00421120(&DAT_0067dbf8,0x100);
    FUN_00421050(param_1 + 0x108);
    FUN_00421120(&DAT_0067dbf8,0x100);
  }
  return;
}

