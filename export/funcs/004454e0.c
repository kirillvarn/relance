
void __thiscall FUN_004454e0(int param_1,char param_2)

{
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x360) != 0) {
      FUN_004568d0(*(int *)(param_1 + 0x360));
      *(undefined4 *)(param_1 + 0x360) = 0;
      *(undefined1 *)(param_1 + 0x368) = 0;
      malloc_strfree((char **)(param_1 + 0x364));
    }
    *(undefined4 *)(param_1 + 0x36c) = 1;
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

