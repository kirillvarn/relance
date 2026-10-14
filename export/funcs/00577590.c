
void FUN_00577590(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (DAT_0067c220 != 0) {
    if (DAT_0067c3b0 == '\0') {
      iVar5 = FUN_00576bb0(s_interface_KeyMap_ini_00614cd0,1);
      if (iVar5 != 0) {
        DAT_0067c3b0 = '\x01';
        if ((char)DAT_0067c2a0 == '\0') {
          GetUserDataPath((char *)&DAT_0067c2a0);
          uVar3 = s___UserKeyMap_ini_005e426f._9_4_;
          uVar2 = s___UserKeyMap_ini_005e426f._5_4_;
          iVar5 = -1;
          pcVar7 = (char *)&DAT_0067c2a0;
          do {
            pcVar8 = pcVar7;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar8 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar1 != '\0');
          *(undefined4 *)(pcVar8 + -1) = s___UserKeyMap_ini_005e426f._1_4_;
          uVar4 = s___UserKeyMap_ini_005e426f._13_4_;
          *(undefined4 *)(pcVar8 + 3) = uVar2;
          *(undefined4 *)(pcVar8 + 7) = uVar3;
          *(undefined4 *)(pcVar8 + 0xb) = uVar4;
        }
        FUN_00576f40(&DAT_0067c2a0);
      }
    }
    iVar5 = FUN_00576b60(param_1);
    if (iVar5 == 0) {
      MessageBoxA((HWND)0x0,"Invalid accelerator","Error:",0);
    }
    else {
      piVar6 = (int *)*DAT_0067c21c;
      if (piVar6 != DAT_0067c21c) {
        do {
          if (piVar6[2] == iVar5) {
            *(int *)piVar6[1] = *piVar6;
            *(int *)(*piVar6 + 4) = piVar6[1];
            FUN_005b7e1d(piVar6);
            DAT_0067c220 = DAT_0067c220 + -1;
            return;
          }
          piVar6 = (int *)*piVar6;
        } while (piVar6 != DAT_0067c21c);
        return;
      }
    }
  }
  return;
}

