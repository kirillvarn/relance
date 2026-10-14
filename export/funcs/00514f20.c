
void __thiscall FUN_00514f20(int param_1,int *param_2)

{
  ID_String *pIVar1;
  float fVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  CEquip *pCVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  piVar3 = param_2;
  if ((*(byte *)((int)param_2 + 0x185) & 4) != 0) {
    return;
  }
  piVar6 = (int *)FUN_0054baf0();
  iVar7 = *(int *)(param_1 + 0x14);
  if ((((iVar7 == 0) || (iVar7 == 8)) || (iVar7 == -4)) ||
     ((iVar7 = *(int *)(iVar7 + 8), iVar7 == 0 || ((*(uint *)(iVar7 + 0x4c) & 0x303) != 0x303)))) {
    iVar7 = 0;
  }
  pCVar8 = CEquipManager::FindFirst((CEquipManager *)(iVar7 + 0xe4),0x800000);
  if (pCVar8 == (CEquip *)0x0) {
    param_2 = (int *)0x0;
  }
  else if (*(int *)(pCVar8 + 0xc) == 0) {
    param_2 = (int *)0x0;
  }
  else {
    param_2 = *(int **)(*(int *)(pCVar8 + 0xc) + 4);
  }
  if (piVar3 == piVar6) {
    *(byte *)(piVar3 + 0x61) = *(byte *)(piVar3 + 0x61) & 0xbf;
    if ((int *)piVar3[0x5f] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[0x5f] + 4))();
    }
    piVar6 = (int *)piVar3[0x5e];
    if (piVar6 != (int *)0x0) {
      FUN_004215b0();
      fStack_4 = 0.0;
      uStack_8 = 0;
      fStack_c = 0.0;
      (**(code **)(*piVar6 + 0x94))(0xffffffff,&local_30);
      (**(code **)(*(int *)piVar3[0x5e] + 0x60))();
    }
    if (piVar3[0x60] != 0) {
      FUN_005379b0();
      (**(code **)(*(int *)piVar3[0x60] + 8))();
    }
    FUN_00502d90();
  }
  if ((((piVar3[0x5b] != 0) && ((*(byte *)(piVar3[0x5b] + 8) & 2) == 0)) ||
      ((piVar6 = (int *)piVar3[0x5a], piVar6 != (int *)0x0 &&
       (cVar4 = (**(code **)(*piVar6 + 0x14))(piVar6), cVar4 != '\0')))) ||
     ((piVar3[0x5c] != 0 && (*(int *)(piVar3[0x5c] + 0xd4) == 0)))) {
    FUN_004fcef0(piVar3 + 0x59);
  }
  if (*(int *)(piVar3[0x58] + 0x14) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(piVar3[0x58] + 0x14) + -8;
  }
  if (*(char *)(iVar7 + 0x1f0) == '\0') {
    piVar6 = (int *)FUN_0054baf0();
    if (piVar3 == piVar6) {
      pIVar1 = (ID_String *)((int)param_2 + 100);
      bVar5 = ID_String::IsEmpty(pIVar1);
      if (!bVar5) {
        (**(code **)(*piVar3 + 0x2c))(&param_2,auStack_3c);
        fVar2 = -fStack_4;
        FUN_004215b0();
        uStack_10 = 0;
        uStack_14 = 0;
        fStack_c = fVar2;
        bVar5 = ID_String::IsEmpty(pIVar1);
        if (!bVar5) {
          uVar12 = 0;
          puVar11 = &stack0xffffffb0;
          puVar10 = auStack_38;
          uVar9 = FUN_0040f080(pIVar1,puVar10,puVar11,0);
          FUN_00503f40(uVar9,puVar10,puVar11,uVar12);
        }
        goto LAB_005151e6;
      }
    }
    uStack_10 = 0x3f800000;
    uStack_20 = 0x3f800000;
    local_30 = 0x3f800000;
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    fStack_4 = 0.0;
    uStack_8 = 0;
    fStack_c = 0.0;
    uVar9 = (**(code **)(*piVar3 + 0x1c))();
    pIVar1 = (ID_String *)((int)param_2 + 0x78);
    bVar5 = ID_String::IsEmpty(pIVar1);
    if (!bVar5) {
      uVar14 = 0;
      puVar13 = &local_30;
      piVar6 = piVar3;
      uVar12 = FUN_0040f080(pIVar1,piVar3,uVar9,puVar13,0);
      FUN_00503070(uVar12,piVar6,uVar9,puVar13,uVar14);
    }
  }
  else {
    FUN_00514bf0(piVar3,0);
  }
LAB_005151e6:
  *(byte *)((int)piVar3 + 0x185) = *(byte *)((int)piVar3 + 0x185) | 5;
  return;
}

