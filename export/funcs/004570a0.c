
void __thiscall FUN_004570a0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 unaff_retaddr;
  char local_100 [256];
  
  if (*(char *)(param_1 + 0x74) != '\x01') {
    return;
  }
  pcVar3 = *(char **)(param_1 + 0x6c);
  if (pcVar3 == (char *)0x0) {
    return;
  }
  if (*pcVar3 == '\0') {
    return;
  }
  iVar2 = stricmp(pcVar3,PTR_s__BGCS_Base_Name_00611024);
  if ((((iVar2 == 0) ||
       (iVar2 = stricmp(*(char **)(param_1 + 0x6c),PTR_s__BGCS_Base_Run_By_00611028), iVar2 == 0))
      || (iVar2 = stricmp(*(char **)(param_1 + 0x6c),PTR_s__BGCS_My_Faction_ML_00611014), iVar2 == 0
         )) || (iVar2 = stricmp(*(char **)(param_1 + 0x6c),PTR_s__BGCS_My_Faction_FM_00611018),
               iVar2 == 0)) {
    pcVar3 = (char *)FUN_00445720(*(undefined4 *)(param_1 + 0x6c));
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  iVar2 = stricmp(*(char **)(param_1 + 0x6c),PTR_s__BGCS_Faction_Rebuff_ML_0061101c);
  if ((iVar2 == 0) ||
     (iVar2 = stricmp(*(char **)(param_1 + 0x6c),PTR_s__BGCS_Faction_Rebuff_FM_00611020), iVar2 == 0
     )) {
    pcVar3 = (char *)FUN_00445720(*(undefined4 *)(param_1 + 0x6c));
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  uVar7 = 0xffffffff;
  pcVar8 = "$BGCS_Trent_";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  iVar2 = _strnicmp(*(char **)(param_1 + 0x6c),"$BGCS_Trent_",~uVar7 - 1);
  if (iVar2 == 0) {
    pcVar3 = *(char **)(param_1 + 0x6c);
    iVar2 = -(int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)(local_100 + iVar2)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = strrchr(local_100,0x5f);
    iVar2 = atoi(pcVar3 + 1);
    iVar4 = rand();
    _ltoa((int)(iVar4 * iVar2 + (iVar4 * iVar2 >> 0x1f & 0x7fffU)) >> 0xf,pcVar3,10);
    pcVar3 = local_100 + 2;
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  uVar7 = CreateID(pcVar3);
  piVar5 = (int *)FUN_00430ab0(param_2);
  if (piVar5 == (int *)0x0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Voice profile %u does not exist\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\ScriptSound.cpp",0xe8,param_2);
    return;
  }
  iVar2 = (**(code **)(*piVar5 + 0x14))(uVar7);
  if (iVar2 == 0) {
    uVar6 = (**(code **)(*piVar5 + 0x10))(unaff_retaddr,pcVar3);
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Voice profile %s (%x) does not support message %s",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\ScriptSound.cpp",0xe3,uVar6);
    return;
  }
  *(int *)(param_1 + 0x7c) = iVar2;
  return;
}

