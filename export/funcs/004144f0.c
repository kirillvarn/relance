
/* WARNING: Removing unreachable block (ram,0x00414520) */

void __fastcall FUN_004144f0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  piVar2 = (int *)param_1[5];
  piVar1 = (int *)param_1[4];
  for (piVar3 = piVar1; piVar3 != piVar2; piVar3 = piVar3 + 2) {
    if ((int *)*piVar3 != (int *)0x0) {
      (**(code **)(*(int *)*piVar3 + 4))();
    }
  }
  param_1[5] = piVar1;
  param_1[10] = 0;
  return;
}

