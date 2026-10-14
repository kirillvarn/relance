
void __thiscall FUN_0044c520(int param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  
  pcVar7 = (char *)param_3;
  piVar2 = *(int **)(param_1 + 4);
  piVar9 = (int *)piVar2[1];
  bVar6 = true;
  piVar10 = piVar2;
  if (piVar9 != *(int **)(param_1 + 8)) {
    cVar1 = *(char *)param_3;
    param_3 = (int *)CONCAT31(param_3._1_3_,cVar1);
    do {
      piVar10 = piVar9;
      bVar6 = cVar1 < (char)piVar10[3];
      if (bVar6) {
        piVar9 = (int *)*piVar10;
      }
      else {
        piVar9 = (int *)piVar10[2];
      }
    } while (piVar9 != *(int **)(param_1 + 8));
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    param_3 = (int *)FUN_0044cde0(piVar10,0);
    *param_3 = *(int *)(param_1 + 8);
    param_3[2] = *(int *)(param_1 + 8);
    FUN_0044ce60(param_3 + 3,pcVar7);
    piVar2 = param_3;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (((piVar10 == *(int **)(param_1 + 4)) || (piVar9 != *(int **)(param_1 + 8))) ||
       (*pcVar7 < (char)piVar10[3])) {
      *piVar10 = (int)param_3;
      piVar9 = *(int **)(param_1 + 4);
      if (piVar10 == piVar9) {
        piVar9[1] = (int)param_3;
        *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
      else if (piVar10 == (int *)*piVar9) {
        *piVar9 = (int)param_3;
      }
    }
    else {
      piVar10[2] = (int)param_3;
      if (piVar10 == *(int **)(*(int *)(param_1 + 4) + 8)) {
        *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
    }
    piVar9 = param_3;
    if (param_3 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar10 = (int *)piVar9[1];
        if (*(char *)((int)piVar10 + 0xd) != '\0') break;
        piVar3 = *(int **)piVar10[1];
        if (piVar10 == piVar3) {
          iVar4 = ((undefined4 *)piVar10[1])[2];
          if (*(char *)(iVar4 + 0xd) == '\0') {
            *(undefined1 *)((int)piVar10 + 0xd) = 1;
            *(undefined1 *)(iVar4 + 0xd) = 1;
            *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0xd) = 0;
            piVar9 = *(int **)(piVar9[1] + 4);
          }
          else {
            if (piVar9 == (int *)piVar10[2]) {
              FUN_00436ae0(piVar10);
              piVar9 = piVar10;
            }
            *(undefined1 *)(piVar9[1] + 0xd) = 1;
            *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0xd) = 0;
            FUN_005ae590(*(undefined4 *)(piVar9[1] + 4));
          }
        }
        else if (*(char *)((int)piVar3 + 0xd) == '\0') {
          *(undefined1 *)((int)piVar10 + 0xd) = 1;
          *(undefined1 *)((int)piVar3 + 0xd) = 1;
          *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0xd) = 0;
          piVar9 = *(int **)(piVar9[1] + 4);
        }
        else {
          if (piVar9 == (int *)*piVar10) {
            FUN_005ae590(piVar10);
            piVar9 = piVar10;
          }
          *(undefined1 *)(piVar9[1] + 0xd) = 1;
          *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0xd) = 0;
          FUN_00436ae0(*(undefined4 *)(piVar9[1] + 4));
        }
      } while (piVar9 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0xd) = 1;
    *param_2 = piVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar6) {
    if (piVar10 == (int *)*piVar2) goto LAB_0044c6f7;
    FUN_0044ce00();
  }
  if (*pcVar7 <= (char)piVar10[3]) {
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = piVar10;
    return;
  }
LAB_0044c6f7:
  puVar8 = (undefined4 *)FUN_0044cb40(&param_3,piVar9,piVar10,pcVar7);
  uVar5 = *puVar8;
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = uVar5;
  return;
}

