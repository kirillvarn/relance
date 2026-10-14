
int * __thiscall FUN_00590400(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[1] != 0) {
      puVar1[1] = puVar1[1] + -1;
    }
    if (puVar1[1] == 0) {
      puVar1[1] = 1;
      (**(code **)*puVar1)(1);
    }
    *param_1 = 0;
  }
  iVar2 = *param_2;
  *param_1 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  return param_1;
}

