
void __thiscall FUN_0059b6b0(int *param_1,int param_2,code *param_3)

{
  code cVar1;
  ulong uVar2;
  CostumeDescriptions *this;
  bodypart *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  code *pcVar9;
  int *piVar10;
  code *pcVar11;
  int *piVar12;
  code *pcVar13;
  int local_8;
  
  uVar2 = (ulong)param_3;
  this = GetCostumeDescriptions();
  if (param_3 != (code *)0x0) {
    param_3 = (code *)0x0;
    pbVar3 = CostumeDescriptions::find_bodypart(this,param_2,uVar2);
    if ((pbVar3 != (bodypart *)0x0) && (param_3 = *(code **)(pbVar3 + 8), param_3 == (code *)0x0)) {
      param_3 = _C_exref;
    }
    pcVar11 = param_3;
    iVar5 = *param_1;
    if (iVar5 < 8) {
      *param_1 = iVar5 + 1;
      if ((param_2 == 0) && (iVar5 != 0)) {
        piVar7 = param_1 + 0x14e;
        local_8 = 7;
        piVar8 = param_1 + 0x44;
        do {
          if (piVar7 == (int *)&uRam00000094) {
            uRam00000090 = 0;
            uRam00000094 = 0;
          }
          else {
            uVar6 = 0xffffffff;
            piVar10 = piVar7 + -0x25;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              iVar5 = *piVar10;
              piVar10 = (int *)((int)piVar10 + 1);
            } while ((char)iVar5 != '\0');
            uVar6 = ~uVar6 - 1;
            if (0x7f < uVar6) {
              uVar6 = 0x7f;
            }
            piVar10 = piVar7 + -0x25;
            piVar12 = piVar7;
            for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar12 = *piVar10;
              piVar10 = piVar10 + 1;
              piVar12 = piVar12 + 1;
            }
            for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(char *)piVar12 = (char)*piVar10;
              piVar10 = (int *)((int)piVar10 + 1);
              piVar12 = (int *)((int)piVar12 + 1);
            }
            *(undefined1 *)((int)piVar7 + uVar6) = 0;
            piVar7[-1] = uVar6;
          }
          piVar7[0x23] = piVar7[-2];
          piVar7[0x20] = piVar7[-5];
          piVar7[0x21] = piVar7[-4];
          piVar7[0x22] = piVar7[-3];
          piVar10 = piVar8 + -6;
          piVar12 = piVar8;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar12 = *piVar10;
            piVar10 = piVar10 + 1;
            piVar12 = piVar12 + 1;
          }
          piVar8[1] = (int)(piVar7 + 0x20);
          piVar7[0x21] = (int)piVar7;
          piVar7 = piVar7 + -0x25;
          local_8 = local_8 + -1;
          piVar8 = piVar8 + -6;
        } while (local_8 != 0);
        iVar5 = 0;
      }
      pcVar9 = (code *)(param_1 + (iVar5 + 2) * 0x25);
      if (param_3 == (code *)0x0) {
        *(int *)pcVar9 = 0;
        pcVar9[4] = (code)0x0;
      }
      else {
        uVar6 = 0xffffffff;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *param_3;
          param_3 = param_3 + 1;
        } while (cVar1 != (code)0x0);
        param_3 = (code *)(~uVar6 - 1);
        if (0x7f < param_3) {
          param_3 = (code *)0x7f;
        }
        pcVar13 = pcVar9;
        for (uVar6 = (uint)param_3 >> 2; pcVar13 = pcVar13 + 4, uVar6 != 0; uVar6 = uVar6 - 1) {
          *(int *)pcVar13 = *(int *)pcVar11;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = (uint)param_3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcVar9[(int)param_3 + 4] = (code)0x0;
        *(code **)pcVar9 = param_3;
      }
      param_1[iVar5 * 0x25 + 0x6b] = *(int *)Data_exref;
      param_1[iVar5 * 0x25 + 0x6c] = (int)(param_1 + iVar5 * 0x25 + 0x4b);
      param_1[iVar5 * 6 + 0x1b] = (int)(param_1 + iVar5 * 0x25 + 0x6b);
      param_1[iVar5 * 6 + 0x1a] = 1;
      param_1[iVar5 * 6 + 0x1c] = 0;
      param_1[iVar5 * 6 + 0x1d] = 0;
      param_1[(iVar5 * 3 + 0xf) * 2] = 1;
      param_1[iVar5 * 0x25 + 0x6e] = param_2;
    }
  }
  return;
}

