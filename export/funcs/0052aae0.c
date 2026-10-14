
void __thiscall FUN_0052aae0(int param_1,undefined4 *param_2,float *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  
  pfVar6 = param_3;
  piVar1 = *(int **)(param_1 + 4);
  bVar5 = true;
  piVar9 = piVar1;
  piVar2 = (int *)piVar1[1];
  while (piVar2 != *(int **)(param_1 + 8)) {
    if ((float)piVar2[3] <= *param_3) {
      piVar8 = (int *)piVar2[2];
    }
    else {
      piVar8 = (int *)*piVar2;
    }
    bVar5 = (float)piVar2[3] > *param_3;
    piVar9 = piVar2;
    piVar2 = piVar8;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (bVar5) {
      if (piVar9 == (int *)*piVar1) {
        puVar7 = (undefined4 *)FUN_0052ad20(&param_3,piVar2,piVar9,param_3);
        uVar4 = *puVar7;
        *(undefined1 *)(param_2 + 1) = 1;
        *param_2 = uVar4;
        return;
      }
      FUN_0043c010();
    }
    if ((float)piVar9[3] < *pfVar6) {
      puVar7 = (undefined4 *)FUN_0052ad20(&param_3,piVar2,piVar9,pfVar6);
      *param_2 = *puVar7;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = piVar9;
    return;
  }
  param_3 = (float *)FUN_0040f110(piVar9,0);
  *param_3 = (float)*(int *)(param_1 + 8);
  param_3[2] = (float)*(int *)(param_1 + 8);
  FUN_004e5fc0(param_3 + 3,pfVar6);
  piVar1 = (int *)param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (((piVar9 == *(int **)(param_1 + 4)) || (piVar2 != *(int **)(param_1 + 8))) ||
     (*pfVar6 < (float)piVar9[3])) {
    *piVar9 = (int)param_3;
    piVar2 = *(int **)(param_1 + 4);
    if (piVar9 == piVar2) {
      piVar2[1] = (int)param_3;
      *(float **)(*(int *)(param_1 + 4) + 8) = param_3;
    }
    else if (piVar9 == (int *)*piVar2) {
      *piVar2 = (int)param_3;
    }
  }
  else {
    piVar9[2] = (int)param_3;
    if (piVar9 == *(int **)(*(int *)(param_1 + 4) + 8)) {
      *(float **)(*(int *)(param_1 + 4) + 8) = param_3;
    }
  }
  piVar9 = (int *)param_3;
  if (param_3 != (float *)*(int **)(*(int *)(param_1 + 4) + 4)) {
    do {
      piVar2 = (int *)piVar9[1];
      if ((char)piVar2[5] != '\0') break;
      piVar8 = *(int **)piVar2[1];
      if (piVar2 == piVar8) {
        iVar3 = ((undefined4 *)piVar2[1])[2];
        if (*(char *)(iVar3 + 0x14) == '\0') {
          *(undefined1 *)(piVar2 + 5) = 1;
          *(undefined1 *)(iVar3 + 0x14) = 1;
          *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x14) = 0;
          piVar9 = *(int **)(piVar9[1] + 4);
        }
        else {
          if (piVar9 == (int *)piVar2[2]) {
            FUN_00436ae0(piVar2);
            piVar9 = piVar2;
          }
          *(undefined1 *)(piVar9[1] + 0x14) = 1;
          *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x14) = 0;
          FUN_005ae590(*(undefined4 *)(piVar9[1] + 4));
        }
      }
      else if ((char)piVar8[5] == '\0') {
        *(undefined1 *)(piVar2 + 5) = 1;
        *(undefined1 *)(piVar8 + 5) = 1;
        *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x14) = 0;
        piVar9 = *(int **)(piVar9[1] + 4);
      }
      else {
        if (piVar9 == (int *)*piVar2) {
          FUN_005ae590(piVar2);
          piVar9 = piVar2;
        }
        *(undefined1 *)(piVar9[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x14) = 0;
        FUN_00436ae0(*(undefined4 *)(piVar9[1] + 4));
      }
    } while (piVar9 != *(int **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14) = 1;
  *param_2 = piVar1;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

