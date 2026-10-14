
void __thiscall FUN_004880f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0xd1] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (param_1[0xd2] - param_1[0xd1]) / 0x24;
  }
  if ((-1 < param_2) && (param_2 < iVar2)) {
    iVar2 = *(int *)(param_1[0xd1] + param_2 * 0x24);
    FUN_005b2c70(iVar2,*(undefined1 *)(iVar2 + 0x201));
    FUN_004a7690((char)param_1[0xcc]);
    (**(code **)(param_1[0x177] + 0x28))();
    (**(code **)(param_1[0x3a6] + 0x28))();
    (**(code **)(*param_1 + 0x84))();
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
    FUN_004120d0(1);
    return;
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: Invalid index %d for savegame\n",
             "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_LoadSave.cpp",0x502,param_2);
  return;
}

