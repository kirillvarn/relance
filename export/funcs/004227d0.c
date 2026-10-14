
void FUN_004227d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
  FUN_004221f0(0,(float)((piVar1[2] - *piVar1) + 1),(float)((piVar1[3] - piVar1[1]) + 1),0,
               0xbf800000,0x3f800000);
  return;
}

