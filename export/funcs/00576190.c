
void __fastcall FUN_00576190(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *local_4;
  
  if (DAT_0067c3a4 != 0) {
    piVar3 = (int *)**(int **)(DAT_0067c3a4 + 4);
    iVar4 = DAT_0067c3a4;
    local_4 = param_1;
    if (piVar3 != *(int **)(DAT_0067c3a4 + 4)) {
      do {
        if ((int *)piVar3[4] == param_1) {
          FUN_0046c8c0(&local_4,piVar3);
          piVar3 = local_4;
          iVar4 = DAT_0067c3a4;
        }
        else {
          piVar5 = (int *)piVar3[2];
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x15);
            piVar2 = (int *)*piVar5;
            while (piVar3 = piVar5, cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x15);
              piVar5 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            piVar5 = (int *)piVar3[1];
            if (piVar3 == (int *)piVar5[2]) {
              do {
                piVar3 = piVar5;
                piVar5 = (int *)piVar3[1];
              } while (piVar3 == (int *)piVar5[2]);
            }
            if ((int *)piVar3[2] != piVar5) {
              piVar3 = piVar5;
            }
          }
        }
      } while (piVar3 != *(int **)(iVar4 + 4));
    }
    if (*(int *)(iVar4 + 0x10) == 0) {
      if (iVar4 != 0) {
        FUN_00575f50();
        FUN_005b7e1d(iVar4);
      }
      DAT_0067c3a4 = 0;
    }
  }
  return;
}

