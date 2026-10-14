
void FUN_004bb140(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004347e0(DAT_0067eca8,param_3,*param_1,param_2 - *param_1 >> 1);
  if (iVar1 == 0) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: Failed to load ids: %u",
               "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_StoryStar.cpp",0x2b3,param_3);
  }
  iVar1 = *param_1 + iVar1 * 2;
  *param_1 = iVar1;
  if (param_2 == iVar1) {
    *param_1 = iVar1 + -2;
    *(undefined2 *)(iVar1 + -2) = 0;
    *param_1 = *param_1 + 2;
  }
  return;
}

