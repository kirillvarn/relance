
void FUN_004dd4e0(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  CEquip *pCVar5;
  CEGun *this;
  Munition *pMVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_74;
  int iStack_6c;
  char *pcStack_68;
  int iStack_64;
  int *local_60;
  undefined1 auStack_5c [12];
  CEquipTraverser aCStack_50 [16];
  undefined2 auStack_40 [32];
  
  local_60 = (int *)FUN_0054baf0();
  if (((local_60 != (int *)0x0) && (iVar4 = (**(code **)(*local_60 + 0x150))(), iVar4 != 0)) &&
     ((*(uint *)(iVar4 + 0x4c) & 0x503) == 0x503)) {
    iVar8 = 0;
    iStack_74 = 0;
    iStack_64 = iVar4;
    CEquipTraverser::CEquipTraverser(aCStack_50,0x80);
    pCVar5 = CEquipManager::Traverse((CEquipManager *)(iVar4 + 0xe4),aCStack_50);
    this = CEGun::cast(pCVar5);
    if (this != (CEGun *)0x0) {
      do {
        pMVar6 = CEGun::MunitionArch(this);
        if (*(int *)(pMVar6 + 0x90) != 0) {
          bVar3 = false;
          bVar2 = false;
          pMVar6 = CEGun::MunitionArch(this);
          if (pMVar6[0xac] == (Munition)0x0) {
            (**(code **)(*(int *)this + 0x60))(&pcStack_68);
            iVar1 = *(int *)(iVar4 + 0x88);
            if ((*(int *)(iVar1 + 0x134) != 0) &&
               (iStack_6c = (*(int *)(iVar1 + 0x138) - *(int *)(iVar1 + 0x134)) / 0x14,
               0 < iStack_6c)) {
              iVar9 = 0;
              do {
                iVar4 = *(int *)(iVar1 + 0x134) + 4 + iVar9;
                iVar8 = *(int *)(iVar4 + 4);
                if (iVar8 == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(iVar4 + 8) - iVar8 >> 2;
                }
                iVar8 = 0;
                if (0 < iVar4) {
                  do {
                    iVar7 = stricmp(*(char **)(*(int *)(*(int *)(iVar1 + 0x134) + 8 + iVar9) +
                                              iVar8 * 4),pcStack_68);
                    if ((iVar7 == 0) &&
                       (((iVar7 = *(int *)(iVar9 + *(int *)(iVar1 + 0x134)), iVar7 == 10 ||
                         (iVar7 == 0x24)) || (iVar7 == 0x23)))) {
                      bVar3 = true;
                    }
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < iVar4);
                }
                iVar9 = iVar9 + 0x14;
                iStack_6c = iStack_6c + -1;
                iVar8 = iStack_74;
                iVar4 = iStack_64;
              } while (iStack_6c != 0);
            }
          }
          else {
            bVar2 = true;
          }
          if (param_1 == 0) {
            if ((!bVar3) && (!bVar2)) {
              auStack_40[iVar8] = *(undefined2 *)(this + 8);
              goto LAB_004dd6bd;
            }
          }
          else if (param_1 == 1) {
            if (bVar3) {
              auStack_40[iVar8] = *(undefined2 *)(this + 8);
              goto LAB_004dd6bd;
            }
          }
          else if ((param_1 == 2) && (bVar2)) {
            auStack_40[iVar8] = *(undefined2 *)(this + 8);
LAB_004dd6bd:
            iVar8 = iVar8 + 1;
            iStack_74 = iVar8;
          }
        }
        pCVar5 = CEquipManager::Traverse((CEquipManager *)(iVar4 + 0xe4),aCStack_50);
        this = CEGun::cast(pCVar5);
      } while (this != (CEGun *)0x0);
      if (iVar8 != 0) {
        FUN_004f1da0(auStack_5c);
        (**(code **)(local_60[1] + 0x34))(auStack_40,iVar8,auStack_5c,DAT_00673344);
      }
    }
  }
  return;
}

