
void __fastcall FUN_0059eee0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    (**(code **)(**(int **)Anim_exref + 0x10))(*(int **)Anim_exref,*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  cVar1 = FUN_00420d60();
  if (cVar1 != '\0') {
    FUN_00420f70();
    return;
  }
  return;
}

