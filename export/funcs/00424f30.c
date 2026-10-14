
char FUN_00424f30(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint _NewValue;
  uint _Mask;
  
  DAT_006679f8 = '\0';
  if (DAT_00610865 == '\0') {
    DAT_006679f8 = '\0';
    return '\0';
  }
  if (DAT_0067ecbc != '\0') {
    FUN_005b27c0(0);
  }
  if (DAT_0061084c != DAT_00610848) {
    if (DAT_0061084c == 0x18) {
      _Mask = 0x30000;
      _NewValue = 0x20000;
    }
    else if (DAT_0061084c == 0x35) {
      _Mask = 0x30000;
      _NewValue = 0x10000;
    }
    else {
      _Mask = 0;
      _NewValue = 0;
    }
    _control87(_NewValue,_Mask);
  }
  if (DAT_00610864 != '\0') {
    iVar2 = (**(code **)(**(int **)Pipeline_exref + 0xe4))(*(int **)Pipeline_exref);
    DAT_006679f8 = -1 < iVar2;
  }
  if (DAT_006679f8 == '\0') {
    Sleep(1000);
    cVar1 = FUN_004249c0(DAT_006679f4,&DAT_00679bc0,&DAT_00679bc0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)Pipeline_exref + 0x3c))(*(int **)Pipeline_exref,3,0);
      iVar2 = (**(code **)(**(int **)Pipeline_exref + 0x40))(*(int **)Pipeline_exref);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(**(int **)Pipeline_exref + 0xe4))(*(int **)Pipeline_exref);
        DAT_006679f8 = -1 < iVar2;
      }
    }
    if (DAT_006679f8 == '\0') {
      return '\0';
    }
  }
  if ((DAT_00679bd0 == 0x10) && (DAT_0061085c != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1a,uVar3);
  (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0x12,DAT_00610860);
  return DAT_006679f8;
}

