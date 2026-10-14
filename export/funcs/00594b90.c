
void __thiscall
FUN_00594b90(int param_1,undefined4 *param_2,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  bool bVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  
  piVar9 = *(int **)(param_1 + 4);
  piVar8 = (int *)piVar9[1];
  bVar6 = true;
  if (piVar8 != *(int **)(param_1 + 8)) {
    do {
      piVar9 = piVar8;
      bVar6 = std::operator<(param_3,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)(piVar9 + 3));
      if (bVar6) {
        piVar8 = (int *)*piVar9;
      }
      else {
        piVar8 = (int *)piVar9[2];
      }
    } while (piVar8 != *(int **)(param_1 + 8));
  }
  pbVar5 = param_3;
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (bVar6 != false) {
      if (piVar9 == (int *)**(undefined4 **)(param_1 + 4)) {
        puVar7 = (undefined4 *)FUN_00594ef0(&param_3,piVar8,piVar9,param_3);
        uVar4 = *puVar7;
        *(undefined1 *)(param_2 + 1) = 1;
        *param_2 = uVar4;
        return;
      }
      FUN_005a7c20();
    }
    bVar6 = std::operator<((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (piVar9 + 3),pbVar5);
    if (!bVar6) {
      *(undefined1 *)(param_2 + 1) = 0;
      *param_2 = piVar9;
      return;
    }
    puVar7 = (undefined4 *)FUN_00594ef0(&param_3,piVar8,piVar9,param_3);
    *param_2 = *puVar7;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  param_3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            FUN_005a7b80(piVar9,0);
  *(int *)param_3 = *(int *)(param_1 + 8);
  *(int *)((int)param_3 + 8) = *(int *)(param_1 + 8);
  FUN_005951a0((int *)((int)param_3 + 0xc),pbVar5);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (((piVar9 == *(int **)(param_1 + 4)) || (piVar8 != *(int **)(param_1 + 8))) ||
     (bVar6 = std::operator<(pbVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)(piVar9 + 3)), bVar6)) {
    *piVar9 = (int)param_3;
    piVar8 = *(int **)(param_1 + 4);
    if (piVar9 == piVar8) {
      piVar8[1] = (int)param_3;
      *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
       (*(int *)(param_1 + 4) + 8) = param_3;
    }
    else if (piVar9 == (int *)*piVar8) {
      *piVar8 = (int)param_3;
    }
  }
  else {
    piVar9[2] = (int)param_3;
    if (piVar9 == *(int **)(*(int *)(param_1 + 4) + 8)) {
      *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
       (*(int *)(param_1 + 4) + 8) = param_3;
    }
  }
  piVar8 = (int *)param_3;
  piVar9 = (int *)param_3;
  if (param_3 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
      *(int **)(*(int *)(param_1 + 4) + 4)) {
    do {
      piVar1 = (int *)piVar9[1];
      if ((char)piVar1[8] != '\0') break;
      piVar2 = *(int **)piVar1[1];
      if (piVar1 == piVar2) {
        iVar3 = ((undefined4 *)piVar1[1])[2];
        if (*(char *)(iVar3 + 0x20) == '\0') {
          *(undefined1 *)(piVar1 + 8) = 1;
          *(undefined1 *)(iVar3 + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x20) = 0;
          piVar9 = *(int **)(piVar9[1] + 4);
        }
        else {
          if (piVar9 == (int *)piVar1[2]) {
            FUN_00436ae0(piVar1);
            piVar9 = piVar1;
          }
          *(undefined1 *)(piVar9[1] + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x20) = 0;
          FUN_005ae590(*(undefined4 *)(piVar9[1] + 4));
        }
      }
      else if ((char)piVar2[8] == '\0') {
        *(undefined1 *)(piVar1 + 8) = 1;
        *(undefined1 *)(piVar2 + 8) = 1;
        *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x20) = 0;
        piVar9 = *(int **)(piVar9[1] + 4);
      }
      else {
        if (piVar9 == (int *)*piVar1) {
          FUN_005ae590(piVar1);
          piVar9 = piVar1;
        }
        *(undefined1 *)(piVar9[1] + 0x20) = 1;
        *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x20) = 0;
        FUN_00436ae0(*(undefined4 *)(piVar9[1] + 4));
      }
    } while (piVar9 != *(int **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) = 1;
  *param_2 = piVar8;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

