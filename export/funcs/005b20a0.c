
char FUN_005b20a0(void)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined1 local_10 [4];
  int local_c;
  
  cVar3 = '\x06';
  iVar4 = FUN_005a96b0(local_10);
  if ((*(int *)(iVar4 + 8) == 0) || (DAT_0067e9a0 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_c != 0) {
    cVar1 = *(char *)(local_c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d(local_c + -2);
    }
    else {
      *(char *)(local_c + -1) = cVar1 + -1;
    }
  }
  if (bVar2) {
    bVar2 = SinglePlayer();
    if ((!bVar2) && (cVar3 = FUN_005accb0(&DAT_0067e84c), cVar3 == '\0')) {
      return '\x06';
    }
    cVar3 = FUN_005a8960(&DAT_00679d04);
    if (((cVar3 != '\0') && (iVar4 = FUN_005aa680(), iVar4 != 0)) &&
       (cVar3 = FUN_005ab0f0(), cVar3 != '\0')) {
      cVar3 = FUN_004c4810();
      cVar3 = (cVar3 != '\0') + '\x02';
      if (cVar3 != '\x01') {
        return cVar3;
      }
    }
    cVar3 = '\x01';
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s","E:\\FL\\Scratch\\Source\\Client\\main.cpp",0x476,
               "ComputeInitialEnvironment() failed - exiting Freelancer");
  }
  return cVar3;
}

