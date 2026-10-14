
void __thiscall FUN_00434e20(int param_1,code *param_2)

{
  int *piVar1;
  int local_4;
  
  local_4 = param_1;
  FUN_00432240(&local_4,&param_2);
  if ((local_4 != *(int *)(param_1 + 0x10)) && (local_4 != -0x10)) {
    piVar1 = (int *)(local_4 + 0x24);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      param_2 = *(code **)(local_4 + 0x14);
      if (*(code **)(local_4 + 0x14) == (code *)0x0) {
        param_2 = _C_exref;
      }
      (**(code **)(**(int **)Anim_exref + 0x7c))
                (*(int **)Anim_exref,*(undefined4 *)(param_1 + 0x2c),&param_2,1);
    }
  }
  return;
}

