
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00543b40(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  void *pvVar2;
  IAction *pIVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  char acStack_4c [64];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005c0e6f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) | 8;
  if (param_2 == (int *)0x0) {
    piVar4 = (int *)FUN_0054baf0();
    if (param_1 == piVar4) {
      if (*param_3 == 0) {
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : *** ERROR: %s",
                   "E:\\FL\\Scratch\\Source\\Client\\space\\ship.cpp",0x2a8,
                   "Cannot land on BASE_ID_NONE");
      }
      FUN_00548ef0(param_3);
      FUN_00412070(0x3f800000);
    }
    else {
      (**(code **)(*param_1 + 0x15c))(1);
    }
  }
  else {
    pvVar2 = IAction::operator_new(0x50);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pIVar3 = (IAction *)0x0;
    }
    else {
      if (((param_2 == (int *)0xfffffff4) || (iVar5 = param_2[4], iVar5 == 0)) ||
         ((*(uint *)(iVar5 + 0x4c) & 0x303) != 0x303)) {
        iVar5 = 0;
      }
      pIVar3 = (IAction *)FUN_00542b70(param_1,iVar5);
    }
    local_4 = 0xffffffff;
    ActionDB::add((ActionDB *)(param_1 + 8),pIVar3);
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    (**(code **)(param_1[1] + 4))(&local_88);
    piVar4 = (int *)FUN_0054baf0();
    if (param_1 == piVar4) {
      cVar1 = FUN_0054bca0();
      if (cVar1 == '\0') {
        uStack_5c = 0x3f800000;
        uStack_6c = 0x3f800000;
        uStack_7c = 0x3f800000;
        uStack_60 = 0;
        uStack_64 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_74 = 0;
        uStack_78 = 0;
        uStack_50 = 0;
        uStack_54 = 0;
        uStack_58 = 0;
        sprintf(acStack_4c,"%s%c","HPDockCam",0x41);
        iVar5 = (**(code **)(*param_2 + 0xc0))(acStack_4c,&uStack_58,&uStack_7c);
        if (iVar5 == 0) {
          FUN_00549e30();
          FUN_0054bb90(&uStack_7c);
        }
      }
      FUN_0054bbd0(_DAT_005dfb34);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

