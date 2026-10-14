
bool __thiscall FUN_0059b220(int *param_1,undefined4 *param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  accessory *paVar5;
  code *pcVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piStack_74c;
  undefined1 uStack_745;
  int *local_744;
  CostumeDescriptions *pCStack_740;
  ulong *puStack_73c;
  long lStack_738;
  long lStack_734;
  uint uStack_730;
  char *apcStack_72c [2];
  undefined1 auStack_724 [8];
  undefined1 auStack_71c [4];
  undefined1 auStack_718 [8];
  undefined4 uStack_710;
  undefined1 auStack_70c [128];
  undefined4 uStack_68c;
  undefined1 auStack_688 [64];
  undefined4 uStack_648;
  char acStack_644 [64];
  undefined1 auStack_604 [16];
  undefined4 auStack_5f4 [8];
  int iStack_5d4;
  undefined1 *puStack_5d0;
  undefined1 local_56c [192];
  undefined1 auStack_4ac [1184];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c4cfb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_744 = param_1;
  FUN_004c9a30();
  iVar9 = 4;
  do {
    FUN_00420f70();
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (*param_1 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x18))(*(int **)Deform_exref,*param_1);
    *param_1 = 0;
  }
  FUN_00405860(local_56c,0x18,8,&LAB_0059b690);
  FUN_00405860(auStack_4ac,0x94,8,&LAB_0059b890);
  puStack_5d0 = local_56c;
  iStack_5d4 = 0;
  FUN_0059b6b0(0,param_2[1]);
  FUN_0059b6b0(1,*param_2);
  FUN_0059b6b0(2,param_2[2]);
  FUN_0059b6b0(3,param_2[3]);
  piStack_74c = (int *)0x0;
  if (iStack_5d4 != 0) {
    iVar9 = 0;
    if (0 < iStack_5d4) {
      iVar10 = 0;
      do {
        uVar3 = FUN_0041aa50(*(undefined4 *)(*(int *)(puStack_5d0 + iVar10 + 4) + 4),1,0xffffffff);
        auStack_5f4[iVar9] = uVar3;
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 0x18;
      } while (iVar9 < iStack_5d4);
    }
    iVar9 = (**(code **)(**(int **)Deform_exref + 0x14))
                      (*(int **)Deform_exref,&piStack_74c,&iStack_5d4,0,0,0);
    if (iVar9 != 0) {
      puVar4 = (undefined4 *)FUN_00411c50(0x10000,2);
      (**(code **)FDUMP_exref)
                (*puVar4,
                 "%s(%d) : *** WARNING: BodyDesc - failed to create deformable with %d parts\n",
                 "cmn\\EngineCharacter.h",0xd5,iStack_5d4);
      piStack_74c = (int *)0x0;
    }
    iVar9 = 0;
    if (0 < iStack_5d4) {
      puVar4 = auStack_5f4;
      do {
        FUN_0041b030(puVar4);
        iVar9 = iVar9 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar9 < iStack_5d4);
    }
  }
  piVar7 = local_744;
  *local_744 = (int)piStack_74c;
  pCStack_740 = GetCostumeDescriptions();
  uStack_730 = 0;
  if (0 < (int)param_2[0xc]) {
    piStack_74c = piVar7 + 1;
    puStack_73c = param_2 + 4;
    do {
      uVar8 = uStack_730;
      if (4 < uStack_730) break;
      paVar5 = CostumeDescriptions::find_accessory(pCStack_740,*puStack_73c);
      if (paVar5 != (accessory *)0x0) {
        uStack_710 = 0;
        auStack_70c[0] = 0;
        uStack_68c = 0;
        auStack_688[0] = 0;
        uStack_648 = 0;
        acStack_644[0] = '\0';
        FUN_005a6900(&uStack_745);
        uStack_4 = 0;
        pcVar6 = *(code **)(paVar5 + 8);
        if (*(code **)(paVar5 + 8) == (code *)0x0) {
          pcVar6 = _C_exref;
        }
        FUN_004cec20(pcVar6);
        pcVar6 = *(code **)(paVar5 + 0x28);
        if (*(code **)(paVar5 + 0x28) == (code *)0x0) {
          pcVar6 = _C_exref;
        }
        FUN_004cebc0(pcVar6);
        pcVar6 = *(code **)(paVar5 + 0x18);
        if (*(code **)(paVar5 + 0x18) == (code *)0x0) {
          pcVar6 = _C_exref;
        }
        FUN_004cebc0(pcVar6);
        lStack_734 = -1;
        if (*local_744 != 0) {
          (**(code **)(**(int **)Deform_exref + 0x48))(*(int **)Deform_exref,*local_744,&lStack_734)
          ;
        }
        lVar1 = lStack_734;
        iVar9 = FUN_0041c540(auStack_70c,*(undefined4 *)Data_exref,0,0,auStack_604,0,0);
        lStack_738 = -1;
        bVar2 = FindHardpoint(lVar1,acStack_644,&lStack_738);
        if (bVar2) {
          FUN_0059b670(auStack_688);
          FUN_0059b670(acStack_644);
          iVar10 = (**(code **)(**(int **)Hardpoint_exref + 0x18))
                             (*(int **)Hardpoint_exref,lStack_738,auStack_724,iVar9,auStack_718);
          if (iVar10 != 0) goto LAB_0059b568;
        }
        else {
LAB_0059b568:
          puVar4 = (undefined4 *)FUN_00411c50(0x10000,2);
          (**(code **)FDUMP_exref)
                    (*puVar4,
                     "%s(%d) : *** WARNING: Accessory - connection failed! (%s)  acc_hp=\'%s\'  obj_hp=\'%s\'\n"
                     ,"cmn\\EngineCharacter.h",0x4e,auStack_70c,auStack_688,acStack_644);
        }
        piStack_74c[1] = iVar9;
        if (*(int *)(paVar5 + 0x3c) != 0) {
          piVar7 = (int *)FUN_0053e430(auStack_71c);
          pcVar6 = _C_exref;
          if (*(code **)(*piVar7 + 0xc) != (code *)0x0) {
            pcVar6 = *(code **)(*piVar7 + 0xc);
          }
          CacheString::clear((CacheString *)apcStack_72c);
          apcStack_72c[0] = StringAlloc((char *)pcVar6,true);
          FUN_00420f30(apcStack_72c[0],0);
        }
        uStack_4 = 0xffffffff;
        FUN_004de730();
        uVar8 = uStack_730;
      }
      uStack_730 = uVar8 + 1;
      puStack_73c = puStack_73c + 1;
      piStack_74c = piStack_74c + 4;
    } while ((int)uStack_730 < (int)param_2[0xc]);
  }
  ExceptionList = pvStack_c;
  return *local_744 != 0;
}

