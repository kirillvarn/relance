
undefined4 FUN_004f6a70(int param_1)

{
  FUN_0041b030(param_1 + 0xc);
  if (*(int *)(param_1 + 8) != -1) {
    (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return 0;
}

