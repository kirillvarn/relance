
void FUN_004b9b40(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((DAT_00672404 != '\0') && (DAT_0067232c == 0)) {
    iVar2 = FUN_0059da10("MissionObjectiveWindow");
    iVar1 = DAT_00672328;
    if (iVar2 == 0) {
      piVar4 = *(int **)(DAT_00672328 + 4);
      piVar3 = operator_new(0x20);
      *piVar3 = iVar1;
      if (piVar4 == (int *)0x0) {
        piVar4 = piVar3;
      }
      piVar3[1] = (int)piVar4;
      *(int **)(iVar1 + 4) = piVar3;
      *(int **)piVar3[1] = piVar3;
      FUN_004bd5d0(piVar3 + 2,&DAT_0067230c);
      DAT_0067232c = DAT_0067232c + 1;
    }
  }
  return;
}

