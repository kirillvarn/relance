
void * __thiscall FUN_00428820(void *param_1,byte param_2)

{
  FUN_00429140();
  if ((param_2 & 1) != 0) {
    Heap::Free((Heap *)&DAT_00667a34,param_1);
  }
  return param_1;
}

