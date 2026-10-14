
void __thiscall FUN_0057a620(int param_1,char param_2,char param_3)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x400) == '\0') && (param_3 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  *(char *)(param_1 + 0x400) = cVar1;
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x401) = 1;
    return;
  }
  if ((*(char *)(param_1 + 0x401) == '\0') && (param_2 == '\0')) {
    *(undefined1 *)(param_1 + 0x401) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x401) = 1;
  return;
}

