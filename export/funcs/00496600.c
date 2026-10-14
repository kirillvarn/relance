
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00496600(int param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  char *pcVar9;
  char *pcVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  byte bStack_481;
  float local_480;
  float local_47c;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  int *local_468;
  float local_464;
  float local_460;
  float local_45c;
  float local_458;
  float local_454;
  float local_450;
  float local_44c;
  float local_448 [4];
  float fStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  char local_410 [260];
  char local_30c [260];
  char local_208 [260];
  char local_104 [260];
  
  pfVar8 = (float *)(param_1 + 0x418);
  local_46c = -(*(float *)(param_1 + 0x420) * _DAT_005c75e0);
  fVar5 = *(float *)(param_1 + 0x3f8) - _DAT_005c75dc;
  local_474 = -(*pfVar8 * _DAT_005c75e0) - *pfVar8 * _DAT_005c75e0 * fVar5;
  local_470 = -(*(float *)(param_1 + 0x41c) * _DAT_005c75e0) -
              *(float *)(param_1 + 0x41c) * _DAT_005c75e0 * fVar5;
  fVar1 = *(float *)(param_1 + 0x3f8);
  local_460 = *(float *)(param_1 + 0x46c) * fVar1 + local_474;
  local_45c = *(float *)(param_1 + 0x470) * fVar1 + local_470;
  local_458 = *(float *)(param_1 + 0x474) * fVar1 +
              (local_46c - *(float *)(param_1 + 0x420) * _DAT_005c75e0 * fVar5);
  local_468 = (int *)**(int **)(param_1 + 0x400);
  local_478 = *(float *)(param_1 + 0x3f8);
  local_480 = *pfVar8 * local_478;
  local_47c = *(float *)(param_1 + 0x41c) * local_478;
  local_478 = *(float *)(param_1 + 0x420) * local_478;
  if (local_468 != *(int **)(param_1 + 0x400)) {
    do {
      piVar4 = (int *)local_468[2];
      iVar7 = *piVar4;
      local_454 = (float)piVar4[1];
      if (((iVar7 != 0) && (iVar7 != 1)) || ((*(uint *)(param_1 + 0x4b0) & (uint)local_454) != 0)) {
        if (iVar7 == 2) {
          cVar2 = *(char *)(param_1 + 0xc68);
          *(undefined1 *)(param_1 + 0xc68) = 0;
          if (_DAT_005d3e68 < (float)piVar4[0xc]) {
            piVar4[0xc] = 0x47dac000;
            *(undefined1 *)(param_1 + 0xc68) = 1;
            piVar4[0x11] = 0;
          }
          if ((float)piVar4[0xc] < _DAT_005d3e64) {
            piVar4[0xc] = -0x38254000;
            *(undefined1 *)(param_1 + 0xc68) = 1;
            piVar4[0x11] = 0x43340000;
          }
          if (_DAT_005d3e68 < (float)piVar4[0xe]) {
            piVar4[0xe] = 0x47dac000;
            *(undefined1 *)(param_1 + 0xc68) = 1;
            piVar4[0x11] = 0x43870000;
          }
          if ((float)piVar4[0xe] < _DAT_005d3e64) {
            piVar4[0xe] = -0x38254000;
            *(undefined1 *)(param_1 + 0xc68) = 1;
            piVar4[0x11] = 0x42b40000;
          }
          if (cVar2 != *(char *)(param_1 + 0xc68)) {
            if (*(char *)(param_1 + 0xc68) == '\0') {
              FUN_0059eee0();
              iVar7 = 0;
              do {
                cVar2 = "Interface\\NeuroNet\\NavMap\\NewNavMap\\SpaceObjects\\"[iVar7];
                local_30c[iVar7] = cVar2;
                iVar7 = iVar7 + 1;
              } while (cVar2 != '\0');
              iVar7 = -1;
              pcVar9 = local_30c;
              do {
                pcVar10 = pcVar9;
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                pcVar10 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar10;
              } while (cVar2 != '\0');
              pcVar9 = "NNM_SM_INFO_POSITION";
              pcVar10 = pcVar10 + -1;
              for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar10 = pcVar10 + 4;
              }
              *pcVar10 = *pcVar9;
              iVar7 = -1;
              pcVar9 = local_30c;
              do {
                pcVar10 = pcVar9;
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                pcVar10 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar10;
              } while (cVar2 != '\0');
              *(undefined4 *)(pcVar10 + -1) = DAT_005d3d84;
              pcVar10[3] = DAT_005d3d88;
              GetFileSysPath(local_104,local_30c,*(IFileSystem **)Data_exref);
              iVar7 = _access(local_104,0);
              if (iVar7 != -1) {
                FUN_0059ec80(local_30c,
                             "Interface\\NeuroNet\\NavMap\\NewNavMap\\SpaceObjects\\spaceobjects.mat"
                            );
              }
            }
            else {
              FUN_0059eee0();
              iVar7 = 0;
              do {
                cVar2 = "Interface\\NeuroNet\\NavMap\\NewNavMap\\SpaceObjects\\"[iVar7];
                local_410[iVar7] = cVar2;
                iVar7 = iVar7 + 1;
              } while (cVar2 != '\0');
              iVar7 = -1;
              pcVar9 = local_410;
              do {
                pcVar10 = pcVar9;
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                pcVar10 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar10;
              } while (cVar2 != '\0');
              *(undefined4 *)(pcVar10 + -1) = s_pBNAV_offscreenarrow_005d3e4e._2_4_;
              *(undefined4 *)(pcVar10 + 3) = s_pBNAV_offscreenarrow_005d3e4e._6_4_;
              *(undefined4 *)(pcVar10 + 7) = s_pBNAV_offscreenarrow_005d3e4e._10_4_;
              *(undefined4 *)(pcVar10 + 0xb) = s_pBNAV_offscreenarrow_005d3e4e._14_4_;
              *(undefined2 *)(pcVar10 + 0xf) = s_pBNAV_offscreenarrow_005d3e4e._18_2_;
              pcVar10[0x11] = s_pBNAV_offscreenarrow_005d3e4e[0x14];
              iVar7 = -1;
              pcVar9 = local_410;
              do {
                pcVar10 = pcVar9;
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                pcVar10 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar10;
              } while (cVar2 != '\0');
              *(undefined4 *)(pcVar10 + -1) = DAT_005d3d84;
              pcVar10[3] = DAT_005d3d88;
              GetFileSysPath(local_208,local_410,*(IFileSystem **)Data_exref);
              iVar7 = _access(local_208,0);
              if (iVar7 != -1) {
                FUN_0059ec80(local_410,
                             "Interface\\NeuroNet\\NavMap\\NewNavMap\\SpaceObjects\\spaceobjects.mat"
                            );
              }
            }
          }
        }
        else {
          if (*(float *)(param_1 + 0x4a8) < (float)piVar4[0xc]) {
            piVar4[0xc] = *(int *)(param_1 + 0x4a8);
          }
          if ((float)piVar4[0xc] < -*(float *)(param_1 + 0x4a8)) {
            piVar4[0xc] = (int)-*(float *)(param_1 + 0x4a8);
          }
          if (*(float *)(param_1 + 0x4ac) < (float)piVar4[0xe]) {
            piVar4[0xe] = *(int *)(param_1 + 0x4ac);
          }
          if ((float)piVar4[0xe] < -*(float *)(param_1 + 0x4ac)) {
            piVar4[0xe] = (int)-*(float *)(param_1 + 0x4ac);
          }
        }
        local_464 = *(float *)(param_1 + 0x4ac) + *(float *)(param_1 + 0x4ac);
        local_474 = local_460 +
                    (((float)piVar4[0xc] + *(float *)(param_1 + 0x4a8)) /
                    (*(float *)(param_1 + 0x4a8) + *(float *)(param_1 + 0x4a8))) * local_480;
        local_470 = local_45c +
                    ((float)_DAT_005c89b8 -
                    (*(float *)(param_1 + 0x4ac) + (float)piVar4[0xe]) / local_464) * local_47c;
        iVar7 = *piVar4;
        local_448[0] = local_458 + local_478;
        fVar1 = (float)piVar4[0xf];
        if (((iVar7 == 2) || (iVar7 == 3)) || (iVar7 == 4)) {
          if ((*(char *)(param_1 + 0x478) == '\0') || (*(char *)(param_1 + 0x8d4) != '\0')) {
            fVar5 = *(float *)(param_1 + 0x3f8) * _DAT_005c75e0;
            if (fVar5 < _DAT_005c75dc) {
              fVar5 = _DAT_005c75dc;
            }
            fVar1 = fVar1 / fVar5;
          }
          else {
            fVar5 = (*(float *)(param_1 + 0x4a8) / *(float *)(param_1 + 0x4a0)) * _DAT_005c75e0;
            if (fVar5 < _DAT_005c75dc) {
              fVar5 = _DAT_005c75dc;
            }
            fVar6 = (*(float *)(param_1 + 0x4a8) /
                    (*(float *)(param_1 + 0x490) + *(float *)(param_1 + 0x4a0))) * _DAT_005c75e0;
            if (fVar6 < _DAT_005c75dc) {
              fVar6 = _DAT_005c75dc;
            }
            fVar1 = (fVar1 / fVar6 - fVar1 / fVar5) * *(float *)(param_1 + 0x47c) + fVar1 / fVar5;
          }
        }
        else {
          fVar1 = fVar1 * *(float *)(param_1 + 0xf48);
        }
        local_46c = -0.54999995;
        fVar1 = (fVar1 / local_464) * local_480;
        if (((uint)local_454 & 4) != 0) {
          fVar1 = fVar1 * _DAT_005c9800;
        }
        local_448[1] = (float)piVar4[0x11];
        local_454 = fVar1 * _DAT_005d3e4c;
        local_450 = local_474;
        local_44c = local_470;
        pfVar8 = (float *)(**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref);
        local_46c = (float)((float10)local_44c * (float10)_DAT_005c77f4);
        iVar7 = 0xc;
        fVar12 = (float10)fcos((float10)local_44c * (float10)_DAT_005c77f4);
        pfVar11 = local_448;
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar11 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar11 = pfVar11 + 1;
        }
        local_448[2] = 0.0;
        uStack_434 = 0;
        uStack_430 = 0;
        uStack_42c = 0;
        uStack_428 = 0x3f800000;
        fVar13 = (float10)fsin((float10)local_46c);
        local_448[0] = (float)fVar12;
        local_448[1] = (float)-fVar13;
        local_448[3] = (float)fVar13;
        fStack_438 = (float)fVar12;
        if (DAT_0067209c == (int *)0x0) {
          DAT_0067209c = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_0067209c + 0x10))(DAT_0067209c,local_448,local_448,local_45c);
        (**(code **)(**(int **)Engine_exref + 0x9c))(*(int **)Engine_exref,piVar4[3],&local_458);
        (**(code **)(**(int **)Engine_exref + 0x8c))
                  (*(int **)Engine_exref,piVar4[3],&stack0xfffffb68);
        (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,piVar4[3],0,0);
        if (piVar4[0x1c] != 0) {
          bStack_481 = 0;
          FUN_004c4da0(piVar4[0x1c],&bStack_481,0);
          bVar3 = *(byte *)(piVar4 + 0x1d);
          *(byte *)(piVar4 + 0x1d) = bVar3 | bStack_481;
          *(byte *)(piVar4 + 0x12) = (bVar3 | bStack_481) & 1;
          if (*(char *)(param_1 + 0x87e) != '\0') {
            *(undefined1 *)(piVar4 + 0x12) = 1;
          }
        }
      }
      local_468 = (int *)*local_468;
    } while (local_468 != (int *)*(int *)(param_1 + 0x400));
  }
  return;
}

