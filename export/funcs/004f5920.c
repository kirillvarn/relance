
void __thiscall FUN_004f5920(int *param_1,uint param_2)

{
  char *_Str2;
  char cVar1;
  ushort uVar2;
  int iVar3;
  CEquip *pCVar4;
  undefined4 *puVar5;
  code *_Str1;
  int iVar6;
  CEGun *pCVar7;
  IObjRW *pIVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  CShip *this;
  undefined4 uVar14;
  int local_4c;
  undefined1 local_3c [4];
  CEquipTraverser local_38 [16];
  undefined4 auStack_28 [4];
  uint uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_2;
  uint uVar8;
  
  if (param_1[3] == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = param_1[4] - param_1[3] >> 2;
  }
  iVar3 = 0;
  if (0 < iVar10) {
    piVar11 = (int *)param_1[3];
    do {
      if (*(uint *)(*piVar11 + 0x10) == param_2) {
        if (iVar3 != -1) {
          iVar10 = ((int *)param_1[3])[iVar3];
          if (*(int *)(iVar10 + 4) == 0) {
            local_4c = 0;
          }
          else {
            local_4c = *(int *)(iVar10 + 8) - *(int *)(iVar10 + 4) >> 4;
          }
          iVar3 = *param_1;
          if (iVar3 == 0) {
            return;
          }
          if (iVar3 == 8) {
            return;
          }
          if (iVar3 == -4) {
            return;
          }
          iVar3 = *(int *)(iVar3 + 8);
          if (iVar3 == 0) {
            return;
          }
          if ((*(uint *)(iVar3 + 0x4c) & 0x103) != 0x103) {
            return;
          }
          CEquipTraverser::CEquipTraverser(local_38,0xe0);
          pCVar4 = CEquipManager::Traverse((CEquipManager *)(iVar3 + 0xe4),local_38);
          do {
            if (pCVar4 == (CEquip *)0x0) {
              return;
            }
            puVar5 = (undefined4 *)(**(code **)(*(int *)pCVar4 + 0x60))(local_3c);
            _Str2 = (char *)*puVar5;
            cVar1 = (**(code **)(*(int *)pCVar4 + 4))();
            iVar12 = 0;
            param_2 = param_2 & 0xffffff00;
            if (0 < local_4c) {
              iVar13 = 0;
              do {
                _Str1 = *(code **)(*(int *)(iVar10 + 4) + iVar13 + 4);
                if (_Str1 == (code *)0x0) {
                  _Str1 = _C_exref;
                }
                iVar6 = stricmp((char *)_Str1,_Str2);
                if (iVar6 == 0) {
                  param_2 = CONCAT31(param_2._1_3_,1);
                  break;
                }
                iVar12 = iVar12 + 1;
                iVar13 = iVar13 + 0x10;
              } while (iVar12 < local_4c);
            }
            if (cVar1 != (char)param_2) {
              uVar2 = *(ushort *)(pCVar4 + 8);
              puVar5 = auStack_28;
              for (iVar12 = 10; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar5 = 0;
                puVar5 = puVar5 + 1;
              }
              uStack_2 = 1;
              auStack_28[0] = 0x19;
              uStack_14 = 2;
              uStack_18 = (uint)uVar2;
              FUN_0054bcb0(auStack_28);
              iVar12 = *param_1;
              if ((((iVar12 == 0) || (iVar12 == 8)) || (iVar12 == -4)) ||
                 ((this = *(CShip **)(iVar12 + 8), this == (CShip *)0x0 ||
                  ((*(uint *)(this + 0x4c) & 0x503) != 0x503)))) {
                this = (CShip *)0x0;
              }
              cVar1 = (**(code **)(*(int *)pCVar4 + 4))();
              if (((cVar1 != '\0') && (pCVar7 = CEGun::cast(pCVar4), pCVar7 != (CEGun *)0x0)) &&
                 ((iVar12 = *param_1, iVar12 != 0 && (iVar12 != 8)))) {
                param_2 = (uint)*(ushort *)(pCVar4 + 8);
                iVar12 = *(int *)(iVar12 + -4);
                uVar14 = DAT_00673344;
                uVar2 = CShip::get_sub_target(this);
                uVar8 = (uint)uVar2;
                pIVar9 = CShip::get_target(this);
                (**(code **)(iVar12 + 0x44))(&param_2,pIVar9,uVar8,uVar14);
              }
            }
            pCVar4 = CEquipManager::Traverse((CEquipManager *)(iVar3 + 0xe4),local_38);
          } while( true );
        }
        break;
      }
      iVar3 = iVar3 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar3 < iVar10);
  }
  iVar10 = *param_1;
  if ((((iVar10 != 0) && (iVar10 != 8)) && (iVar10 != -4)) &&
     ((iVar10 = *(int *)(iVar10 + 8), iVar10 != 0 && ((*(uint *)(iVar10 + 0x4c) & 0x103) == 0x103)))
     ) {
    CEquipTraverser::CEquipTraverser(local_38,0xe0);
    pCVar4 = CEquipManager::Traverse((CEquipManager *)(iVar10 + 0xe4),local_38);
    if (pCVar4 != (CEquip *)0x0) {
      do {
        (**(code **)(*(int *)pCVar4 + 0x60))(&param_2);
        cVar1 = (**(code **)(*(int *)pCVar4 + 4))();
        if (cVar1 != '\0') {
          puVar5 = auStack_28;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          uStack_18 = (uint)*(ushort *)(pCVar4 + 8);
          uStack_2 = 1;
          auStack_28[0] = 0x19;
          uStack_14 = 2;
          FUN_0054bcb0(auStack_28);
        }
        pCVar4 = CEquipManager::Traverse((CEquipManager *)(iVar10 + 0xe4),local_38);
      } while (pCVar4 != (CEquip *)0x0);
      return;
    }
  }
  return;
}

