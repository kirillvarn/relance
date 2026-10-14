
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f92f0(int param_1,float param_2)

{
  int *piVar1;
  undefined4 local_4;
  
  *(float *)(param_1 + 0x84) = param_2;
  piVar1 = *(int **)(param_1 + 0x6c);
  local_4 = param_2;
  if (piVar1 != (int *)0x0) {
    if (param_2 < _DAT_005c7474) {
      (**(code **)(*piVar1 + 0x18))(piVar1,0);
      return;
    }
    if (_DAT_005c75dc < param_2) {
      local_4 = 1.0;
    }
    (**(code **)(*piVar1 + 0x18))(piVar1,local_4);
  }
  return;
}

