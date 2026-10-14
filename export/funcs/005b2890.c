
void FUN_005b2890(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  cVar2 = FUN_0042d740();
  if (cVar2 == '\0') {
    Timing::UpdateGlobalTime((double)CONCAT44(param_2,param_1));
  }
  bVar6 = DAT_0067ecb0 == DAT_0067ecd0;
  if (!bVar6) {
    DAT_0067ecb0 = DAT_0067ecd0;
  }
  if (((DAT_0067ecbd == '\0') && (bVar3 = SinglePlayer(), !bVar3)) && (DAT_0067ecbe != '\0')) {
    if (DAT_0067ecbf != '\0') {
      FUN_00473cb0(0x737,0,0);
    }
    DAT_0067ecbe = '\0';
    DAT_0067ecbf = '\0';
    FUN_005a8260();
    cVar2 = FUN_00564b20();
    if (cVar2 == '\0') {
      FUN_00564b10(3);
      DAT_0067ecbd = '\x01';
    }
  }
  iVar5 = 0;
  FUN_0059e080(param_1,param_2);
  if ((DAT_0067ecd0 != (int *)0x0) && (cVar2 = FUN_0042d740(), cVar2 == '\0')) {
    (**(code **)(*DAT_0067ecd0 + 0x2c))();
    (**(code **)(*DAT_0067ecd0 + 0x30))((float)(double)CONCAT44(param_2,param_1));
  }
  if (((bVar6) || (DAT_0067ecd0 != (int *)0x0)) ||
     (piVar4 = (int *)FUN_00575430(), DAT_0067ecac == piVar4)) {
    if (DAT_0067ecac != (int *)0x0) {
      if (DAT_0067ecbd != '\0') goto LAB_005b29a7;
      iVar5 = (**(code **)(*DAT_0067ecac + 0x38))((float)(double)CONCAT44(param_2,param_1));
    }
    if (DAT_0067ecbd == '\0') goto LAB_005b29b3;
  }
  else {
    bVar6 = SinglePlayer();
    if (!bVar6) {
      FUN_00564b10(3);
    }
  }
LAB_005b29a7:
  iVar5 = 6;
  DAT_0067ecbd = '\0';
LAB_005b29b3:
  iVar1 = DAT_0067ecc4;
  if (DAT_0067ecc4 != 0) {
    DAT_0067ecc4 = 0;
    iVar5 = iVar1;
  }
  if (iVar5 != 0) {
    DAT_0067ecac = (int *)FUN_005b2a30(iVar5,DAT_0067ecac);
  }
  if (DAT_0067ecac == (int *)0x0) {
    PostQuitMessage(0);
  }
  return;
}

