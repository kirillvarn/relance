
void __fastcall FUN_00555ea0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_005e1218;
  FUN_00558de0(param_1);
  piVar1 = (int *)*DAT_0067999c;
  if (piVar1 != DAT_0067999c) {
    while ((undefined4 *)piVar1[2] != param_1) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == DAT_0067999c) {
        return;
      }
    }
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_005b7e1d(piVar1);
    DAT_006799a0 = DAT_006799a0 + -1;
  }
  return;
}

