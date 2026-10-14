
undefined4 __thiscall FUN_0058ad90(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((char)param_1[0xd7] != '\0') {
    if ((((*param_2 == -1) && (param_2[1] == 3)) && ((int *)param_1[1] != (int *)0x0)) &&
       (piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 8))(), piVar2 != (int *)0x0)) {
      iVar1 = *piVar2;
      uVar3 = (**(code **)(*param_1 + 8))(0);
      (**(code **)(iVar1 + 0xa8))(0x27,uVar3);
    }
    if ((char)param_1[0xe7] != '\0') {
      *(undefined1 *)(param_1 + 0xe7) = 0;
      FUN_0059d960(param_1);
      if (*param_2 != -1) {
        return 0;
      }
      if (param_2[1] == 1) {
        if (((int *)param_1[1] != (int *)0x0) &&
           (piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 8))(), piVar2 != (int *)0x0)) {
          iVar1 = *piVar2;
          uVar3 = (**(code **)(*param_1 + 8))(0);
          (**(code **)(iVar1 + 0xa8))(0x26,uVar3);
        }
        return 1;
      }
    }
    if ((*param_2 == -1) && (param_2[1] != 1)) {
      *(undefined1 *)(param_1 + 0xe7) = 1;
      FUN_0059d8d0(param_1);
      return 1;
    }
  }
  return 0;
}

