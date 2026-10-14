
undefined4 __thiscall FUN_005602b0(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00592230(param_2);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x24))(0,0);
    return 1;
  }
  return 0;
}

