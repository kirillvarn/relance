
void FUN_004f73c0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar6 = &DAT_00674ce4;
  do {
    iVar2 = *piVar6;
    while (iVar2 != 0) {
      piVar3 = *(int **)(iVar2 + 8);
      (**(code **)(*piVar3 + 4))();
      if (piVar3[0x1a] != 0) {
        iVar2 = piVar3[0x17];
        piVar1 = piVar3 + 0x18;
        piVar3[0x1a] = 0;
        if (piVar1 != (int *)0x0) {
          iVar4 = *piVar1;
          if (iVar4 == 0) {
            puVar5 = (undefined4 *)piVar3[0x19];
            (&DAT_00674ce4)[iVar2 * 3] = puVar5;
            if (puVar5 == (undefined4 *)0x0) {
              (&DAT_00674ce8)[iVar2 * 3] = 0;
            }
            else {
              *puVar5 = 0;
            }
          }
          else if (piVar3[0x19] == 0) {
            (&DAT_00674ce8)[iVar2 * 3] = iVar4;
            if (iVar4 != 0) {
              *(undefined4 *)(iVar4 + 4) = 0;
            }
          }
          else {
            *(int *)(iVar4 + 4) = piVar3[0x19];
            *(int *)piVar3[0x19] = *piVar1;
          }
          *piVar1 = 0;
          piVar3[0x19] = 0;
        }
        (&DAT_00674ce0)[iVar2 * 3] = (&DAT_00674ce0)[iVar2 * 3] + -1;
        iVar2 = piVar3[0x16];
        piVar3[0x16] = iVar2 + -1;
        if (iVar2 + -1 < 1) {
          (**(code **)(*piVar3 + 0x20))(1);
        }
      }
      iVar2 = *piVar6;
    }
    piVar6 = piVar6 + 3;
  } while ((int)piVar6 < 0x674f18);
  return;
}

