
undefined1 * __thiscall FUN_005a6a10(undefined1 *param_1,undefined1 *param_2)

{
  FmtStr *pFVar1;
  FmtStr *this;
  int iVar2;
  FmtStr *pFVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c52a5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x1c;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  this = operator_new(iVar2 * 0x1c);
  *(FmtStr **)(param_1 + 4) = this;
  pFVar1 = *(FmtStr **)(param_2 + 8);
  for (pFVar3 = *(FmtStr **)(param_2 + 4); pFVar3 != pFVar1; pFVar3 = pFVar3 + 0x1c) {
    local_4 = 0;
    if (this != (FmtStr *)0x0) {
      FmtStr::FmtStr(this,pFVar3);
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(pFVar3 + 0x18);
    }
    this = this + 0x1c;
  }
  *(FmtStr **)(param_1 + 8) = this;
  *(FmtStr **)(param_1 + 0xc) = this;
  local_4 = 1;
  FmtStr::FmtStr((FmtStr *)(param_1 + 0x10),(FmtStr *)(param_2 + 0x10));
  local_4 = CONCAT31(local_4._1_3_,2);
  FmtStr::FmtStr((FmtStr *)(param_1 + 0x28),(FmtStr *)(param_2 + 0x28));
  param_1[0x40] = param_2[0x40];
  ExceptionList = local_c;
  return param_1;
}

