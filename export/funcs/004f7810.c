
void FUN_004f7810(undefined4 param_1,float param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  
  iVar2 = (&DAT_00674ce4)[param_3 * 3];
joined_r0x004f7826:
  if (iVar2 == 0) {
    return;
  }
  piVar3 = *(int **)(iVar2 + 8);
  iVar2 = *(int *)(iVar2 + 4);
  if ((*(byte *)(piVar3 + 2) & 2) == 0) goto code_r0x004f7849;
  goto LAB_004f7910;
code_r0x004f7849:
  if (piVar3[0x10] == -1) {
    piVar3[0xd] = (int)(param_2 * (float)piVar3[0x13] + (float)piVar3[0xd]);
    piVar3[0xe] = (int)(param_2 * (float)piVar3[0x14] + (float)piVar3[0xe]);
    piVar3[0xf] = (int)(param_2 * (float)piVar3[0x15] + (float)piVar3[0xf]);
  }
  cVar6 = (**(code **)(*piVar3 + 0x14))(param_2,param_1);
  iVar8 = FUN_004fd560(piVar3[0x17]);
  if ((*(char *)(iVar8 + 0x14) == '\0') && (cVar6 == '\0')) {
    if ((piVar3[0x1a] == 0) && ((*(byte *)(piVar3 + 2) & 2) == 0)) {
      piVar3[0x1a] = (int)piVar3;
      FUN_004fc920(piVar3 + 0x18);
      piVar3[0x16] = piVar3[0x16] + 1;
    }
    FUN_004f7db0();
    *(byte *)(piVar3 + 2) = *(byte *)(piVar3 + 2) | 2;
  }
  else {
    cVar7 = (**(code **)(*piVar3 + 0x18))(param_2,param_1);
    if ((cVar7 != '\0') && (cVar6 != '\0')) {
      (**(code **)(*piVar3 + 0x1c))(param_1);
    }
  }
  if (((*(byte *)(piVar3 + 2) & 2) != 0) || (cVar6 = (**(code **)(*piVar3 + 0x10))(), cVar6 == '\0')
     ) {
LAB_004f7910:
    if (piVar3[0x1a] != 0) {
      iVar8 = piVar3[0x17];
      piVar1 = piVar3 + 0x18;
      piVar3[0x1a] = 0;
      if (piVar1 != (int *)0x0) {
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          puVar5 = (undefined4 *)piVar3[0x19];
          (&DAT_00674ce4)[iVar8 * 3] = puVar5;
          if (puVar5 == (undefined4 *)0x0) {
            (&DAT_00674ce8)[iVar8 * 3] = 0;
          }
          else {
            *puVar5 = 0;
          }
        }
        else if (piVar3[0x19] == 0) {
          (&DAT_00674ce8)[iVar8 * 3] = iVar4;
          if (iVar4 != 0) {
            *(undefined4 *)(iVar4 + 4) = 0;
          }
        }
        else {
          *(int *)(iVar4 + 4) = piVar3[0x19];
          *(int *)piVar3[0x19] = *piVar1;
        }
        piVar3[0x19] = 0;
        *piVar1 = 0;
      }
      (&DAT_00674ce0)[iVar8 * 3] = (&DAT_00674ce0)[iVar8 * 3] + -1;
      iVar8 = piVar3[0x16];
      piVar3[0x16] = iVar8 + -1;
      if (iVar8 + -1 < 1) {
        (**(code **)(*piVar3 + 0x20))(1);
      }
    }
  }
  goto joined_r0x004f7826;
}

