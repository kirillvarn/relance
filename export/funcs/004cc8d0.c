
uint __fastcall FUN_004cc8d0(undefined4 param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  undefined4 local_4;
  
  local_4 = in_EAX & 0xffffff00;
  if (DAT_006748f8 != 0) {
    local_4 = CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(DAT_006748f8 + 0xec));
    uVar1 = FUN_0041a3e0();
    local_4 = CONCAT31((int3)((uint)uVar1 >> 8),~-((char)uVar1 != '\0')) & local_4;
  }
  return local_4;
}

