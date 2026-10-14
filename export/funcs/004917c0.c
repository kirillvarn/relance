
/* WARNING: Removing unreachable block (ram,0x00491bb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004917c0(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uchar *puVar4;
  int iVar5;
  Solar *pSVar6;
  uint uVar7;
  ISystem *pIVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  float10 fVar12;
  float fStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_194;
  undefined1 uStack_190;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint uStack_164;
  undefined4 uStack_160;
  undefined1 uStack_15c;
  undefined4 uStack_13c;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  char local_114 [64];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  uint uStack_94;
  undefined4 local_8c;
  char local_88 [64];
  undefined4 local_48;
  char local_44 [64];
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1 + 0x4a8) = 0x47dac000;
  *(undefined4 *)(param_1 + 0x4ac) = 0x47dac000;
  FUN_004a2fd0(*(undefined4 *)(param_1 + 0x84c),*(undefined4 *)(param_1 + 0x850));
  puVar4 = (uchar *)FUN_004a3ab0(*(undefined4 *)(param_1 + 0x860),*(undefined4 *)(param_1 + 0x860),
                                 *(undefined4 *)(param_1 + 0x85c));
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x858),puVar4,*(ulong *)(param_1 + 0x860));
  *(uchar **)(param_1 + 0x860) = puVar4;
  local_118 = 0;
  local_114[0] = '\0';
  local_bc = 0;
  local_b8 = 0;
  local_8c = 0;
  local_88[0] = '\0';
  local_48 = 0;
  local_44[0] = '\0';
  uStack_1b8 = (**(code **)(**(int **)(param_1 + 0x7e0) + 0x3c))();
  if (*(undefined4 **)(param_1 + 0x7e0) == (undefined4 *)0x0) {
LAB_00491896:
    uStack_1b8 = 0;
  }
  else {
    iVar5 = (**(code **)**(undefined4 **)(param_1 + 0x7e0))();
    iVar9 = 0;
    piVar10 = (int *)(param_1 + 0xf28);
    do {
      if (*piVar10 == iVar5) goto LAB_00491896;
      iVar9 = iVar9 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar9 < 4);
  }
  fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x7e0) + 0x50))();
  *(float *)(param_1 + 0xf48) = (float)fVar12;
  uStack_1bc = 0;
  if (uStack_1b8 != 0) {
    do {
      cVar3 = (**(code **)(**(int **)(param_1 + 0x7e0) + 0x40))(uStack_1bc,&local_118);
      if ((cVar3 != '\0') && (pSVar6 = Archetype::GetSolar(uStack_c8), pSVar6 != (Solar *)0x0)) {
        uVar11 = *(uint *)(pSVar6 + 0x10);
        if ((char)uVar11 < '\0') {
          uStack_194 = 0;
          uStack_190 = 0;
          uStack_160 = 0;
          uStack_15c = 0;
          uStack_13c = 0;
          auStack_138[0] = 0;
          FUN_00420750(local_114);
          fStack_16c = fStack_d0;
          fStack_170 = fStack_d4;
          fStack_168 = fStack_cc;
          uStack_164 = uStack_c8;
          FUN_00420750(local_88);
          uStack_13c = FUN_00417c50(auStack_138,0x20,local_44);
          FUN_004a3020(*(undefined4 *)(param_1 + 0x860),&uStack_194);
          if ((local_44[0] != '\0') && (local_88[0] != '\0')) {
            uVar11 = 0;
          }
        }
        if (((*(uint *)(param_1 + 0x4b0) & uVar11) != 0) && (uVar11 != 0x20000000)) {
          iVar5 = *(int *)(pSVar6 + 4);
          fStack_1c0 = 0.0;
          if ((uVar11 & 3) != 0) {
            fVar2 = -fStack_cc;
            fVar1 = SQRT(-fStack_d4 * -fStack_d4 + fVar2 * fVar2);
            if (_DAT_005c7474 < fVar1) {
              fVar1 = _DAT_005c75dc / fVar1;
              fVar12 = (float10)_CIacos();
              fStack_1c0 = (float)(fVar12 * (float10)_DAT_005d3d38);
              if (_DAT_005c7474 < fVar1 * fVar2) {
                fStack_1c0 = _DAT_005ca23c - fStack_1c0;
              }
            }
          }
          uVar7 = CreateID(local_114);
          fVar1 = *(float *)(param_1 + 0xf48);
          iVar5 = FUN_00491f90(0,uVar11,fStack_d4 * fVar1,fStack_d0 * fVar1,fVar1 * fStack_cc,
                               *(undefined4 *)(pSVar6 + 0x98),iVar5 + 0x60,uStack_c4,uStack_c0,
                               fStack_1c0,uVar7,uStack_4);
          if ((uVar11 & 4) != 0) {
            *(undefined4 *)(iVar5 + 0x2c) = 0x3f7d70a4;
          }
          if (uStack_94 != 0) {
            pIVar8 = Universe::get_system(uStack_94);
            *(ISystem **)(iVar5 + 100) = pIVar8;
          }
        }
      }
      uStack_1bc = uStack_1bc + 1;
    } while (uStack_1bc < uStack_1b8);
  }
  FUN_004981f0();
  if (*(undefined4 **)(param_1 + 0x7e0) == (undefined4 *)0x0) {
LAB_00491b9c:
    puVar4 = *(uchar **)(param_1 + 0xb90);
    IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0xb8c),puVar4,*(ulong *)(param_1 + 0xb94));
    *(uchar **)(param_1 + 0xb94) = puVar4;
  }
  else {
    iVar5 = (**(code **)**(undefined4 **)(param_1 + 0x7e0))();
    piVar10 = (int *)(param_1 + 0xf28);
    iVar9 = 0;
    do {
      if (*piVar10 == iVar5) goto LAB_00491b9c;
      iVar9 = iVar9 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar9 < 4);
    FUN_004a0670();
  }
  cVar3 = FUN_00498a80();
  if (cVar3 == '\0') {
    puVar4 = (uchar *)FUN_004a3a80(*(undefined4 *)(param_1 + 0x850),*(undefined4 *)(param_1 + 0x850)
                                   ,*(undefined4 *)(param_1 + 0x84c));
    IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x848),puVar4,*(ulong *)(param_1 + 0x850));
    *(uchar **)(param_1 + 0x850) = puVar4;
  }
  return;
}

