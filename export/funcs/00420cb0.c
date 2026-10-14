
void __fastcall FUN_00420cb0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x38))
              (*(int **)TextureLib_exref,*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

