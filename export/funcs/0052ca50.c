
void __fastcall FUN_0052ca50(int *param_1)

{
  if (*param_1 != -1) {
    (**(code **)(**(int **)Anim_exref + 0x38))(*(int **)Anim_exref,*param_1);
    (**(code **)(**(int **)Anim_exref + 0x28))(*(int **)Anim_exref,*param_1);
    *param_1 = -1;
  }
  return;
}

