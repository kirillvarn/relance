
int __fastcall FUN_004c5110(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  IBase *pIVar3;
  Watchable *pWVar4;
  int iVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  param_1 = (undefined4 *)*param_1;
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    if (*(short *)(param_1 + 2) == 0x42) break;
    if (*(short *)(param_1 + 2) == 0x52) {
      iVar2 = FUN_00541890(param_1[1],0);
      return iVar2;
    }
    param_1 = (undefined4 *)*param_1;
  }
  uVar1 = param_1[1];
  if (DAT_00673394 != uVar1) {
    DAT_006728e0 = 0;
    DAT_00673394 = uVar1;
    if (DAT_006728d8 != 0) {
      BaseWatcher::set_pointer((BaseWatcher *)&DAT_006728d8,(Watchable *)0x0);
    }
    DAT_00673398 = '\0';
    pIVar3 = Universe::get_base(uVar1);
    if (pIVar3 != (IBase *)0x0) {
      DAT_006728e0 = (**(code **)(*(int *)pIVar3 + 0x10))();
      if (DAT_006728e0 != DAT_00673354) goto LAB_004c52b3;
      DAT_00673398 = '\x01';
      local_8 = 2;
      for (iVar2 = FUN_00540fc0(&local_8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
        if (((iVar2 == -0xc) || (iVar5 = *(int *)(iVar2 + 0x10), iVar5 == 0)) ||
           ((*(uint *)(iVar5 + 0x4c) & 0x303) != 0x303)) {
          iVar5 = 0;
        }
        if (*(int *)(iVar5 + 0x160) == DAT_00673394) {
          if (iVar2 == 0) {
            pWVar4 = (Watchable *)0x0;
          }
          else {
            pWVar4 = (Watchable *)(iVar2 + 8);
          }
          if (pWVar4 != (Watchable *)DAT_006728d8) {
            BaseWatcher::set_pointer((BaseWatcher *)&DAT_006728d8,pWVar4);
          }
          break;
        }
      }
    }
  }
  if ((DAT_006728e0 == DAT_00673354) && (DAT_00673398 == '\0')) {
    DAT_00673398 = '\x01';
    local_4 = 2;
    for (iVar2 = FUN_00540fc0(&local_4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
      if (((iVar2 == -0xc) || (iVar5 = *(int *)(iVar2 + 0x10), iVar5 == 0)) ||
         ((*(uint *)(iVar5 + 0x4c) & 0x303) != 0x303)) {
        iVar5 = 0;
      }
      if (*(int *)(iVar5 + 0x160) == DAT_00673394) {
        if (iVar2 == 0) {
          pWVar4 = (Watchable *)0x0;
        }
        else {
          pWVar4 = (Watchable *)(iVar2 + 8);
        }
        if (pWVar4 != (Watchable *)DAT_006728d8) {
          BaseWatcher::set_pointer((BaseWatcher *)&DAT_006728d8,pWVar4);
        }
        break;
      }
    }
  }
LAB_004c52b3:
  if (DAT_006728d8 != 0) {
    return DAT_006728d8 + -8;
  }
  return 0;
}

