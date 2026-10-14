
undefined4 FUN_0046fc90(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_004c4810();
  if (cVar1 == '\0') {
    iVar2 = FUN_0054baf0();
    if (iVar2 == 0) {
      return 1;
    }
  }
  else {
    cVar1 = FUN_00442720();
    if (cVar1 != '\0') {
      return 1;
    }
    cVar1 = FUN_00442790();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  iVar2 = FUN_0059da10("NeuroNetMissionMessage");
  if (((((iVar2 == 0) && (iVar2 = FUN_0059da10("NN_Trade"), iVar2 == 0)) &&
       (iVar2 = FUN_0059da10("NN_Scanner"), iVar2 == 0)) &&
      ((cVar1 = FUN_0045a470(), cVar1 == '\0' && (DAT_0067dcc8 == '\0')))) &&
     ((cVar1 = FUN_0042d730(), cVar1 == '\0' &&
      ((cVar1 = FUN_0041a3e0(), cVar1 == '\0' && (cVar1 = FUN_0041dd90(), cVar1 != '\0')))))) {
    return 0;
  }
  return 1;
}

