
int * FUN_004889e0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_14;
  char *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = param_2;
  local_10 = param_3;
  if (param_3 == (char *)0x0) {
    local_10 = "ConfirmText";
  }
  iVar1 = FUN_0059d9c0("NN_Confirm");
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_0059db20("NN_Confirm","NN_Confirm",param_1,&local_14);
    if (piVar2 != (int *)0x0) {
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      (**(code **)(*piVar2 + 0xa8))(0x42,&local_c,0);
      (**(code **)(*piVar2 + 0x80))();
      return piVar2;
    }
  }
  return (int *)0x0;
}

