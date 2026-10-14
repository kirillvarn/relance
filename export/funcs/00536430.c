
IAction * __thiscall FUN_00536430(IAction *param_1,byte param_2)

{
  IAction::~IAction(param_1);
  if ((param_2 & 1) != 0) {
    IAction::operator_delete(param_1);
  }
  return param_1;
}

