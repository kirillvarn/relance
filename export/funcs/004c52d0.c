
undefined4 __thiscall FUN_004c52d0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  IBase *pIVar3;
  int iVar4;
  Watchable *pWVar5;
  int *piVar6;
  int iVar7;
  int *local_4;
  
  for (puVar2 = (undefined4 *)*param_1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2)
  {
    local_4 = param_1;
    if (*(short *)(puVar2 + 2) == 0x42) {
      uVar1 = puVar2[1];
      if (DAT_00673394 != uVar1) {
        DAT_006728e0 = 0;
        DAT_00673394 = uVar1;
        BaseWatcher::set((BaseWatcher *)&DAT_006728d8,(Watchable *)0x0);
        DAT_00673398 = '\0';
        pIVar3 = Universe::get_base(uVar1);
        if (pIVar3 != (IBase *)0x0) {
          DAT_006728e0 = (**(code **)(*(int *)pIVar3 + 0x10))();
          if (DAT_006728e0 != DAT_00673354) goto LAB_004c540d;
          FUN_004c5090();
        }
      }
      if ((DAT_006728e0 != DAT_00673354) || (DAT_00673398 != '\0')) goto LAB_004c540d;
      DAT_00673398 = '\x01';
      local_4 = (int *)0x2;
      iVar4 = FUN_00540fc0(&local_4);
      if (iVar4 == 0) goto LAB_004c540d;
      goto LAB_004c53c4;
    }
    if (*(short *)(puVar2 + 2) == 0x52) {
      puVar2 = (undefined4 *)FUN_00541890(puVar2[1],0);
      goto LAB_004c541e;
    }
  }
  goto LAB_004c52f4;
  while (iVar4 = *(int *)(iVar4 + 0x14), iVar4 != 0) {
LAB_004c53c4:
    if (((iVar4 == -0xc) || (iVar7 = *(int *)(iVar4 + 0x10), iVar7 == 0)) ||
       ((*(uint *)(iVar7 + 0x4c) & 0x303) != 0x303)) {
      iVar7 = 0;
    }
    if (*(int *)(iVar7 + 0x160) == DAT_00673394) {
      if (iVar4 == 0) {
        pWVar5 = (Watchable *)0x0;
      }
      else {
        pWVar5 = (Watchable *)(iVar4 + 8);
      }
      BaseWatcher::set((BaseWatcher *)&DAT_006728d8,pWVar5);
      break;
    }
  }
LAB_004c540d:
  if (DAT_006728d8 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(DAT_006728d8 + -8);
  }
LAB_004c541e:
  if (puVar2 != (undefined4 *)0x0) {
    *param_3 = DAT_00673354;
    piVar6 = (int *)(**(code **)*puVar2)();
    *param_2 = *piVar6;
    param_2[1] = piVar6[1];
    iVar4 = piVar6[2];
    param_2[2] = iVar4;
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
LAB_004c52f4:
  param_1 = (int *)*param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  do {
    if ((short)param_1[2] == 0x4e) {
      piVar6 = (int *)param_1[1];
      *param_3 = *piVar6;
      *param_2 = piVar6[2];
      param_2[1] = piVar6[3];
      iVar4 = piVar6[4];
      param_2[2] = iVar4;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
    param_1 = (int *)*param_1;
  } while (param_1 != (int *)0x0);
  return 0;
}

