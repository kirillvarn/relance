
void __thiscall FUN_00539f90(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  Vector *pVVar9;
  undefined4 unaff_retaddr;
  undefined4 *puStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  Vector aVStack_50 [8];
  undefined1 auStack_48 [28];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar3 = (int *)FUN_0054baf0();
  if (((param_1 != piVar3) || (iVar4 = FUN_005792b0(), iVar4 != 0)) && (param_3 != 0)) {
    if (*(int *)(param_3 + 8) != 0) {
      iVar4 = FUN_004f79a0(0x84);
      if (iVar4 == 0) {
        puStack_8c = (undefined4 *)0x0;
      }
      else {
        puStack_8c = (undefined4 *)FUN_004f8060(0);
      }
      cVar2 = (**(code **)*puStack_8c)(param_3);
      if (cVar2 == '\0') {
        FUN_004f7a90();
      }
      else {
        iVar4 = 0;
        iVar8 = 0;
        fStack_88 = 100.0;
        iVar6 = iVar4;
        if (0 < DAT_00613e60) {
          piVar3 = param_1 + 0x24;
          do {
            iVar1 = *piVar3;
            iVar6 = iVar8;
            if ((iVar1 == 0) || ((*(byte *)(iVar1 + 8) & 2) != 0)) break;
            if (*(float *)(iVar1 + 0x78) < fStack_88) {
              fStack_88 = *(float *)(iVar1 + 0x78);
              iVar4 = iVar8;
            }
            iVar8 = iVar8 + 1;
            piVar3 = piVar3 + 1;
            iVar6 = iVar4;
          } while (iVar8 < DAT_00613e60);
        }
        if (param_1[iVar6 + 0x24] != 0) {
          FUN_004f8110();
          (**(code **)(*(int *)param_1[iVar6 + 0x24] + 4))();
          FUN_004f7a90();
          param_1[iVar6 + 0x24] = 0;
        }
        param_1[iVar6 + 0x24] = (int)puStack_8c;
        iVar4 = param_1[4];
        if (DAT_006789d0 == (int *)0x0) {
          DAT_006789d0 = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_006789d0 + 0x3c))(DAT_006789d0,auStack_48,iVar4 + 8,param_4);
        iVar4 = param_1[4];
        if (DAT_006789d0 == (int *)0x0) {
          DAT_006789d0 = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_006789d0 + 0x34))(DAT_006789d0,&stack0xffffff6c,iVar4 + 8,unaff_retaddr);
        puVar7 = (undefined4 *)(param_1[4] + 8);
        pVVar9 = aVStack_50;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pVVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          pVVar9 = pVVar9 + 4;
        }
        uStack_24 = 0;
        uStack_28 = 0;
        uStack_2c = 0;
        GetDirectionMatrix((Transform *)&stack0xffffff68,aVStack_50);
        puVar7 = (undefined4 *)&stack0xffffff68;
        pVVar9 = aVStack_50;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pVVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          pVVar9 = pVVar9 + 4;
        }
        uVar5 = (**(code **)(*param_1 + 0x1c))(aVStack_50);
        FUN_004f7d20(param_1,uVar5,uStack_84);
      }
    }
    if (*(int *)(param_3 + 0x18) != 0) {
      (**(code **)(*param_1 + 0x1b4))(param_2,*(int *)(param_3 + 0x18));
    }
  }
  return;
}

