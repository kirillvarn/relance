
void __thiscall FUN_0058f740(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x578) = param_2;
  *(undefined4 *)(param_1 + 0x584) = param_3;
  if (param_2 != 0) {
    FUN_00595dd0();
    uVar1 = ftol();
    if (*(int *)(param_1 + 0x4a4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2;
    }
    (**(code **)(param_1 + 0x578))
              (*(undefined4 *)(param_1 + 0x584),uVar1,iVar2 - *(int *)(param_1 + 0x580));
  }
  return;
}

