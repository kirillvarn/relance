
void __fastcall FUN_004a9600(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005bce42;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x820));
  *(undefined4 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x824) = 0;
  *(undefined4 *)(param_1 + 0x828) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x810));
  *(undefined4 *)(param_1 + 0x810) = 0;
  *(undefined4 *)(param_1 + 0x814) = 0;
  *(undefined4 *)(param_1 + 0x818) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x800));
  *(undefined4 *)(param_1 + 0x800) = 0;
  *(undefined4 *)(param_1 + 0x804) = 0;
  *(undefined4 *)(param_1 + 0x808) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x558));
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined4 *)(param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x548));
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  IDPMsgHandler::OnReceive
            ((IDPMsgHandler *)(param_1 + 0x534),*(uchar **)(param_1 + 0x538),
             *(ulong *)(param_1 + 0x53c));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x538));
  *(undefined4 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x53c) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  local_4._0_1_ = 2;
  IDPMsgHandler::OnReceive
            ((IDPMsgHandler *)(param_1 + 0x524),*(uchar **)(param_1 + 0x528),
             *(ulong *)(param_1 + 0x52c));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x528));
  *(undefined4 *)(param_1 + 0x528) = 0;
  *(undefined4 *)(param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  local_4._0_1_ = 1;
  IDPMsgHandler::OnReceive
            ((IDPMsgHandler *)(param_1 + 0x514),*(uchar **)(param_1 + 0x518),
             *(ulong *)(param_1 + 0x51c));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x518));
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined4 *)(param_1 + 0x51c) = 0;
  *(undefined4 *)(param_1 + 0x520) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004de730();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

