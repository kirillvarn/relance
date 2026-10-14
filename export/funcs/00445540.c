
void __thiscall FUN_00445540(int param_1,char param_2)

{
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x360) = 0;
    *(undefined1 *)(param_1 + 0x368) = 0;
    malloc_strfree((char **)(param_1 + 0x364));
    return;
  }
  *(undefined4 *)(param_1 + 0x36c) = 2;
  return;
}

