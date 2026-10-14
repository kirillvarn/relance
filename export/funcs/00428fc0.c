
void FUN_00428fc0(void *param_1,int param_2)

{
  if (param_2 == 0x30) {
    Heap::Free((Heap *)&DAT_00667a44,param_1);
    return;
  }
  if (param_2 != 0x40) {
    if (param_2 != 100) {
      free(param_1);
      return;
    }
    Heap::Free((Heap *)&DAT_00667a34,param_1);
    return;
  }
  Heap::Free((Heap *)&DAT_00667a24,param_1);
  return;
}

