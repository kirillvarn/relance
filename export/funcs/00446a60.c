
void __thiscall FUN_00446a60(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_00558470(*(undefined4 *)(param_1 + 100),(float)(double)CONCAT44(param_3,param_2));
  }
  (**(code **)(**(int **)Anim_exref + 0x6c))
            (*(int **)Anim_exref,*(undefined4 *)(param_1 + 0x30),
             (float)(double)CONCAT44(param_3,param_2));
  (**(code **)(**(int **)Engine_exref + 0x6c))
            (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x30),2,
             (float)(double)CONCAT44(param_3,param_2));
  return;
}

