
void __fastcall FUN_0049fe70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [36];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_54 [8];
  undefined4 auStack_34 [13];
  
  if ((*(char *)(param_1 + 0x87d) == '\0') || (*(int *)(param_1 + 2000) == 0)) {
    return;
  }
  puVar6 = (undefined4 *)(param_1 + 0x3d4);
  puVar8 = local_54;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  auStack_34[1] = 0;
  auStack_34[3] = 0;
  auStack_34[2] = 0;
  puVar6 = (undefined4 *)(param_1 + 0x3d4);
  puVar8 = auStack_34 + 4;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  if (DAT_0067209c == (int *)0x0) {
    DAT_0067209c = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,local_90,local_54,&local_9c);
  puVar6 = auStack_34;
  puVar8 = &local_94;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  uStack_6c = local_9c;
  uStack_68 = local_98;
  FUN_00422690(0,&local_94);
  FUN_00421ed0(0xb50);
  FUN_00421ed0(0xb71);
  FUN_00421ed0(0xb44);
  FUN_00421ed0(0xde1);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(5,6);
  uVar3 = FUN_00425640(0);
  FUN_004220a0(uVar3);
  FUN_00421a70(0xff,0xff,0xff);
  FUN_00421670(4);
  iVar7 = FUN_004c4690();
  iVar9 = -1;
  if (-1 < iVar7 + -1) {
    do {
      if ((iVar9 == -1) && (*(int *)(param_1 + 0x4b8) != 0)) {
        if (*(char *)(*(int *)(param_1 + 0x4b8) + 0x48) != '\0') {
          iVar4 = (**(code **)**(undefined4 **)(param_1 + 0x7e0))();
          iVar5 = FUN_004c4830();
          if (iVar5 == iVar4) {
            puVar6 = (undefined4 *)FUN_00420fb0();
            goto LAB_004a0085;
          }
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x4b8 + iVar9 * 4);
        if ((iVar4 != 0) &&
           (((iVar5 = *(int *)(param_1 + 0x4bc + iVar9 * 4), iVar5 != 0 &&
             (*(char *)(iVar4 + 0x48) != '\0')) && (*(char *)(iVar5 + 0x48) != '\0')))) {
          puVar6 = (undefined4 *)FUN_00420fb0();
LAB_004a0085:
          uVar3 = puVar6[2];
          uVar1 = puVar6[1];
          uVar2 = *puVar6;
          puVar6 = (undefined4 *)FUN_00420fb0();
          local_98 = puVar6[2];
          FUN_00498730(uVar2,uVar1,uVar3,*puVar6,puVar6[1],local_98,&DAT_00679b80,&stack0xffffff4c,
                       0x3b656042);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7 + -1);
  }
  iVar7 = FUN_004c4fb0();
  iVar9 = -1;
  if (-1 < iVar7 + -1) {
    do {
      if ((iVar9 == -1) && (*(int *)(param_1 + 0x644) != 0)) {
        if (*(char *)(*(int *)(param_1 + 0x644) + 0x48) != '\0') {
          puVar6 = (undefined4 *)FUN_00420fb0();
LAB_004a018c:
          uVar3 = puVar6[2];
          uVar1 = puVar6[1];
          uVar2 = *puVar6;
          puVar6 = (undefined4 *)FUN_00420fb0();
          local_98 = puVar6[2];
          FUN_00498730(uVar2,uVar1,uVar3,*puVar6,puVar6[1],local_98,&DAT_00679b80,&stack0xffffff4c,
                       0x3ba3d70a);
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x644 + iVar9 * 4);
        if (((iVar4 != 0) &&
            ((iVar5 = *(int *)(param_1 + 0x648 + iVar9 * 4), iVar5 != 0 &&
             (*(char *)(iVar4 + 0x48) != '\0')))) && (*(char *)(iVar5 + 0x48) != '\0')) {
          puVar6 = (undefined4 *)FUN_00420fb0();
          goto LAB_004a018c;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7 + -1);
  }
  FUN_00421690();
  return;
}

