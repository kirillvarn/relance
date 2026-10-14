
void * __thiscall FUN_00542d20(void *param_1,byte param_2)

{
  FUN_00542d40();
  if ((param_2 & 1) != 0) {
    IAction::operator_delete(param_1);
  }
  return param_1;
}

