
void __fastcall FUN_0045e800(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar1 = *(uint *)(param_1 + 0x568);
  local_10 = 0;
  local_c = (uint)(ushort)DAT_00673344;
  uVar2 = local_c;
  if (uVar1 == DAT_0066da40) {
    local_10 = DAT_0066da40;
    local_4 = **(int **)(*(int *)(param_1 + 0x530) + 4);
    uVar1 = local_10;
    if (local_4 != *(int *)(*(int *)(param_1 + 0x530) + 4)) {
      do {
        uVar1 = *(uint *)(local_4 + 0xc);
        local_8 = *(undefined4 *)(local_4 + 0x10);
        local_c._2_1_ = (char)(uVar1 >> 0x10);
        local_c = uVar1;
        if ((local_c._2_1_ == '\0') && (uVar1 != uVar2)) break;
        FUN_0052afa0();
        uVar1 = local_10;
      } while (local_4 != *(int *)(*(int *)(param_1 + 0x530) + 4));
    }
  }
  else if (uVar1 == DAT_0066da38) {
    local_10 = DAT_0066da40;
    uVar1 = local_10;
  }
  else {
    FUN_0046cd50(&local_4,(uint *)(param_1 + 0x568));
    uVar2 = local_c;
    uVar1 = local_10;
    if (local_4 != *(int *)(*(int *)(param_1 + 0x530) + 4)) {
      do {
        FUN_0052afa0();
        if (local_4 == *(int *)(*(int *)(param_1 + 0x530) + 4)) {
          local_10 = DAT_0066da38;
          goto LAB_0045e89b;
        }
        local_8 = *(undefined4 *)(local_4 + 0x10);
        uVar1 = *(uint *)(local_4 + 0xc);
      } while (*(uint *)(local_4 + 0xc) == uVar2);
    }
  }
  local_10 = uVar1;
  if (local_10 == DAT_0066da38) {
LAB_0045e89b:
    if ((DAT_0066da84 == 0) || (*(int *)(DAT_0066da84 + 0x350) == 0)) {
      local_10 = DAT_0066da40;
    }
  }
  FUN_0045eaf0(&local_10);
  return;
}

