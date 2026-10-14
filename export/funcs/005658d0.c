
undefined4 __thiscall FUN_005658d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  local_30 = "FileSystem";
  puVar2 = local_2c;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = param_3;
  local_2c[1] = param_2;
  local_2c[2] = 0x80000000;
  local_2c[3] = 1;
  local_18 = 3;
  local_14 = 0x8000080;
  local_34 = 0x34;
  iVar1 = (**(code **)(*(int *)param_1[4] + 0x7c))((int *)param_1[4],&local_34);
  *param_1 = iVar1;
  if (iVar1 == -1) {
    return 0xfffffff8;
  }
  iVar1 = (**(code **)(*(int *)param_1[4] + 0x28))((int *)param_1[4],iVar1,0);
  param_1[1] = iVar1;
  iVar1 = (**(code **)(*(int *)param_1[4] + 0x3c))((int *)param_1[4],*param_1,0,2,0,0,0);
  param_1[2] = iVar1;
  if (iVar1 == -1) {
    return 0xfffffffa;
  }
  iVar1 = (**(code **)(*(int *)param_1[4] + 0x40))((int *)param_1[4],iVar1,4,0,0,0);
  param_1[3] = iVar1;
  if (iVar1 != 0) {
    return 0;
  }
  return 0xffffffff;
}

