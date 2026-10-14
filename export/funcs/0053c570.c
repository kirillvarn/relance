
void FUN_0053c570(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005416c0(*param_2,0);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 4) + 0x38))(*(undefined2 *)(param_2 + 1),param_2[2],0);
  }
  cVar1 = FUN_00548eb0(*param_2);
  if (cVar1 != '\0') {
    FUN_004c4320(0,*(undefined2 *)(param_2 + 1),param_2[2]);
  }
  return;
}

