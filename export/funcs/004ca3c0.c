
undefined4 __fastcall FUN_004ca3c0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_24;
  undefined4 auStack_20 [8];
  
  uVar1 = 0;
  local_24 = 0;
  if (*param_1 != 0) {
    iVar4 = 0;
    if (0 < *param_1) {
      iVar2 = 0;
      do {
        uStack_34 = 0xffffffff;
        uStack_38 = 1;
        uVar1 = FUN_0041aa50(*(undefined4 *)(*(int *)(param_1[1] + 4 + iVar2) + 4));
        auStack_20[iVar4] = uVar1;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x18;
      } while (iVar4 < *param_1);
    }
    uStack_34 = 0;
    uStack_38 = 0;
    uVar1 = 0;
    iVar4 = (**(code **)(**(int **)Deform_exref + 0x14))(*(int **)Deform_exref,&local_24,param_1);
    if (iVar4 != 0) {
      (**(code **)FDUMP_exref)
                (0x100002,
                 "%s(%d) : *** WARNING: BodyDesc - failed to create deformable with %d parts\n",
                 "cmn\\EngineCharacter.h",0xd5,*param_1);
      uVar1 = 0;
    }
    iVar4 = 0;
    if (0 < *param_1) {
      puVar3 = &uStack_38;
      do {
        FUN_0041b030(puVar3);
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < *param_1);
    }
  }
  return uVar1;
}

