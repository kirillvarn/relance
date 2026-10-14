
undefined4 __thiscall FUN_0042a2a0(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(int *)Streamer_exref != 0) && (*(int *)(param_1 + 0x30) != 0)) &&
     (*(int *)(param_1 + 0x30) != -1)) {
    cVar1 = FUN_004291c0(param_2,param_3);
    if (cVar1 != '\0') {
      FUN_0042a420();
      (**(code **)(**(int **)Streamer_exref + 0x1c))
                (*(int **)Streamer_exref,*(undefined4 *)(param_1 + 0x30));
      iVar2 = (**(code **)(**(int **)Streamer_exref + 0x28))
                        (*(int **)Streamer_exref,*(undefined4 *)(param_1 + 0x30));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*param_2 + 4))();
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: Bad streamer status upon starting sound %s",
                   "E:\\FL\\Scratch\\Source\\Client\\cmn\\Sound.cpp",0x905,uVar3);
      }
    }
  }
  if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x30) != -1)) {
    return 1;
  }
  return 0;
}

