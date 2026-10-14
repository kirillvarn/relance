
int * FUN_0041c7e0(IFileSystem *param_1)

{
  int *piVar1;
  
  DAEngine_create_filesystem((char *)param_1,&param_1,"UTF");
  piVar1 = *(int **)TextureLib_exref;
  (**(code **)(*piVar1 + 0x14))(piVar1,param_1);
  DAEngine_release_filesystem((IFileSystem **)&stack0xfffffff8);
  return piVar1;
}

