
void __thiscall FUN_004ff360(int *param_1,int param_2)

{
  param_1[0xa9] = param_2;
  switch(param_2) {
  case 0:
    (**(code **)(*param_1 + 4))();
    return;
  case 1:
    (**(code **)(*param_1 + 8))();
    return;
  case 2:
    (**(code **)(*param_1 + 0xc))();
    return;
  case 3:
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}

