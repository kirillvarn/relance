
undefined4 __thiscall FUN_00588fe0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*param_2 != -1) {
    return 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      if (param_2[1] == 3) {
        uVar3 = (**(code **)(*param_1 + 8))();
        (**(code **)(iVar1 + 0xa8))(0x1b,uVar3);
        return 1;
      }
      uVar3 = (**(code **)(*param_1 + 8))(0);
      (**(code **)(iVar1 + 0xa8))(0x1a,uVar3);
    }
  }
  return 1;
}

