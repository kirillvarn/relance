
void __thiscall FUN_00543d50(IObjRW *param_1,int *param_2,int param_3)

{
  int iVar1;
  CEqObj *pCVar2;
  IObjRW *pIVar3;
  CShip *this;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  char acStack_4c [76];
  
  iVar1 = (**(code **)(*(int *)param_1 + 0x20))();
  if (iVar1 == DAT_00673378) {
    if ((((param_2 == (int *)0x0) || (param_2 == (int *)0xfffffff4)) ||
        (pCVar2 = (CEqObj *)param_2[4], pCVar2 == (CEqObj *)0x0)) ||
       ((*(uint *)(pCVar2 + 0x4c) & 0x103) != 0x103)) {
      pCVar2 = (CEqObj *)0x0;
    }
    if (((param_1 == (IObjRW *)0xfffffff4) ||
        (this = *(CShip **)(param_1 + 0x10), this == (CShip *)0x0)) ||
       ((*(uint *)(this + 0x4c) & 0x503) != 0x503)) {
      this = (CShip *)0x0;
    }
    CShip::launch(this,param_1,pCVar2,param_3);
    FUN_005544d0(0,0x401c0000);
    pIVar3 = (IObjRW *)FUN_0054baf0();
    if (param_1 == pIVar3) {
      uStack_50 = 0x3f800000;
      uStack_60 = 0x3f800000;
      uStack_70 = 0x3f800000;
      uStack_54 = 0;
      uStack_58 = 0;
      uStack_5c = 0;
      uStack_64 = 0;
      uStack_68 = 0;
      uStack_6c = 0;
      acStack_4c[8] = '\0';
      acStack_4c[9] = '\0';
      acStack_4c[10] = '\0';
      acStack_4c[0xb] = '\0';
      acStack_4c[4] = '\0';
      acStack_4c[5] = '\0';
      acStack_4c[6] = '\0';
      acStack_4c[7] = '\0';
      acStack_4c[0] = '\0';
      acStack_4c[1] = '\0';
      acStack_4c[2] = '\0';
      acStack_4c[3] = '\0';
      sprintf(acStack_4c + 0xc,"%s%c","HPLaunchCam",param_3 + 0x41);
      iVar1 = (**(code **)(*param_2 + 0xc0))(acStack_4c + 0xc,acStack_4c,&uStack_70);
      if (iVar1 != 0) {
        sprintf(acStack_4c,"%s%c","HPDockCam",param_3 + 0x41);
        iVar1 = (**(code **)(*param_2 + 0xc0))(acStack_4c,&uStack_58,&stack0xffffff84);
        if (iVar1 != 0) {
          FUN_00549e30();
          FUN_0054bc10("player");
          return;
        }
      }
      FUN_00549e30();
      FUN_0054bb90(&stack0xffffff84);
      return;
    }
  }
  return;
}

