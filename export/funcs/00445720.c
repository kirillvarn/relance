
undefined1 * __thiscall FUN_00445720(int param_1,char *param_2)

{
  char cVar1;
  CostumeDescriptions *this;
  int iVar2;
  IBase *pIVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  char *pcVar11;
  char *pcVar12;
  Costume *pCVar13;
  undefined4 local_14;
  char local_10 [16];
  
  pCVar13 = (Costume *)(param_1 + 0x178);
  this = GetCostumeDescriptions();
  iVar2 = CostumeDescriptions::get_costume_gender(this,pCVar13);
  if (iVar2 == 1) {
    iVar2 = 0;
    do {
      pcVar4 = &DAT_005cbb64 + iVar2;
      (&DAT_00668848)[iVar2] = *pcVar4;
      iVar2 = iVar2 + 1;
    } while (*pcVar4 != '\0');
  }
  else if (iVar2 == 2) {
    iVar2 = 0;
    do {
      pcVar4 = &DAT_005cbb5c + iVar2;
      (&DAT_00668848)[iVar2] = *pcVar4;
      iVar2 = iVar2 + 1;
    } while (*pcVar4 != '\0');
  }
  else {
    iVar2 = 0;
    do {
      pcVar4 = &DAT_005c865c + iVar2;
      (&DAT_00668848)[iVar2] = *pcVar4;
      iVar2 = iVar2 + 1;
    } while (*pcVar4 != '\0');
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\gf\\ObjectDeformable.cpp",0x51f,
               "Invalid gender for character, cannot find GCS voice profile message name\n");
  }
  pcVar4 = param_2;
  iVar2 = stricmp(param_2,PTR_s__BGCS_Base_Name_00611024);
  cVar10 = DAT_005cbb0e;
  uVar7 = DAT_005cbb0c;
  if (iVar2 == 0) {
    iVar2 = -1;
    pcVar4 = &DAT_00668848;
    do {
      pcVar5 = pcVar4;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    *(undefined4 *)(pcVar5 + -1) = DAT_005cbb08;
    *(undefined2 *)(pcVar5 + 3) = uVar7;
    pcVar5[5] = cVar10;
    pIVar3 = Universe::get_base(*(uint *)(*(int *)(param_1 + 8) + 0x34));
    pcVar4 = (char *)(**(code **)(*(int *)pIVar3 + 4))();
    uVar8 = 0xffffffff;
    do {
      pcVar5 = pcVar4;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar5 = pcVar4 + 1;
      cVar10 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar10 != '\0');
    uVar8 = ~uVar8;
    iVar2 = -1;
    pcVar4 = &DAT_00668848;
    do {
      pcVar12 = pcVar4;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar12 = pcVar4 + 1;
      cVar10 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar10 != '\0');
    pcVar4 = pcVar5 + -uVar8;
    pcVar5 = pcVar12 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar4 = &DAT_00668848;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar10 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar10 != '\0');
    uVar9 = 0xffffffff;
    pcVar4 = "_base";
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar10 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar10 != '\0');
    if ((int)(~uVar9 - 1) < (int)(~uVar8 - 1)) {
      iVar2 = stricmp(&DAT_00668848 + ((~uVar8 - 1) - (~uVar9 - 1)),"_base");
      if (iVar2 == 0) {
        (&DAT_00668848)[(~uVar8 - 1) - (~uVar9 - 1)] = '\0';
        return &DAT_00668848;
      }
    }
  }
  else {
    iVar2 = stricmp(pcVar4,PTR_s__BGCS_Base_Run_By_00611028);
    if (iVar2 == 0) {
      pIVar3 = Universe::get_base(*(uint *)(*(int *)(param_1 + 8) + 0x34));
      pcVar5 = (char *)(**(code **)(*(int *)pIVar3 + 0x14))();
      uVar8 = 0xffffffff;
      pcVar4 = pcVar5;
      do {
        pcVar12 = pcVar4;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar4 + 1;
        cVar10 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar10 != '\0');
      uVar8 = ~uVar8;
      iVar2 = -1;
      pcVar4 = &DAT_00668848;
      do {
        pcVar11 = pcVar4;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar11 = pcVar4 + 1;
        cVar10 = *pcVar4;
        pcVar4 = pcVar11;
      } while (cVar10 != '\0');
      pcVar4 = pcVar12 + -uVar8;
      pcVar12 = pcVar11 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar12 = pcVar12 + 1;
      }
      if (*pcVar5 == '\0') {
        pIVar3 = Universe::get_base(*(uint *)(*(int *)(param_1 + 8) + 0x34));
        uVar6 = (**(code **)(*(int *)pIVar3 + 4))();
        (**(code **)FDUMP_exref)
                  (0x100001,
                   "%s(%d) : *** ERROR: No BGCS_base_run_by specified for base %s, cannot resolve voice profile message %s\n"
                   ,"E:\\FL\\Scratch\\Source\\Client\\gf\\ObjectDeformable.cpp",0x54a,uVar6,param_2)
        ;
        return &DAT_00668848;
      }
    }
    else {
      iVar2 = stricmp(pcVar4,PTR_s__BGCS_My_Faction_ML_00611014);
      if ((iVar2 == 0) || (iVar2 = stricmp(pcVar4,PTR_s__BGCS_My_Faction_FM_00611018), iVar2 == 0))
      {
        iVar2 = -1;
        pcVar4 = &DAT_00668848;
        do {
          uVar6 = DAT_005cba3c;
          pcVar5 = pcVar4;
          cVar10 = DAT_005cba42;
          uVar7 = DAT_005cba40;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = *pcVar4;
          pcVar5 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
      }
      else {
        iVar2 = stricmp(pcVar4,PTR_s__BGCS_Faction_Rebuff_ML_0061101c);
        if ((iVar2 != 0) &&
           (iVar2 = stricmp(pcVar4,PTR_s__BGCS_Faction_Rebuff_FM_00611020), iVar2 != 0)) {
          (**(code **)FDUMP_exref)
                    (0x100001,"%s(%d) : *** ERROR: Unknown GCS generic voice profile message %s\n",
                     "E:\\FL\\Scratch\\Source\\Client\\gf\\ObjectDeformable.cpp",0x571,pcVar4);
          return &DAT_00668848;
        }
        iVar2 = -1;
        pcVar4 = &DAT_00668848;
        do {
          uVar6 = DAT_005cba44;
          pcVar5 = pcVar4;
          cVar10 = DAT_005cba4a;
          uVar7 = DAT_005cba48;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar5 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar5;
        } while (cVar1 != '\0');
      }
      *(undefined4 *)(pcVar5 + -1) = uVar6;
      *(undefined2 *)(pcVar5 + 3) = uVar7;
      pcVar5[5] = cVar10;
      param_2 = *(char **)(param_1 + 0x164);
      local_10[0] = '\0';
      local_14 = 0;
      Reputation::get_nickname((TString<16> *)&local_14,(uint *)&param_2);
      uVar8 = 0xffffffff;
      pcVar4 = local_10;
      do {
        pcVar5 = pcVar4;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar5 = pcVar4 + 1;
        cVar10 = *pcVar4;
        pcVar4 = pcVar5;
      } while (cVar10 != '\0');
      uVar8 = ~uVar8;
      iVar2 = -1;
      pcVar4 = &DAT_00668848;
      do {
        pcVar12 = pcVar4;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar4 + 1;
        cVar10 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar10 != '\0');
      pcVar4 = pcVar5 + -uVar8;
      pcVar5 = pcVar12 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
    }
  }
  return &DAT_00668848;
}

