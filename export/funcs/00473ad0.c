
void FUN_00473ad0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_0059d9c0("NN_NetworkOperation");
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_0059db20("NN_NetworkOperation","NN_NetworkOperation",0,0);
    if (piVar2 != (int *)0x0) {
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      (**(code **)(*piVar2 + 0xa8))(0x42,&local_c,0);
      if ((int *)piVar2[0xcf] != (int *)0x0) {
        (**(code **)(*(int *)piVar2[0xcf] + 0xa8))(0x1e,local_8,0);
      }
      (**(code **)(*piVar2 + 0x80))();
    }
  }
  return;
}

