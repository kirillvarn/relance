
void FUN_00459950(undefined4 *param_1)

{
  ISystem *pIVar1;
  IBase *pIVar2;
  uint uVar3;
  IZone *pIVar4;
  undefined4 uVar5;
  
  if (DAT_0066d334 != 0) {
    FUN_00459210(param_1[1]);
    for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
        param_1 = (undefined4 *)*param_1) {
      switch(*(undefined2 *)(param_1 + 2)) {
      case 0x21:
        FUN_00459950(param_1[1]);
        break;
      case 0x42:
        pIVar2 = Universe::get_base(param_1[1]);
        uVar5 = (**(code **)(*(int *)pIVar2 + 8))();
        FUN_00459210(uVar5);
        break;
      case 0x46:
        uVar3 = Reputation::get_name(param_1[1]);
        FUN_00459210(uVar3);
        break;
      case 0x53:
        pIVar1 = Universe::get_system(param_1[1]);
        uVar5 = (**(code **)(*(int *)pIVar1 + 0xc))();
        FUN_00459210(uVar5);
        break;
      case 0x5a:
        pIVar4 = Universe::get_zone(param_1[1]);
        if (pIVar4 != (IZone *)0x0) {
          uVar5 = (**(code **)(*(int *)pIVar4 + 0x84))();
          FUN_00459210(uVar5);
        }
        break;
      case 0x73:
        FUN_00459210(param_1[1]);
      }
    }
  }
  return;
}

