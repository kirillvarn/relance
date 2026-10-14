
void __fastcall FUN_0049dcc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  char cVar9;
  int *piVar10;
  undefined1 *puVar11;
  int *piVar12;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int local_10c [3];
  undefined4 local_100 [8];
  undefined4 auStack_e0 [6];
  int aiStack_c8 [5];
  undefined4 uStack_b4;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_44;
  undefined4 auStack_40 [4];
  undefined4 local_30 [9];
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005bca5b;
  local_c = ExceptionList;
  if ((((DAT_006720a0 != 1) && (DAT_006720a0 != 2)) && (DAT_006720a0 != 3)) && (DAT_006720a0 != 5))
  {
    return;
  }
  ExceptionList = &local_c;
  FUN_0049c740();
  if (*(int *)(param_1 + 0xee8) == 0) {
    ExceptionList = local_c;
    return;
  }
  puVar2 = (undefined4 *)(param_1 + 0x3d4);
  puVar3 = local_100;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  auStack_e0[1] = 0;
  auStack_e0[3] = 0xbf0ccccc;
  auStack_e0[2] = 0;
  puVar2 = (undefined4 *)(param_1 + 0x3d4);
  puVar3 = local_30;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  if (DAT_0067209c == (int *)0x0) {
    DAT_0067209c = (int *)FUN_005b73e0();
  }
  puVar2 = local_100;
  piVar8 = local_10c;
  piVar12 = DAT_0067209c;
  (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,piVar8,puVar2,&local_11c);
  puVar3 = auStack_40;
  puVar5 = auStack_e0;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  aiStack_c8[3] = local_11c;
  aiStack_c8[4] = local_118;
  uStack_b4 = local_114;
  FUN_00422690(0,auStack_e0);
  FUN_00421ed0(0xb50);
  FUN_00421ed0(0xb71);
  FUN_00421ed0(0xb44);
  FUN_00421ed0(0xde1);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(5,6);
  piVar6 = *(int **)Pipeline_exref;
  puVar4 = &DAT_005d2e34;
  iVar1 = 0x8d;
  do {
    (**(code **)(*piVar6 + 0xf0))(piVar6,iVar1,*(undefined4 *)(puVar4 + 4));
    iVar1 = *(int *)(puVar4 + 8);
    puVar4 = puVar4 + 8;
  } while (iVar1 != 0);
  piVar6 = *(int **)Pipeline_exref;
  puVar4 = &DAT_005d2e94;
  iVar1 = 1;
  do {
    (**(code **)(*piVar6 + 0xf8))(piVar6,0,iVar1,*(undefined4 *)(puVar4 + 4));
    iVar1 = *(int *)(puVar4 + 8);
    puVar4 = puVar4 + 8;
  } while (iVar1 != 0);
  piVar6 = *(int **)Pipeline_exref;
  puVar4 = &DAT_005d2e94;
  iVar1 = 1;
  do {
    (**(code **)(*piVar6 + 0xf8))(piVar6,1,iVar1,*(undefined4 *)(puVar4 + 4));
    iVar1 = *(int *)(puVar4 + 8);
    puVar4 = puVar4 + 8;
  } while (iVar1 != 0);
  piVar6 = *(int **)Pipeline_exref;
  puVar11 = &stack0xfffffed0;
  piVar10 = (int *)0x89;
  (**(code **)(*piVar6 + 0xf4))(piVar6,0x89,puVar11);
  cVar9 = (char)((uint)piVar6 >> 0x18);
  (**(code **)(*piVar8 + 0xf0))(piVar8,puVar2,0);
  local_30[1] = 0;
  if ((cVar9 != '\0') ||
     (iVar1 = (**(code **)(*DAT_006720ac + 0x28))(DAT_006720ac,DAT_006720bc), iVar1 != 0)) {
    if (DAT_006720bc != 0) {
      (**(code **)(*DAT_006720ac + 0x10))(DAT_006720ac,&DAT_006720bc);
      DAT_006720bc = 0;
    }
    iVar1 = (**(code **)(*DAT_006720ac + 0xc))
                      (DAT_006720ac,0x42,*(undefined4 *)(param_1 + 0xee8),&DAT_006720bc,0);
    if (iVar1 != 0) goto LAB_0049e0ab;
    piVar6 = aiStack_c8;
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    aiStack_c8[3] = 0x10;
    uStack_94 = 0x10;
    aiStack_c8[1] = *(int *)(param_1 + 0xee0);
    iStack_9c = aiStack_c8[1] + 0xc;
    uStack_5c = *(undefined4 *)(param_1 + 0xee8);
    *(undefined4 *)(param_1 + 0xf14) = 0;
    aiStack_c8[0] = 2;
    aiStack_c8[2] = 0xc;
    uStack_98 = 4;
    uStack_60 = 0x42;
    iVar1 = (**(code **)(*DAT_006720ac + 0x18))
                      (DAT_006720ac,DAT_006720bc,(undefined4 *)(param_1 + 0xf14),aiStack_c8,0,
                       uStack_5c);
    if ((iVar1 != 0) ||
       (iVar1 = (**(code **)(*DAT_006720ac + 0x28))(DAT_006720ac,DAT_006720bc), iVar1 != 0))
    goto LAB_0049e0ab;
  }
  piVar6 = *(int **)(param_1 + 0xeec);
  iVar1 = (**(code **)(*DAT_006720b0 + 0x18))
                    (DAT_006720b0,0xffffffff,&stack0xfffffec8,*(undefined4 *)(param_1 + 0xee4));
  if (iVar1 != 0) {
    auStack_40[0] = 0xffffffff;
    (**(code **)(*piVar6 + 0xf0))(piVar6,piVar8,puVar2);
    ExceptionList = local_c;
    return;
  }
  iVar1 = (**(code **)(*DAT_006720b0 + 0x24))
                    (DAT_006720b0,0xffffffff,*(undefined4 *)(param_1 + 0xf14),0,0);
  if (iVar1 == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0xeec);
    piVar6 = (int *)0x0;
    (**(code **)(*DAT_006720b4 + 0xc))(DAT_006720b4,4,0,*(undefined4 *)(param_1 + 0xee8),0,uVar7);
    piVar12 = *(int **)Pipeline_exref;
    puVar4 = &DAT_005d2e4c;
    iVar1 = 0x8d;
    do {
      (**(code **)(*piVar12 + 0xf0))(piVar12,iVar1,*(undefined4 *)(puVar4 + 4));
      iVar1 = *(int *)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (iVar1 != 0);
    piVar12 = *(int **)Pipeline_exref;
    puVar4 = &DAT_005d2e4c;
    iVar1 = 0x8d;
    do {
      (**(code **)(*piVar12 + 0xf0))(piVar12,iVar1,*(undefined4 *)(puVar4 + 4));
      iVar1 = *(int *)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (iVar1 != 0);
    uStack_44 = 0xffffffff;
    (**(code **)(*piVar6 + 0xf0))(piVar6,uVar7,piVar8);
    ExceptionList = local_c;
    return;
  }
LAB_0049e0ab:
  local_30[1] = 0xffffffff;
  (**(code **)(*piVar10 + 0xf0))(piVar10,puVar11,piVar12);
  ExceptionList = local_c;
  return;
}

