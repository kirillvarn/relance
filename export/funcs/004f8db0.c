
void * __thiscall FUN_004f8db0(void *param_1,byte param_2)

{
  FUN_004f8dd0();
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

