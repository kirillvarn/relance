
void FUN_00473c00(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = FUN_0059d9c0("NN_Error");
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_0059db20("NN_Error","NN_Error",param_2,0);
    if (piVar3 != (int *)0x0) {
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      (**(code **)(*piVar3 + 0xa8))(0x42,&local_c,0);
      if (piVar3[0xd0] != 0) {
        pbVar1 = (byte *)(piVar3[0xd0] + 0x6c);
        *pbVar1 = *pbVar1 & 0xfc;
      }
      if ((int *)piVar3[0xcd] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[0xcd] + 0xa8))(0x1e,local_8,0);
      }
      (**(code **)(*piVar3 + 0x80))();
    }
  }
  return;
}

