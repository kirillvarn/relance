
void __thiscall FUN_004e5860(int param_1,undefined4 *param_2,ushort *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  
  puVar6 = param_3;
  piVar1 = *(int **)(param_1 + 4);
  bVar9 = true;
  piVar8 = piVar1;
  piVar2 = (int *)piVar1[1];
  while (piVar2 != *(int **)(param_1 + 8)) {
    bVar9 = *param_3 < *(ushort *)(piVar2 + 3);
    piVar8 = piVar2;
    if (bVar9) {
      piVar2 = (int *)*piVar2;
    }
    else {
      piVar2 = (int *)piVar2[2];
    }
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    param_3 = (ushort *)FUN_0040f110(piVar8,0);
    *(int *)param_3 = *(int *)(param_1 + 8);
    *(int *)((int)param_3 + 8) = *(int *)(param_1 + 8);
    FUN_004e5fc0((int *)((int)param_3 + 0xc),puVar6);
    piVar1 = (int *)param_3;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (((piVar8 == *(int **)(param_1 + 4)) || (piVar2 != *(int **)(param_1 + 8))) ||
       (*puVar6 < *(ushort *)(piVar8 + 3))) {
      *piVar8 = (int)param_3;
      piVar2 = *(int **)(param_1 + 4);
      if (piVar8 == piVar2) {
        piVar2[1] = (int)param_3;
        *(ushort **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
      else if (piVar8 == (int *)*piVar2) {
        *piVar2 = (int)param_3;
      }
    }
    else {
      piVar8[2] = (int)param_3;
      if (piVar8 == *(int **)(*(int *)(param_1 + 4) + 8)) {
        *(ushort **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
    }
    piVar8 = (int *)param_3;
    if (param_3 != (ushort *)*(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar2 = (int *)piVar8[1];
        if ((char)piVar2[5] != '\0') break;
        piVar3 = *(int **)piVar2[1];
        if (piVar2 == piVar3) {
          iVar4 = ((undefined4 *)piVar2[1])[2];
          if (*(char *)(iVar4 + 0x14) == '\0') {
            *(undefined1 *)(piVar2 + 5) = 1;
            *(undefined1 *)(iVar4 + 0x14) = 1;
            *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
            piVar8 = *(int **)(piVar8[1] + 4);
          }
          else {
            if (piVar8 == (int *)piVar2[2]) {
              FUN_00436ae0(piVar2);
              piVar8 = piVar2;
            }
            *(undefined1 *)(piVar8[1] + 0x14) = 1;
            *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
            FUN_005ae590(*(undefined4 *)(piVar8[1] + 4));
          }
        }
        else if ((char)piVar3[5] == '\0') {
          *(undefined1 *)(piVar2 + 5) = 1;
          *(undefined1 *)(piVar3 + 5) = 1;
          *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
          piVar8 = *(int **)(piVar8[1] + 4);
        }
        else {
          if (piVar8 == (int *)*piVar2) {
            FUN_005ae590(piVar2);
            piVar8 = piVar2;
          }
          *(undefined1 *)(piVar8[1] + 0x14) = 1;
          *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
          FUN_00436ae0(*(undefined4 *)(piVar8[1] + 4));
        }
      } while (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14) = 1;
    *param_2 = piVar1;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar9) {
    if (piVar8 == (int *)*piVar1) goto LAB_004e5a39;
    FUN_0043c010();
  }
  if (*puVar6 <= *(ushort *)(piVar8 + 3)) {
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = piVar8;
    return;
  }
LAB_004e5a39:
  puVar7 = (undefined4 *)FUN_004e5d70(&param_3,piVar2,piVar8,puVar6);
  uVar5 = *puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = uVar5;
  return;
}

