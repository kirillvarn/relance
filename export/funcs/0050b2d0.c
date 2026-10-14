
undefined4 __fastcall FUN_0050b2d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((*(int *)(param_1 + 0x58) != 0) && (*(int *)(param_1 + 0x54) != 0)) {
    iVar3 = **(int **)Pipeline_exref;
    uVar2 = FUN_00425640(0);
    (**(code **)(iVar3 + 0x108))(*(undefined4 *)Pipeline_exref,0,uVar2);
    (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0xb,0);
    iVar3 = **(int **)Pipeline_exref;
    uVar2 = FUN_00425640(0);
    (**(code **)(iVar3 + 0x108))(*(undefined4 *)Pipeline_exref,1,uVar2);
    (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,1,0xb,1);
    piVar1 = *(int **)Pipeline_exref;
    puVar4 = &DAT_005db108;
    iVar3 = 1;
    do {
      (**(code **)(*piVar1 + 0xf8))(piVar1,0,iVar3,*(undefined4 *)(puVar4 + 4));
      iVar3 = *(int *)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (iVar3 != 0);
    piVar1 = *(int **)Pipeline_exref;
    puVar4 = &DAT_005db140;
    iVar3 = 1;
    do {
      (**(code **)(*piVar1 + 0xf8))(piVar1,1,iVar3,*(undefined4 *)(puVar4 + 4));
      iVar3 = *(int *)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (iVar3 != 0);
    piVar1 = *(int **)Pipeline_exref;
    puVar4 = &DAT_005db178;
    iVar3 = 1;
    do {
      (**(code **)(*piVar1 + 0xf8))(piVar1,2,iVar3,*(undefined4 *)(puVar4 + 4));
      iVar3 = *(int *)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (iVar3 != 0);
    piVar1 = *(int **)Pipeline_exref;
    puVar4 = &DAT_005db0d8;
    iVar3 = 0x89;
    do {
      (**(code **)(*piVar1 + 0xf0))(piVar1,iVar3,*(undefined4 *)(puVar4 + 4));
      iVar3 = *(int *)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (iVar3 != 0);
    (**(code **)(**(int **)Pipeline_exref + 0x110))(*(int **)Pipeline_exref);
    return 1;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar3 = **(int **)Pipeline_exref;
    uVar2 = FUN_00425640(0);
    (**(code **)(iVar3 + 0x108))(*(undefined4 *)Pipeline_exref,0,uVar2);
    (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0xb,0);
    piVar1 = *(int **)Pipeline_exref;
    puVar4 = &DAT_005db108;
    iVar3 = 1;
    do {
      (**(code **)(*piVar1 + 0xf8))(piVar1,0,iVar3,*(undefined4 *)(puVar4 + 4));
      iVar3 = *(int *)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (iVar3 != 0);
    piVar1 = *(int **)Pipeline_exref;
    puVar4 = &DAT_005db178;
    iVar3 = 1;
    do {
      (**(code **)(*piVar1 + 0xf8))(piVar1,1,iVar3,*(undefined4 *)(puVar4 + 4));
      iVar3 = *(int *)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (iVar3 != 0);
    piVar1 = *(int **)Pipeline_exref;
    puVar4 = &DAT_005db0d8;
    iVar3 = 0x89;
    do {
      (**(code **)(*piVar1 + 0xf0))(piVar1,iVar3,*(undefined4 *)(puVar4 + 4));
      iVar3 = *(int *)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (iVar3 != 0);
    return 1;
  }
  return 0;
}

