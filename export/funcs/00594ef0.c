
void __thiscall
FUN_00594ef0(int param_1,undefined4 *param_2,int param_3,int *param_4,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_5)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar4 = operator_new(0x24);
  piVar4[1] = (int)param_4;
  *(undefined1 *)(piVar4 + 8) = 0;
  *(undefined1 *)((int)piVar4 + 0x21) = 0;
  *piVar4 = *(int *)(param_1 + 8);
  piVar4[2] = *(int *)(param_1 + 8);
  FUN_005951a0(piVar4 + 3,param_5);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (((param_4 == *(int **)(param_1 + 4)) || (param_3 != *(int *)(param_1 + 8))) ||
     (bVar3 = std::operator<(param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)(param_4 + 3)), bVar3)) {
    *param_4 = (int)piVar4;
    piVar5 = *(int **)(param_1 + 4);
    if (param_4 == piVar5) {
      piVar5[1] = (int)piVar4;
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar4;
    }
    else if (param_4 == (int *)*piVar5) {
      *piVar5 = (int)piVar4;
    }
  }
  else {
    param_4[2] = (int)piVar4;
    if (param_4 == *(int **)(*(int *)(param_1 + 4) + 8)) {
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar4;
    }
  }
  piVar5 = piVar4;
  if (piVar4 != *(int **)(*(int *)(param_1 + 4) + 4)) {
    do {
      piVar6 = (int *)piVar5[1];
      if ((char)piVar6[8] != '\0') break;
      piVar7 = *(int **)piVar6[1];
      if (piVar6 == piVar7) {
        iVar1 = ((undefined4 *)piVar6[1])[2];
        if (*(char *)(iVar1 + 0x20) == '\0') {
          *(undefined1 *)(piVar6 + 8) = 1;
          *(undefined1 *)(iVar1 + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x20) = 0;
          piVar5 = *(int **)(piVar5[1] + 4);
        }
        else {
          if (piVar5 == (int *)piVar6[2]) {
            piVar5 = (int *)piVar6[2];
            piVar6[2] = *piVar5;
            if (*piVar5 != *(int *)(param_1 + 8)) {
              *(int **)(*piVar5 + 4) = piVar6;
            }
            piVar5[1] = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar5;
            }
            else {
              piVar7 = (int *)piVar6[1];
              if (piVar6 == (int *)*piVar7) {
                *piVar7 = (int)piVar5;
              }
              else {
                piVar7[2] = (int)piVar5;
              }
            }
            *piVar5 = (int)piVar6;
            piVar6[1] = (int)piVar5;
            piVar5 = piVar6;
          }
          *(undefined1 *)(piVar5[1] + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x20) = 0;
          piVar6 = *(int **)(piVar5[1] + 4);
          piVar7 = (int *)*piVar6;
          *piVar6 = piVar7[2];
          if (piVar7[2] != *(int *)(param_1 + 8)) {
            *(int **)(piVar7[2] + 4) = piVar6;
          }
          piVar7[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
            piVar7[2] = (int)piVar6;
          }
          else {
            piVar2 = (int *)piVar6[1];
            if (piVar6 == (int *)piVar2[2]) {
              piVar2[2] = (int)piVar7;
              piVar7[2] = (int)piVar6;
            }
            else {
              *piVar2 = (int)piVar7;
              piVar7[2] = (int)piVar6;
            }
          }
LAB_0059511e:
          piVar6[1] = (int)piVar7;
        }
      }
      else {
        if ((char)piVar7[8] != '\0') {
          if (piVar5 == (int *)*piVar6) {
            iVar1 = *piVar6;
            *piVar6 = *(int *)(iVar1 + 8);
            if (*(int *)(iVar1 + 8) != *(int *)(param_1 + 8)) {
              *(int **)(*(int *)(iVar1 + 8) + 4) = piVar6;
            }
            *(int *)(iVar1 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
            }
            else {
              piVar5 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar5[2]) {
                piVar5[2] = iVar1;
              }
              else {
                *piVar5 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar6;
            piVar6[1] = iVar1;
            piVar5 = piVar6;
          }
          *(undefined1 *)(piVar5[1] + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x20) = 0;
          piVar6 = *(int **)(piVar5[1] + 4);
          piVar7 = (int *)piVar6[2];
          piVar6[2] = *piVar7;
          if (*piVar7 != *(int *)(param_1 + 8)) {
            *(int **)(*piVar7 + 4) = piVar6;
          }
          piVar7[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
          }
          else {
            piVar2 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar2) {
              *piVar2 = (int)piVar7;
            }
            else {
              piVar2[2] = (int)piVar7;
            }
          }
          *piVar7 = (int)piVar6;
          goto LAB_0059511e;
        }
        *(undefined1 *)(piVar6 + 8) = 1;
        *(undefined1 *)(piVar7 + 8) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x20) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
    } while (piVar5 != *(int **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) = 1;
  *param_2 = piVar4;
  return;
}

