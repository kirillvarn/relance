
void FUN_00421290(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = *(int **)Pipeline_exref;
  if (DAT_006648d0 == '\0') {
    (**(code **)(*piVar1 + 0x108))(piVar1,0,0);
    piVar1 = *(int **)Pipeline_exref;
    puVar3 = &DAT_005c96f8;
    iVar2 = 1;
    do {
      (**(code **)(*piVar1 + 0xf8))(piVar1,0,iVar2,*(undefined4 *)(puVar3 + 4));
      iVar2 = *(int *)(puVar3 + 8);
      puVar3 = puVar3 + 8;
    } while (iVar2 != 0);
    return;
  }
  iVar2 = (**(code **)(*piVar1 + 0xbc))(piVar1,DAT_006648d4);
  piVar1 = *(int **)Pipeline_exref;
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 0x108))(piVar1,0,DAT_006648d4);
    (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0xb,0);
    piVar1 = *(int **)Pipeline_exref;
    puVar3 = &DAT_005c96c0;
    iVar2 = 1;
    do {
      (**(code **)(*piVar1 + 0xf8))(piVar1,0,iVar2,*(undefined4 *)(puVar3 + 4));
      iVar2 = *(int *)(puVar3 + 8);
      puVar3 = puVar3 + 8;
    } while (iVar2 != 0);
    piVar1 = *(int **)Pipeline_exref;
    puVar3 = &DAT_005c96f8;
    iVar2 = 1;
    do {
      (**(code **)(*piVar1 + 0xf8))(piVar1,1,iVar2,*(undefined4 *)(puVar3 + 4));
      iVar2 = *(int *)(puVar3 + 8);
      puVar3 = puVar3 + 8;
    } while (iVar2 != 0);
    return;
  }
  (**(code **)(*piVar1 + 0x108))(piVar1,0,0);
  piVar1 = *(int **)Pipeline_exref;
  puVar3 = &DAT_005c96f8;
  iVar2 = 1;
  do {
    (**(code **)(*piVar1 + 0xf8))(piVar1,0,iVar2,*(undefined4 *)(puVar3 + 4));
    iVar2 = *(int *)(puVar3 + 8);
    puVar3 = puVar3 + 8;
  } while (iVar2 != 0);
  DAT_006648d4 = iVar2;
  return;
}

