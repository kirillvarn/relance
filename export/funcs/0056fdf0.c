
void __fastcall FUN_0056fdf0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_24;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c3098;
  local_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  uVar8 = *(uint *)(param_1 + 0x298);
  puVar5 = (undefined *)0x0;
  local_4 = 0;
  if (uVar8 < 8) {
    if (*(char *)(uVar8 + 0x29c + param_1) == '\0') {
      puVar5 = (&PTR_LAB_00614ac0)[uVar8];
    }
    else {
      puVar5 = (&PTR_LAB_00614aa0)[uVar8];
    }
  }
  ExceptionList = &local_c;
  FUN_005aca40(local_1c,puVar5,param_1 + 0x2a4);
  FUN_0058d4a0();
  iVar9 = 1;
  if (local_18 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_14 - local_18 >> 2;
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0xc4) + 0x4a4);
  if (iVar7 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(int *)(param_1 + 0xc4) + 0x4a8) - iVar7 >> 2;
  }
  FUN_00595d60(0,(float)iVar6);
  FUN_00595de0((float)(local_24 + -1));
  FUN_00595e10(0x3f800000);
  FUN_00595dd0();
  uVar1 = ftol();
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  if (local_24 + -1 < iVar6) {
    iVar7 = *(int *)(param_1 + 200);
    bVar4 = *(byte *)(iVar7 + 0x6c);
    if (*(char *)(param_1 + 0x110) == '\0') {
      bVar4 = bVar4 | 3;
      goto LAB_0056ff37;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 200);
    bVar4 = *(byte *)(iVar7 + 0x6c);
  }
  bVar4 = bVar4 & 0xfc;
LAB_0056ff37:
  *(byte *)(iVar7 + 0x6c) = bVar4;
  for (iVar7 = *(int *)(param_1 + 0x118); iVar7 < iVar6; iVar7 = iVar7 + 1) {
    if (local_24 <= iVar9) goto LAB_00570018;
    FUN_00570040(iVar9,*(undefined4 *)(local_18 + iVar7 * 4));
    if (*(int *)(*(int *)(local_18 + iVar7 * 4) + 0x90) == *(int *)(param_1 + 0x2c8)) {
      FUN_0058d4b0(iVar9);
    }
    iVar9 = iVar9 + 1;
  }
  for (; iVar9 < local_24; iVar9 = iVar9 + 1) {
    uVar8 = 0;
    iVar6 = FUN_005ad970();
    if (iVar6 != 0) {
      do {
        FUN_0058cbf0(iVar9,uVar8);
        uVar8 = uVar8 + 1;
        uVar2 = FUN_005ad970();
      } while (uVar8 < uVar2);
    }
    iVar6 = FUN_0058d0b0(iVar9);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 8) != 0)) {
      FUN_00599980();
      *(undefined4 *)(iVar6 + 8) = 0;
    }
    iVar6 = FUN_0058d0b0(iVar9);
    *(undefined1 *)(iVar6 + 1) = 0;
    puVar3 = (undefined1 *)FUN_0058d0b0(iVar9);
    *puVar3 = 0;
  }
LAB_00570018:
  FUN_005b7e1d(local_18);
  ExceptionList = local_c;
  return;
}

