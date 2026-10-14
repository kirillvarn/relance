
undefined4 __thiscall FUN_0058d4b0(int param_1,uint param_2)

{
  bool bVar1;
  
  if ((((*(int *)(param_1 + 0x4a4) != 0) &&
       (param_2 < (uint)(*(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2))) &&
      (*(char *)(*(int *)(param_1 + 0x4c4) + 1 + param_2 * 0xc) != '\0')) &&
     (*(char *)(*(int *)(param_1 + 0x4c4) + param_2 * 0xc) != '\0')) {
    if ((*(char *)(param_1 + 0x4d8) == '\0') || (*(uint *)(param_1 + 0x4dc) != param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    *(uint *)(param_1 + 0x4dc) = param_2;
    *(undefined1 *)(param_1 + 0x4d8) = 1;
    if ((*(int **)(param_1 + 4) != (int *)0x0) && (bVar1)) {
      (**(code **)(**(int **)(param_1 + 4) + 0x5c))(0x300d,param_1,param_2);
    }
    return 1;
  }
  return 0;
}

