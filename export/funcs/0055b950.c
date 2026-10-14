
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0055b950(int *param_1,int *param_2)

{
  char cVar1;
  char extraout_AL;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  float unaff_ESI;
  undefined4 *puVar7;
  float unaff_EDI;
  undefined4 *puVar8;
  undefined1 *puVar9;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_30 [12];
  undefined4 auStack_24 [5];
  uint auStack_10 [4];
  
  if ((*(byte *)((int)param_1 + 0x331) & 2) != 0) {
    if ((((param_1[1] != 0) && (cVar1 = FUN_0059e6a0(), cVar1 != '\0')) &&
        (iVar3 = (**(code **)(*(int *)param_1[1] + 8))(), iVar3 != 0)) &&
       (*(char *)(iVar3 + 0x2d0) == '\0')) {
      return 0;
    }
    bVar2 = *(byte *)(param_1 + 0xcc);
    if ((bVar2 & 0x10) == 0) {
      if ((*param_2 == -1) && ((iVar3 = param_2[1], iVar3 == 2 || (iVar3 == 3)))) {
        if (iVar3 == 3) {
          bVar2 = bVar2 | 0x80;
        }
        else {
          bVar2 = bVar2 & 0x7f;
        }
        *(byte *)(param_1 + 0xcc) = bVar2;
        if (((int *)param_1[1] != (int *)0x0) &&
           (piVar5 = (int *)(**(code **)(*(int *)param_1[1] + 8))(), piVar5 != (int *)0x0)) {
          iVar3 = *piVar5;
          uVar6 = (**(code **)(*param_1 + 8))(0);
          (**(code **)(iVar3 + 0xa8))(0x28,uVar6);
        }
        *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | 0x14;
        if (param_1[1] != 0) {
          FUN_0059d580();
          piVar5 = (int *)(**(code **)(*(int *)param_1[1] + 8))();
          if (piVar5 != (int *)0x0) {
            iVar3 = *piVar5;
            uVar6 = (**(code **)(*param_1 + 8))(0);
            (**(code **)(iVar3 + 0xa8))(0x2c,uVar6);
          }
        }
        FUN_0059d8d0(param_1);
        return 1;
      }
    }
    else if ((*param_2 == -1) && (param_2[1] == 1)) {
      *(byte *)(param_1 + 0xcc) = bVar2 & 0xeb;
      FUN_0059d960(param_1);
      FUN_004bdd40(auStack_30,(float)DAT_00616840,(float)DAT_00616844);
      puVar7 = &DAT_0067dbfc;
      puVar8 = auStack_24;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      if (DAT_00679aec == (int *)0x0) {
        DAT_00679aec = (int *)FUN_005b73e0();
      }
      puVar9 = auStack_30;
      (**(code **)(*DAT_00679aec + 0x2c))(DAT_00679aec,&fStack_48,auStack_24,puVar9);
      fStack_44 = _DAT_005c75dc /
                  SQRT(unaff_ESI * unaff_ESI + unaff_EDI * unaff_EDI + (float)puVar9 * (float)puVar9
                      );
      fStack_48 = unaff_EDI * fStack_44;
      fStack_44 = unaff_ESI * fStack_44;
      (**(code **)(*param_1 + 0x10))(&stack0xffffffb4);
      if (extraout_AL == '\0') {
        if (((int *)param_1[1] != (int *)0x0) &&
           (piVar5 = (int *)(**(code **)(*(int *)param_1[1] + 8))(), piVar5 != (int *)0x0)) {
          iVar3 = *piVar5;
          uVar6 = (**(code **)(*param_1 + 8))(0);
          (**(code **)(iVar3 + 0xa8))(0x29,uVar6);
        }
        *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfe;
      }
      else {
        if (param_1[0xdd] == -1) {
          if (param_1[0xda] != 0) {
            pcVar4 = (code *)param_1[0xd9];
            if ((code *)param_1[0xd9] == (code *)0x0) {
              pcVar4 = _C_exref;
            }
            auStack_10[0] = CreateID((char *)pcVar4);
            uVar6 = FUN_0042ae40(auStack_10,0,0);
            FUN_004285f0(uVar6);
          }
        }
        else {
          FUN_005645c0(param_1[0xdd]);
        }
        if (-1 < (char)param_1[0xcc]) {
          (**(code **)(*param_1 + 0xb4))();
          return 1;
        }
        if (((int *)param_1[1] != (int *)0x0) &&
           (piVar5 = (int *)(**(code **)(*(int *)param_1[1] + 8))(), piVar5 != (int *)0x0)) {
          iVar3 = *piVar5;
          uVar6 = (**(code **)(*param_1 + 8))(0);
          (**(code **)(iVar3 + 0xa8))(0x27,uVar6);
          return 1;
        }
      }
      return 1;
    }
  }
  return 0;
}

