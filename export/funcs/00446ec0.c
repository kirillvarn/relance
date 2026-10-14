
void __fastcall FUN_00446ec0(undefined4 *param_1)

{
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x88))(0);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return;
}

