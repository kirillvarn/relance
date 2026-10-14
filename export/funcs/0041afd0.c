
undefined4 FUN_0041afd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
    if (*(int *)(param_1 + 8) != -1) {
      (**(code **)(**(int **)MaterialLib_exref + 0x2c))
                (*(int **)MaterialLib_exref,*(int *)(param_1 + 8),0,0x3f800000);
      (**(code **)(**(int **)MaterialLib_exref + 0x30))
                (*(int **)MaterialLib_exref,*(undefined4 *)(param_1 + 8),0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
    uVar1 = 0;
  }
  return uVar1;
}

