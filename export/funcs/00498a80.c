
uint __fastcall FUN_00498a80(int param_1)

{
  int *piVar1;
  char cVar2;
  byte extraout_AL;
  Solar *pSVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  undefined3 extraout_var;
  uint uVar7;
  int iVar8;
  byte bStack_11d;
  uint uStack_11c;
  undefined4 local_118;
  char local_114 [76];
  uint uStack_c8;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_48;
  undefined1 local_44;
  byte bStack_4;
  
  local_118 = 0;
  local_114[0] = '\0';
  local_bc = 0;
  local_b8 = 0;
  local_8c = 0;
  local_88 = 0;
  local_48 = 0;
  local_44 = 0;
  uStack_11c = (**(code **)(**(int **)(param_1 + 0x7e0) + 0x3c))();
  uVar7 = 0;
  if (uStack_11c != 0) {
    do {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x7e0) + 0x40))(uVar7,&local_118);
      if (cVar2 != '\0') {
        pSVar3 = Archetype::GetSolar(uStack_c8);
        if ((pSVar3 == (Solar *)0x0) || (((byte)pSVar3[0x10] & 0x84) == 0)) {
          uVar4 = CreateID(local_114);
          bStack_11d = 0;
          uVar5 = FUN_004c4da0(uVar4,&bStack_11d,0,0);
          uVar6 = (undefined3)((uint)uVar5 >> 8);
          bStack_11d = bStack_11d | bStack_4;
          if ((bStack_11d & 1) != 0) goto LAB_00498bb9;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uStack_11c);
  }
  if (*(int *)(param_1 + 0xb90) == 0) {
    uStack_11c = 0;
  }
  else {
    uStack_11c = *(int *)(param_1 + 0xb94) - *(int *)(param_1 + 0xb90) >> 2;
  }
  iVar8 = 0;
  if (0 < (int)uStack_11c) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xb90) + iVar8 * 4);
      bStack_11d = 0;
      uVar5 = (**(code **)(*piVar1 + 4))(&bStack_11d,1,0);
      FUN_004c4da0(uVar5);
      (**(code **)(*piVar1 + 0x80))();
      uVar6 = extraout_var;
      if (((bStack_11d | extraout_AL) & 1) != 0) {
LAB_00498bb9:
        return CONCAT31(uVar6,1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uStack_11c);
  }
  return uStack_11c & 0xffffff00;
}

