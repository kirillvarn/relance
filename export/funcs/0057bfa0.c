
void __thiscall FUN_0057bfa0(int param_1,char param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x4c0) != param_2) {
    *(char *)(param_1 + 0x4c0) = param_2;
    iVar1 = FUN_00577d50();
    if (iVar1 == param_1 + 0x498) {
      if (*(char *)(param_1 + 0x4c0) != '\0') {
        FUN_005760f0(0xf);
        return;
      }
      FUN_005760d0(0xf);
    }
  }
  return;
}

