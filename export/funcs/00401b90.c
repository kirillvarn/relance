
void __thiscall
FUN_00401b90(int param_1,undefined4 *param_2,int param_3,int *param_4,undefined4 *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = operator_new(0x1c);
  piVar2[1] = (int)param_4;
  *(undefined1 *)(piVar2 + 6) = 0;
  *(undefined1 *)((int)piVar2 + 0x19) = 0;
  *piVar2 = *(int *)(param_1 + 8);
  piVar2[2] = *(int *)(param_1 + 8);
  FUN_00401e30(piVar2 + 3,param_5);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (((param_4 == *(int **)(param_1 + 4)) || (param_3 != *(int *)(param_1 + 8))) ||
     (iVar3 = stricmp((char *)*param_5,(char *)param_4[3]), iVar3 < 0)) {
    *param_4 = (int)piVar2;
    piVar4 = *(int **)(param_1 + 4);
    if (param_4 == piVar4) {
      piVar4[1] = (int)piVar2;
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar2;
    }
    else if (param_4 == (int *)*piVar4) {
      *piVar4 = (int)piVar2;
    }
  }
  else {
    param_4[2] = (int)piVar2;
    if (param_4 == *(int **)(*(int *)(param_1 + 4) + 8)) {
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar2;
    }
  }
  piVar4 = piVar2;
  if (piVar2 != *(int **)(*(int *)(param_1 + 4) + 4)) {
    do {
      piVar5 = (int *)piVar4[1];
      if ((char)piVar5[6] != '\0') break;
      piVar6 = *(int **)piVar5[1];
      if (piVar5 == piVar6) {
        piVar6 = (int *)((undefined4 *)piVar5[1])[2];
        if ((char)piVar6[6] != '\0') {
          if (piVar4 == (int *)piVar5[2]) {
            piVar4 = (int *)piVar5[2];
            piVar5[2] = *piVar4;
            if (*piVar4 != *(int *)(param_1 + 8)) {
              *(int **)(*piVar4 + 4) = piVar5;
            }
            piVar4[1] = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar4;
            }
            else {
              piVar6 = (int *)piVar5[1];
              if (piVar5 == (int *)*piVar6) {
                *piVar6 = (int)piVar4;
              }
              else {
                piVar6[2] = (int)piVar4;
              }
            }
            *piVar4 = (int)piVar5;
            piVar5[1] = (int)piVar4;
            piVar4 = piVar5;
          }
          *(undefined1 *)(piVar4[1] + 0x18) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x18) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)*piVar5;
          *piVar5 = piVar6[2];
          if (piVar6[2] != *(int *)(param_1 + 8)) {
            *(int **)(piVar6[2] + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            piVar1 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar1[2]) {
              piVar1[2] = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
            else {
              *piVar1 = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
          }
          goto LAB_00401da5;
        }
LAB_00401c54:
        *(undefined1 *)(piVar5 + 6) = 1;
        *(undefined1 *)(piVar6 + 6) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x18) = 0;
        piVar4 = *(int **)(piVar4[1] + 4);
      }
      else {
        if ((char)piVar6[6] == '\0') goto LAB_00401c54;
        if (piVar4 == (int *)*piVar5) {
          iVar3 = *piVar5;
          *piVar5 = *(int *)(iVar3 + 8);
          if (*(int *)(iVar3 + 8) != *(int *)(param_1 + 8)) {
            *(int **)(*(int *)(iVar3 + 8) + 4) = piVar5;
          }
          *(int *)(iVar3 + 4) = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int *)(*(int *)(param_1 + 4) + 4) = iVar3;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar3;
            }
            else {
              *piVar4 = iVar3;
            }
          }
          *(int **)(iVar3 + 8) = piVar5;
          piVar5[1] = iVar3;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x18) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x18) = 0;
        piVar5 = *(int **)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*piVar6 != *(int *)(param_1 + 8)) {
          *(int **)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
          *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
        }
        else {
          piVar1 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar1) {
            *piVar1 = (int)piVar6;
          }
          else {
            piVar1[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
LAB_00401da5:
        piVar5[1] = (int)piVar6;
      }
    } while (piVar4 != *(int **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x18) = 1;
  *param_2 = piVar2;
  return;
}

