
void __thiscall FUN_004464f0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  Ship *pSVar4;
  undefined4 uVar5;
  Solar *pSVar6;
  Asteroid *pAVar7;
  undefined4 *puVar8;
  ulong uVar9;
  PetalInterfaceDatabase *this;
  petal_record *ppVar10;
  code *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 local_30 [9];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x38),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x10),0,*(uint *)npos_exref);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x20);
  pcVar11 = *(code **)(iVar1 + 4);
  if (*(code **)(iVar1 + 4) == (code *)0x0) {
    pcVar11 = _C_exref;
  }
  iVar12 = *(int *)(iVar1 + 0x20);
  if (((iVar12 == 6) || (iVar12 == 5)) || (iVar12 == 0)) {
    uVar9 = FUN_00446280(pcVar11);
    iVar12 = *(int *)(iVar1 + 0x20);
    this = PetalDB_get();
    ppVar10 = PetalInterfaceDatabase::find_record(this,iVar12,uVar9);
    FUN_00446160(ppVar10,pcVar11);
    goto LAB_00446744;
  }
  if (iVar12 == 1) {
    uVar3 = FUN_00446280(pcVar11);
    pSVar4 = Archetype::GetShip(uVar3);
    if (pSVar4 != (Ship *)0x0) {
      iVar12 = *(int *)(pSVar4 + 4);
      param_2 = -1;
      *(bool *)(param_1 + 0x13) = **(char **)(iVar12 + 0x10) != '\0';
      uVar5 = FUN_0041c540(*(undefined4 *)(pSVar4 + 0xc),*(undefined4 *)Data_exref,param_1 + 0x4c,0,
                           iVar12 + 0x20,param_1 + 0x20,&param_2);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      FUN_005595a0(iVar12,param_2);
      goto LAB_00446744;
    }
LAB_004465b4:
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: No valid archetype for prop %s\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\ObjectProp.cpp",0x69,pcVar11);
  }
  else {
    if (iVar12 == 2) {
      uVar3 = FUN_00446280(pcVar11);
      pSVar6 = Archetype::GetSolar(uVar3);
      if (pSVar6 == (Solar *)0x0) {
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : *** ERROR: No valid archetype for prop %s\n",
                   "E:\\FL\\Scratch\\Source\\Client\\Gf\\ObjectProp.cpp",0x69,pcVar11);
        goto LAB_00446744;
      }
    }
    else {
      if (iVar12 == 3) {
        uVar3 = FUN_00446280(pcVar11);
        pAVar7 = Archetype::GetAsteroid(uVar3);
        if (pAVar7 != (Asteroid *)0x0) {
          iVar12 = *(int *)(pAVar7 + 4);
          param_2 = -1;
          *(bool *)(param_1 + 0x13) = **(char **)(iVar12 + 0x10) != '\0';
          uVar5 = FUN_0041c540(*(undefined4 *)(pAVar7 + 0xc),*(undefined4 *)Data_exref,
                               param_1 + 0x4c,0,iVar12 + 0x20,param_1 + 0x20,&param_2);
          *(undefined4 *)(param_1 + 0x30) = uVar5;
          FUN_005595a0(iVar12,param_2);
          goto LAB_00446744;
        }
        goto LAB_004465b4;
      }
      if (iVar12 != 4) goto LAB_00446744;
      uVar3 = FUN_00446280(pcVar11);
      pSVar6 = (Solar *)Archetype::GetEquipment(uVar3);
      if (pSVar6 == (Solar *)0x0) {
        puVar8 = (undefined4 *)FUN_00411c50(0x10000,1);
        (**(code **)FDUMP_exref)
                  (*puVar8,"%s(%d) : *** ERROR: No valid archetype for prop %s\n",
                   "E:\\FL\\Scratch\\Source\\Client\\Gf\\ObjectProp.cpp",0x69,pcVar11);
        goto LAB_00446744;
      }
    }
    iVar12 = *(int *)(pSVar6 + 4);
    param_2 = -1;
    *(bool *)(param_1 + 0x13) = **(char **)(iVar12 + 0x10) != '\0';
    uVar5 = FUN_0041c540(*(undefined4 *)(pSVar6 + 0xc),*(undefined4 *)Data_exref,param_1 + 0x4c,0,
                         iVar12 + 0x20,param_1 + 0x20,&param_2);
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    FUN_005595a0(iVar12,param_2);
  }
LAB_00446744:
  if ((*(int *)(iVar1 + 0x20) == 1) && (*(int *)(iVar1 + 0x5c) != 0)) {
    bVar2 = RtcSlider::is_enabled("ship_loadouts");
    if (bVar2) {
      pcVar11 = *(code **)(iVar1 + 0x58);
      if (*(code **)(iVar1 + 0x58) == (code *)0x0) {
        pcVar11 = _C_exref;
      }
      FUN_004467e0(pcVar11);
    }
  }
  local_8 = *(undefined4 *)(iVar1 + 0x28);
  puVar8 = (undefined4 *)(iVar1 + 0x30);
  puVar13 = local_30;
  for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar13 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar13 + 1;
  }
  local_c = *(undefined4 *)(iVar1 + 0x24);
  local_4 = *(undefined4 *)(iVar1 + 0x2c);
  (**(code **)(**(int **)Engine_exref + 0x9c))
            (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x30),local_30);
  (**(code **)(**(int **)Engine_exref + 0x6c))
            (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x30),0,0);
  return;
}

