
void __fastcall FUN_00504210(int *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1[9] != 0) {
    FUN_004ff360(2);
  }
  local_10 = 0x3f800000;
  local_20 = 0x3f800000;
  local_30 = 0x3f800000;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  uVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x1c))();
  if (param_1[0x10] != 0) {
    FUN_004f7d20(param_1[0x1a],uVar4,&local_30);
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 0x94))(uVar4,&local_30);
  }
  if (param_1[0x11] != 0) {
    FUN_005377c0(uVar4,&local_30);
  }
  puVar5 = (undefined4 *)(*(code *)**(undefined4 **)param_1[0x1a])();
  iVar1 = *param_1;
  local_10 = 0x3f800000;
  local_20 = 0x3f800000;
  local_30 = 0x3f800000;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_c = *puVar5;
  local_8 = puVar5[1];
  local_4 = puVar5[2];
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  bVar2 = ID_String::IsEmpty((ID_String *)(iVar1 + 4));
  if (!bVar2) {
    piVar8 = param_1 + 10;
    puVar5 = &uStack_3c;
    puVar7 = &local_30;
    uVar4 = FUN_0040f080((ID_String *)(iVar1 + 4),puVar7,puVar5,piVar8);
    cVar3 = FUN_00503f40(uVar4,puVar7,puVar5,piVar8);
    if (cVar3 != '\0') {
      local_10 = 0x3f800000;
      local_20 = 0x3f800000;
      local_30 = 0x3f800000;
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      local_24 = 0;
      local_28 = 0;
      local_2c = 0;
      local_4 = 0;
      local_8 = 0;
      local_c = 0;
      uVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x1c))();
      if (param_1[0xc] != 0) {
        FUN_004f7d20(param_1[0x1a],uVar4,&local_30);
      }
      if ((int *)param_1[0xb] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0xb] + 0x94))(uVar4,&local_30);
      }
      if (param_1[0xd] == 0) {
        return;
      }
      FUN_005377c0(uVar4,&local_30);
      return;
    }
  }
  pcVar6 = ID_String::get_string((ID_String *)(param_1 + 6));
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: jump out effect (%s) did not create.",
             "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0x25e,pcVar6);
  return;
}

