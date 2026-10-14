
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00534870(int param_1,ushort *param_2,uint param_3,undefined4 *param_4,int param_5)

{
  float fVar1;
  char cVar2;
  int iVar3;
  CEquip *pCVar4;
  CELauncher *pCVar5;
  CEGun *this;
  Munition *pMVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  float *pfVar10;
  int *piVar11;
  uint uVar12;
  CSimple *pCVar13;
  undefined4 *puVar14;
  bool bVar15;
  allocator<unsigned_short> local_b1;
  uint local_b0;
  int *local_ac;
  uint local_a8;
  CSimple *local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_94;
  uint uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [4];
  vector<unsigned_short,std::allocator<unsigned_short>_> local_70 [4];
  int iStack_6c;
  ushort *puStack_68;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  int local_40 [10];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0938;
  pvStack_c = ExceptionList;
  local_b0 = 0;
  ExceptionList = &pvStack_c;
  if ((param_5 == -1) || (ExceptionList = &pvStack_c, iVar3 = FUN_0054bb00(), param_5 == iVar3)) {
    local_80[0] = 0;
    local_80[1] = 0x7f7fffff;
    local_80[2] = 0x7f7fffff;
    local_80[3] = 0x7f7fffff;
    std::vector<unsigned_short,std::allocator<unsigned_short>_>::
    vector<unsigned_short,std::allocator<unsigned_short>_>(local_70,&local_b1);
    local_4 = 0;
    local_80[0] = (**(code **)(*(int *)(param_1 + -4) + 0x20))();
    if (param_4 != (undefined4 *)0x0) {
      local_80[1] = *param_4;
      local_80[2] = param_4[1];
      local_80[3] = param_4[2];
    }
    if (param_3 == 0) {
      piVar8 = (int *)**(int **)(param_1 + 0xb4);
      if (piVar8 != *(int **)(param_1 + 0xb4)) {
        do {
          pCVar5 = CELauncher::cast(*(CEquip **)(piVar8[2] + 4));
          if ((pCVar5 != (CELauncher *)0x0) &&
             (cVar2 = (**(code **)(*(int *)pCVar5 + 4))(), cVar2 != '\0')) {
            if ((param_4 == (undefined4 *)0x0) ||
               (*(char *)(*(int *)(pCVar5 + 0x4c) + 0x79) != '\0')) {
              cVar2 = (**(code **)(*(int *)piVar8[2] + 0x10))();
            }
            else {
              cVar2 = (**(code **)(*(int *)piVar8[2] + 0xc))(param_4);
              if (cVar2 == '\0') goto LAB_00534ad9;
              local_a4 = (CSimple *)(uint)*(ushort *)(pCVar5 + 8);
              std::vector<unsigned_short,std::allocator<unsigned_short>_>::insert
                        (local_70,puStack_68,1,(ushort *)&local_a4);
            }
            if ((cVar2 != '\0') && (local_b0 < 10)) {
              local_40[local_b0] = piVar8[2];
              local_b0 = local_b0 + 1;
            }
          }
LAB_00534ad9:
          piVar8 = (int *)*piVar8;
        } while (piVar8 != (int *)*(int *)(param_1 + 0xb4));
      }
    }
    else {
      local_a8 = param_3;
      do {
        if ((((param_1 == 4) || (param_1 == -8)) || (iVar3 = *(int *)(param_1 + 0xc), iVar3 == 0))
           || ((*(uint *)(iVar3 + 0x4c) & 0x103) != 0x103)) {
          iVar3 = 0;
        }
        pCVar4 = CEquipManager::FindByID((CEquipManager *)(iVar3 + 0xe4),*param_2);
        local_ac = (int *)**(int **)(param_1 + 0xb4);
        if (local_ac != *(int **)(param_1 + 0xb4)) {
          do {
            if (*(CEquip **)(*(int *)((int)local_ac + 8) + 4) == pCVar4) {
              piVar8 = *(int **)((int)local_ac + 8);
              if ((piVar8 == (int *)0x0) || ((CEquip *)piVar8[1] == (CEquip *)0x0)) break;
              pCVar5 = CELauncher::cast((CEquip *)piVar8[1]);
              if ((param_4 == (undefined4 *)0x0) ||
                 (*(char *)(*(int *)(pCVar5 + 0x4c) + 0x79) != '\0')) {
                cVar2 = (**(code **)(*piVar8 + 0x10))();
              }
              else {
                cVar2 = (**(code **)(*piVar8 + 0xc))(param_4);
                if (cVar2 == '\0') break;
                std::vector<unsigned_short,std::allocator<unsigned_short>_>::insert
                          (local_70,puStack_68,1,param_2);
              }
              if ((cVar2 != '\0') && (local_b0 < 10)) {
                local_40[local_b0] = (int)piVar8;
                local_b0 = local_b0 + 1;
              }
              break;
            }
            FUN_0053ab20(&iStack_94,0);
          } while (local_ac != (int *)*(int *)(param_1 + 0xb4));
        }
        param_2 = param_2 + 1;
        local_a8 = local_a8 - 1;
      } while (local_a8 != 0);
      local_a8 = 0;
    }
    if ((iStack_6c != 0) && ((int)puStack_68 - iStack_6c >> 1 != 0)) {
      (**(code **)*DAT_0067ecd0)(DAT_00673344,local_80);
    }
    local_4 = 0xffffffff;
    FUN_005b7e1d(iStack_6c);
  }
  else {
    local_8c = *param_4;
    local_88 = param_4[1];
    local_84 = param_4[2];
    local_b1 = (allocator<unsigned_short>)0x0;
    local_ac = (int *)0x0;
    if (param_3 != 0) {
      do {
        if ((((param_1 == 4) || (param_1 == -8)) || (iVar3 = *(int *)(param_1 + 0xc), iVar3 == 0))
           || ((*(uint *)(iVar3 + 0x4c) & 0x103) != 0x103)) {
          iVar3 = 0;
        }
        pCVar4 = CEquipManager::FindByID((CEquipManager *)(iVar3 + 0xe4),param_2[(int)local_ac]);
        piVar8 = *(int **)(param_1 + 0xb4);
        piVar11 = (int *)*piVar8;
        if (piVar11 != piVar8) {
LAB_00534bb2:
          if (*(CEquip **)(piVar11[2] + 4) != pCVar4) goto code_r0x00534bba;
          piVar8 = (int *)piVar11[2];
          if ((piVar8 != (int *)0x0) && (pCVar4 = (CEquip *)piVar8[1], pCVar4 != (CEquip *)0x0)) {
            bVar15 = SinglePlayer();
            if (bVar15) {
              if (local_b1 == (allocator<unsigned_short>)0x0) {
LAB_00534cc5:
                (**(code **)(*piVar8 + 0x14))(param_4);
              }
              else {
LAB_00534cb7:
                (**(code **)(*piVar8 + 0x14))(&local_8c);
              }
            }
            else {
              FUN_005357f0(*(undefined2 *)(piVar8[1] + 8));
              if (local_b1 != (allocator<unsigned_short>)0x0) goto LAB_00534cb7;
              this = CEGun::cast(pCVar4);
              if ((this == (CEGun *)0x0) ||
                 (pMVar6 = CEGun::MunitionArch(this), *(int *)(pMVar6 + 0x90) != 0))
              goto LAB_00534cc5;
              CEGun::GetTarget(this,&local_a4,(ushort *)&local_a8);
              if (local_a4 != (CSimple *)0x0) {
                pCVar13 = local_a4 + 8;
                puVar14 = local_80;
                for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar14 = *(undefined4 *)pCVar13;
                  pCVar13 = pCVar13 + 4;
                  puVar14 = puVar14 + 1;
                }
                if (DAT_00675540 == (int *)0x0) {
                  DAT_00675540 = (int *)FUN_005b73e0();
                }
                (**(code **)(*DAT_00675540 + 0x28))(DAT_00675540,&local_50,local_80,param_4);
                local_8c = local_50;
                local_88 = uStack_4c;
                local_84 = uStack_48;
              }
              local_b1 = (allocator<unsigned_short>)0x1;
              (**(code **)(*piVar8 + 0x14))(&local_8c);
            }
            if (local_b0 < 10) {
              local_40[local_b0] = (int)piVar8;
              local_b0 = local_b0 + 1;
            }
          }
        }
LAB_00534ce9:
        local_ac = (int *)((int)local_ac + 1);
      } while (local_ac < param_3);
    }
  }
  if (local_b0 != 0) {
    local_ac = local_40;
    local_a8 = 1;
    do {
      local_a4 = (CSimple *)*local_ac;
      if (local_a4 != (CSimple *)0x0) {
        pCVar5 = *(CELauncher **)(local_a4 + 4);
        uVar7 = CELauncher::GetProjectilesPerFire(pCVar5);
        uStack_90 = uVar7;
        CELauncher::GetBarrelPosWS(pCVar5,(uint)&fStack_a0);
        FUN_0052cf80(&iStack_94);
        uVar12 = local_a8;
        uVar9 = uStack_90;
        if (local_a8 < local_b0) {
          do {
            iVar3 = local_40[uVar12];
            if ((iVar3 != 0) && (piVar8 = (int *)FUN_0052cf80(auStack_44), iStack_94 == *piVar8)) {
              pCVar5 = *(CELauncher **)(iVar3 + 4);
              uVar9 = CELauncher::GetProjectilesPerFire(pCVar5);
              uVar7 = uVar7 + uVar9;
              pfVar10 = (float *)CELauncher::GetBarrelPosWS(pCVar5,(uint)auStack_18);
              fStack_a0 = fStack_a0 + *pfVar10;
              local_40[uVar12] = 0;
              fStack_9c = fStack_9c + pfVar10[1];
              fStack_98 = fStack_98 + pfVar10[2];
            }
            uVar12 = uVar12 + 1;
            uVar9 = uVar7;
          } while (uVar12 < local_b0);
        }
        uStack_90 = uVar9;
        fVar1 = _DAT_005c75dc / (float)(int)uStack_90;
        fStack_a0 = fStack_a0 * fVar1;
        fStack_9c = fStack_9c * fVar1;
        fStack_98 = fStack_98 * fVar1;
        FUN_0052ced0(&fStack_a0,uVar7);
      }
      local_ac = local_ac + 1;
      bVar15 = local_a8 < local_b0;
      local_a8 = local_a8 + 1;
    } while (bVar15);
  }
  ExceptionList = pvStack_c;
  return 0;
code_r0x00534bba:
  piVar11 = (int *)*piVar11;
  if (piVar11 == piVar8) goto LAB_00534ce9;
  goto LAB_00534bb2;
}

