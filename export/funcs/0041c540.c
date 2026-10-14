
undefined4
FUN_0041c540(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined1 *puVar4;
  IFileSystem *unaff_retaddr;
  char *pcVar5;
  undefined4 uVar6;
  int *piStack_38;
  char **ppcVar7;
  char *local_1c;
  IFileSystem *local_18 [2];
  int iStack_10;
  IFileSystem *pIStack_8;
  IFileSystem *pIStack_4;
  
  local_1c = param_1;
  piStack_38 = (int *)0x41c559;
  local_18[0] = (IFileSystem *)DACOM_CRC::GetCRC32(param_1);
  piStack_38 = *(int **)Engine_exref;
  ppcVar7 = &local_1c;
  iVar2 = (**(code **)(*piStack_38 + 0x44))();
  if (iVar2 != -1) {
    if (param_5 != (int *)0x0) {
      *param_5 = iVar2;
    }
    uVar6 = (**(code **)(**(int **)Engine_exref + 0x5c))(*(int **)Engine_exref,iVar2,0);
    (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,iVar2);
    if (iStack_10 != 0) {
      DAEngine_create_filesystem(param_1,(IFileSystem **)&stack0x00000000,(char *)0x0);
      uVar3 = (**(code **)(**(int **)Anim_exref + 0xc))(*(int **)Anim_exref,unaff_retaddr);
      FUN_00555bf0(uVar3);
      DAEngine_release_filesystem(&pIStack_8);
    }
    return uVar6;
  }
  DAEngine_create_filesystem(param_1,&pIStack_4,(char *)0x0);
  if (pIStack_4 == (IFileSystem *)0x0) {
    uVar6 = 0xbe;
    pcVar5 = "%s(%d) : *** WARNING: file (%s) does not exist.";
  }
  else {
    FUN_0041ade0(pIStack_4,param_1,1,0xffffffff);
    iVar2 = FUN_0041af40(param_3,&local_1c,5);
    bVar1 = Archetype::Load(pIStack_4,(long *)&stack0xffffffd8,(int *)0x0);
    if (bVar1) {
      if (param_5 != (int *)0x0) {
        *param_5 = unaff_EBP;
      }
      uVar6 = (**(code **)(**(int **)Engine_exref + 0x5c))(*(int **)Engine_exref,unaff_EBP,0);
      (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,ppcVar7);
      if (iStack_10 != 0) {
        uVar3 = (**(code **)(**(int **)Anim_exref + 0xc))(*(int **)Anim_exref,local_18[0]);
        FUN_00555bf0(uVar3);
      }
      DAEngine_release_filesystem(local_18);
      if (pIStack_4 != (IFileSystem *)0x0) {
        FUN_00537260(*(undefined4 *)(pIStack_4 + 8),1,&piStack_38);
        if (iVar2 < 1) {
          return uVar6;
        }
        puVar4 = &stack0xffffffd0;
        do {
          FUN_00537260(*(undefined4 *)(pIStack_4 + 8),1,puVar4);
          puVar4 = puVar4 + 4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        return uVar6;
      }
      FUN_0041b030(&piStack_38);
      if (iVar2 < 1) {
        return uVar6;
      }
      puVar4 = &stack0xffffffd0;
      do {
        FUN_0041b030(puVar4);
        puVar4 = puVar4 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return uVar6;
    }
    uVar6 = 0x96;
    pcVar5 = "%s(%d) : *** WARNING: couldnt load archetype (%s) .";
  }
  (**(code **)FDUMP_exref)
            (0x100002,pcVar5,"E:\\FL\\Scratch\\Source\\Client\\cmn\\MiscUtil.cpp",uVar6,param_1);
  return 0xffffffff;
}

