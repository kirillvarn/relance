
void __fastcall FUN_00504640(int *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
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
    FUN_004ff360(0);
  }
  iVar4 = FUN_0054baf0();
  if (param_1[0x1a] == iVar4) {
    bVar2 = ID_String::IsEmpty((ID_String *)(*param_1 + 0xc));
    if (!bVar2) {
      local_8 = 0;
      local_10 = 0x3f800000;
      local_20 = 0x3f800000;
      local_30 = 0x3f800000;
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      local_24 = 0;
      local_28 = 0;
      local_2c = 0;
      local_c = 0;
      local_4 = 0;
      uVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x1c))();
      iVar4 = param_1[0x1a];
      iVar1 = *param_1;
      bVar2 = ID_String::IsEmpty((ID_String *)(iVar1 + 0xc));
      if (!bVar2) {
        piVar9 = param_1 + 0x16;
        puVar8 = &local_30;
        uVar6 = FUN_0040f080((ID_String *)(iVar1 + 0xc),iVar4,uVar5,puVar8,piVar9);
        cVar3 = FUN_00503070(uVar6,iVar4,uVar5,puVar8,piVar9);
        if (cVar3 != '\0') {
          return;
        }
      }
      pcVar7 = ID_String::get_string((ID_String *)(*param_1 + 0xc));
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: player jump done effect (%s) did not create.",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0x293,pcVar7);
    }
  }
  else {
    bVar2 = ID_String::IsEmpty((ID_String *)(*param_1 + 0x10));
    if (!bVar2) {
      local_8 = 0;
      local_10 = 0x3f800000;
      local_20 = 0x3f800000;
      local_30 = 0x3f800000;
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      local_24 = 0;
      local_28 = 0;
      local_2c = 0;
      local_c = 0;
      local_4 = 0;
      uVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x1c))();
      iVar4 = param_1[0x1a];
      iVar1 = *param_1;
      bVar2 = ID_String::IsEmpty((ID_String *)(iVar1 + 0x10));
      if (!bVar2) {
        piVar9 = param_1 + 0x16;
        puVar8 = &local_30;
        uVar6 = FUN_0040f080((ID_String *)(iVar1 + 0x10),iVar4,uVar5,puVar8,piVar9);
        cVar3 = FUN_00503070(uVar6,iVar4,uVar5,puVar8,piVar9);
        if (cVar3 != '\0') {
          return;
        }
      }
      pcVar7 = ID_String::get_string((ID_String *)(*param_1 + 0x10));
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: non-player jump done effect (%s) did not create.",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0x28b,pcVar7);
      return;
    }
  }
  return;
}

