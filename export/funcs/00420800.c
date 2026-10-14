
void __thiscall FUN_00420800(int param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_4;
  
  FUN_00420c40();
  piVar6 = (int *)*param_3;
  local_4 = param_3;
  if (piVar6 == *(int **)(param_1 + 8)) {
    piVar5 = (int *)param_3[2];
  }
  else {
    piVar7 = (int *)param_3[2];
    piVar5 = piVar6;
    if (piVar7 != *(int **)(param_1 + 8)) {
      cVar1 = *(char *)(*piVar7 + 0x59);
      local_4 = piVar7;
      piVar7 = (int *)*piVar7;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar7 + 0x59);
        local_4 = piVar7;
        piVar7 = (int *)*piVar7;
      }
      piVar5 = (int *)local_4[2];
      if (local_4 != param_3) {
        piVar6[1] = (int)local_4;
        *local_4 = *param_3;
        if (local_4 == (int *)param_3[2]) {
          piVar5[1] = (int)local_4;
        }
        else {
          piVar5[1] = local_4[1];
          *(int **)local_4[1] = piVar5;
          local_4[2] = param_3[2];
          *(int **)(param_3[2] + 4) = local_4;
        }
        if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
          *(int **)(*(int *)(param_1 + 4) + 4) = local_4;
        }
        else {
          puVar4 = (undefined4 *)param_3[1];
          if ((int *)*puVar4 == param_3) {
            *puVar4 = local_4;
          }
          else {
            puVar4[2] = local_4;
          }
        }
        local_4[1] = param_3[1];
        iVar2 = local_4[0x16];
        *(char *)(local_4 + 0x16) = (char)param_3[0x16];
        *(char *)(param_3 + 0x16) = (char)iVar2;
        local_4 = param_3;
        goto LAB_00420932;
      }
    }
  }
  piVar5[1] = local_4[1];
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar5;
  }
  else {
    puVar4 = (undefined4 *)param_3[1];
    if ((int *)*puVar4 == param_3) {
      *puVar4 = piVar5;
    }
    else {
      puVar4[2] = piVar5;
    }
  }
  if ((int *)**(int **)(param_1 + 4) == param_3) {
    if (param_3[2] == *(int *)(param_1 + 8)) {
      piVar6 = (int *)param_3[1];
    }
    else {
      cVar1 = *(char *)(*piVar5 + 0x59);
      piVar7 = (int *)*piVar5;
      piVar6 = piVar5;
      while (piVar3 = piVar7, cVar1 == '\0') {
        piVar7 = (int *)*piVar3;
        cVar1 = *(char *)((int)piVar7 + 0x59);
        piVar6 = piVar3;
      }
    }
    **(int **)(param_1 + 4) = (int)piVar6;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 8) == param_3) {
    if (*param_3 == *(int *)(param_1 + 8)) {
      piVar6 = (int *)param_3[1];
    }
    else {
      cVar1 = *(char *)(piVar5[2] + 0x59);
      piVar7 = (int *)piVar5[2];
      piVar6 = piVar5;
      while (piVar3 = piVar7, cVar1 == '\0') {
        piVar7 = (int *)piVar3[2];
        cVar1 = *(char *)((int)piVar7 + 0x59);
        piVar6 = piVar3;
      }
    }
    *(int **)(*(int *)(param_1 + 4) + 8) = piVar6;
  }
