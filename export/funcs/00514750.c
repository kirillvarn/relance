
void __thiscall FUN_00514750(int param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  CEquip *pCVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  float local_60 [21];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar3 = (int *)FUN_0054baf0();
  iVar4 = *(int *)(param_1 + 0x14);
  if ((((iVar4 == 0) || (iVar4 == 8)) || (iVar4 == -4)) ||
     ((iVar4 = *(int *)(iVar4 + 8), iVar4 == 0 || ((*(uint *)(iVar4 + 0x4c) & 0x303) != 0x303)))) {
    iVar4 = 0;
  }
  pCVar5 = CEquipManager::FindFirst((CEquipManager *)(iVar4 + 0xe4),0x800000);
  if (pCVar5 == (CEquip *)0x0) {
    iVar4 = 0;
  }
  else if (*(int *)(pCVar5 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(pCVar5 + 0xc) + 4);
  }
  if ((*(byte *)(param_2 + 0x61) & 0x20) == 0) {
    *(byte *)(param_2 + 0x61) = *(byte *)(param_2 + 0x61) | 0x20;
    if (param_2 == piVar3) {
      if (*(int *)(param_1 + 0x14) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(*(int *)(param_1 + 0x14) + -8);
      }
      pfVar6 = (float *)(**(code **)(*piVar3 + 0xc))();
      bVar1 = *(byte *)(param_2 + 0x61);
      pfVar10 = local_60;
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar10 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar10 = pfVar10 + 1;
      }
      if ((bVar1 & 1) == 0) {
        FUN_00422b80(-local_60[2],-local_60[5],-local_60[8]);
      }
      puVar7 = (undefined4 *)(**(code **)*param_2)();
      uStack_c = *puVar7;
      uStack_8 = puVar7[1];
      uStack_4 = puVar7[2];
      pfVar6 = local_60;
      pfVar10 = local_60 + 0xc;
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar10 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar10 = pfVar10 + 1;
      }
      bVar2 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x58));
      if (!bVar2) {
        piVar3 = param_2 + 0x5d;
        pfVar6 = local_60 + 0xc;
        uVar11 = 0xffffffff;
        uVar8 = FUN_0040f080((ID_String *)(iVar4 + 0x58),param_2,0xffffffff,pfVar6,piVar3);
        FUN_00503070(uVar8,param_2,uVar11,pfVar6,piVar3);
        return;
      }
    }
    else {
      local_60[8] = 1.0;
      local_60[4] = 1.0;
      local_60[0] = 1.0;
      local_60[7] = 0.0;
      local_60[6] = 0.0;
      local_60[5] = 0.0;
      local_60[3] = 0.0;
      local_60[2] = 0.0;
      local_60[1] = 0.0;
      local_60[0xb] = 0.0;
      local_60[10] = 0.0;
      local_60[9] = 0.0;
      uVar8 = (**(code **)(*param_2 + 0x1c))();
      bVar2 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x6c));
      if (!bVar2) {
        piVar3 = param_2 + 0x59;
        pfVar6 = local_60;
        uVar11 = FUN_0040f080((ID_String *)(iVar4 + 0x6c),param_2,uVar8,pfVar6,piVar3);
        FUN_00503070(uVar11,param_2,uVar8,pfVar6,piVar3);
      }
    }
  }
  return;
}

