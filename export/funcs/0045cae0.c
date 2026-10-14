
undefined4 __thiscall FUN_0045cae0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0x67) {
    if (DAT_0067dcc8 != '\0') {
      return 0;
    }
    cVar1 = FUN_0041dd90();
    if (cVar1 == '\0') {
      return 0;
    }
    cVar2 = FUN_0042d730();
    cVar1 = DAT_00668761;
    if (cVar2 != '\0') {
      return 0;
    }
  }
  else {
    cVar1 = FUN_0045a740();
  }
  if (cVar1 == '\0') {
    switch(param_2) {
    case 0x10:
      FUN_0045cf60();
      return 1;
    case 99:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
      switch(param_2) {
      default:
        iVar3 = 0;
        break;
      case 0x65:
        iVar3 = 3;
        break;
      case 0x66:
        iVar3 = 1;
        break;
      case 0x67:
        iVar3 = 2;
        break;
      case 0x68:
        iVar3 = 5;
        break;
      case 0x69:
        iVar3 = 6;
        break;
      case 0x6a:
        iVar3 = 4;
      }
      iVar3 = *(int *)(param_1 + 0x8c + iVar3 * 4);
      if (*(int *)(param_1 + 0x7c) == iVar3) {
        iVar3 = FUN_0059da10("NN_Dealer");
        if (iVar3 != 0) {
          *(undefined1 *)(param_1 + 0x201) = 1;
        }
        FUN_0045cf60();
        return 1;
      }
      *(undefined1 *)(param_1 + 0x201) = 0;
      *(undefined1 *)(param_1 + 0x202) = 0;
      iVar4 = FUN_0059da10("NN_Dealer");
      if ((iVar4 != 0) &&
         ((cVar1 = FUN_0055e280(), cVar1 != '\0' || (cVar1 = FUN_0055e280(), cVar1 != '\0')))) {
        *(undefined1 *)(param_1 + 0x202) = 1;
        return 0;
      }
      FUN_0045ccf0(iVar3,param_2);
      return 1;
    case 0x6b:
      if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x90)) {
        FUN_0045cf60();
        return 1;
      }
      *(undefined1 *)(param_1 + 0x201) = 0;
      FUN_0045ccf0(*(int *)(param_1 + 0x90),0x66);
      return 1;
    case 0x6e:
      FUN_004b9b40();
      return 1;
    }
  }
  return 0;
}

