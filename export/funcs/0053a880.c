
void __thiscall FUN_0053a880(int *param_1,undefined4 *param_2)

{
  IAction *pIVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1[0x10] != 0) {
    FUN_004fd0d0(0);
    if (param_2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)(**(code **)*param_1)();
    }
    local_c = *param_2;
    local_8 = param_2[1];
    local_4 = param_2[2];
    pIVar1 = (IAction *)FUN_005361e0(param_1[0x10],param_1,&local_c);
    ActionDB::add((ActionDB *)(param_1 + 8),pIVar1);
    return;
  }
  (**(code **)(*param_1 + 0x15c))(1);
  return;
}

