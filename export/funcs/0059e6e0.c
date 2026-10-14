
void FUN_0059e6e0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int in_stack_00001008;
  
  FUN_005b7e90();
  piVar1 = *(int **)(in_stack_00001008 + 0xc);
  uVar6 = 0;
  uVar8 = 0;
  do {
    if (piVar1 == (int *)0x0) {
      iVar7 = 0;
      if (0 < (int)uVar6) {
        do {
          (**(code **)(**(int **)(&stack0x00000004 + iVar7 * 4) + 0x34))();
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar8);
      }
      return;
    }
    if ((*(byte *)(piVar1 + 0x1b) & 2) != 0) {
      uVar2 = piVar1[0x1c];
      if (uVar2 == 0) {
        (**(code **)(*piVar1 + 0x34))();
        uVar6 = uVar8;
      }
      else {
        if ((uVar6 == 0) || (*(uint *)(*(int *)(&stack0x00000000 + uVar6 * 4) + 0x70) < uVar2)) {
          if (0x3ff < uVar6) goto LAB_0059e796;
          *(int **)(&stack0x00000004 + uVar6 * 4) = piVar1;
        }
        else {
          iVar7 = 0;
          piVar5 = (int *)register0x00000010;
          if (0 < (int)uVar6) {
            while( true ) {
              iVar3 = piVar5[1];
              uVar4 = *(uint *)(iVar3 + 0x70);
              if (uVar2 < uVar4) break;
              if (((uVar2 == uVar4) && ((float)piVar1[0x1a] < *(float *)(iVar3 + 0x68))) ||
                 (iVar7 = iVar7 + 1, piVar5 = piVar5 + 1, (int)uVar6 <= iVar7)) break;
            }
          }
          if (uVar6 - iVar7 != 0) {
            memmove(&stack0x00000008 + iVar7 * 4,&stack0x00000004 + iVar7 * 4,(uVar6 - iVar7) * 4);
          }
          *(int **)(&stack0x00000004 + iVar7 * 4) = piVar1;
        }
        uVar6 = uVar8 + 1;
        uVar8 = uVar6;
      }
    }
LAB_0059e796:
    piVar1 = (int *)piVar1[2];
  } while( true );
}

