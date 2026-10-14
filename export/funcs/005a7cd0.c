
void FUN_005a7cd0(undefined4 *param_1,undefined4 *param_2)

{
  FmtStr *pFVar1;
  FmtStr *this;
  int iVar2;
  FmtStr *pFVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c52e6;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    if (param_2[2] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_2[3] - param_2[2]) / 0x1c;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    this = operator_new(iVar2 * 0x1c);
    param_1[2] = this;
    pFVar1 = (FmtStr *)param_2[3];
    for (pFVar3 = (FmtStr *)param_2[2]; local_4._1_3_ = (undefined3)((uint)local_4 >> 8),
        pFVar3 != pFVar1; pFVar3 = pFVar3 + 0x1c) {
      local_4 = CONCAT31(local_4._1_3_,1);
      if (this != (FmtStr *)0x0) {
        FmtStr::FmtStr(this,pFVar3);
        *(undefined4 *)(this + 0x18) = *(undefined4 *)(pFVar3 + 0x18);
      }
      this = this + 0x1c;
    }
    param_1[3] = this;
    param_1[4] = this;
    local_4._0_1_ = 2;
    FmtStr::FmtStr((FmtStr *)(param_1 + 5),(FmtStr *)(param_2 + 5));
    local_4 = CONCAT31(local_4._1_3_,3);
    FmtStr::FmtStr((FmtStr *)(param_1 + 0xb),(FmtStr *)(param_2 + 0xb));
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  }
  ExceptionList = local_c;
  return;
}

