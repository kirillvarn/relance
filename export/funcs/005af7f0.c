
void __fastcall FUN_005af7f0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c5902;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_005afb40(local_10,**(undefined4 **)(param_1 + 0x40),*(undefined4 **)(param_1 + 0x40));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x44) = 0;
  local_4._0_1_ = 1;
  FUN_005afb40(local_10,**(undefined4 **)(param_1 + 0x2c),*(undefined4 **)(param_1 + 0x2c));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005afb40(local_10,**(undefined4 **)(param_1 + 0x18),*(undefined4 **)(param_1 + 0x18));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return;
}

