
undefined4 * __thiscall FUN_00401480(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  undefined4 *puVar10;
  int *local_8;
  undefined1 local_4 [4];
  
  puVar5 = param_3;
  piVar7 = *(int **)(param_1 + 4);
  piVar8 = (int *)piVar7[1];
  bVar9 = true;
  if (piVar8 != *(int **)(param_1 + 8)) {
    do {
      piVar7 = piVar8;
      iVar4 = stricmp((char *)*puVar5,(char *)piVar7[3]);
      bVar9 = iVar4 < 0;
      if (bVar9) {
        piVar8 = (int *)*piVar7;
      }
      else {
        piVar8 = (int *)piVar7[2];
      }
    } while (piVar8 != *(int **)(param_1 + 8));
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_8 = piVar7;
    if (bVar9) {
      if (piVar7 == (int *)**(undefined4 **)(param_1 + 4)) {
        puVar5 = (undefined4 *)FUN_00401b90(&param_3,piVar8,piVar7,puVar5);
        *param_2 = *puVar5;
        *(undefined1 *)(param_2 + 1) = 1;
        return param_2;
      }
      FUN_00401dd0();
    }
    iVar4 = stricmp((char *)local_8[3],(char *)*puVar5);
    if (iVar4 < 0) {
      puVar10 = &param_3;
      param_3 = (int *)CONCAT31(param_3._1_3_,1);
      ppiVar6 = (int **)FUN_00401b90(local_4,piVar8,piVar7,puVar5);
    }
    else {
      puVar10 = &param_3;
      param_3 = (int *)((uint)param_3._1_3_ << 8);
      ppiVar6 = &local_8;
    }
    FUN_0046d660(ppiVar6,puVar10);
    return param_2;
  }
  param_3 = (int *)FUN_00471640(piVar7,0);
  *param_3 = *(int *)(param_1 + 8);
  param_3[2] = *(int *)(param_1 + 8);
  FUN_00401e30(param_3 + 3,puVar5);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (((piVar7 == *(int **)(param_1 + 4)) || (piVar8 != *(int **)(param_1 + 8))) ||
     (cVar3 = FUN_00401130(puVar5,piVar7 + 3), cVar3 != '\0')) {
    *piVar7 = (int)param_3;
    piVar8 = *(int **)(param_1 + 4);
    if (piVar7 == piVar8) {
      piVar8[1] = (int)param_3;
      *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
    }
    else if (piVar7 == (int *)*piVar8) {
      *piVar8 = (int)param_3;
    }
  }
  else {
    piVar7[2] = (int)param_3;
    if (piVar7 == *(int **)(*(int *)(param_1 + 4) + 8)) {
      *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
    }
  }
  piVar8 = param_3;
  piVar7 = param_3;
  if (param_3 != *(int **)(*(int *)(param_1 + 4) + 4)) {
    do {
      piVar1 = (int *)piVar7[1];
      if ((char)piVar1[6] != '\0') break;
      piVar2 = *(int **)piVar1[1];
      if (piVar1 == piVar2) {
        iVar4 = ((undefined4 *)piVar1[1])[2];
        if (*(char *)(iVar4 + 0x18) == '\0') {
          *(undefined1 *)(piVar1 + 6) = 1;
          *(undefined1 *)(iVar4 + 0x18) = 1;
          *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x18) = 0;
          piVar7 = *(int **)(piVar7[1] + 4);
        }
        else {
          if (piVar7 == (int *)piVar1[2]) {
            FUN_00436ae0(piVar1);
            piVar7 = piVar1;
          }
          *(undefined1 *)(piVar7[1] + 0x18) = 1;
          *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x18) = 0;
          FUN_005ae590(*(undefined4 *)(piVar7[1] + 4));
        }
      }
      else if ((char)piVar2[6] == '\0') {
        *(undefined1 *)(piVar1 + 6) = 1;
        *(undefined1 *)(piVar2 + 6) = 1;
        *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x18) = 0;
        piVar7 = *(int **)(piVar7[1] + 4);
      }
      else {
        if (piVar7 == (int *)*piVar1) {
          FUN_005ae590(piVar1);
          piVar7 = piVar1;
        }
        *(undefined1 *)(piVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x18) = 0;
        FUN_00436ae0(*(undefined4 *)(piVar7[1] + 4));
      }
    } while (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x18) = 1;
  *param_2 = piVar8;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

