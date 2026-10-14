
void __thiscall FUN_00439d80(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b93b9;
  pvStack_c = ExceptionList;
  local_1c = param_2;
  ExceptionList = &pvStack_c;
  FUN_00432240(local_14,&local_1c);
  if (local_14[0] == *(void **)(param_1 + 0x10)) {
    puVar4 = (undefined4 *)FUN_00411c50(0x10000,1);
    (**(code **)FDUMP_exref)
              (*puVar4,"%s(%d) : *** ERROR: Could not find location id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,local_1c);
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)((int)local_14[0] + 0x10);
  }
  local_18 = *(undefined4 *)*puVar4;
  FUN_00432240(local_14,&local_18);
  if (local_14[0] == *(void **)(param_1 + 0x24)) {
    puVar5 = (undefined4 *)FUN_00411c50(0x10000,1);
    (**(code **)FDUMP_exref)
              (*puVar5,"%s(%d) : *** ERROR: Could not find base id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,local_18);
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = *(undefined4 **)((int)local_14[0] + 0x10);
  }
  uVar2 = *(undefined4 *)*puVar5;
  pvVar6 = operator_new(0x48);
  local_4 = 0;
  pvVar7 = (void *)0x0;
  local_14[0] = pvVar6;
  if (pvVar6 != (void *)0x0) {
    FUN_0043c550();
    local_4._0_1_ = 1;
    FUN_0043c790();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_0043c9d0();
    pvVar7 = pvVar6;
  }
  puVar4[1] = pvVar7;
  *(undefined1 *)((int)pvVar7 + 0x14) = 0;
  *(undefined1 *)(puVar4[1] + 0x2c) = 0;
  *(undefined1 *)(puVar4[1] + 0x44) = 0;
  local_4 = 0xffffffff;
  if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
    (**(code **)(*DAT_0067ecd0 + 0xa0))(param_2,DAT_00673344,1);
  }
  local_14[0] = operator_new(0x13ac);
  local_4 = 3;
  if (local_14[0] == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00449260();
  }
  local_4 = 0xffffffff;
  puVar4[2] = uVar8;
  FUN_004496b0(uVar2,param_2);
  if (*(char *)(param_1 + 0x5a) == '\0') {
    pcVar1 = (char *)(puVar4[1] + 0x14);
    iVar9 = FUN_005a89b0(pcVar1,0x40a00000,0x42700000);
    if (iVar9 != 1) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\MirrorDatabase.h",0x108,
                 "Synchronization failed\n");
      *pcVar1 = '\0';
    }
    if (*pcVar1 != '\0') {
      pcVar1 = (char *)(puVar4[1] + 0x2c);
      iVar9 = FUN_005a89b0(pcVar1,0x40a00000,0x42700000);
      if (iVar9 != 1) {
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: %s",
                   "E:\\FL\\Scratch\\Source\\Client\\Gf\\MirrorDatabase.h",0x108,
                   "Synchronization failed\n");
        *pcVar1 = '\0';
      }
      if (*pcVar1 != '\0') {
        pcVar1 = (char *)(puVar4[1] + 0x44);
        iVar9 = FUN_005a89b0(pcVar1,0x40a00000,0x42700000);
        if (iVar9 != 1) {
          (**(code **)FDUMP_exref)
                    (0x100002,"%s(%d) : *** WARNING: %s",
                     "E:\\FL\\Scratch\\Source\\Client\\Gf\\MirrorDatabase.h",0x108,
                     "Synchronization failed\n");
          *pcVar1 = '\0';
        }
        if (*pcVar1 != '\0') goto LAB_0043a052;
      }
    }
    bVar3 = SinglePlayer();
    if (bVar3) {
      FUN_005b2c50();
      ExceptionList = pvStack_c;
      return;
    }
    DAT_0067ecbe = 1;
    ExceptionList = pvStack_c;
    return;
  }
LAB_0043a052:
  FUN_0044aca0();
  FUN_00442060();
  ExceptionList = pvStack_c;
  return;
}

