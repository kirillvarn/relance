
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2aa0(uint param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  ISystem *pIVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uStack_d24;
  char acStack_d20 [64];
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  undefined4 uStack_cd8;
  undefined4 uStack_cc8;
  undefined1 uStack_cc4;
  undefined4 uStack_c98;
  undefined1 uStack_c94;
  undefined4 uStack_c54;
  undefined1 uStack_c50;
  int aiStack_c0c [770];
  int *piStack_4;
  
  if (param_2 == '\0') {
    pIVar6 = Universe::GetFirstSystem();
    if (pIVar6 != (ISystem *)0x0) {
      do {
        uVar15 = 0;
        uVar8 = (*(code *)**(undefined4 **)pIVar6)();
        if (uVar8 == param_1) {
          DAT_006720c4 = (*(code *)**(undefined4 **)pIVar6)();
          return;
        }
        uStack_d24 = 0;
        acStack_d20[0] = '\0';
        uStack_cc8 = 0;
        uStack_cc4 = 0;
        uStack_c98 = 0;
        uStack_c94 = 0;
        uStack_c54 = 0;
        uStack_c50 = 0;
        uVar8 = (**(code **)(*(int *)pIVar6 + 0x3c))();
        if (uVar8 != 0) {
          do {
            cVar5 = (**(code **)(*(int *)pIVar6 + 0x40))(uVar15,&uStack_d24);
            if ((cVar5 != '\0') && (uVar10 = CreateID(acStack_d20), uVar10 == param_1)) {
              DAT_006720c4 = (*(code *)**(undefined4 **)pIVar6)();
              _DAT_00672084 = uStack_ce0;
              _DAT_00672088 = uStack_cdc;
              _DAT_0067208c = uStack_cd8;
              DAT_006720c8 = 1;
              return;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar8);
        }
        pIVar6 = Universe::GetNextSystem();
        if (pIVar6 == (ISystem *)0x0) {
          return;
        }
      } while( true );
    }
  }
  else {
    pIVar6 = Universe::GetFirstSystem();
    if (pIVar6 != (ISystem *)0x0) {
      do {
        iVar7 = (**(code **)(*(int *)pIVar6 + 0x18))();
        piVar12 = (int *)**(int **)(iVar7 + 4);
        if (piVar12 != *(int **)(iVar7 + 4)) {
          do {
            piVar13 = piVar12 + 2;
            piVar14 = aiStack_c0c;
            for (iVar11 = 0x303; piVar4 = piStack_4, iVar11 != 0; iVar11 = iVar11 + -1) {
              *piVar14 = *piVar13;
              piVar13 = piVar13 + 1;
              piVar14 = piVar14 + 1;
            }
            uVar8 = (**(code **)(*piStack_4 + 4))();
            if (uVar8 == param_1) {
              puVar9 = (undefined4 *)(**(code **)(*piVar4 + 0x10))();
              uVar1 = *puVar9;
              uVar2 = puVar9[1];
              uVar3 = puVar9[2];
              DAT_006720c4 = (*(code *)**(undefined4 **)pIVar6)();
              _DAT_00672084 = uVar1;
              _DAT_00672088 = uVar2;
              _DAT_0067208c = uVar3;
              DAT_006720c8 = 1;
              return;
            }
            piVar12 = (int *)*piVar12;
          } while (piVar12 != (int *)*(int *)(iVar7 + 4));
        }
        pIVar6 = Universe::GetNextSystem();
        if (pIVar6 == (ISystem *)0x0) {
          return;
        }
      } while( true );
    }
  }
  return;
}

