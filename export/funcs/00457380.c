
undefined4 __fastcall FUN_00457380(int param_1)

{
  char cVar1;
  
  if ((*(int **)(param_1 + 0x80) != (int *)0x0) && (*(char *)(param_1 + 0x78) != '\0')) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x80) + 0x74))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

