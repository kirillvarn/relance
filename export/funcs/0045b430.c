
void FUN_0045b430(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((DAT_0066d398 == 0) &&
     (FUN_0059db20("NN_ArrivalText","NN_ArrivalText",0,0), DAT_0066d398 == 0)) {
    return;
  }
  iVar1 = DAT_0066d398;
  *(undefined4 *)(DAT_0066d398 + 0x334) = param_1;
  *(undefined1 *)(iVar1 + 0x338) = 0;
  (**(code **)(**(int **)(iVar1 + 0x32c) + 0xa8))(0x1e,param_2,0);
  return;
}

