
void FUN_00557170(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_stack_00000018;
  char in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  undefined4 *in_stack_00000028;
  int *in_stack_0000002c;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 local_c [12];
  
  puVar3 = in_stack_00000028;
  iVar2 = in_stack_00000024;
  iVar7 = *in_stack_0000002c;
  if (0 < iVar7) {
    puVar6 = in_stack_00000028;
    do {
      *(undefined4 *)((in_stack_00000024 - (int)in_stack_00000028) + (int)puVar6) = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *in_stack_0000002c = 0;
  in_stack_00000024 = 0;
  if (0 < param_2) {
    do {
      piVar1 = *(int **)(param_1 + in_stack_00000024 * 4);
      if (((piVar1 != (int *)0x0) && (iVar7 = *piVar1, iVar7 != 0)) &&
         ((char)piVar1[1] == in_stack_0000001c)) {
        puVar6 = &stack0x00000028;
        puVar9 = &stack0x0000000c;
        uVar10 = in_stack_00000018;
        uVar5 = FUN_00411370(local_c,0,0);
        cVar4 = FUN_005586f0(iVar7 + 0xc,iVar7 + 0x98,uVar5,puVar9,uVar10,puVar6);
        if (cVar4 != '\0') {
          iVar7 = *in_stack_0000002c;
          iVar8 = 0;
          if (0 < iVar7) {
            do {
              if ((float)puVar3[iVar8] <= (float)in_stack_00000028) break;
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar7);
          }
          if (iVar8 < iVar7) {
            puVar6 = puVar3 + iVar7 + -1;
            do {
              *(undefined4 *)(iVar2 + iVar7 * 4) =
                   *(undefined4 *)((int)puVar6 + (iVar2 - (int)puVar3));
              puVar6[1] = *puVar6;
              iVar7 = iVar7 + -1;
              puVar6 = puVar6 + -1;
            } while (iVar8 < iVar7);
          }
          *(int *)(iVar2 + iVar8 * 4) = *piVar1;
          puVar3[iVar8] = in_stack_00000028;
          *in_stack_0000002c = *in_stack_0000002c + 1;
        }
      }
      in_stack_00000024 = in_stack_00000024 + 1;
    } while (in_stack_00000024 < param_2);
  }
  if (in_stack_00000020 < *in_stack_0000002c) {
    *in_stack_0000002c = in_stack_00000020;
  }
  return;
}

