
void __thiscall FUN_00439b50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  uVar2 = param_2;
  local_4 = param_1;
  FUN_00432240(&local_4,&param_2);
  if (local_4 == *(int *)(param_1 + 0x24)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find base id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,param_2);
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_4 + 0x10);
  }
  if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
    (**(code **)(*DAT_0067ecd0 + 0x9c))(uVar2,DAT_00673344,0);
  }
  piVar3 = (int *)**(int **)(iVar4 + 0x10);
  if (piVar3 != *(int **)(iVar4 + 0x10)) {
    do {
      RoomData::unload((RoomData *)piVar3[2]);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(iVar4 + 0x10));
  }
  iVar1 = *(int *)(iVar4 + 4);
  if (iVar1 != 0) {
    FUN_00439c10();
    FUN_005b7e1d(iVar1);
  }
  *(undefined4 *)(iVar4 + 4) = 0;
  return;
}

