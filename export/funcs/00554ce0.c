
void FUN_00554ce0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_4 [4];
  
  piVar3 = (int *)*DAT_00679898;
  if (piVar3 != DAT_00679898) {
    do {
      Archetype::Root::Release((Root *)piVar3[2]);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_00679898);
  }
  FUN_004a2f80(local_4,*DAT_00679898,DAT_00679898);
  piVar3 = (int *)*DAT_0067988c;
  if (piVar3 != DAT_0067988c) {
    do {
      FUN_00427a40(piVar3 + 2);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_0067988c);
  }
  FUN_004a2f80(local_4,*DAT_0067988c,DAT_0067988c);
  piVar3 = (int *)*DAT_00679880;
  if (piVar3 != DAT_00679880) {
    do {
      piVar2 = (int *)FUN_00430ab0(piVar3[2]);
      if (piVar2 == (int *)0x0) {
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: Voice %u is invalid\n",
                   "E:\\FL\\Scratch\\Source\\Client\\space\\StarSys.cpp",0x354,piVar3[2]);
      }
      else {
        piVar2 = (int *)(**(code **)(*piVar2 + 0x14))(piVar3[3]);
        if (piVar2 == (int *)0x0) {
          (**(code **)FDUMP_exref)
                    (0x100002,"%s(%d) : *** WARNING: Voice message %u is invalid for voice %u\n",
                     "E:\\FL\\Scratch\\Source\\Client\\space\\StarSys.cpp",0x34f,piVar3[3],piVar3[2]
                    );
        }
        else {
          (**(code **)(*piVar2 + 0x10))();
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_00679880);
  }
  piVar2 = DAT_00679880;
  piVar3 = (int *)*DAT_00679880;
  while (piVar3 != piVar2) {
    piVar1 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_005b7e1d(piVar3);
    DAT_00679884 = DAT_00679884 + -1;
    piVar3 = piVar1;
  }
  return;
}

