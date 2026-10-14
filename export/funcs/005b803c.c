
type_info * __thiscall FUN_005b803c(type_info *param_1,byte param_2)

{
  type_info::~type_info(param_1);
  if ((param_2 & 1) != 0) {
    FUN_005b7e1d(param_1);
  }
  return param_1;
}