LAB_00420932:
  if ((char)local_4[0x16] == '\x01') {
    if (piVar5 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if ((char)piVar5[0x16] != '\x01') break;
        piVar6 = *(int **)piVar5[1];
        if (piVar5 == piVar6) {
          piVar6 = (int *)((undefined4 *)piVar5[1])[2];
          if ((char)piVar6[0x16] == '\0') {
            *(undefined1 *)(piVar6 + 0x16) = 1;
            *(undefined1 *)(piVar5[1] + 0x58) = 0;
            iVar2 = piVar5[1];
            piVar6 = *(int **)(iVar2 + 8);
            *(int *)(iVar2 + 8) = *piVar6;
            if (*piVar6 != *(int *)(param_1 + 8)) {
              *(int *)(*piVar6 + 4) = iVar2;
            }
            piVar6[1] = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
            }
            else {
              piVar7 = *(int **)(iVar2 + 4);
              if (iVar2 == *piVar7) {
                *piVar7 = (int)piVar6;
              }
              else {
                piVar7[2] = (int)piVar6;
              }
            }
            *piVar6 = iVar2;
            *(int **)(iVar2 + 4) = piVar6;
            piVar6 = *(int **)(piVar5[1] + 8);
          }
          if ((*(char *)(*piVar6 + 0x58) != '\x01') || (*(char *)(piVar6[2] + 0x58) != '\x01')) {
            if (*(char *)(piVar6[2] + 0x58) == '\x01') {
              *(undefined1 *)(*piVar6 + 0x58) = 1;
              iVar2 = *piVar6;
              *(undefined1 *)(piVar6 + 0x16) = 0;
              *piVar6 = *(int *)(iVar2 + 8);
              if (*(int *)(iVar2 + 8) != *(int *)(param_1 + 8)) {
                *(int **)(*(int *)(iVar2 + 8) + 4) = piVar6;
              }
              *(int *)(iVar2 + 4) = piVar6[1];
              if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int *)(*(int *)(param_1 + 4) + 4) = iVar2;
              }
              else {
                piVar7 = (int *)piVar6[1];
                if (piVar6 == (int *)piVar7[2]) {
                  piVar7[2] = iVar2;
                }
                else {
                  *piVar7 = iVar2;
                }
              }
              *(int **)(iVar2 + 8) = piVar6;
              piVar6[1] = iVar2;
              piVar6 = *(int **)(piVar5[1] + 8);
            }
            *(undefined1 *)(piVar6 + 0x16) = *(undefined1 *)(piVar5[1] + 0x58);
            *(undefined1 *)(piVar5[1] + 0x58) = 1;
            *(undefined1 *)(piVar6[2] + 0x58) = 1;
            piVar6 = (int *)piVar5[1];
            piVar7 = (int *)piVar6[2];
            piVar6[2] = *piVar7;
            if (*piVar7 != *(int *)(param_1 + 8)) {
              *(int **)(*piVar7 + 4) = piVar6;
            }
            piVar7[1] = piVar6[1];
            if (piVar6 == (int *)*(int *)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
              *piVar7 = (int)piVar6;
            }
            else {
              piVar3 = (int *)piVar6[1];
              if (piVar6 == (int *)*piVar3) {
                *piVar3 = (int)piVar7;
                *piVar7 = (int)piVar6;
              }
              else {
                piVar3[2] = (int)piVar7;
                *piVar7 = (int)piVar6;
              }
            }
LAB_00420ba4:
            piVar6[1] = (int)piVar7;
            break;
          }
        }
        else {
          if ((char)piVar6[0x16] == '\0') {
            *(undefined1 *)(piVar6 + 0x16) = 1;
            *(undefined1 *)(piVar5[1] + 0x58) = 0;
            piVar6 = (int *)piVar5[1];
            iVar2 = *piVar6;
            *piVar6 = *(int *)(iVar2 + 8);
            if (*(int *)(iVar2 + 8) != *(int *)(param_1 + 8)) {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar6;
            }
            *(int *)(iVar2 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int *)(*(int *)(param_1 + 4) + 4) = iVar2;
            }
            else {
              piVar7 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar7[2]) {
                piVar7[2] = iVar2;
              }
              else {
                *piVar7 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar6;
            piVar6[1] = iVar2;
            piVar6 = *(int **)piVar5[1];
          }
          if ((*(char *)(piVar6[2] + 0x58) != '\x01') || (*(char *)(*piVar6 + 0x58) != '\x01')) {
            if (*(char *)(*piVar6 + 0x58) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x58) = 1;
              piVar7 = (int *)piVar6[2];
              *(undefined1 *)(piVar6 + 0x16) = 0;
              piVar6[2] = *piVar7;
              if (*piVar7 != *(int *)(param_1 + 8)) {
                *(int **)(*piVar7 + 4) = piVar6;
              }
              piVar7[1] = piVar6[1];
              if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
              }
              else {
                piVar3 = (int *)piVar6[1];
                if (piVar6 == (int *)*piVar3) {
                  *piVar3 = (int)piVar7;
                }
                else {
                  piVar3[2] = (int)piVar7;
                }
              }
              *piVar7 = (int)piVar6;
              piVar6[1] = (int)piVar7;
              piVar6 = *(int **)piVar5[1];
            }
            *(undefined1 *)(piVar6 + 0x16) = *(undefined1 *)(piVar5[1] + 0x58);
            *(undefined1 *)(piVar5[1] + 0x58) = 1;
            *(undefined1 *)(*piVar6 + 0x58) = 1;
            piVar6 = (int *)piVar5[1];
            piVar7 = (int *)*piVar6;
            *piVar6 = piVar7[2];
            if (piVar7[2] != *(int *)(param_1 + 8)) {
              *(int **)(piVar7[2] + 4) = piVar6;
            }
            piVar7[1] = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
            }
            else {
              puVar4 = (undefined4 *)piVar6[1];
              if (piVar6 == (int *)puVar4[2]) {
                puVar4[2] = piVar7;
              }
              else {
                *puVar4 = piVar7;
              }
            }
            piVar7[2] = (int)piVar6;
            goto LAB_00420ba4;
          }
        }
        *(undefined1 *)(piVar6 + 0x16) = 0;
        piVar5 = (int *)piVar5[1];
      } while (piVar5 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar5 + 0x16) = 1;
  }
  FUN_00420cb0();
  FUN_005b7e1d(local_4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *param_2 = param_3;
  return;
}

