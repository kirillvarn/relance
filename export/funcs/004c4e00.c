
void FUN_004c4e00(int param_1,byte param_2,char param_3)

{
  int iVar1;
  int local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  byte local_8;
  
  iVar1 = param_1;
  FUN_00432240(&local_18,&param_1);
  local_8 = param_2;
  if ((local_18 == DAT_00673324) || ((*(byte *)(local_18 + 0x10) & param_2) != param_2)) {
    local_18 = iVar1;
    local_14 = 0;
    FUN_0046d6d0(&local_10,&local_18);
    *(byte *)(local_10 + 0x10) = local_8;
    if (param_3 != '\0') {
      local_10 = 1;
      local_c = iVar1;
      (**(code **)(*DAT_0067ecd0 + 0x11c))(DAT_00673344,&local_10,9);
    }
  }
  return;
}

