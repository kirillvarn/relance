
void __fastcall thunk_FUN_00555a90(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *param_1) {
    do {
      malloc_strfree((char **)(param_1[1] + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }
  if (param_1[1] != 0) {
    FUN_005b7e1d(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    FUN_005b7e1d(param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = 0;
  if (param_1[3] != -1) {
    (**(code **)(**(int **)Anim_exref + 0x10))(*(int **)Anim_exref,param_1[3]);
    param_1[3] = -1;
  }
  param_1[3] = -1;
  param_1[4] = -1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  return;
}

