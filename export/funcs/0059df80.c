
void FUN_0059df80(int *param_1)

{
  if (DAT_0067dcd8 != param_1) {
    if (DAT_0067dcd8 != (int *)0x0) {
      (**(code **)(*DAT_0067dcd8 + 0x40))(&DAT_0067dbcc);
    }
    DAT_0067dcd8 = param_1;
    if (param_1 == (int *)0x0) {
      return;
    }
    (**(code **)(*param_1 + 0x3c))(&DAT_0067dbcc);
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x38))(&DAT_0067dbcc);
  }
  return;
}

