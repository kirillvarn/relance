
uint FUN_00577490(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  
  if ((DAT_0067c3b0 == '\0') &&
     (iVar6 = FUN_00576bb0(s_interface_KeyMap_ini_00614cd0,1), iVar6 != 0)) {
    DAT_0067c3b0 = '\x01';
    if ((char)DAT_0067c2a0 == '\0') {
      GetUserDataPath((char *)&DAT_0067c2a0);
      uVar4 = s___UserKeyMap_ini_005e426f._9_4_;
      uVar3 = s___UserKeyMap_ini_005e426f._5_4_;
      iVar6 = -1;
      pcVar9 = (char *)&DAT_0067c2a0;
      do {
        pcVar10 = pcVar9;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      *(undefined4 *)(pcVar10 + -1) = s___UserKeyMap_ini_005e426f._1_4_;
      uVar5 = s___UserKeyMap_ini_005e426f._13_4_;
      *(undefined4 *)(pcVar10 + 3) = uVar3;
      *(undefined4 *)(pcVar10 + 7) = uVar4;
      *(undefined4 *)(pcVar10 + 0xb) = uVar5;
    }
    FUN_00576f40(&DAT_0067c2a0);
  }
  iVar6 = FUN_00576b60(param_1);
  if (iVar6 == 0) {
    uVar8 = MessageBoxA((HWND)0x0,"Invalid accelerator","Error:",0);
    return uVar8 & 0xffffff00;
  }
  piVar2 = (int *)*DAT_0067c21c;
  for (piVar7 = piVar2; piVar7 != DAT_0067c21c; piVar7 = (int *)*piVar7) {
    if (piVar7[2] == iVar6) goto LAB_0057756a;
  }
  piVar11 = (int *)piVar2[1];
  piVar7 = operator_new(0xc);
  *piVar7 = (int)piVar2;
  if (piVar11 == (int *)0x0) {
    piVar11 = piVar7;
  }
  piVar7[1] = (int)piVar11;
  piVar2[1] = (int)piVar7;
  *(int **)piVar7[1] = piVar7;
  piVar7 = piVar7 + 2;
  if (piVar7 != (int *)0x0) {
    *piVar7 = iVar6;
  }
  DAT_0067c220 = DAT_0067c220 + 1;
LAB_0057756a:
  return CONCAT31((int3)((uint)piVar7 >> 8),1);
}

