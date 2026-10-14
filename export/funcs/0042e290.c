
void FUN_0042e290(void)

{
  int *piVar1;
  
  if (DAT_00667e14 == '\0') {
    DAT_00667e14 = '\x01';
    piVar1 = *(int **)FxRuntime_exref;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*(undefined4 *)Alchemy_exref);
      (**(code **)(**(int **)FxRuntime_exref + 0xc))
                (*(int **)FxRuntime_exref,*(undefined4 *)Alchemy_exref);
      (**(code **)(**(int **)FxRuntime_exref + 0x14))
                (*(int **)FxRuntime_exref,*(undefined4 *)FxEffectLibrary_exref);
    }
  }
  return;
}

