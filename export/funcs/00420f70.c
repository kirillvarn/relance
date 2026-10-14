
void __fastcall FUN_00420f70(int param_1)

{
  if (*(int *)(param_1 + 4) != -1) {
    (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  FUN_0041b030(param_1 + 8);
  FUN_0041b030(param_1 + 0xc);
  return;
}

