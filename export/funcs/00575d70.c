
undefined4 * FUN_00575d70(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((char)DAT_0067c2a0 == '\0') {
    GetUserDataPath((char *)&DAT_0067c2a0);
    uVar3 = s___UserKeyMap_ini_005e426f._9_4_;
    uVar2 = s___UserKeyMap_ini_005e426f._5_4_;
    iVar5 = -1;
    pcVar6 = (char *)&DAT_0067c2a0;
    do {
      pcVar7 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    *(undefined4 *)(pcVar7 + -1) = s___UserKeyMap_ini_005e426f._1_4_;
    uVar4 = s___UserKeyMap_ini_005e426f._13_4_;
    *(undefined4 *)(pcVar7 + 3) = uVar2;
    *(undefined4 *)(pcVar7 + 7) = uVar3;
    *(undefined4 *)(pcVar7 + 0xb) = uVar4;
  }
  return &DAT_0067c2a0;
}

