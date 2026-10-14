
/* WARNING: Removing unreachable block (ram,0x0042ee13) */

void __fastcall FUN_0042edb0(int param_1)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b8e26;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (0 < *(int *)(param_1 + 0x24)) {
    ExceptionList = &local_c;
    for (uVar2 = 0;
        (iVar1 = *(int *)(param_1 + 0x30), iVar1 != 0 &&
        (uVar2 < (uint)(*(int *)(param_1 + 0x34) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
      FUN_0041b030(iVar1 + uVar2 * 4);
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
    FUN_00401300(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  ExceptionList = local_c;
  return;
}

