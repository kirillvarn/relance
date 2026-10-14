
void __fastcall FUN_00497360(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [32];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_54 [8];
  int aiStack_34 [13];
  
  piVar4 = (int *)(param_1 + 0x3d4);
  piVar7 = local_54;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  }
  aiStack_34[1] = 0;
  aiStack_34[3] = 0;
  aiStack_34[2] = 0;
  piVar4 = (int *)(param_1 + 0x3d4);
  piVar7 = aiStack_34 + 4;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  }
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = param_1;
  if (DAT_0067209c == (int *)0x0) {
    DAT_0067209c = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,local_90,local_54,&local_a0);
  piVar4 = aiStack_34;
  piVar7 = &local_94;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  }
  uStack_70 = local_a0;
  uStack_6c = local_9c;
  uStack_68 = local_98;
  FUN_00422690(0,&local_94);
  FUN_00421ed0(0xb50);
  FUN_00421ed0(0xb71);
  FUN_00421ed0(0xb44);
  FUN_00421ed0(0xde1);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(5,6);
  FUN_00421670(4);
  piVar4 = (int *)**(int **)(param_1 + 0x810);
  if (piVar4 != *(int **)(param_1 + 0x810)) {
    do {
      iVar6 = piVar4[2];
      puVar5 = (undefined4 *)FUN_00420fb0();
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      puVar5 = (undefined4 *)FUN_00420fb0();
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        puVar12 = &stack0xffffff48;
        puVar11 = (undefined4 *)&stack0xffffff44;
        uVar8 = *puVar5;
        uVar9 = puVar5[1];
        uVar10 = puVar5[2];
LAB_00497553:
        FUN_00498470(uVar1,uVar2,uVar3,uVar8,uVar9,uVar10,puVar11,puVar12,0x3ba3d70a);
      }
      else if ((iVar6 == 2) || (iVar6 == 1)) {
        puVar12 = &stack0xffffff40;
        uVar8 = *puVar5;
        puVar11 = &DAT_00679b80;
        uVar9 = puVar5[1];
        uVar10 = puVar5[2];
        goto LAB_00497553;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(iStack_a4 + 0x810));
  }
  FUN_00421690();
  return;
}

