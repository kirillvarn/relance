
/* WARNING: Removing unreachable block (ram,0x0054b3a2) */
/* WARNING: Removing unreachable block (ram,0x0054b419) */
/* WARNING: Removing unreachable block (ram,0x0054b42f) */
/* WARNING: Removing unreachable block (ram,0x0054b431) */
/* WARNING: Removing unreachable block (ram,0x0054b43b) */

void __fastcall FUN_0054b230(int param_1)

{
  CEqObj *pCVar1;
  bool bVar2;
  char cVar3;
  IBehaviorManager *this;
  int iVar4;
  int *piVar5;
  IObjRW *local_3c [2];
  int local_34 [13];
  
  if (*(char *)(param_1 + 0xba9) == '\0') {
    if (*(char *)(param_1 + 0xbaa) == '\0') {
      iVar4 = *(int *)(*(int *)(param_1 + 0xba0) + 0xc0);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + -8;
      }
      if ((((DAT_00679744 != 0) && (DAT_00679744 != 8)) && (DAT_00679744 != -4)) &&
         (((pCVar1 = *(CEqObj **)(DAT_00679744 + 8), pCVar1 != (CEqObj *)0x0 &&
           ((*(uint *)(pCVar1 + 0x4c) & 0x503) == 0x503)) && (iVar4 == DAT_00679744 + -8)))) {
        this = CEqObj::get_behavior_interface(pCVar1);
        bVar2 = IBehaviorManager::get_docking_port(this,local_3c,local_34);
        *(bool *)(param_1 + 0xbaa) = bVar2;
        if (bVar2) {
          piVar5 = DAT_00673344;
          (**(code **)(*DAT_0067ecd0 + 0xe4))(*(undefined4 *)(pCVar1 + 0xb0),1,2);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x88))(&stack0xffffffb8);
          }
          if (*(char *)(DAT_00674aa0 + 0x5ba) == '\x01') {
            FUN_005763b0(0x39,0);
          }
          if (*(char *)(DAT_00674aa0 + 0x5b9) == '\x01') {
            FUN_005763b0(0xbf,0);
          }
          cVar3 = FUN_0041a3e0();
          if (cVar3 == '\0') {
            FUN_0041a0f0(0x3f800000,0x40400000);
            FUN_0041dda0(0);
          }
          CEqObj::set_control_exclusion(pCVar1,4);
        }
      }
    }
  }
  else if (((DAT_00679744 != 0) && (DAT_00679744 != 8)) &&
          ((DAT_00679744 != -4 &&
           ((((pCVar1 = *(CEqObj **)(DAT_00679744 + 8), pCVar1 != (CEqObj *)0x0 &&
              ((*(uint *)(pCVar1 + 0x4c) & 0x503) == 0x503)) &&
             (bVar2 = CEqObj::is_control_excluded(pCVar1,4), !bVar2)) &&
            (*(undefined1 *)(param_1 + 0xba9) = 0, *(char *)(param_1 + 0xba8) == '\0')))))) {
    FUN_00549e70("player",0);
  }
  if (((*(char *)(param_1 + 0xbaa) != '\0') && (DAT_00679744 != 0)) && (DAT_00679744 != 8)) {
    if (*(char *)(param_1 + 0xbab) == '\0') {
      if (*(int *)(DAT_00679744 + 0x150) != 0) {
        *(undefined1 *)(param_1 + 0xbab) = 1;
      }
    }
    else if (*(int *)(DAT_00679744 + 0x150) == 0) {
      *(undefined1 *)(param_1 + 0xbab) = 0;
      *(undefined1 *)(param_1 + 0xbaa) = 0;
      return;
    }
  }
  return;
}

