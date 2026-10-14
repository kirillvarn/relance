
bool FUN_00516910(int param_1,char param_2)

{
  char cVar1;
  CETradeLaneEquip *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_30 [36];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar5 = (int *)**(int **)(param_1 + 0xb8);
  if (piVar5 != *(int **)(param_1 + 0xb8)) {
    do {
      pCVar2 = CETradeLaneEquip::cast(*(CEquip **)(piVar5[2] + 4));
      if (pCVar2 != (CETradeLaneEquip *)0x0) {
        iVar6 = piVar5[2];
        goto LAB_0051694c;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0xb8));
  }
  iVar6 = 0;
LAB_0051694c:
  if (param_2 == '\0') {
    iVar3 = *(int *)(iVar6 + 0x30) + 1;
  }
  else {
    iVar3 = *(int *)(iVar6 + 0x30) + -1;
  }
  *(int *)(iVar6 + 0x30) = iVar3;
  if (iVar3 == 0) {
    FUN_00516d10();
  }
  else {
    FUN_004fd0d0(0x28);
  }
  bVar7 = *(int *)(iVar6 + 0x30) == 0;
  iVar6 = FUN_00515200(param_1,1,0);
  if (((iVar6 != 0) && (*(bool *)(iVar6 + 0x1d) = bVar7, !bVar7)) &&
     ((((*(int *)(iVar6 + 0x38) != 0 && ((*(byte *)(*(int *)(iVar6 + 0x38) + 8) & 2) == 0)) ||
       ((piVar5 = *(int **)(iVar6 + 0x34), piVar5 != (int *)0x0 &&
        (cVar1 = (**(code **)(*piVar5 + 0x14))(piVar5), cVar1 != '\0')))) ||
      ((*(int *)(iVar6 + 0x3c) != 0 && (*(int *)(*(int *)(iVar6 + 0x3c) + 0xd4) == 0)))))) {
    if (*(int **)(iVar6 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(iVar6 + 0x38) + 4))();
    }
    piVar5 = *(int **)(iVar6 + 0x34);
    if (piVar5 != (int *)0x0) {
      FUN_004215b0();
      uStack_4 = 0;
      uStack_8 = 0;
      uStack_c = 0;
      (**(code **)(*piVar5 + 0x94))(0xffffffff,auStack_30);
      (**(code **)(**(int **)(iVar6 + 0x34) + 0x60))();
    }
    if (*(int *)(iVar6 + 0x3c) != 0) {
      FUN_005379b0();
      (**(code **)(**(int **)(iVar6 + 0x3c) + 8))();
    }
    FUN_00502d90();
  }
  iVar6 = FUN_00515200(param_1,0,0);
  if (((iVar6 != 0) && (*(bool *)(iVar6 + 0x1d) = bVar7, !bVar7)) &&
     (((*(int *)(iVar6 + 0x38) != 0 && ((*(byte *)(*(int *)(iVar6 + 0x38) + 8) & 2) == 0)) ||
      (((piVar5 = *(int **)(iVar6 + 0x34), piVar5 != (int *)0x0 &&
        (cVar1 = (**(code **)(*piVar5 + 0x14))(piVar5), cVar1 != '\0')) ||
       ((*(int *)(iVar6 + 0x3c) != 0 && (*(int *)(*(int *)(iVar6 + 0x3c) + 0xd4) == 0)))))))) {
    if (*(int **)(iVar6 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(iVar6 + 0x38) + 4))();
    }
    if (*(int **)(iVar6 + 0x34) != (int *)0x0) {
      iVar3 = **(int **)(iVar6 + 0x34);
      uVar4 = FUN_004b5150();
      (**(code **)(iVar3 + 0x94))(0xffffffff,uVar4);
      (**(code **)(**(int **)(iVar6 + 0x34) + 0x60))();
    }
    if (*(int *)(iVar6 + 0x3c) != 0) {
      FUN_005379b0();
      (**(code **)(**(int **)(iVar6 + 0x3c) + 8))();
    }
    FUN_00502d90();
  }
  return bVar7;
}

