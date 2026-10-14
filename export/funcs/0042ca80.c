
void FUN_0042ca80(undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b8cf1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    param_1[1] = *(undefined4 *)(param_2 + 4);
    *param_1 = &PTR_LAB_005ca604;
    CacheString::clear((CacheString *)(param_1 + 2));
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x18);
    *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
    uVar1 = (*(byte *)(param_2 + 0x1a) & 0xf) << 0x10 ^ param_1[6] & 0xfff0ffff;
    param_1[6] = uVar1;
    uVar1 = (*(uint *)(param_2 + 0x18) ^ uVar1) & 0xf00000 ^ uVar1;
    param_1[6] = uVar1;
    uVar1 = (*(byte *)(param_2 + 0x1b) & 1) << 0x18 ^ uVar1 & 0xfeffffff;
    param_1[6] = uVar1;
    uVar1 = (*(uint *)(param_2 + 0x18) ^ uVar1) & 0x2000000 ^ uVar1;
    param_1[6] = uVar1;
    uVar1 = (*(uint *)(param_2 + 0x18) ^ uVar1) & 0x4000000 ^ uVar1;
    param_1[6] = uVar1;
    uVar1 = (*(uint *)(param_2 + 0x18) ^ uVar1) & 0x8000000 ^ uVar1;
    param_1[6] = uVar1;
    uVar1 = (*(uint *)(param_2 + 0x18) ^ uVar1) & 0x10000000 ^ uVar1;
    param_1[6] = uVar1;
    param_1[6] = (*(uint *)(param_2 + 0x18) ^ uVar1) & 0x20000000 ^ uVar1;
    param_1[7] = *(undefined4 *)(param_2 + 0x1c);
    param_1[8] = *(undefined4 *)(param_2 + 0x20);
    param_1[9] = *(undefined4 *)(param_2 + 0x24);
    *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x28);
    *(undefined2 *)((int)param_1 + 0x2a) = *(undefined2 *)(param_2 + 0x2a);
    *param_1 = &PTR_FUN_005ca36c;
  }
  ExceptionList = local_c;
  return;
}

