
void __fastcall FUN_004999d0(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  uchar *puVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 local_4;
  
  if (((DAT_006720a0 != 4) && (DAT_006720a0 != 6)) && (DAT_006720a0 != 7)) {
    puVar3 = (uchar *)FUN_004a3bf0(*(undefined4 *)(param_1 + 0x870),*(undefined4 *)(param_1 + 0x870)
                                   ,*(undefined4 *)(param_1 + 0x86c));
    IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x868),puVar3,*(ulong *)(param_1 + 0x870));
    *(uchar **)(param_1 + 0x870) = puVar3;
    FUN_00421ed0(0xb50);
    FUN_00421ed0(0xb71);
    if (DAT_00610850 < 0x640) {
      if (DAT_00610850 == 0x400) {
        pcVar6 = "NavMap1024";
      }
      else if ((DAT_00610850 == 0x500) || (DAT_00610850 == 0x480)) {
        pcVar6 = "NavMap1280";
      }
      else {
        pcVar6 = "NavMap800";
      }
      uVar4 = FUN_004177b0(pcVar6);
    }
    else {
      uVar4 = FUN_004177b0("NavMap1600");
    }
    local_4 = DAT_00679bb0;
    if ((*(char *)(param_1 + 0x478) != '\0') &&
       ((*(int *)(param_1 + 0x4a4) == 0 || (*(int *)(param_1 + 2000) == *(int *)(param_1 + 0x4a4))))
       ) {
      uVar2 = ftol();
      local_4 = CONCAT13(uVar2,(undefined3)local_4);
    }
    FUN_00417780(&local_4);
    if ((((*(int *)(param_1 + 2000) != 1) && (*(int *)(param_1 + 2000) != 0)) ||
        ((*(char *)(param_1 + 0x478) != '\0' && (*(int *)(param_1 + 0x4a4) == 2)))) &&
       (piVar5 = (int *)**(int **)(param_1 + 0x400), piVar5 != *(int **)(param_1 + 0x400))) {
      do {
        *(undefined1 *)(piVar5[2] + 0x81) = 0;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)(param_1 + 0x400));
    }
    piVar5 = (int *)**(int **)(param_1 + 0x400);
    if (piVar5 != *(int **)(param_1 + 0x400)) {
      do {
        piVar1 = (int *)piVar5[2];
        if ((((piVar1[0x13] != 0) && ((char)piVar1[0x12] != '\0')) && (*piVar1 == 0)) &&
           ((*(byte *)(piVar1 + 1) & 2) != 0)) {
          FUN_004997d0(uVar4,piVar1);
          FUN_00499c20(uVar4,piVar1);
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)(param_1 + 0x400));
    }
    piVar5 = (int *)**(int **)(param_1 + 0x400);
    if (piVar5 != *(int **)(param_1 + 0x400)) {
      do {
        piVar1 = (int *)piVar5[2];
        if (((piVar1[0x13] != 0) && ((char)piVar1[0x12] != '\0')) &&
           ((*piVar1 == 0 && ((piVar1[1] & 0xc40U) != 0)))) {
          FUN_004997d0(uVar4,piVar1);
          FUN_00499c20(uVar4,piVar1);
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)(param_1 + 0x400));
    }
    piVar5 = (int *)**(int **)(param_1 + 0x400);
    if (piVar5 != *(int **)(param_1 + 0x400)) {
      do {
        piVar1 = (int *)piVar5[2];
        if (((piVar1[0x13] != 0) && ((char)piVar1[0x12] != '\0')) &&
           ((*piVar1 == 0 && ((piVar1[1] & 0x200101U) != 0)))) {
          FUN_004997d0(uVar4,piVar1);
          FUN_00499c20(uVar4,piVar1);
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)(param_1 + 0x400));
    }
  }
  return;
}

