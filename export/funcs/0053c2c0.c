
void FUN_0053c2c0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005416c0(*param_2,0);
  if (iVar1 != 0) {
    if (param_2[5] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_2[6] - param_2[5]) >> 1;
    }
    (**(code **)(*(int *)(iVar1 + 4) + 0x34))(param_2[5],iVar2,param_2 + 1,0);
  }
  return;
}

