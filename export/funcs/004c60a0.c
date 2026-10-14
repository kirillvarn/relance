
void __fastcall FUN_004c60a0(int param_1)

{
  FmtStr *pFVar1;
  FmtStr *this;
  
  pFVar1 = *(FmtStr **)(param_1 + 8);
  for (this = *(FmtStr **)(param_1 + 4); this != pFVar1; this = this + 0x1c) {
    FmtStr::~FmtStr(this);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

