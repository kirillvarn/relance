
void __thiscall FUN_004a7210(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_800 [2048];
  
  if (param_2 == 0) {
    iVar2 = param_1[0xcc];
    FUN_0042d6f0(0);
    FUN_0041dda0((char)iVar2);
    (**(code **)(*param_1 + 0x84))();
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
    return;
  }
  if (param_2 == 1) {
    iVar2 = param_1[0xcc];
    FUN_0042d6f0(0);
    FUN_0041dda0((char)iVar2);
    (**(code **)(*param_1 + 0x84))();
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
    return;
  }
  if (param_2 == 2) {
    FUN_0042d6f0(1);
    iVar2 = param_1[0xcc];
    FUN_0042d6f0(0);
    FUN_0041dda0((char)iVar2);
    (**(code **)(*param_1 + 0x84))();
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
    FUN_00488970(2);
    FUN_0042d6f0(0);
    return;
  }
  if (param_2 == 3) {
    FUN_0042d6f0(1);
    iVar2 = param_1[0xcc];
    FUN_0042d6f0(0);
    FUN_0041dda0((char)iVar2);
    (**(code **)(*param_1 + 0x84))();
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
    FUN_00488970(1);
    FUN_0042d6f0(0);
    return;
  }
  if (param_2 == 4) {
    FUN_0042d6f0(1);
    iVar2 = param_1[0xcc];
    FUN_0042d6f0(0);
    FUN_0041dda0((char)iVar2);
    (**(code **)(*param_1 + 0x84))();
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
    piVar3 = (int *)FUN_0059db20("NN_Preferences","NN_Preferences",0,0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x80))();
    }
    FUN_0042d6f0(0);
    return;
  }
  if (param_2 == 5) {
    FUN_004347e0(DAT_0067eca8,0x75b,local_800,0x400);
    FUN_004889e0(param_1,local_800,0);
    return;
  }
  if (param_2 == 6) {
    FUN_00564b10(2);
    FUN_005763b0(0xc5,0);
    iVar2 = param_1[0xcc];
    FUN_0042d6f0(0);
    FUN_0041dda0((char)iVar2);
    (**(code **)(*param_1 + 0x84))();
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
    return;
  }
  if (param_2 == 7) {
    FUN_00564b10(3);
    FUN_004347e0(DAT_0067eca8,0x76b,local_800,0x400);
    FUN_004889e0(param_1,local_800,0);
  }
  return;
}

