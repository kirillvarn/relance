
int * __thiscall FUN_00549e70(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 local_28;
  char local_20 [32];
  
  piVar2 = (int *)0x0;
  local_28 = 0;
  local_20[0] = '\0';
  if (param_2 == 0) {
    local_20[0] = '\0';
  }
  else {
    FUN_00417c50(local_20,0x20,param_2);
  }
  iVar1 = 7;
  bVar5 = true;
  pcVar4 = local_20;
  pcVar3 = "player";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar5);
  DAT_00614028 = 1;
  if (bVar5) {
    if (*(char *)(DAT_00674aa0 + 0x5ba) == '\x01') {
      FUN_005763b0(0x39,0);
    }
    if (*(char *)(DAT_00674aa0 + 0x5b9) == '\x01') {
      FUN_005763b0(0xbf,0);
    }
    if (*(int *)(param_1 + 0xba4) == 0) {
LAB_00549f18:
      piVar2 = (int *)(param_1 + 0xc);
    }
    else if (*(int *)(param_1 + 0xba4) == 1) {
      piVar2 = (int *)(param_1 + 0x1b0);
    }
  }
  else {
    iVar1 = 0xd;
    bVar5 = true;
    pcVar4 = local_20;
    pcVar3 = "first_person";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar4 == *pcVar3;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar5);
    if (bVar5) {
      if (*(char *)(DAT_00674aa0 + 0x5ba) == '\x01') {
        FUN_005763b0(0x39,0);
      }
      if (*(char *)(DAT_00674aa0 + 0x5b9) == '\x01') {
        FUN_005763b0(0xbf,0);
      }
      *(undefined4 *)(param_1 + 0xba4) = 0;
      goto LAB_00549f18;
    }
    iVar1 = 0xd;
    bVar5 = true;
    pcVar4 = local_20;
    pcVar3 = "third_person";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar4 == *pcVar3;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar5);
    if (bVar5) {
      if (*(char *)(DAT_00674aa0 + 0x5ba) == '\x01') {
        FUN_005763b0(0x39,0);
      }
      if (*(char *)(DAT_00674aa0 + 0x5b9) == '\x01') {
        FUN_005763b0(0xbf,0);
      }
      piVar2 = (int *)(param_1 + 0x1b0);
      *(undefined4 *)(param_1 + 0xba4) = 1;
    }
    else {
      iVar1 = 7;
      bVar5 = true;
      pcVar4 = local_20;
      pcVar3 = "turret";
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *pcVar4 == *pcVar3;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar5);
      if (bVar5) {
        piVar2 = (int *)(param_1 + 0x3c8);
      }
      else {
        iVar1 = 9;
        bVar5 = true;
        pcVar4 = local_20;
        pcVar3 = "rearview";
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar5 = *pcVar4 == *pcVar3;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        } while (bVar5);
        if (!bVar5) {
          iVar1 = 6;
          bVar5 = true;
          pcVar4 = local_20;
          pcVar3 = "death";
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar5 = *pcVar4 == *pcVar3;
            pcVar4 = pcVar4 + 1;
            pcVar3 = pcVar3 + 1;
          } while (bVar5);
          if (bVar5) {
            piVar2 = (int *)(param_1 + 0x60c);
          }
          else {
            iVar1 = 7;
            bVar5 = true;
            pcVar4 = local_20;
            pcVar3 = "script";
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar5 = *pcVar4 == *pcVar3;
              pcVar4 = pcVar4 + 1;
              pcVar3 = pcVar3 + 1;
            } while (bVar5);
            if (bVar5) {
              local_28 = 1;
              piVar2 = (int *)(param_1 + 0x760);
            }
            else {
              pcVar4 = ";static";
              iVar1 = 7;
              bVar5 = true;
              pcVar3 = local_20;
              do {
                pcVar4 = pcVar4 + 1;
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar5 = *pcVar3 == *pcVar4;
                pcVar3 = pcVar3 + 1;
              } while (bVar5);
              if (bVar5) {
                piVar2 = (int *)(param_1 + 0x9a4);
              }
              else {
                iVar1 = 8;
                bVar5 = true;
                pcVar4 = local_20;
                pcVar3 = "docking";
                do {
                  if (iVar1 == 0) break;
                  iVar1 = iVar1 + -1;
                  bVar5 = *pcVar4 == *pcVar3;
                  pcVar4 = pcVar4 + 1;
                  pcVar3 = pcVar3 + 1;
                } while (bVar5);
                if (!bVar5) {
                  DAT_00614028 = 1;
                  return (int *)0x0;
                }
                piVar2 = (int *)(param_1 + 0xa9c);
              }
            }
          }
          FUN_0041dda0(0);
          goto LAB_0054a0a8;
        }
        piVar2 = (int *)(param_1 + 0x500);
      }
    }
  }
  FUN_0041dde0("Cross",1);
  FUN_0041dda0(1);
LAB_0054a0a8:
  if ((piVar2 != (int *)0x0) && (FUN_00549bc0(piVar2,local_28), param_3 != 0)) {
    (**(code **)(*piVar2 + 0x58))(param_3);
  }
  return piVar2;
}

