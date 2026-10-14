
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043e210(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  int *piVar13;
  float fStack_54;
  undefined4 *puStack_50;
  int iStack_4c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar9 = (undefined4 *)0x0;
  bVar2 = true;
  for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x380); puVar10 = puVar9,
      puVar1 != *(undefined4 **)(param_1 + 0x380); puVar1 = (undefined4 *)*puVar1) {
    puVar10 = puVar1 + 2;
    if (*(char *)((int)puVar1 + 9) != '\0') {
      if (((*(byte *)(puVar1[8] + 0x330) & 0x40) != 0) && (puVar9 = puVar10, bVar2)) break;
      bVar2 = false;
    }
  }
  if (puVar10 != (undefined4 *)0x0) {
    iStack_4c = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    puStack_50 = &local_30;
    fStack_54 = 9.80909e-45;
    (**(code **)(*(int *)puVar10[6] + 0xa8))();
    piVar8 = *(int **)(param_1 + 0x380);
    piVar6 = (int *)*piVar8;
    iVar11 = 0;
    if (piVar6 != piVar8) {
      do {
        if ((*(char *)((int)piVar6 + 9) == '\0') && ((char)piVar6[2] == '\0')) {
          iVar11 = iVar11 + 1;
        }
        piVar6 = (int *)*piVar6;
      } while (piVar6 != piVar8);
      if ((0 < iVar11) && (iVar11 < 4)) {
        (**(code **)(**(int **)(param_1 + 0x3dc) + 0xa8))
                  (4,(&PTR_s_Interface_Baseside_CITY_maneuver_00610bf0)[iVar11 + -1],0);
        uStack_20 = 0x3e970a3d;
        uStack_1c = 0xbf800000;
        (**(code **)(**(int **)(param_1 + 0x3dc) + 0xa8))(6,auStack_24,0);
        pfVar12 = (float *)(&PTR_DAT_00610c10)[iVar11 + -1];
        FUN_0055e120(DAT_005cb4d0);
        *(undefined4 *)(param_1 + 0x3d0) = _DAT_005cb4d4;
        piVar8 = (int *)**(int **)(param_1 + 0x380);
        piVar6 = (int *)0x0;
        piVar7 = (int *)0x0;
        piVar5 = (int *)0x0;
        piVar13 = (int *)0x0;
        if (piVar8 != *(int **)(param_1 + 0x380)) {
          do {
            piVar6 = piVar5;
            iVar11 = iStack_4c;
            piVar5 = piVar8 + 2;
            piVar7 = piVar13;
            if (*(char *)((int)piVar8 + 9) == '\0') {
              if ((char)*piVar5 == '\0') {
                if ((char)uStack_20 == '\0') {
                  fVar3 = *pfVar12 + fStack_54;
                  fVar4 = (float)puStack_50 - _DAT_005cb69c;
                  pfVar12 = pfVar12 + 1;
                  (**(code **)(*(int *)piVar8[8] + 0xa8))(6,&stack0xffffffc4,0);
                  piVar8[0xb] = (int)fVar3;
                  piVar8[0xc] = (int)fVar4;
                  piVar8[0xd] = iVar11;
                }
                else {
                  (**(code **)(*(int *)piVar8[8] + 0xa8))(6,&fStack_54);
                  iVar11 = iStack_4c;
                  fVar3 = *pfVar12 + fStack_54;
                  fVar4 = (float)puStack_50 - _DAT_005cb69c;
                  pfVar12 = pfVar12 + 1;
                  FUN_0055dee0(piVar8[8],&fStack_54,&stack0xffffffb8);
                  piVar8[0xb] = (int)fVar3;
                  piVar8[0xc] = (int)fVar4;
                  piVar8[0xd] = iVar11;
                }
              }
              iVar11 = piVar8[0xe];
              if (iVar11 == 6) {
                piVar6 = piVar5;
              }
              if (((iVar11 == 5) || (iVar11 == 7)) || (piVar7 = piVar13, iVar11 == 8)) {
                piVar7 = piVar5;
              }
            }
            piVar8 = (int *)*piVar8;
            piVar5 = piVar6;
            piVar13 = piVar7;
          } while (piVar8 != (int *)*(int *)(param_1 + 0x380));
        }
        if ((((char)uStack_20 != '\0') && (piVar6 != (int *)0x0)) && (piVar7 != (int *)0x0)) {
          (**(code **)(*(int *)piVar6[6] + 0xa8))(6,piVar7 + 9,0);
        }
      }
    }
  }
  return;
}

