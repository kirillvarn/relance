
void __thiscall FUN_0052cd40(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_34 = param_1;
  bVar3 = SinglePlayer();
  if ((!bVar3) && (piVar1 = *(int **)(param_1 + 4), piVar1 != (int *)0x0)) {
    cVar4 = (**(code **)(*piVar1 + 0x58))();
    if ((cVar4 == '\0') || (cVar4 = (**(code **)(*piVar1 + 0x10))(), cVar4 == '\0')) {
      if ((((*(int *)(param_1 + 0x38) != 0) && ((*(byte *)(*(int *)(param_1 + 0x38) + 8) & 2) == 0))
          || ((piVar1 = *(int **)(param_1 + 0x34), piVar1 != (int *)0x0 &&
              (cVar4 = (**(code **)(*piVar1 + 0x14))(piVar1), cVar4 != '\0')))) ||
         ((*(int *)(param_1 + 0x3c) != 0 && (*(int *)(*(int *)(param_1 + 0x3c) + 0xd4) == 0)))) {
        FUN_004fcef0(param_1 + 0x30);
      }
    }
    else {
      iVar9 = param_1 + 0x30;
      if ((((*(int *)(param_1 + 0x38) == 0) || ((*(byte *)(*(int *)(param_1 + 0x38) + 8) & 2) != 0))
          && ((piVar2 = *(int **)(param_1 + 0x34), piVar2 == (int *)0x0 ||
              (cVar4 = (**(code **)(*piVar2 + 0x14))(piVar2), cVar4 == '\0')))) &&
         ((*(int *)(param_1 + 0x3c) == 0 || (*(int *)(*(int *)(param_1 + 0x3c) + 0xd4) != 0)))) {
        uStack_38 = CreateID("multi_sparks02");
        uStack_10 = 0x3f800000;
        uStack_20 = 0x3f800000;
        uStack_30 = 0x3f800000;
        uStack_14 = 0;
        uStack_18 = 0;
        uStack_1c = 0;
        uStack_24 = 0;
        uStack_28 = 0;
        uStack_2c = 0;
        uStack_4 = 0;
        uStack_8 = 0;
        uStack_c = 0;
        uVar5 = (**(code **)(*piVar1 + 0x84))();
        uVar7 = *(undefined4 *)(param_1 + 8);
        bVar3 = ID_String::IsEmpty((ID_String *)&uStack_38);
        if (!bVar3) {
          puVar8 = &uStack_30;
          uVar6 = FUN_0040f080(&uStack_38,uVar7,uVar5,puVar8,iVar9);
          FUN_00503070(uVar6,uVar7,uVar5,puVar8,iVar9);
        }
      }
    }
  }
  FUN_00532000(param_2);
  return;
}

