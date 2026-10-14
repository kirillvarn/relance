
void __fastcall FUN_0057c750(int *param_1)

{
  IMEFocus *pIVar1;
  
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 3;
  FUN_00577b40(param_1 + 0x126);
  FUN_005760d0(1);
  FUN_005760d0(2);
  if ((char)param_1[0x130] == '\0') {
    FUN_005760d0(0xf);
  }
  else {
    FUN_005760f0(0xf);
  }
  if (param_1[0x14b] != 0) {
    pIVar1 = IMEFocus::GetSingleton();
    if (pIVar1 != (IMEFocus *)0x0) {
      (**(code **)(*(int *)pIVar1 + 0x2c))(param_1[0x14b],0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0057c7c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xcc))();
  return;
}

