
void __thiscall FUN_0057c7d0(int *param_1,char param_2)

{
  IMEFocus *pIVar1;
  
  (**(code **)(*param_1 + 0xd0))();
  FUN_005760f0(1);
  FUN_005760f0(2);
  FUN_005760f0(0xf);
  FUN_00577c30(param_1 + 0x126);
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  }
  if (*(char *)((int)param_1 + 0x52b) != '\0') {
    pIVar1 = IMEFocus::GetSingleton();
    if (pIVar1 != (IMEFocus *)0x0) {
      (**(code **)(*(int *)pIVar1 + 0x2c))(0,0);
    }
  }
  return;
}

