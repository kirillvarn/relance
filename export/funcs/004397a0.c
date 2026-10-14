
void __thiscall FUN_004397a0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ISystem *pIVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  int iStack_140;
  undefined4 *local_13c;
  uint uStack_138;
  int iStack_134;
  int local_130;
  int local_12c;
  int local_128;
  undefined1 auStack_124 [4];
  char acStack_120 [132];
  int iStack_9c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9347;
  local_c = ExceptionList;
  local_130 = param_2;
  ExceptionList = &local_c;
  local_128 = param_1;
  FUN_00432240(&local_13c,&local_130);
  if (local_13c == *(undefined4 **)(param_1 + 0x24)) {
    puVar3 = (undefined4 *)FUN_00411c50(0x10000,1);
    (**(code **)FDUMP_exref)
              (*puVar3,"%s(%d) : *** ERROR: Could not find base id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,local_130);
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)local_13c[4];
  }
  local_12c = *piVar8;
  puVar3 = operator_new(0x4c);
  local_4 = 0;
  local_13c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0043c0d0();
    local_4._0_1_ = 1;
    FUN_0043c310();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_0042abc0();
  }
  piVar8[1] = (int)puVar3;
  puVar3[0x11] = 0xffffffff;
  *(undefined4 *)(piVar8[1] + 0x48) = 0;
  local_4 = 0xffffffff;
  piVar9 = *(int **)piVar8[4];
  if (piVar9 != (int *)piVar8[4]) {
    do {
      RoomData::load((RoomData *)piVar9[2]);
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)piVar8[4]);
  }
  if (*(char *)(param_1 + 0x5a) != '\0') {
    ExceptionList = local_c;
    return;
  }
  *(undefined1 *)(piVar8[1] + 0x14) = 0;
  *(undefined1 *)(piVar8[1] + 0x2c) = 0;
  if (DAT_0067ecd0 != (int *)0x0) {
    (**(code **)(*DAT_0067ecd0 + 0x9c))(param_2,DAT_00673344,1);
  }
  pcVar10 = (char *)(piVar8[1] + 0x14);
  iVar4 = FUN_005a89b0(pcVar10,0x40a00000,0x42700000);
  if (iVar4 != 1) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\MirrorDatabase.h",0x108,
               "Synchronization failed\n");
    *pcVar10 = '\0';
  }
  if (*pcVar10 == '\0') {
LAB_00439978:
    bVar1 = SinglePlayer();
    if (bVar1) {
      FUN_005b2c50();
    }
    else {
      DAT_0067ecbe = 1;
    }
    ExceptionList = local_c;
    return;
  }
  pcVar10 = (char *)(piVar8[1] + 0x2c);
  iVar4 = FUN_005a89b0(pcVar10,0x40a00000,0x42700000);
  if (iVar4 != 1) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\MirrorDatabase.h",0x108,
               "Synchronization failed\n");
    *pcVar10 = '\0';
  }
  if (*pcVar10 == '\0') goto LAB_00439978;
  iVar4 = 0;
  iStack_140 = 0;
  cVar2 = FUN_0043ce90(&iStack_140,1);
  if (cVar2 != '\0') {
    do {
      iVar4 = iVar4 + 1;
      cVar2 = FUN_0043ce90(&iStack_140,1);
    } while (cVar2 != '\0');
    if (0 < iVar4) {
      iVar5 = rand();
      local_13c = (undefined4 *)0x0;
      iStack_134 = 0;
      iStack_140 = 0;
      cVar2 = FUN_0043ce90(&iStack_140,1);
      if (cVar2 == '\0') {
LAB_00439a50:
        *(undefined4 *)(piVar8[1] + 0x44) = *local_13c;
      }
      else {
        do {
          if (iStack_134 == (int)(iVar5 * iVar4 + (iVar5 * iVar4 >> 0x1f & 0x7fffU)) >> 0xf) {
            local_13c = *(undefined4 **)(iStack_140 + 8);
            goto LAB_00439a50;
          }
          iStack_134 = iStack_134 + 1;
          cVar2 = FUN_0043ce90(&iStack_140,1);
        } while (cVar2 != '\0');
        *(undefined4 *)(piVar8[1] + 0x44) = *local_13c;
      }
      goto LAB_00439a68;
    }
  }
  *(undefined4 *)(piVar8[1] + 0x44) = 0xffffffff;
LAB_00439a68:
  FUN_00437de0(*(undefined4 *)(local_12c + 8),0);
  if (DAT_0067ecd0 != (int *)0x0) {
    uVar6 = FUN_004c4830();
    pIVar7 = Universe::get_system(uVar6);
    FUN_0043bc60();
    uVar6 = (**(code **)(*(int *)pIVar7 + 0x3c))();
    uVar11 = 0;
    if (uVar6 != 0) {
      do {
        cVar2 = (**(code **)(*(int *)pIVar7 + 0x40))(uVar11,auStack_124);
        if ((cVar2 != '\0') && (iStack_9c == param_2)) {
          uVar6 = CreateID(acStack_120);
          goto LAB_00439ada;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
    }
  }
  uVar6 = 0;
LAB_00439ada:
  iVar4 = local_128;
  *(uint *)(local_128 + 0x54) = uVar6;
  if (uVar6 != 0) {
    uStack_138 = uStack_138 & 0xffffff00;
    FUN_004c4da0(uVar6,&uStack_138,0,0);
    uStack_138 = uStack_138 | 0x1e;
    FUN_004c4e00(*(undefined4 *)(iVar4 + 0x54),uStack_138,1);
  }
  FUN_004b9b30();
  ExceptionList = local_c;
  return;
}

