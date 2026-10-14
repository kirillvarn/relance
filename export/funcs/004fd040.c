
void __fastcall FUN_004fd040(int param_1)

{
  byte *pbVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)**(int **)(param_1 + 4);
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      if ((((piVar3[4] == 0) || ((*(byte *)(piVar3[4] + 8) & 2) != 0)) &&
          ((piVar4 = (int *)piVar3[3], piVar4 == (int *)0x0 ||
           (cVar2 = (**(code **)(*piVar4 + 0x14))(piVar4), cVar2 == '\0')))) &&
         ((piVar3[5] == 0 || (*(int *)(piVar3[5] + 0xd4) != 0)))) {
        piVar4 = (int *)*piVar3;
        *(int **)piVar3[1] = piVar4;
        *(int *)(*piVar3 + 4) = piVar3[1];
        FUN_00502d90();
        FUN_005b7e1d(piVar3);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      }
      else {
        if (piVar3[4] != 0) {
          pbVar1 = (byte *)(piVar3[4] + 8);
          *pbVar1 = *pbVar1 | 1;
          FUN_004f7af0();
        }
        piVar4 = (int *)*piVar3;
      }
      piVar3 = piVar4;
    } while (piVar4 != *(int **)(param_1 + 4));
  }
  return;
}

