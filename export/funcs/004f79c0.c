
void FUN_004f79c0(void *param_1,int param_2)

{
  if (param_2 != 0x84) {
    free(param_1);
    return;
  }
  Heap::Free((Heap *)&DAT_00674ccc,param_1);
  return;
}

