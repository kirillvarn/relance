
void __thiscall FUN_0042d4f0(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  ulong uVar2;
  IFileSystem *pIStack_38;
  undefined1 *puStack_34;
  IFileSystem *local_c [3];
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_0042d1d0();
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(**(int **)TextureLib_exref + 0x38))();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      (**(code **)(**(int **)TextureLib_exref + 0x38))();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  DAEngine_create_filesystem(param_3,local_c,"UTF");
  iVar1 = (**(code **)(**(int **)TextureLib_exref + 0x18))();
  if (iVar1 == 0) {
    DACOM_CRC::GetCRC32(param_2);
    (**(code **)(**(int **)TextureLib_exref + 0x30))();
  }
  else {
    (**(code **)(**(int **)TextureLib_exref + 0x14))();
    puStack_34 = (undefined1 *)0x42d59a;
    uVar2 = DACOM_CRC::GetCRC32(param_2);
    pIStack_38 = *(IFileSystem **)TextureLib_exref;
    puStack_34 = &stack0xffffffe0;
    (**(code **)(*(int *)pIStack_38 + 0x30))();
    (**(code **)(**(int **)TextureLib_exref + 0x1c))(*(int **)TextureLib_exref,uVar2);
  }
  DAEngine_release_filesystem(&pIStack_38);
  FUN_0042d1d0(param_2);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

