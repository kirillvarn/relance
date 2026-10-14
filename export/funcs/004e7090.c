
void __thiscall FUN_004e7090(int param_1,undefined4 param_2,int param_3)

{
  int *local_c [3];
  
  if (DAT_00674b1c == (int *)0x0) {
    DAT_00674b1c = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674b1c + 0x28))(DAT_00674b1c);
  *local_c[0] = (int)local_c;
  local_c[0][1] = param_1;
  local_c[0][2] = param_3;
  return;
}

