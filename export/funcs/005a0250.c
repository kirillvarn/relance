
void __thiscall FUN_005a0250(int *param_1,float param_2,float param_3,float param_4)

{
  int *piVar1;
  int *piVar2;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = param_2 - (float)param_1[0x2a];
  piVar1 = (int *)param_1[3];
  local_8 = param_3 - (float)param_1[0x2b];
  local_4 = param_4 - (float)param_1[0x2c];
  param_1[0x2a] = (int)param_2;
  param_1[0x2b] = (int)param_3;
  param_1[0x2c] = (int)param_4;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    piVar2 = (int *)(**(code **)(*piVar1 + 8))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xac))(&local_c);
    }
  }
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
    return;
  }
  (**(code **)(*param_1 + 0x14))(param_1[1] + 0x60);
  return;
}

