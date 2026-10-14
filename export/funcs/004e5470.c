
undefined4 __thiscall FUN_004e5470(int param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != '\0') {
    return *(undefined4 *)(param_1 + 0x648);
  }
  if (*(char *)(param_1 + 0x4d0) != '\0') {
    cVar1 = FUN_0055e280();
    if (cVar1 == '\0') {
      cVar1 = FUN_0055e280();
      if (cVar1 == '\0') {
        return *(undefined4 *)(param_1 + 0x648);
      }
    }
  }
  return 3;
}

