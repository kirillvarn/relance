
void * __thiscall FUN_00543110(void *param_1,byte param_2)

{
  FUN_00543130();
  if ((param_2 & 1) != 0) {
    IAction::operator_delete(param_1);
  }
  return param_1;
}

