
void __thiscall FUN_0057f370(int param_1,undefined4 *param_2,int *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_4;
  
  FUN_0057fb00();
  piVar7 = (int *)*param_3;
  local_4 = param_3;
  if (piVar7 == *(int **)(param_1 + 8)) {
    piVar6 = (int *)param_3[2];
  }
  else {
    piVar8 = (int *)param_3[2];
    piVar6 = piVar7;
    if (piVar8 != *(int **)(param_1 + 8)) {
      cVar2 = *(char *)(*piVar8 + 0xf);
      local_4 = piVar8;
      piVar8 = (int *)*piVar8;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*piVar8 + 0xf);
        local_4 = piVar8;
        piVar8 = (int *)*piVar8;
      }
      piVar6 = (int *)local_4[2];
      if (local_4 != param_3) {
        piVar7[1] = (int)local_4;
        *local_4 = *param_3;
        if (local_4 == (int *)param_3[2]) {
          piVar6[1] = (int)local_4;
        }
        else {
          piVar6[1] = local_4[1];
          *(int **)local_4[1] = piVar6;
          local_4[2] = param_3[2];
          *(int **)(param_3[2] + 4) = local_4;
        }
        if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
          *(int **)(*(int *)(param_1 + 4) + 4) = local_4;
        }
        else {
          puVar5 = (undefined4 *)param_3[1];
          if ((int *)*puVar5 == param_3) {
            *puVar5 = local_4;
          }
          else {
            puVar5[2] = local_4;
          }
        }
        local_4[1] = param_3[1];
        uVar1 = *(undefined1 *)((int)local_4 + 0xe);
        *(undefined1 *)((int)local_4 + 0xe) = *(undefined1 *)((int)param_3 + 0xe);
        *(undefined1 *)((int)param_3 + 0xe) = uVar1;
        local_4 = param_3;
        goto LAB_0057f4a2;
      }
    }
  }
  piVar6[1] = local_4[1];
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
  }
  else {
    puVar5 = (undefined4 *)param_3[1];
    if ((int *)*puVar5 == param_3) {
      *puVar5 = piVar6;
    }
    else {
      puVar5[2] = piVar6;
    }
  }
  if ((int *)**(int **)(param_1 + 4) == param_3) {
    if (param_3[2] == *(int *)(param_1 + 8)) {
      piVar7 = (int *)param_3[1];
    }
    else {
      cVar2 = *(char *)(*piVar6 + 0xf);
      piVar8 = (int *)*piVar6;
      piVar7 = piVar6;
      while (piVar4 = piVar8, cVar2 == '\0') {
        piVar8 = (int *)*piVar4;
        cVar2 = *(char *)((int)piVar8 + 0xf);
        piVar7 = piVar4;
      }
    }
    **(int **)(param_1 + 4) = (int)piVar7;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 8) == param_3) {
    if (*param_3 == *(int *)(param_1 + 8)) {
      piVar7 = (int *)param_3[1];
    }
    else {
      cVar2 = *(char *)(piVar6[2] + 0xf);
      piVar8 = (int *)piVar6[2];
      piVar7 = piVar6;
      while (piVar4 = piVar8, cVar2 == '\0') {
        piVar8 = (int *)piVar4[2];
        cVar2 = *(char *)((int)piVar8 + 0xf);
        piVar7 = piVar4;
      }
    }
    *(int **)(*(int *)(param_1 + 4) + 8) = piVar7;
  }
