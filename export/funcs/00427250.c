
void __thiscall FUN_00427250(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  
  iVar5 = (int)param_3;
  piVar8 = *(int **)(param_1 + 4);
  piVar7 = (int *)piVar8[1];
  bVar9 = true;
  if (piVar7 != *(int **)(param_1 + 8)) {
    do {
      piVar8 = piVar7;
      iVar4 = _stricmp((char *)(iVar5 + 4),(char *)(piVar8 + 4));
      bVar9 = iVar4 < 0;
      if (bVar9) {
        piVar7 = (int *)*piVar8;
      }
      else {
        piVar7 = (int *)piVar8[2];
      }
    } while (piVar7 != *(int **)(param_1 + 8));
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (bVar9) {
      if (piVar8 == (int *)**(undefined4 **)(param_1 + 4)) {
        puVar6 = (undefined4 *)FUN_004274b0(&param_3,piVar7,piVar8,iVar5);
        uVar3 = *puVar6;
        *(undefined1 *)(param_2 + 1) = 1;
        *param_2 = uVar3;
        return;
      }
      FUN_00427760();
    }
    iVar4 = _stricmp((char *)(piVar8 + 4),(char *)(iVar5 + 4));
    if (-1 < iVar4) {
      *(undefined1 *)(param_2 + 1) = 0;
      *param_2 = piVar8;
      return;
    }
    puVar6 = (undefined4 *)FUN_004274b0(&param_3,piVar7,piVar8,iVar5);
    *param_2 = *puVar6;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  param_3 = (int *)FUN_00420c20(piVar8,0);
  *param_3 = *(int *)(param_1 + 8);
  param_3[2] = *(int *)(param_1 + 8);
  FUN_004277c0(param_3 + 3,iVar5);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (((piVar8 == *(int **)(param_1 + 4)) || (piVar7 != *(int **)(param_1 + 8))) ||
     (iVar5 = _stricmp((char *)(iVar5 + 4),(char *)(piVar8 + 4)), iVar5 < 0)) {
    *piVar8 = (int)param_3;
    piVar7 = *(int **)(param_1 + 4);
    if (piVar8 == piVar7) {
      piVar7[1] = (int)param_3;
      *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
    }
    else if (piVar8 == (int *)*piVar7) {
      *piVar7 = (int)param_3;
    }
  }
  else {
    piVar8[2] = (int)param_3;
    if (piVar8 == *(int **)(*(int *)(param_1 + 4) + 8)) {
      *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
    }
  }
  piVar7 = param_3;
  piVar8 = param_3;
  if (param_3 != *(int **)(*(int *)(param_1 + 4) + 4)) {
    do {
      piVar1 = (int *)piVar8[1];
      if ((char)piVar1[0x16] != '\0') break;
      piVar2 = *(int **)piVar1[1];
      if (piVar1 == piVar2) {
        iVar5 = ((undefined4 *)piVar1[1])[2];
        if (*(char *)(iVar5 + 0x58) == '\0') {
          *(undefined1 *)(piVar1 + 0x16) = 1;
          *(undefined1 *)(iVar5 + 0x58) = 1;
          *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x58) = 0;
          piVar8 = *(int **)(piVar8[1] + 4);
        }
        else {
          if (piVar8 == (int *)piVar1[2]) {
            FUN_00436ae0(piVar1);
            piVar8 = piVar1;
          }
          *(undefined1 *)(piVar8[1] + 0x58) = 1;
          *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x58) = 0;
          FUN_005ae590(*(undefined4 *)(piVar8[1] + 4));
        }
      }
      else if ((char)piVar2[0x16] == '\0') {
        *(undefined1 *)(piVar1 + 0x16) = 1;
        *(undefined1 *)(piVar2 + 0x16) = 1;
        *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x58) = 0;
        piVar8 = *(int **)(piVar8[1] + 4);
      }
      else {
        if (piVar8 == (int *)*piVar1) {
          FUN_005ae590(piVar1);
          piVar8 = piVar1;
        }
        *(undefined1 *)(piVar8[1] + 0x58) = 1;
        *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x58) = 0;
        FUN_00436ae0(*(undefined4 *)(piVar8[1] + 4));
      }
    } while (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x58) = 1;
  *param_2 = piVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

