
void FUN_0046ae40(uint param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  iVar1 = DAT_0066da7c;
  if (DAT_0066da7c != 0) {
    FUN_0046ad40(param_1);
    local_8 = FUN_0046e610(&param_1);
    if ((local_8 == *(int *)(iVar1 + 0x1c)) || (*(uint *)(local_8 + 0xc) < param_1)) {
      local_4 = *(int *)(iVar1 + 0x1c);
      piVar2 = &local_4;
    }
    else {
      piVar2 = &local_8;
    }
    if (*piVar2 != *(int *)(iVar1 + 0x1c)) {
      *(undefined4 *)(*piVar2 + 0x18) = param_2;
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    }
  }
  return;
}

