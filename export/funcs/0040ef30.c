
void FUN_0040ef30(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_4 [4];
  
  piVar4 = (int *)*DAT_006164b4;
  piVar6 = DAT_006164b4;
  if (piVar4 != DAT_006164b4) {
    do {
      iVar1 = piVar4[4];
      if (iVar1 != 0) {
        iVar5 = *(int *)(iVar1 + 0x54);
        if (0 < iVar5) {
          iVar7 = iVar5;
          pcVar2 = ID_String::get_string((ID_String *)(iVar1 + 4));
          (**(code **)FDUMP_exref)
                    (0x100002,
                     "%s(%d) : *** WARNING: Destroying effect archetype (%s) with %d dangling references. See SSTEVENS"
                     ,"E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x25,pcVar2,iVar7);
          if (0 < iVar5) {
            do {
              if (*(int *)(iVar1 + 8) != 0) {
                FUN_0042e160();
              }
              if (*(int **)(iVar1 + 0x18) != (int *)0x0) {
                (**(code **)(**(int **)(iVar1 + 0x18) + 0x10))();
              }
              iVar5 = iVar5 + -1;
              *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + -1;
            } while (iVar5 != 0);
          }
        }
        FUN_005b7e1d(iVar1);
        piVar6 = DAT_006164b4;
      }
      if (*(char *)(piVar4[2] + 0x15) == '\0') {
        piVar3 = (int *)FUN_00527440(piVar4[2]);
        piVar6 = DAT_006164b4;
LAB_0040efe3:
        piVar4 = piVar3;
      }
      else {
        piVar3 = (int *)piVar4[1];
        if (piVar4 == (int *)piVar3[2]) {
          do {
            piVar4 = piVar3;
            piVar3 = (int *)piVar4[1];
          } while (piVar4 == (int *)piVar3[2]);
        }
        if ((int *)piVar4[2] != piVar3) goto LAB_0040efe3;
      }
    } while (piVar4 != piVar6);
  }
  piVar4 = (int *)*piVar6;
  if (DAT_006164c0 == 0) {
    DAT_006164c0 = 0;
    while (piVar4 != piVar6) {
      FUN_0052afa0();
      FUN_0046c8c0(auStack_4,piVar4);
    }
    FUN_0042e2f0();
    return;
  }
  FUN_0040f0d0(piVar6[1]);
  DAT_006164b4[1] = DAT_006164b8;
  DAT_006164c0 = 0;
  *DAT_006164b4 = (int)DAT_006164b4;
  DAT_006164b4[2] = (int)DAT_006164b4;
  FUN_0042e2f0();
  return;
}

