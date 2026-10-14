
void __thiscall FUN_005142e0(int param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  CEquip *pCVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  OwnerList<pub::SpaceObj::CargoDesc> *pOVar11;
  int local_70 [4];
  undefined1 auStack_60 [12];
  undefined4 auStack_54 [5];
  undefined4 uStack_40;
  undefined4 uStack_34;
  OwnerList<pub::SpaceObj::CargoDesc> local_30 [36];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_70[0] = param_1;
  if (param_2[0x58] != 0) {
    if (param_2[0x58] == param_1) {
      if (-1 < (char)param_2[0x61]) {
        return;
      }
      piVar2 = (int *)FUN_0054baf0();
      iVar3 = *(int *)(param_1 + 0x14);
      if ((((iVar3 == 0) || (iVar3 == 8)) || (iVar3 == -4)) ||
         ((iVar3 = *(int *)(iVar3 + 8), iVar3 == 0 || ((*(uint *)(iVar3 + 0x4c) & 0x303) != 0x303)))
         ) {
        iVar3 = 0;
      }
      pCVar4 = CEquipManager::FindFirst((CEquipManager *)(iVar3 + 0xe4),0x800000);
      if (pCVar4 == (CEquip *)0x0) {
        iVar3 = 0;
      }
      else if (*(int *)(pCVar4 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(pCVar4 + 0xc) + 4);
      }
      if ((*(byte *)(param_2 + 0x61) & 0x20) != 0) {
        return;
      }
      *(byte *)(param_2 + 0x61) = *(byte *)(param_2 + 0x61) | 0x20;
      if (param_2 != piVar2) {
        piVar2 = param_2 + 0x59;
        uVar6 = FUN_004b5150(piVar2);
        uVar7 = (**(code **)(*param_2 + 0x1c))(uVar6);
        FUN_00514070(iVar3 + 0x6c,param_2,uVar7,uVar6,piVar2);
        return;
      }
      if (*(int *)(local_70[0] + 0x14) == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)(*(int *)(local_70[0] + 0x14) + -8);
      }
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
      bVar1 = *(byte *)(param_2 + 0x61);
      puVar10 = auStack_54;
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar10 = puVar10 + 1;
      }
      if ((bVar1 & 1) == 0) {
        FUN_00422b80(auStack_54[2],uStack_40,uStack_34);
        FUN_00411350(auStack_60);
        FUN_00411f70(auStack_60);
      }
      OwnerList<pub::SpaceObj::CargoDesc>::operator=
                (local_30,(OwnerList<struct_pub::SpaceObj::CargoDesc> *)0x0);
      puVar5 = (undefined4 *)(**(code **)*param_2)();
      uStack_c = *puVar5;
      uStack_8 = puVar5[1];
      uStack_4 = puVar5[2];
      puVar5 = auStack_54;
      pOVar11 = local_30;
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pOVar11 = *puVar5;
        puVar5 = puVar5 + 1;
        pOVar11 = pOVar11 + 4;
      }
      FUN_00514070(iVar3 + 0x58,param_2,0xffffffff,local_30,param_2 + 0x5d);
      return;
    }
    iVar3 = param_2[0x58];
    if (iVar3 != 0) {
      iVar9 = (**(code **)(*param_2 + 0x20))();
      puVar5 = *(undefined4 **)(iVar3 + 0xc);
      for (puVar10 = (undefined4 *)*puVar5; puVar5 != puVar10; puVar10 = (undefined4 *)*puVar10) {
        if (puVar10[2] == iVar9) {
          if ((char)param_2[0x61] < '\0') {
            FUN_00514f20(param_2);
          }
          FUN_005139d0(param_2);
          FUN_00516f70(local_70,puVar10);
          goto LAB_005144f0;
        }
      }
      puVar5 = (undefined4 *)FUN_00411c50(0x10000,1);
      (**(code **)FDUMP_exref)
                (*puVar5,"%s(%d) : ERROR:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\tradelane.cpp",0x367,"bad things (tm)");
    }
  }
LAB_005144f0:
  param_2[0x58] = param_1;
  *(byte *)((int)param_2 + 0x185) = *(byte *)((int)param_2 + 0x185) & 0xfa;
  if ((char)param_2[0x61] < '\0') {
    FUN_00514750(param_2);
  }
  local_70[0] = (**(code **)(*param_2 + 0x20))();
  iVar3 = *(int *)(param_1 + 0xc);
  piVar2 = *(int **)(iVar3 + 4);
  piVar8 = operator_new(0xc);
  *piVar8 = iVar3;
  if (piVar2 == (int *)0x0) {
    piVar2 = piVar8;
  }
  piVar8[1] = (int)piVar2;
  *(int **)(iVar3 + 4) = piVar8;
  *(int **)piVar8[1] = piVar8;
  FUN_005999b0(piVar8 + 2,local_70);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

