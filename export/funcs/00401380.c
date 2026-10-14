
int FUN_00401380(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_4 [4];
  
  piVar3 = (int *)*DAT_00616444;
  iVar2 = 0;
  piVar1 = DAT_00616444;
  while (DAT_00616444 = piVar1, piVar3 != piVar1) {
    if (0 < piVar3[4]) {
      iVar2 = iVar2 + 1;
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: ALELib::Shutdown(): %s has %d dangling refs.",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\ALELib.cpp",0x96,piVar3[3],piVar3[4]);
    }
    FUN_00536020();
    piVar1 = DAT_00616444;
  }
  piVar3 = (int *)*piVar1;
  if (DAT_00616450 == 0) {
    DAT_00616450 = 0;
    while (piVar3 != piVar1) {
      FUN_00536020();
      FUN_00401780(auStack_4,piVar3);
    }
    return iVar2;
  }
  piVar3 = (int *)piVar1[1];
  if ((int *)piVar1[1] != DAT_00616448) {
    do {
      FUN_00401b50(piVar3[2]);
      piVar1 = (int *)*piVar3;
      FUN_005b7e1d(piVar3);
      piVar3 = piVar1;
    } while (piVar1 != DAT_00616448);
  }
  DAT_00616444[1] = (int)DAT_00616448;
  DAT_00616450 = 0;
  *DAT_00616444 = (int)DAT_00616444;
  DAT_00616444[2] = (int)DAT_00616444;
  return iVar2;
}

