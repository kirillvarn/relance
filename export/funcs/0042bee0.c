
int __fastcall FUN_0042bee0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x30))();
  if (piVar1 == param_1) {
    return param_1[3];
  }
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042befb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(code *)**(undefined4 **)param_1[9])();
    return iVar2;
  }
  return -1;
}

