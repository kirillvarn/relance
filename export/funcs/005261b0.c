
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005261b0(int param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  char cVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uStack_178;
  int iStack_174;
  int *piStack_170;
  char *pcStack_16c;
  char **ppcStack_168;
  char *apcStack_150 [4];
  int *piStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  int *piStack_130;
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [8];
  undefined4 auStack_110 [7];
  undefined1 auStack_f4 [8];
  undefined1 auStack_ec [12];
  undefined4 auStack_e0 [5];
  undefined4 auStack_cc [12];
  undefined4 auStack_9c [4];
  undefined1 auStack_8c [64];
  undefined4 uStack_4c;
  char *pcStack_48;
  
  piStack_130 = (int *)0x22;
  puStack_134 = (undefined1 *)0x5261c2;
  iVar2 = FUN_005792b0();
  if (((iVar2 != 0) && (*(int *)(param_1 + 0xc) != 0)) && (param_2 != (int *)0x0)) {
    piStack_130 = param_2;
    puStack_134 = (undefined1 *)0x5261ed;
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 0xc))();
    *(undefined4 *)(param_1 + 0x28) = *puVar3;
    *(undefined4 *)(param_1 + 0x2c) = puVar3[1];
    *(undefined4 *)(param_1 + 0x30) = puVar3[2];
    if (*(char *)(param_1 + 0x35) != '\0') {
      piStack_140 = *(int **)VertexBuffer_exref;
      puStack_134 = auStack_118;
      uStack_138 = *(undefined4 *)(param_1 + 0xa4);
      uStack_13c = *(undefined4 *)(param_1 + 0xa0);
      apcStack_150[3] = (char *)0x52622c;
      iVar2 = (**(code **)(*piStack_140 + 0x14))();
      if (iVar2 < 0) {
        apcStack_150[3] = "could not lock the vertex buffer for dynamic asteroids";
        apcStack_150[2] = (char *)0x9bd;
        apcStack_150[1] = "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp";
        apcStack_150[0] = "%s(%d) : *** WARNING: %s";
        (**(code **)FDUMP_exref)();
        return;
      }
      apcStack_150[3] = *(char **)(param_1 + 0xa4);
      apcStack_150[2] = (char *)0x0;
      apcStack_150[1] = (char *)(param_1 + 0x38);
      (**(code **)(**(int **)VertexBuffer_exref + 0x20))();
      (**(code **)(**(int **)VertexBuffer_exref + 0x18))();
      ppcStack_168 = *(char ***)(param_1 + 0xa8);
      if (ppcStack_168 != (char **)0x0) {
        pcStack_16c = (char *)0x526277;
        (**(code **)(*ppcStack_168 + 0x20))();
      }
      piVar10 = *(int **)Pipeline_exref;
      puVar6 = &DAT_005dc374;
      apcStack_150[0] = (char *)0x89;
      do {
        ppcStack_168 = *(char ***)(puVar6 + 4);
        iStack_174 = 0x52629e;
        piStack_170 = piVar10;
        pcStack_16c = apcStack_150[0];
        (**(code **)(*piVar10 + 0xf0))();
        apcStack_150[0] = *(char **)(puVar6 + 8);
        puVar6 = puVar6 + 8;
      } while (apcStack_150[0] != (char *)0x0);
      piStack_170 = *(int **)Pipeline_exref;
      ppcStack_168 = apcStack_150;
      pcStack_16c = (char *)0x18;
      iStack_174 = 0x5262c3;
      (**(code **)(*piStack_170 + 0xf4))();
      iStack_174 = 5;
      uStack_178 = 0x18;
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref);
      pcStack_16c = (char *)((uint)pcStack_16c & 0xffffff);
      ppcVar7 = apcStack_150;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppcVar7 = (char *)0x0;
        ppcVar7 = ppcVar7 + 1;
      }
      iVar2 = FUN_005792b0(0x18);
      apcStack_150[2] = *(char **)(param_1 + 0xc4);
      apcStack_150[0] = *(char **)(param_1 + 0xbc);
      apcStack_150[1] = *(char **)(param_1 + 0xc0);
      if (iVar2 == 0) {
        puStack_134 = apcStack_150[3];
        uStack_13c = apcStack_150[1];
        uStack_138 = apcStack_150[2];
        piStack_140 = (int *)apcStack_150[0];
      }
      else {
        piStack_140 = *(int **)(param_1 + 200);
        uStack_13c = *(undefined4 *)(param_1 + 0xcc);
        uStack_138 = *(undefined4 *)(param_1 + 0xd0);
      }
      puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x40))(param_2);
      iVar2 = *(int *)(param_1 + 0x14);
      iVar5 = 0;
      puVar8 = auStack_e0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar8 = puVar8 + 1;
      }
      if (0 < iVar2) {
        do {
          pcVar1 = pcStack_48;
          iVar2 = *(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4);
          if (((iVar2 != 0) && (*(char *)(iVar2 + 0xac) != '\0')) &&
             (*(float *)(iVar2 + 0xb0) < _DAT_005d3e44 ==
              (*(float *)(iVar2 + 0xb0) == _DAT_005d3e44))) {
            if (*pcStack_48 == '\0') {
              FUN_00522700(uStack_4c,0x42c80000);
              *pcVar1 = '\x01';
            }
            puVar3 = (undefined4 *)
                     (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + iVar5 * 4) + 0x10))();
            puVar8 = auStack_110;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar8 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar8 = puVar8 + 1;
            }
            ppcStack_168 = (char **)0x1;
            uVar13 = 7;
            (**(code **)(**(int **)Pipeline_exref + 0x18))(*(int **)Pipeline_exref,7,&ppcStack_168);
            if (iStack_174 == 0) {
              piVar10 = *(int **)Pipeline_exref;
              puVar12 = auStack_11c;
              (**(code **)(*piVar10 + 0x6c))(piVar10,puVar12);
              cVar11 = (char)((uint)piVar10 >> 0x18);
              (**(code **)(**(int **)Pipeline_exref + 0x74))(*(int **)Pipeline_exref,auStack_f4);
            }
            else {
              if (DAT_006753d8 == (int *)0x0) {
                DAT_006753d8 = (int *)FUN_005b73e0();
              }
              puVar12 = auStack_11c;
              puVar9 = auStack_ec;
              (**(code **)(*DAT_006753d8 + 0x1c))(DAT_006753d8,auStack_8c,puVar9,puVar12);
              cVar11 = (char)((uint)puVar9 >> 0x18);
              puVar3 = auStack_9c;
              puVar8 = auStack_cc;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar8 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar8 = puVar8 + 1;
              }
              (**(code **)(**(int **)Pipeline_exref + 0x7c))(*(int **)Pipeline_exref,auStack_cc);
            }
            pcStack_16c = *(char **)(*(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4) + 0xb0);
            if ((float)_DAT_005c89b8 <= (float)pcStack_16c) {
              piVar10 = *(int **)Pipeline_exref;
              puVar6 = &DAT_005dc374;
              iVar2 = 0x89;
              do {
                (**(code **)(*piVar10 + 0xf0))(piVar10,iVar2,*(undefined4 *)(puVar6 + 4));
                iVar2 = *(int *)(puVar6 + 8);
                puVar6 = puVar6 + 8;
              } while (iVar2 != 0);
              (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,0x7f);
            }
            else if (cVar11 == '\0') {
              piVar10 = *(int **)Pipeline_exref;
              puVar6 = &DAT_005dc394;
              iVar2 = 0x89;
              do {
                (**(code **)(*piVar10 + 0xf0))(piVar10,iVar2,*(undefined4 *)(puVar6 + 4));
                iVar2 = *(int *)(puVar6 + 8);
                puVar6 = puVar6 + 8;
              } while (iVar2 != 0);
              (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,5);
            }
            (**(code **)(**(int **)Pipeline_exref + 0xac))(*(int **)Pipeline_exref,&uStack_178);
            (**(code **)(**(int **)Pipeline_exref + 0x120))
                      (*(int **)Pipeline_exref,*(undefined4 *)(param_1 + 0xac),puVar12,uVar13,
                       *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(*(int *)(param_1 + 0xb0) + 8)
                       ,*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0xc),0);
            piVar10 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4) + 0xc0);
            if (piVar10 != (int *)0x0) {
              (**(code **)(*piVar10 + 0xc))(apcStack_150[2]);
            }
            FUN_004fd040();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x14));
      }
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,pcStack_16c);
      piVar10 = *(int **)Pipeline_exref;
      puVar6 = &DAT_005dc374;
      iVar2 = 0x89;
      do {
        (**(code **)(*piVar10 + 0xf0))(piVar10,iVar2,*(undefined4 *)(puVar6 + 4));
        iVar2 = *(int *)(puVar6 + 8);
        puVar6 = puVar6 + 8;
      } while (iVar2 != 0);
    }
  }
  return;
}

