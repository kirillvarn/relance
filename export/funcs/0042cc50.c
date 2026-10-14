
void __fastcall FUN_0042cc50(char **param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_0042d1d0(param_1[1]);
    if (param_1[2] != (char *)0x0) {
      (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,param_1[2]);
      param_1[2] = (char *)0x0;
    }
    if (param_1[3] != (char *)0x0) {
      (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,param_1[3]);
      param_1[3] = (char *)0x0;
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  malloc_strfree(param_1);
  malloc_strfree(param_1 + 1);
  if (param_1[2] != (char *)0x0) {
    (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,param_1[2]);
    param_1[2] = (char *)0x0;
  }
  if (param_1[3] != (char *)0x0) {
    (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,param_1[3]);
    param_1[3] = (char *)0x0;
  }
  *param_1 = (char *)0x0;
  param_1[2] = (char *)0x0;
  param_1[3] = (char *)0x0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = (char *)0x0;
  return;
}

