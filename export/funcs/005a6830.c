
void __fastcall FUN_005a6830(int param_1)

{
  FmtStr *pFVar1;
  FmtStr *this;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005c5274;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FmtStr::~FmtStr((FmtStr *)(param_1 + 0x28));
  local_4 = local_4 & 0xffffff00;
  FmtStr::~FmtStr((FmtStr *)(param_1 + 0x10));
  pFVar1 = *(FmtStr **)(param_1 + 8);
  this = *(FmtStr **)(param_1 + 4);
  local_4 = 0xffffffff;
  for (; this != pFVar1; this = this + 0x1c) {
    FmtStr::~FmtStr(this);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

