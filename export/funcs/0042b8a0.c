
int __fastcall FUN_0042b8a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x30))();
  if (piVar1 == param_1) {
    if (*(short *)((int)param_1 + 0x2a) != 0) {
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
    if ((*(short *)((int)param_1 + 0x2a) < 1) && (param_1[3] != -1)) {
      (**(code **)(**(int **)Sound_exref + 0x88))(*(int **)Sound_exref,param_1[3]);
      param_1[3] = -1;
    }
    return (int)*(short *)((int)param_1 + 0x2a);
  }
  if ((int *)param_1[9] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042b8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(int *)param_1[9] + 0x10))();
    return iVar2;
  }
  if ((short)param_1[10] != 0) {
    *(short *)(param_1 + 10) = (short)param_1[10] + -1;
  }
  return (int)(short)param_1[10];
}

