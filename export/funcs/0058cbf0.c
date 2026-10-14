
undefined4 __thiscall FUN_0058cbf0(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if ((((*(int *)(param_1 + 0x4a4) != 0) &&
       (param_2 < (uint)(*(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2))) &&
      (iVar4 = *(int *)(param_1 + 0x4b4), iVar4 != 0)) &&
     (param_3 < (uint)(*(int *)(param_1 + 0x4b8) - iVar4 >> 2))) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x4b8) - iVar4 >> 2;
    }
    param_3 = iVar4 * param_2 + param_3;
    if (((*(int *)(param_1 + 0x494) != 0) &&
        (param_3 < (uint)((*(int *)(param_1 + 0x498) - *(int *)(param_1 + 0x494)) / 0x1c))) &&
       (iVar4 = param_3 * 0x1c + *(int *)(param_1 + 0x494), iVar4 != 0)) {
      piVar1 = *(int **)(iVar4 + 4);
      piVar3 = (int *)*piVar1;
      while (piVar3 != piVar1) {
        piVar2 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar3[2])(1);
          piVar3[2] = 0;
        }
        FUN_005b7e1d(piVar3);
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
        piVar3 = piVar2;
      }
      FUN_0057a620(1,1);
      return 1;
    }
  }
  return 0;
}

