
void * __thiscall FUN_004f9510(void *param_1,byte param_2)

{
  FUN_004f9450();
  if ((param_2 & 1) != 0) {
    Heap::Free((Heap *)&DAT_00674ccc,param_1);
  }
  return param_1;
}

