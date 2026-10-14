
void __thiscall FUN_004ca070(int *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  int local_8;
  
  puVar8 = param_3;
  iVar2 = *param_1;
  if (iVar2 < 8) {
    *param_1 = iVar2 + 1;
    if ((param_2 == 0) && (iVar2 != 0)) {
      piVar4 = param_1 + 0x14e;
      local_8 = 7;
      piVar5 = param_1 + 0x44;
      do {
        if (piVar4 == (int *)0x94) {
          uRam00000090 = 0;
          uRam00000094 = 0;
        }
        else {
          uVar3 = 0xffffffff;
          piVar7 = piVar4 + -0x25;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            iVar2 = *piVar7;
            piVar7 = (int *)((int)piVar7 + 1);
          } while ((char)iVar2 != '\0');
          uVar3 = ~uVar3 - 1;
          if (0x7f < uVar3) {
            uVar3 = 0x7f;
          }
          piVar7 = piVar4 + -0x25;
          piVar9 = piVar4;
          for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *piVar9 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar9 = piVar9 + 1;
          }
          for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *(char *)piVar9 = (char)*piVar7;
            piVar7 = (int *)((int)piVar7 + 1);
            piVar9 = (int *)((int)piVar9 + 1);
          }
          *(undefined1 *)((int)piVar4 + uVar3) = 0;
          piVar4[-1] = uVar3;
        }
        piVar4[0x23] = piVar4[-2];
        piVar4[0x20] = piVar4[-5];
        piVar4[0x21] = piVar4[-4];
        piVar4[0x22] = piVar4[-3];
        piVar7 = piVar5 + -6;
        piVar9 = piVar5;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar9 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
        }
        piVar5[1] = (int)(piVar4 + 0x20);
        piVar4[0x21] = (int)piVar4;
        piVar4 = piVar4 + -0x25;
        local_8 = local_8 + -1;
        piVar5 = piVar5 + -6;
      } while (local_8 != 0);
      iVar2 = 0;
    }
    puVar6 = (uint *)(param_1 + (iVar2 + 2) * 0x25);
    if (param_3 == (uint *)0x0) {
      *puVar6 = 0;
      *(undefined1 *)(puVar6 + 1) = 0;
    }
    else {
      uVar3 = 0xffffffff;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        uVar1 = *param_3;
        param_3 = (uint *)((int)param_3 + 1);
      } while ((char)uVar1 != '\0');
      param_3 = (uint *)(~uVar3 - 1);
      if (0x7f < param_3) {
        param_3 = (uint *)0x7f;
      }
      puVar10 = puVar6;
      for (uVar3 = (uint)param_3 >> 2; puVar10 = puVar10 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = (uint)param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar10 = (char)*puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
        puVar10 = (uint *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)param_3 + 4U + (int)puVar6) = 0;
      *puVar6 = (uint)param_3;
    }
    param_1[iVar2 * 0x25 + 0x6b] = *(int *)Data_exref;
    param_1[iVar2 * 0x25 + 0x6c] = (int)(param_1 + iVar2 * 0x25 + 0x4b);
    param_1[iVar2 * 6 + 0x1b] = (int)(param_1 + iVar2 * 0x25 + 0x6b);
    param_1[iVar2 * 6 + 0x1c] = 0;
    param_1[iVar2 * 6 + 0x1d] = 0;
    param_1[iVar2 * 6 + 0x1a] = 1;
    param_1[(iVar2 * 3 + 0xf) * 2] = 1;
    param_1[iVar2 * 0x25 + 0x6e] = param_2;
  }
  return;
}

