
void FUN_0042d6f0(char param_1)

{
  bool bVar1;
  
  if (param_1 == '\0') {
    DAT_00667d54 = DAT_00667d54 + -1;
    if (DAT_00667d54 == 0) {
      bVar1 = SinglePlayer();
      if (bVar1) {
        FUN_00428580();
        return;
      }
    }
  }
  else {
    if (DAT_00667d54 == 0) {
      bVar1 = SinglePlayer();
      if (bVar1) {
        FUN_00428550();
      }
    }
    DAT_00667d54 = DAT_00667d54 + 1;
  }
  return;
}

