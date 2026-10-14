
void __fastcall FUN_004353a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  IFileSystem *local_404;
  int local_400 [256];
  
  do {
    piVar2 = (int *)**(int **)(param_1 + 0x24);
    iVar6 = 0;
    iVar5 = 0;
    if (piVar2 == *(int **)(param_1 + 0x24)) {
      return;
    }
    do {
      iVar1 = piVar2[2];
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar1 + 0x18);
      }
      if (iVar6 == *(int *)(iVar1 + 0x18)) {
        if (0xff < iVar5) break;
        if (*(int *)(iVar1 + 0x14) == 0) {
          pcVar4 = *(code **)(iVar1 + 4);
          if (*(code **)(iVar1 + 4) == (code *)0x0) {
            pcVar4 = _C_exref;
          }
          local_400[iVar5] = (int)pcVar4;
          iVar5 = iVar5 + 1;
        }
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
        piVar3 = (int *)*piVar2;
        *(int **)piVar2[1] = piVar3;
        *(int *)(*piVar2 + 4) = piVar2[1];
        FUN_005b7e1d(piVar2);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      }
      else {
        piVar3 = (int *)*piVar2;
      }
      piVar2 = piVar3;
    } while (piVar3 != *(int **)(param_1 + 0x24));
    if (0 < iVar5) {
      local_404 = (IFileSystem *)0x0;
      pcVar4 = *(code **)(iVar6 + 4);
      if (*(code **)(iVar6 + 4) == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      DAEngine_create_filesystem((char *)pcVar4,&local_404,(char *)0x0);
      if (local_404 == (IFileSystem *)0x0) {
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: Failed to open %s\n",
                   "E:\\FL\\Scratch\\Source\\Client\\gf\\CharacterInfo.cpp",0x1c2,pcVar4);
      }
      else {
        (**(code **)(**(int **)Anim_exref + 0x78))
                  (*(int **)Anim_exref,*(undefined4 *)(param_1 + 0x2c),local_404,local_400,iVar5);
        DAEngine_release_filesystem(&local_404);
      }
    }
  } while( true );
}

