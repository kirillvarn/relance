
undefined4 * __thiscall FUN_0052ec40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *local_94;
  ID_String *local_90;
  undefined4 uStack_8c;
  undefined4 *local_88;
  undefined4 auStack_84 [9];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  HardpointInfo aHStack_54 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_44 [14];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0569;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_88 = param_1;
  FUN_00531a30(param_2,param_3);
  puVar9 = param_1 + 4;
  *puVar9 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_94 = (int *)param_1[1];
  *param_1 = &PTR_FUN_005ddbd8;
  iVar4 = *(int *)(local_94[3] + 4);
  local_4 = 1;
  if (**(char **)(iVar4 + 0x58) != '\0') {
    local_90 = (ID_String *)(iVar4 + 0x54);
    bVar1 = ID_String::IsEmpty(local_90);
    if (!bVar1) {
      lVar2 = (**(code **)(*local_94 + 0x84))();
      bVar1 = FindHardpoint_PS(lVar2,*(char **)(iVar4 + 0x58),(long *)&local_94,aHStack_54);
      piVar8 = local_94;
      if (bVar1) {
        puVar5 = auStack_44;
        puVar6 = auStack_84;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        uStack_60 = uStack_50;
        uStack_8c = param_1[2];
        uStack_5c = uStack_4c;
        uStack_58 = uStack_48;
        bVar1 = ID_String::IsEmpty(local_90);
        if (!bVar1) {
          puVar5 = auStack_84;
          uVar7 = uStack_8c;
          uVar3 = FUN_0040f080(local_90,uStack_8c,piVar8,puVar5,puVar9);
          FUN_00503070(uVar3,uVar7,piVar8,puVar5,puVar9);
        }
      }
      else {
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: Thruster hardpoint not found: %s\n",
                   "E:\\FL\\Scratch\\Source\\Client\\Space\\CliThruster.cpp",0x2c,
                   *(undefined4 *)(iVar4 + 0x58));
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

