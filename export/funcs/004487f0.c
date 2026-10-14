
void __fastcall FUN_004487f0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  Ship *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [9];
  char *local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9a73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00446bf0();
  iVar1 = param_1[1];
  local_4c = *(undefined4 *)(iVar1 + 4);
  local_48 = *(undefined4 *)(iVar1 + 8);
  local_44 = *(undefined4 *)(iVar1 + 0xc);
  puVar6 = (undefined4 *)(iVar1 + 0x10);
  puVar7 = local_40;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_18 = 1;
  local_14 = *(undefined4 *)(iVar1 + 8);
  local_4 = 0;
  malloc_strcpy(&local_1c,*(char **)(iVar1 + 0x3c));
  uVar2 = FUN_004c3e10();
  local_50 = Archetype::GetShip(uVar2);
  local_10 = FUN_004c4060();
  pvVar3 = operator_new(0xb0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00446ef0(*param_1,&local_50);
  }
  param_1[2] = uVar4;
  local_4 = 0xffffffff;
  FUN_00446c50();
  ExceptionList = local_c;
  return;
}