LAB_0057f4a2:
  if (*(char *)((int)local_4 + 0xe) == '\x01') {
    if (piVar6 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if (*(char *)((int)piVar6 + 0xe) != '\x01') break;
        piVar7 = *(int **)piVar6[1];
        if (piVar6 == piVar7) {
          piVar7 = (int *)((undefined4 *)piVar6[1])[2];
          if (*(char *)((int)piVar7 + 0xe) == '\0') {
            *(undefined1 *)((int)piVar7 + 0xe) = 1;
            *(undefined1 *)(piVar6[1] + 0xe) = 0;
            iVar3 = piVar6[1];
            piVar7 = *(int **)(iVar3 + 8);
            *(int *)(iVar3 + 8) = *piVar7;
            if (*piVar7 != *(int *)(param_1 + 8)) {
              *(int *)(*piVar7 + 4) = iVar3;
            }
            piVar7[1] = *(int *)(iVar3 + 4);
            if (iVar3 == *(int *)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
            }
            else {
              piVar8 = *(int **)(iVar3 + 4);
              if (iVar3 == *piVar8) {
                *piVar8 = (int)piVar7;
              }
              else {
                piVar8[2] = (int)piVar7;
              }
            }
            *piVar7 = iVar3;
            *(int **)(iVar3 + 4) = piVar7;
            piVar7 = *(int **)(piVar6[1] + 8);
          }
          if ((*(char *)(*piVar7 + 0xe) != '\x01') || (*(char *)(piVar7[2] + 0xe) != '\x01')) {
            if (*(char *)(piVar7[2] + 0xe) == '\x01') {
              *(undefined1 *)(*piVar7 + 0xe) = 1;
              iVar3 = *piVar7;
              *(undefined1 *)((int)piVar7 + 0xe) = 0;
              *piVar7 = *(int *)(iVar3 + 8);
              if (*(int *)(iVar3 + 8) != *(int *)(param_1 + 8)) {
                *(int **)(*(int *)(iVar3 + 8) + 4) = piVar7;
              }
              *(int *)(iVar3 + 4) = piVar7[1];
              if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int *)(*(int *)(param_1 + 4) + 4) = iVar3;
              }
              else {
                piVar8 = (int *)piVar7[1];
                if (piVar7 == (int *)piVar8[2]) {
                  piVar8[2] = iVar3;
                }
                else {
                  *piVar8 = iVar3;
                }
              }
              *(int **)(iVar3 + 8) = piVar7;
              piVar7[1] = iVar3;
              piVar7 = *(int **)(piVar6[1] + 8);
            }
            *(undefined1 *)((int)piVar7 + 0xe) = *(undefined1 *)(piVar6[1] + 0xe);
            *(undefined1 *)(piVar6[1] + 0xe) = 1;
            *(undefined1 *)(piVar7[2] + 0xe) = 1;
            piVar7 = (int *)piVar6[1];
            piVar8 = (int *)piVar7[2];
            piVar7[2] = *piVar8;
            if (*piVar8 != *(int *)(param_1 + 8)) {
              *(int **)(*piVar8 + 4) = piVar7;
            }
            piVar8[1] = piVar7[1];
            if (piVar7 == (int *)*(int *)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
              *piVar8 = (int)piVar7;
            }
            else {
              piVar4 = (int *)piVar7[1];
              if (piVar7 == (int *)*piVar4) {
                *piVar4 = (int)piVar8;
                *piVar8 = (int)piVar7;
              }
              else {
                piVar4[2] = (int)piVar8;
                *piVar8 = (int)piVar7;
              }
            }
LAB_0057f714:
            piVar7[1] = (int)piVar8;
            break;
          }
        }
        else {
          if (*(char *)((int)piVar7 + 0xe) == '\0') {
            *(undefined1 *)((int)piVar7 + 0xe) = 1;
            *(undefined1 *)(piVar6[1] + 0xe) = 0;
            piVar7 = (int *)piVar6[1];
            iVar3 = *piVar7;
            *piVar7 = *(int *)(iVar3 + 8);
            if (*(int *)(iVar3 + 8) != *(int *)(param_1 + 8)) {
              *(int **)(*(int *)(iVar3 + 8) + 4) = piVar7;
            }
            *(int *)(iVar3 + 4) = piVar7[1];
            if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int *)(*(int *)(param_1 + 4) + 4) = iVar3;
            }
            else {
              piVar8 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar8[2]) {
                piVar8[2] = iVar3;
              }
              else {
                *piVar8 = iVar3;
              }
            }
            *(int **)(iVar3 + 8) = piVar7;
            piVar7[1] = iVar3;
            piVar7 = *(int **)piVar6[1];
          }
          if ((*(char *)(piVar7[2] + 0xe) != '\x01') || (*(char *)(*piVar7 + 0xe) != '\x01')) {
            if (*(char *)(*piVar7 + 0xe) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0xe) = 1;
              piVar8 = (int *)piVar7[2];
              *(undefined1 *)((int)piVar7 + 0xe) = 0;
              piVar7[2] = *piVar8;
              if (*piVar8 != *(int *)(param_1 + 8)) {
                *(int **)(*piVar8 + 4) = piVar7;
              }
              piVar8[1] = piVar7[1];
              if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
              }
              else {
                piVar4 = (int *)piVar7[1];
                if (piVar7 == (int *)*piVar4) {
                  *piVar4 = (int)piVar8;
                }
                else {
                  piVar4[2] = (int)piVar8;
                }
              }
              *piVar8 = (int)piVar7;
              piVar7[1] = (int)piVar8;
              piVar7 = *(int **)piVar6[1];
            }
            *(undefined1 *)((int)piVar7 + 0xe) = *(undefined1 *)(piVar6[1] + 0xe);
            *(undefined1 *)(piVar6[1] + 0xe) = 1;
            *(undefined1 *)(*piVar7 + 0xe) = 1;
            piVar7 = (int *)piVar6[1];
            piVar8 = (int *)*piVar7;
            *piVar7 = piVar8[2];
            if (piVar8[2] != *(int *)(param_1 + 8)) {
              *(int **)(piVar8[2] + 4) = piVar7;
            }
            piVar8[1] = piVar7[1];
            if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
            }
            else {
              puVar5 = (undefined4 *)piVar7[1];
              if (piVar7 == (int *)puVar5[2]) {
                puVar5[2] = piVar8;
              }
              else {
                *puVar5 = piVar8;
              }
            }
            piVar8[2] = (int)piVar7;
            goto LAB_0057f714;
          }
        }
        *(undefined1 *)((int)piVar7 + 0xe) = 0;
        piVar6 = (int *)piVar6[1];
      } while (piVar6 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)((int)piVar6 + 0xe) = 1;
  }
  FUN_005b7e1d(local_4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *param_2 = param_3;
  return;
}

