
void __thiscall FUN_0043d010(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (param_2 != (undefined4 *)0x0) {
      FUN_005b7e1d(param_2);
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 **)(param_1 + 0x10) = param_2;
    return;
  }
  return;
}

