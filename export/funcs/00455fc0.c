
int __fastcall FUN_00455fc0(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xb4) + 0x3c + *(int *)(param_1 + 0xc0) * 0x40);
  iVar3 = 0;
  if (iVar1 == 0) {
    return *(int *)(param_1 + 0xc0) + 1;
  }
  if (iVar1 == 1) {
    if (*(char *)(param_1 + 0x105) == '\0') goto LAB_00456138;
    if (*(char *)(param_1 + 0x106) == '\0') {
      uVar4 = 2;
      local_8 = 3;
    }
    else {
      bVar2 = SinglePlayer();
      if ((bVar2) || (*(int *)(param_1 + 200) != 3)) {
        uVar4 = 3;
        local_8 = 2;
        local_4 = 4;
      }
      else {
        if (DAT_00673348 == 0) goto LAB_00456138;
        if (DAT_0067334c != DAT_00673344) goto LAB_00456127;
        uVar4 = 3;
        local_8 = 2;
        local_4 = 4;
      }
    }
  }
  else if (iVar1 == 2) {
    local_8 = 2;
    uVar4 = 3;
    local_4 = 4;
  }
  else if (iVar1 == 3) {
    uVar4 = 2;
    local_8 = 3;
  }
  else {
    if (iVar1 == 5) {
      return *(int *)(param_1 + 0xc0);
    }
    if (iVar1 == 4) {
      if (*(char *)(param_1 + 0x10d) == '\0') goto LAB_00456138;
      uVar4 = 3;
      local_8 = 2;
      local_4 = 4;
    }
    else {
      if (iVar1 != 6) goto LAB_00456138;
LAB_00456127:
      uVar4 = 2;
      local_8 = 6;
    }
  }
  local_c = 0;
  iVar3 = FUN_00455f50(&local_c,uVar4);
LAB_00456138:
  return *(int *)(param_1 + 0xc0) + iVar3;
}

