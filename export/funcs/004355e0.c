
void FUN_004355e0(void)

{
  CostumeDescriptions *pCVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  
  pCVar1 = GetCostumeDescriptions();
  piVar4 = (int *)**(int **)(pCVar1 + 0x10);
  if (piVar4 != *(int **)(pCVar1 + 0x10)) {
    do {
      pcVar2 = (code *)piVar4[3];
      if ((code *)piVar4[3] == (code *)0x0) {
        pcVar2 = _C_exref;
      }
      uVar3 = CreateID((char *)pcVar2);
      FUN_00434d10(uVar3);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(pCVar1 + 0x10));
  }
  return;
}

