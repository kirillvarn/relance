
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00444290(int *param_1,CharacterProperties *param_2)

{
  ushort **ppuVar1;
  int iVar2;
  char *_Str1;
  int iVar3;
  CostumeDescriptions *this;
  accessory *paVar4;
  int *piVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  int *piVar11;
  HardpointSummary *this_00;
  ulong *puVar12;
  bodypart *pbVar13;
  int unaff_EBP;
  int *piVar14;
  bodypart *pbVar15;
  bodypart **ppbVar16;
  bodypart **ppbVar17;
  code *pcStack_78;
  char *local_74;
  undefined4 *local_70;
  char *pcStack_6c;
  undefined4 uStack_68;
  bodypart *local_60;
  bodypart *local_5c;
  bodypart *local_58;
  bodypart *local_54;
  ulong uStack_50;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int aiStack_3c [3];
  SetpointProperties local_30 [8];
  char *local_28;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b97fc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  RefreshLoadingProgress();
  CharacterProperties::operator=((CharacterProperties *)(param_1 + 0x55),param_2);
  iVar3 = *(int *)(param_2 + 100);
  param_1[0x6e] = iVar3;
  param_1[0x6f] = *(int *)(param_2 + 0x68);
  *(bool *)((int)param_1 + 0x3ad) = param_1[0x5c] == 1;
  param_1[0xc0] = 0;
  if (iVar3 != 0) {
    SetpointProperties::SetpointProperties(local_30);
    local_4 = 0;
    SetpointProperties::extract_from_name(local_30,*(char **)param_1[0x6e]);
    iVar3 = stricmp(local_28,"bartender");
    if (iVar3 == 0) {
      param_1[0xc0] = 1;
    }
    else {
      iVar3 = stricmp(local_28,"trader");
      if (iVar3 == 0) {
        param_1[0xc0] = 2;
      }
      else {
        iVar3 = stricmp(local_28,"shipdealer");
        if (iVar3 == 0) {
          param_1[0xc0] = 3;
        }
        else {
          iVar3 = stricmp(local_28,"equipment");
          if (iVar3 == 0) {
            param_1[0xc0] = 4;
          }
        }
      }
    }
    local_4 = 0xffffffff;
    SetpointProperties::~SetpointProperties(local_30);
  }
  this = GetCostumeDescriptions();
  local_5c = CostumeDescriptions::find_bodypart(this,1,param_1[0x5e]);
  local_60 = CostumeDescriptions::find_bodypart(this,0,param_1[0x5f]);
  local_58 = CostumeDescriptions::find_bodypart(this,2,param_1[0x60]);
  local_54 = CostumeDescriptions::find_bodypart(this,3,param_1[0x61]);
  iVar3 = 0;
  if (0 < param_1[0x6a]) {
    puVar12 = (ulong *)(param_1 + 0x62);
    do {
      paVar4 = CostumeDescriptions::find_accessory(this,*puVar12);
      *(accessory **)(local_30 + iVar3 * 4) = paVar4;
      iVar3 = iVar3 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar3 < param_1[0x6a]);
  }
  if (*(char *)((int)param_1 + 0x3ad) == '\0') {
    FUN_00443b60(&local_60);
  }
  else {
    if (DAT_00668948 == 0) {
      FUN_00443b60(&local_60);
    }
    param_1[0xc] = DAT_00668948;
    piVar14 = &DAT_0066894c;
    piVar5 = param_1 + 0x11;
    piVar11 = param_1 + 0x51;
    iVar3 = (int)&DAT_00668948 - (int)(param_1 + 0xc);
    do {
      piVar11[-0x44] = *piVar14;
      *piVar11 = *(int *)((int)piVar11 + iVar3);
      local_70 = (undefined4 *)0x10;
      do {
        *piVar5 = *(int *)(iVar3 + (int)piVar5);
        piVar5 = piVar5 + 1;
        local_70 = (undefined4 *)((int)local_70 + -1);
      } while (local_70 != (undefined4 *)0x0);
      piVar14 = piVar14 + 1;
      piVar11 = piVar11 + 1;
    } while ((int)piVar14 < 0x66895c);
    local_70 = (undefined4 *)0x0;
  }
  piVar5 = param_1 + 0xc;
  local_74 = (char *)0xffffffff;
  (**(code **)(**(int **)Deform_exref + 0x48))(*(int **)Deform_exref,*piVar5,&local_74);
  if (unaff_EBP != -1) {
    (**(code **)(**(int **)Deform_exref + 0x4c))(*(int **)Deform_exref,*piVar5,puStack_8 + 0x70);
    (**(code **)(*param_1 + 0xc))(*(undefined4 *)(iStack_14 + 0x74));
    (**(code **)(**(int **)Deform_exref + 0x50))(*(int **)Deform_exref,*piVar5,iStack_14 + 0x7c);
  }
  HardpointSummary::analyze_instance((HardpointSummary *)(param_1 + 0xc1),unaff_EBP);
  RefreshLoadingProgress();
  local_70 = (undefined4 *)0x0;
  if (0 < param_1[0x6a]) {
    this_00 = (HardpointSummary *)(param_1 + 0x7c);
    piVar5 = param_1 + 0x74;
    do {
      iVar3 = aiStack_3c[(int)local_70];
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
        auStack_4c[0] = puStack_8._0_1_;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        piVar11 = (int *)**(int **)(iVar3 + 0x38);
        uStack_10 = 1;
        if (piVar11 != *(int **)(iVar3 + 0x38)) {
          do {
            pcStack_78 = (code *)piVar11[3];
            if (pcStack_78 == (code *)0x0) {
              pcStack_78 = _C_exref;
            }
            CacheString::clear((CacheString *)&local_74);
            local_74 = StringAlloc((char *)pcStack_78,true);
            CacheString::clear((CacheString *)&pcStack_6c);
            pcStack_6c = local_74;
            uStack_68 = 0xffffffff;
            FUN_0040d830(uStack_44,1,&pcStack_6c);
            piVar11 = (int *)*piVar11;
          } while (piVar11 != (int *)*(int *)(iVar3 + 0x38));
        }
        pcVar6 = *(code **)(iVar3 + 8);
        if (*(code **)(iVar3 + 8) == (code *)0x0) {
          pcVar6 = _C_exref;
        }
        lVar7 = FUN_0041c540(pcVar6,*(undefined4 *)Data_exref,0,0,auStack_4c,param_1 + 8,0);
        *piVar5 = lVar7;
        HardpointSummary::analyze_instance(this_00,lVar7);
        if (*piVar5 != -1) {
          pbVar13 = (bodypart *)_C_exref;
          if (*(bodypart **)(iVar3 + 0x28) != (bodypart *)0x0) {
            pbVar13 = *(bodypart **)(iVar3 + 0x28);
          }
          pbVar15 = (bodypart *)_C_exref;
          if (*(bodypart **)(iVar3 + 0x18) != (bodypart *)0x0) {
            pbVar15 = *(bodypart **)(iVar3 + 0x18);
          }
          iVar3 = HardpointSummary::find_name((HardpointSummary *)(param_1 + 0xc1),(char *)pbVar13);
          iVar8 = HardpointSummary::find_name(this_00,(char *)pbVar15);
          if ((iVar3 != -1) && (iVar8 != -1)) {
            local_5c = pbVar15;
            local_58 = (bodypart *)DACOM_CRC::GetCRC32((char *)pbVar15);
            local_54 = pbVar13;
            uStack_50 = DACOM_CRC::GetCRC32((char *)pbVar13);
            iVar2 = **(int **)Hardpoint_exref;
            ppbVar17 = &local_5c;
            lVar7 = HardpointSummary::get_instance(this_00,iVar8);
            ppbVar16 = &local_54;
            lVar9 = HardpointSummary::get_instance((HardpointSummary *)(param_1 + 0xc1),iVar3);
            (**(code **)(iVar2 + 0x18))
                      (*(undefined4 *)Hardpoint_exref,lVar9,ppbVar16,lVar7,ppbVar17);
          }
        }
        uStack_10 = 0xffffffff;
        FUN_005b7e1d(uStack_48);
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
      }
      local_70 = (undefined4 *)((int)local_70 + 1);
      piVar5 = piVar5 + 1;
      this_00 = this_00 + 0x20;
    } while ((int)local_70 < param_1[0x6a]);
  }
  param_1[0xbc] = param_1[0x6a];
  RefreshLoadingProgress();
  puVar10 = operator_new(0x28);
  uStack_10 = 2;
  local_70 = puVar10;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    FUN_00555db0();
    *puVar10 = &PTR_FUN_005cb9ec;
    puVar10[8] = 0;
    *(undefined1 *)(puVar10 + 9) = 0;
  }
  param_1[0xbd] = (int)puVar10;
  puVar10[8] = param_1;
  iVar3 = param_1[0xbd];
  *(undefined1 *)(iVar3 + 0xc) = 1;
  *(int **)(iVar3 + 4) = param_1;
  *(undefined4 *)(iVar3 + 8) = 0;
  uStack_10 = 0xffffffff;
  if ((param_1[0x6c] == -1) && (param_1[0xc0] == 0)) {
    *(undefined1 *)(param_1[0xbd] + 0xc) = 0;
  }
  else {
    *(undefined1 *)(param_1[0xbd] + 0xc) = 1;
  }
  ppuVar1 = (ushort **)(param_1 + 0xbf);
  *ppuVar1 = (ushort *)0x0;
  if (param_1[0x58] == 0) {
    malloc_wstrcpy(ppuVar1,(ushort *)param_1[0x5a]);
  }
  else {
    FUN_0041c770(ppuVar1,param_1[0x58]);
  }
  _Str1 = (char *)param_1[0x6b];
  *(undefined1 *)(param_1 + 1) = 1;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,puStack_8[0x6c]);
  if (((_Str1 == (char *)0x0) || ((char *)param_1[0xd9] == (char *)0x0)) ||
     (iVar3 = stricmp(_Str1,(char *)param_1[0xd9]), iVar3 != 0)) {
    if (param_1[0xd8] != 0) {
      FUN_004568d0(param_1[0xd8]);
      param_1[0xd8] = 0;
      *(undefined1 *)(param_1 + 0xda) = 0;
      malloc_strfree((char **)(param_1 + 0xd9));
    }
    malloc_strcpy((char **)(param_1 + 0xd9),_Str1);
    iVar3 = FUN_00445340(_Str1,puStack_8);
    param_1[0xd8] = iVar3;
    if ((param_1[0xdb] == 0) && (iVar3 != 0)) {
      FUN_00454f80();
      *(undefined1 *)(param_1 + 0xda) = 1;
    }
  }
  if (param_1[0xd8] != 0) {
    FUN_00456300(0x3f800000);
  }
  iVar3 = rand();
  puStack_8 = (undefined1 *)((float)iVar3 * _DAT_005caeec);
  if ((param_1[0xd8] != 0) && ((float)_DAT_005c8ba8 < (float)puStack_8)) {
    FUN_00456300(puStack_8);
  }
  param_1[6] = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  ExceptionList = pvStack_18;
  return;
}

