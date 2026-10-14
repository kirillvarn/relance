
bool FUN_00543f00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  char local_40 [64];
  
  sprintf(local_40,"%s%c","HPDockCam",param_2 + 0x41);
  iVar1 = (**(code **)(*param_1 + 0xc0))(local_40,param_3 + 0x24,param_3);
  return iVar1 == 0;
}

