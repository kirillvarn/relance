
undefined4 FUN_004d4120(int *param_1,int param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_c [12];
  
  iVar1 = param_2;
  if (((param_1[1] != 0) && (param_1[1] != 8)) && (param_1[4] == param_2)) {
    return 1;
  }
  if (*param_1 == 4) {
    iVar4 = param_1[5];
    iVar3 = FUN_004c4690();
    if (iVar4 < iVar3) {
      iVar4 = FUN_004c46a0(iVar4);
      cVar2 = FUN_004f4b90(iVar4);
      if (cVar2 != '\0') {
        return 1;
      }
      if (((param_3 != '\0') && (*(int *)(iVar4 + 0x10) != 0)) && (*(int *)(iVar4 + 0x10) == iVar1))
      {
        return 1;
      }
    }
  }
  else if (*param_1 == 3) {
    iVar4 = param_1[5];
    iVar3 = FUN_004c4fb0();
    if (iVar4 < iVar3) {
      FUN_004c4ff0(iVar4);
      cVar2 = FUN_004c52d0(local_c,&param_1);
      if (cVar2 != '\0') {
        cVar2 = FUN_004f4b90(local_c);
        if (cVar2 != '\0') {
          return 1;
        }
      }
      piVar5 = (int *)FUN_004c5110();
      if ((param_3 != '\0') && (piVar5 != (int *)0x0)) {
        iVar4 = (**(code **)(*piVar5 + 0x20))();
        if (iVar4 == iVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}

