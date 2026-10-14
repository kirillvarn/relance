
int * FUN_005b2a30(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  RefreshLoadingProgress();
  switch(param_1) {
  case 1:
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x34))();
    }
    param_2 = (int *)0x0;
    PostQuitMessage(0);
    break;
  case 2:
    FUN_00579280(1);
    FUN_00579290();
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x34))();
    }
    goto LAB_005b2b43;
  case 3:
    FUN_00579280(1);
    FUN_00579290();
    bVar4 = true;
    iVar2 = FUN_0059da10("NN_Preferences");
    if (iVar2 == 0) {
      DAT_0067dcc8 = 0;
    }
    if (param_2 != (int *)0x0) {
      iVar2 = (**(code **)(*param_2 + 0x1c))();
      bVar4 = iVar2 == 2;
      (**(code **)(*param_2 + 0x34))();
    }
    param_2 = (int *)FUN_00437420();
    cVar1 = (**(code **)(*param_2 + 0x30))(bVar4);
    if (cVar1 == '\0') {
      RefreshLoadingProgress();
      return (int *)0x0;
    }
    break;
  case 4:
    piVar3 = (int *)FUN_00437420();
    (**(code **)(*piVar3 + 0x28))();
    RefreshLoadingProgress();
    return param_2;
  case 5:
    piVar3 = (int *)FUN_0054bd30();
    (**(code **)(*piVar3 + 0x28))();
    RefreshLoadingProgress();
    return param_2;
  case 6:
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x34))();
    }
    piVar3 = (int *)FUN_00575430();
    (**(code **)(*piVar3 + 0x30))(0);
    RefreshLoadingProgress();
    return piVar3;
  case 7:
    FUN_00579280(1);
    FUN_00579290();
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x34))();
    }
    FUN_005a8260();
    cVar1 = FUN_005a8960(&DAT_00679d04);
    if ((cVar1 == '\0') || (iVar2 = FUN_005aa680(), iVar2 == 0)) break;
    cVar1 = FUN_005ab1f0(&DAT_0067ea78);
    if (cVar1 == '\0') {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: Selection of character id %s failed\n",
                 "E:\\FL\\Scratch\\Source\\Client\\main.cpp",0x6fd,&DAT_0067ea78);
      DAT_0067ecbd = 1;
      RefreshLoadingProgress();
      return param_2;
    }
    cVar1 = FUN_004c4810();
    if (cVar1 != '\0') {
      param_2 = (int *)FUN_00437420();
      cVar1 = (**(code **)(*param_2 + 0x30))(1);
      if (cVar1 == '\0') {
        RefreshLoadingProgress();
        return (int *)0x0;
      }
      break;
    }
LAB_005b2b43:
    param_2 = (int *)FUN_0054bd30();
LAB_005b2b48:
    cVar1 = (**(code **)(*param_2 + 0x30))(0);
    if (cVar1 == '\0') {
      RefreshLoadingProgress();
      return (int *)0x0;
    }
    break;
  case 8:
    FUN_00579280(1);
    FUN_00579290();
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x34))();
    }
    param_2 = (int *)FUN_0043d560();
    goto LAB_005b2b48;
  }
  RefreshLoadingProgress();
  return param_2;
}

