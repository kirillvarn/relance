
int * FUN_0041c850(IFileSystem *param_1)

{
  int *piVar1;
  IFileSystem *pIStack_24;
  int *piStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0x41c86b;
  DAEngine_create_filesystem((char *)param_1,&param_1,(char *)0x0);
  piStack_1c = *(int **)MaterialLib_exref;
  uStack_14 = 0x41c886;
  (**(code **)(*piStack_1c + 0x20))();
  piStack_20 = *(int **)MaterialLib_exref;
  uStack_14 = 0x3f800000;
  uStack_18 = 0;
  pIStack_24 = (IFileSystem *)0x41c89f;
  (**(code **)(*piStack_20 + 0x2c))();
  piVar1 = *(int **)MaterialLib_exref;
  pIStack_24 = (IFileSystem *)0x0;
  (**(code **)(*piVar1 + 0x30))(piVar1,piStack_20);
  DAEngine_release_filesystem(&pIStack_24);
  return piVar1;
}

