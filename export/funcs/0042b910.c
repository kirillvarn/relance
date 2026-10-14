
int __fastcall FUN_0042b910(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x30))();
  if (piVar1 == param_1) {
    return (int)*(short *)((int)param_1 + 0x2a);
  }
  if ((int *)param_1[9] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042b92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(int *)param_1[9] + 0x14))();
    return iVar2;
  }
  return (int)(short)param_1[10];
}

