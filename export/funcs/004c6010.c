
void __fastcall FUN_004c6010(int param_1)

{
  FmtStr *pFVar1;
  FmtStr *this;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bd724;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FmtStr::~FmtStr((FmtStr *)(param_1 + 0x2c));
  local_4 = local_4 & 0xffffff00;
  FmtStr::~FmtStr((FmtStr *)(param_1 + 0x14));
  pFVar1 = *(FmtStr **)(param_1 + 0xc);
  this = *(FmtStr **)(param_1 + 8);
  local_4 = 0xffffffff;
  for (; this != pFVar1; this = this + 0x1c) {
    FmtStr::~FmtStr(this);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return;
}

