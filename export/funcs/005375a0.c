
void * __thiscall FUN_005375a0(void *param_1,byte param_2)

{
  FUN_005375d0();
  if ((param_2 & 1) != 0) {
    Heap::Free((Heap *)&DAT_006789a4,param_1);
  }
  return param_1;
}

