
void __thiscall FUN_0042c0f0(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  bool bVar8;
  
  iVar4 = (int)param_3;
  piVar1 = *(int **)(param_1 + 4);
  bVar8 = true;
  piVar7 = piVar1;
  piVar2 = (int *)piVar1[1];
  while (piVar2 != *(int **)(param_1 + 8)) {
    bVar8 = *(uint *)((int)param_3 + 4) < (uint)piVar2[4];
    piVar7 = piVar2;
    if (bVar8) {
      piVar2 = (int *)*piVar2;
    }
    else {
      piVar2 = (int *)piVar2[2];
    }
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    param_3 = (int *)FUN_0042ca00(piVar7,0);
    *param_3 = *(int *)(param_1 + 8);
    param_3[2] = *(int *)(param_1 + 8);
    FUN_0042ca80(param_3 + 3,iVar4);
    piVar1 = param_3;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (((piVar7 == *(int **)(param_1 + 4)) || (piVar2 != *(int **)(param_1 + 8))) ||
       (*(uint *)(iVar4 + 4) < (uint)piVar7[4])) {
      *piVar7 = (int)param_3;
      piVar2 = *(int **)(param_1 + 4);
      if (piVar7 == piVar2) {
        piVar2[1] = (int)param_3;
        *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
      else if (piVar7 == (int *)*piVar2) {
        *piVar2 = (int)param_3;
      }
    }
    else {
      piVar7[2] = (int)param_3;
      if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 8)) {
        *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
      }
    }
    piVar7 = param_3;
    if (param_3 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar2 = (int *)piVar7[1];
        if ((char)piVar2[0xe] != '\0') break;
        piVar3 = *(int **)piVar2[1];
        if (piVar2 == piVar3) {
          iVar4 = ((undefined4 *)piVar2[1])[2];
          if (*(char *)(iVar4 + 0x38) == '\0') {
            *(undefined1 *)(piVar2 + 0xe) = 1;
            *(undefined1 *)(iVar4 + 0x38) = 1;
            *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x38) = 0;
            piVar7 = *(int **)(piVar7[1] + 4);
          }
          else {
            if (piVar7 == (int *)piVar2[2]) {
              FUN_00436ae0(piVar2);
              piVar7 = piVar2;
            }
            *(undefined1 *)(piVar7[1] + 0x38) = 1;
            *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x38) = 0;
            FUN_005ae590(*(undefined4 *)(piVar7[1] + 4));
          }
        }
        else if ((char)piVar3[0xe] == '\0') {
          *(undefined1 *)(piVar2 + 0xe) = 1;
          *(undefined1 *)(piVar3 + 0xe) = 1;
          *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x38) = 0;
          piVar7 = *(int **)(piVar7[1] + 4);
        }
        else {
          if (piVar7 == (int *)*piVar2) {
            FUN_005ae590(piVar2);
            piVar7 = piVar2;
          }
          *(undefined1 *)(piVar7[1] + 0x38) = 1;
          *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x38) = 0;
          FUN_00436ae0(*(undefined4 *)(piVar7[1] + 4));
        }
      } while (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x38) = 1;
    *param_2 = piVar1;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar8) {
    if (piVar7 == (int *)*piVar1) goto LAB_0042c2c4;
    FUN_0042ca20();
  }
  if (*(uint *)(iVar4 + 4) <= (uint)piVar7[4]) {
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = piVar7;
    return;
  }
LAB_0042c2c4:
  puVar6 = (undefined4 *)FUN_0042c790(&param_3,piVar2,piVar7,iVar4);
  uVar5 = *puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = uVar5;
  return;
}

