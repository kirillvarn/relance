
undefined4 FUN_004d4220(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_c [12];
  
  iVar3 = FUN_004c4690();
  iVar1 = param_1;
  if (0 < iVar3) {
    iVar3 = FUN_004c46a0(0);
    cVar2 = FUN_004f4b90(iVar3);
    if (cVar2 != '\0') {
      return 1;
    }
    if ((*(int *)(iVar3 + 0x10) != 0) && (*(int *)(iVar3 + 0x10) == iVar1)) {
      return 1;
    }
  }
  iVar3 = FUN_004c4fb0();
  if (0 < iVar3) {
    FUN_004c4ff0(0);
    cVar2 = FUN_004c52d0(local_c,&param_1);
    if (cVar2 != '\0') {
      cVar2 = FUN_004f4b90(local_c);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    piVar4 = (int *)FUN_004c5110();
    if (piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 0x20))();
      if (iVar3 == iVar1) {
        return 1;
      }
    }
  }
  return 0;
}

