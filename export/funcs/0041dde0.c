
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0041dde0(char *param_1,char param_2)

{
  char cVar1;
  undefined4 in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  
  pcVar5 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),param_2);
  if (param_2 != '\0') {
    if (param_1 == (char *)0x0) {
      _DAT_00616794 = param_1;
      DAT_00616798._0_1_ = 0;
    }
    else {
      uVar2 = 0xffffffff;
      pcVar5 = param_1;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = (char *)(~uVar2 - 1);
      if ((char *)0x1f < pcVar5) {
        pcVar5 = (char *)0x1f;
      }
      pcVar6 = param_1;
      pcVar7 = (char *)&DAT_00616798;
      for (uVar2 = (uint)pcVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar2 = (uint)pcVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcVar5[0x616798] = '\0';
      _DAT_00616794 = pcVar5;
    }
  }
  uVar2 = CONCAT31((int3)((uint)pcVar5 >> 8),DAT_00616855);
  if (DAT_00616855 != '\0') {
    uVar2 = 0;
    if ((DAT_00616858 != 0) && (uVar2 = stricmp((char *)(DAT_00616858 + 4),param_1), uVar2 == 0)) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      iVar3 = stricmp(param_1,"DEFAULT");
      pcVar5 = param_1;
      if (iVar3 == 0) {
        pcVar5 = (char *)&DAT_00616798;
      }
      uVar8 = 0;
      uVar2 = DAT_00616740;
      if (DAT_00616740 != 0) {
        do {
          iVar3 = (&DAT_00616744)[uVar8];
          iVar4 = stricmp((char *)(iVar3 + 4),pcVar5);
          if (iVar4 == 0) {
            uVar2 = 0;
            if (iVar3 != 0) goto LAB_0041defc;
            goto LAB_0041debe;
          }
          uVar8 = uVar8 + 1;
          uVar2 = DAT_00616740;
        } while (uVar8 < DAT_00616740);
      }
    }
    iVar3 = 0;
LAB_0041debe:
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      iVar4 = stricmp(param_1,"DEFAULT");
      uVar2 = 0;
      if (iVar4 != 0) {
        uVar2 = (**(code **)FDUMP_exref)
                          (0x100002,"%s(%d) : *** WARNING: missing cursor (%s)\n",
                           "E:\\FL\\Scratch\\Source\\Client\\cmn\\mouse.cpp",0x4ad,param_1);
      }
    }
LAB_0041defc:
    if (((iVar3 != DAT_00616858) && (DAT_00616858 = iVar3, iVar3 != 0)) &&
       (*(uint *)(iVar3 + 0x60) != 0)) {
      uVar2 = 0;
      *(int *)(iVar3 + 100) = (int)(0 % (ulonglong)*(uint *)(iVar3 + 0x60));
    }
  }
  return uVar2;
}

