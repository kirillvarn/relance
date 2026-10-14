
undefined4 __thiscall FUN_005a1eb0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_2 < *(int *)(param_1 + 0x8a4)) && (param_2 < 0x100)) {
    if (*(int *)(param_1 + 0x48c + param_2 * 4) == 0) {
      uVar2 = FUN_00417620();
      *(undefined4 *)(param_1 + 0x48c + param_2 * 4) = uVar2;
    }
    piVar1 = *(int **)(param_1 + 0x48c + param_2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(*(undefined4 *)(param_1 + 0x84));
      (**(code **)(**(int **)(param_1 + 0x48c + param_2 * 4) + 0x14))(param_2);
    }
    return 1;
  }
  return 0;
}

