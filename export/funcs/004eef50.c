
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004eef50(int param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  char local_100 [256];
  
  if ((param_3 <= (float)_DAT_005c8ba8) || (param_5 = ftol(), -1 < param_5)) {
    if (2000 < param_5) {
      sprintf(local_100,"%d.%d K",param_5 / 1000,(param_5 % 1000) / 100);
      goto LAB_004eefef;
    }
  }
  else {
    param_5 = 0;
  }
  sprintf(local_100,"%d M",param_5);
LAB_004eefef:
  FUN_0058a580(local_100);
  (**(code **)(**(int **)(param_1 + 0x40c) + 0xa8))(5,param_6,0);
  (**(code **)(**(int **)(param_1 + 0x40c) + 0x34))();
  return;
}

