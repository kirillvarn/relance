
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00429b80(int param_1,undefined4 *param_2)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x34))();
    if ((cVar1 != '\0') && (*(float *)(param_1 + 0x10) != _DAT_005c7474)) {
      *param_2 = *(undefined4 *)(param_1 + 0x10);
      return 0;
    }
  }
  *param_2 = 0;
  return 0xfffffff9;
}

