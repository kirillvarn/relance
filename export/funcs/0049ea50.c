
/* WARNING: Removing unreachable block (ram,0x0049efe5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049ea50(int param_1)

{
  float **ppfVar1;
  undefined4 *puVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float **ppfVar10;
  float unaff_ESI;
  int iVar11;
  char cVar12;
  float ***pppfVar13;
  uint uVar14;
  char cVar15;
  undefined4 uVar16;
  float **ppfStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float *pfStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float *pfStack_78;
  float fStack_74;
  float fStack_70;
  float *pfStack_6c;
  float fStack_68;
  float fStack_64;
  float *pfStack_60;
  float *pfStack_5c;
  float afStack_48 [3];
  float fStack_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  if (*(char *)(param_1 + 0x478) == '\0') {
    pfStack_5c = (float *)local_18;
    pfStack_60 = (float *)0x49ea71;
    cVar5 = FUN_00492410();
    if (cVar5 != '\0') {
      pfStack_5c = &local_30;
      pfStack_60 = (float *)0x49ea85;
      cVar5 = FUN_0049e890();
      if (cVar5 != '\0') {
        pfStack_5c = &local_34;
        pfStack_60 = &local_38;
        fStack_64 = 6.788156e-39;
        cVar5 = FUN_004980d0();
        if ((cVar5 != '\0') &&
           ((((DAT_006720a0 != 1 && (DAT_006720a0 != 2)) || (local_38 <= _DAT_005d3f20)) ||
            (_DAT_005d3f1c <= local_34)))) {
          local_24 = local_30 - _DAT_005d3f18;
          local_1c = local_28;
          pfStack_5c = (float *)0x0;
          pfStack_60 = &local_24;
          local_20 = local_2c;
          fStack_64 = 8.40779e-45;
          fStack_68 = 6.788327e-39;
          (**(code **)(**(int **)(param_1 + 0x8e0) + 0xa8))();
          fStack_68 = 0.0;
          pfStack_6c = &local_30;
          fStack_70 = 8.40779e-45;
          fStack_74 = 6.788359e-39;
          (**(code **)(**(int **)(param_1 + 0x8e4) + 0xa8))();
          fStack_74 = 0.0;
          pfStack_78 = &fStack_3c;
          uStack_7c = 6;
          uStack_80 = 0x49eb46;
          (**(code **)(**(int **)(param_1 + 0x7fc) + 0xa8))();
          afStack_48[0] = unaff_ESI + _DAT_005d3f18;
          uStack_80 = 0;
          pfStack_84 = afStack_48;
          uStack_88 = 6;
          uStack_8c = 0x49eb83;
          (**(code **)(**(int **)(param_1 + 0x7f4) + 0xa8))();
          uStack_8c = 0;
          puStack_90 = &stack0xffffffac;
          fStack_94 = 8.40779e-45;
          fStack_98 = 6.788509e-39;
          (**(code **)(**(int **)(param_1 + 0x800) + 0xa8))();
          pfStack_5c = (float *)(fStack_68 + _DAT_005d3f18);
          fStack_98 = 0.0;
          pfStack_60 = pfStack_6c;
          ppfStack_9c = &pfStack_60;
          (**(code **)(**(int **)(param_1 + 0x8e8) + 0xa8))(6);
          fStack_68 = fStack_74 - _DAT_005d3f18;
          pfStack_6c = pfStack_78;
          fStack_64 = fStack_70;
          (**(code **)(**(int **)(param_1 + 0x8ec) + 0xa8))(6,&pfStack_6c,0);
          (**(code **)(**(int **)(param_1 + 0x7f8) + 0xa8))(6,&pfStack_78,0);
          cVar5 = '\0';
          uVar16 = 0;
          uVar9 = 0;
          piVar6 = (int *)FUN_00496d40(&pfStack_78,0);
          cVar15 = (char)((uint)uVar9 >> 8);
          if (piVar6 != (int *)0x0) {
            iVar7 = *piVar6;
            if (iVar7 == 3) {
              uVar16 = CONCAT13(1,(int3)uVar16);
              iVar7 = FUN_004c4690();
              cVar15 = (char)((uint)uVar9 >> 8);
              cVar5 = (char)uVar16;
              ppfVar10 = (float **)0xffffffff;
              iVar11 = 0;
              ppfStack_9c = (float **)0x7fffffff;
              if (0 < iVar7) {
                do {
                  iVar8 = FUN_004c46a0(iVar11);
                  cVar15 = (char)((uint)uVar9 >> 8);
                  cVar5 = (char)uVar16;
                  ppfVar1 = *(float ***)(iVar8 + 0x14);
                  if ((int)ppfVar10 < (int)ppfVar1) {
                    ppfVar10 = ppfVar1;
                  }
                  if ((int)ppfVar1 < (int)ppfStack_9c) {
                    ppfStack_9c = ppfVar1;
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 < iVar7);
              }
              if (((float **)piVar6[0x15] == ppfVar10) || ((float **)piVar6[0x15] == ppfStack_9c)) {
                cVar5 = '\x01';
              }
              iVar7 = FUN_004c46a0(piVar6[0x16] + -1);
              if ((iVar7 != 0) && (*(int *)(iVar7 + 0x10) != 0)) {
                puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x400);
                while ((puVar2 != *(undefined4 **)(param_1 + 0x400) &&
                       ((*(char *)(puVar2[2] + 0x48) == '\0' ||
                        (*(int *)(puVar2[2] + 0x70) != *(int *)(iVar7 + 0x10)))))) {
                  puVar2 = (undefined4 *)*puVar2;
                }
              }
            }
            else if (iVar7 == 4) {
              iVar7 = FUN_00496d40(&pfStack_78,1);
              if (((iVar7 != 0) && (*(int *)(param_1 + 2000) != 0)) && (*(int *)(iVar7 + 100) != 0))
              {
                cVar15 = '\x01';
              }
            }
            else if (((iVar7 == 0) || (iVar7 == 1)) &&
                    ((cVar15 = '\x01', *(int *)(param_1 + 2000) != 0 && (piVar6[0x19] != 0)))) {
              cVar15 = '\x01';
            }
            if ((((*piVar6 == 3) || (*piVar6 == 4)) &&
                (piVar6 = (int *)FUN_00496d40(&pfStack_78,1), piVar6 != (int *)0x0)) &&
               (*piVar6 == 0)) {
              cVar15 = '\x01';
            }
          }
          if ((*(int *)(param_1 + 2000) != 0) || (cVar15 != '\0')) {
            if (cVar15 == '\0') {
              fStack_64 = _DAT_005c75dc / *(float *)(param_1 + 0xf48);
              pfStack_6c = (float *)((float)pfStack_78 * fStack_64);
              fStack_68 = fStack_74 * fStack_64;
              fStack_64 = fStack_64 * fStack_70;
              FUN_004a1b50(*(undefined4 *)(param_1 + 0x7e0),&pfStack_6c,0,1,
                           *(undefined1 *)(param_1 + 0x87e));
            }
            *(float **)(param_1 + 0x90c) = pfStack_78;
            *(float *)(param_1 + 0x910) = fStack_74;
            *(float *)(param_1 + 0x914) = fStack_70;
            *(undefined1 **)(param_1 + 0x918) = puStack_90;
            *(undefined4 *)(param_1 + 0x91c) = uStack_8c;
            *(undefined4 *)(param_1 + 0x920) = uStack_88;
            *(float *)(param_1 + 0x928) = fStack_94;
            uVar14 = 0;
            *(float *)(param_1 + 0x924) = fStack_98;
            *(undefined1 *)(param_1 + 0x92c) = 1;
            (**(code **)(**(int **)(param_1 + 0xad0) + 0xa8))(1,0,0);
            piVar6 = *(int **)(param_1 + 0xad0);
            ppfStack_9c = (float **)((float)ppfStack_9c + (float)piVar6[199]);
            pppfVar13 = &ppfStack_9c;
            fStack_98 = fStack_98 + (float)piVar6[200];
            fStack_94 = fStack_94 + (float)piVar6[0xc9];
            (**(code **)(*piVar6 + 0xa8))(6,pppfVar13,0);
            cVar15 = (char)((uint)pppfVar13 >> 8);
            uVar14 = uVar14 >> 0x18;
            if (*(int *)(param_1 + 2000) == 2) {
              piVar6 = *(int **)(param_1 + 0x8e4);
            }
            else {
              piVar6 = *(int **)(param_1 + 0x8e0);
            }
            (**(code **)(*piVar6 + 0xa8))(1,uVar14,0);
            cVar12 = (char)(uVar14 >> 8);
            FUN_004c4750();
            if ((cVar15 != '\0') || (cVar5 != '\0')) {
              if (*(int *)(param_1 + 2000) != 0) {
                FUN_004c4810();
              }
              (**(code **)**(undefined4 **)(param_1 + 0x7e0))();
              FUN_004c4830();
            }
            (**(code **)(**(int **)(param_1 + 0x8ec) + 0xa8))(1);
            (**(code **)(**(int **)(param_1 + 0x8e8) + 0xa8))(1,cVar12 == '\0',0);
            bVar3 = false;
            iVar7 = FUN_004c4fb0();
            if ((0 < iVar7) && (cVar5 = FUN_004c58e0(), cVar5 != '\0')) {
              bVar3 = true;
            }
            if ((*(int *)(param_1 + 2000) == 0) || (bVar3)) {
              bVar4 = 1;
              uVar9 = 1;
            }
            else {
              bVar4 = 0;
              uVar9 = 0;
            }
            (**(code **)(**(int **)(param_1 + 0x7f4) + 0xa8))(1,uVar9,0);
            cVar15 = (char)((uint)uVar9 >> 0x18);
            uVar14 = (uint)bVar4;
            (**(code **)(**(int **)(param_1 + 0x7f8) + 0xa8))(1,uVar14,0);
            cVar5 = (char)(uVar14 >> 0x10);
            (**(code **)(**(int **)(param_1 + 0x7fc) + 0xa8))(1,cVar15 == '\0',0);
            (**(code **)(**(int **)(param_1 + 0x800) + 0xa8))(1,cVar5 == '\0',0);
            FUN_005645c0(9);
          }
        }
      }
    }
  }
  return;
}

