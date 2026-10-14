
bool __fastcall FUN_0042b840(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x30))();
  if (piVar2 == param_1) {
    if ((param_1[3] == -1) && (*(int *)Sound_exref != 0)) {
      iVar3 = FUN_0042b5e0(param_1,0);
      param_1[3] = iVar3;
    }
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + 1;
    return param_1[3] != -1;
  }
  if ((int *)param_1[9] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042b886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)param_1[9] + 0xc))();
    return (bool)uVar1;
  }
  *(short *)(param_1 + 10) = (short)param_1[10] + 1;
  return true;
}

