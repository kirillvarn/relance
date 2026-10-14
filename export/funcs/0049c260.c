
void __fastcall FUN_0049c260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined1 *puVar15;
  int aiStack_128 [7];
  undefined1 local_10c [16];
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_90 [8];
  undefined4 auStack_70 [9];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [4];
  int local_30 [9];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bcadb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049b600();
  if (*(int *)(param_1 + 0xd74) == 0) {
    ExceptionList = local_c;
    return;
  }
  piVar6 = (int *)(param_1 + 0x3d4);
  piVar8 = local_90;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  auStack_70[1] = 0;
  auStack_70[3] = 0xbf0ccccc;
  auStack_70[2] = 0;
  piVar6 = (int *)(param_1 + 0x3d4);
  piVar8 = local_30;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  aiStack_128[2] = 0;
  aiStack_128[3] = 0;
  aiStack_128[4] = 0;
  if (DAT_0067209c == (int *)0x0) {
    DAT_0067209c = (int *)FUN_005b73e0();
  }
  piVar6 = aiStack_128 + 2;
  piVar8 = local_90;
  puVar15 = local_10c;
  piVar14 = DAT_0067209c;
  (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,puVar15,piVar8,piVar6);
  puVar5 = auStack_40;
  puVar9 = auStack_70;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar9 + 1;
  }
  uStack_4c = aiStack_128[3];
  uStack_48 = aiStack_128[4];
  uStack_44 = aiStack_128[5];
  FUN_00422690(0,auStack_70);
  FUN_00421ed0(0xb71);
  FUN_00421ed0(0xb44);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(5,6);
  piVar13 = *(int **)Pipeline_exref;
  puVar7 = &DAT_005d2e34;
  iVar4 = 0x8d;
  do {
    (**(code **)(*piVar13 + 0xf0))(piVar13,iVar4,*(undefined4 *)(puVar7 + 4));
    iVar4 = *(int *)(puVar7 + 8);
    puVar7 = puVar7 + 8;
  } while (iVar4 != 0);
  piVar12 = *(int **)Pipeline_exref;
  piVar13 = (int *)&stack0xfffffecc;
  iVar4 = 0x89;
  (**(code **)(*piVar12 + 0xf4))(piVar12);
  piVar11 = (int *)0x0;
  (**(code **)(*piVar8 + 0xf0))(piVar8,piVar6);
  local_30[1] = 0;
  if (((char)((uint)iVar4 >> 0x18) != '\0') ||
     (iVar1 = (**(code **)(*DAT_006720ac + 0x28))(DAT_006720ac,DAT_006720b8), iVar1 != 0)) {
    if (DAT_006720b8 != 0) {
      (**(code **)(*DAT_006720ac + 0x10))(DAT_006720ac,&DAT_006720b8);
      DAT_006720b8 = 0;
    }
    iVar1 = (**(code **)(*DAT_006720ac + 0xc))
                      (DAT_006720ac,0x142,*(undefined4 *)(param_1 + 0xd74),&DAT_006720b8,0);
    if (iVar1 != 0) goto LAB_0049c5ad;
    piVar10 = aiStack_128;
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar10 = 0;
      piVar10 = piVar10 + 1;
    }
    aiStack_128[3] = 0x18;
    uStack_f4 = 0x18;
    uStack_e0 = 0x18;
    aiStack_128[1] = *(int *)(param_1 + 0xd6c);
    iStack_fc = aiStack_128[1] + 0xc;
    iStack_e8 = aiStack_128[1] + 0x10;
    uStack_bc = *(undefined4 *)(param_1 + 0xd74);
    *(undefined4 *)(param_1 + 0xec8) = 0;
    aiStack_128[0] = 2;
    aiStack_128[2] = 0xc;
    uStack_f8 = 4;
    uStack_e4 = 8;
    uStack_c0 = 0x142;
    iVar1 = (**(code **)(*DAT_006720ac + 0x18))
                      (DAT_006720ac,DAT_006720b8,(undefined4 *)(param_1 + 0xec8),aiStack_128,0,
                       uStack_bc);
    if ((iVar1 != 0) ||
       (iVar1 = (**(code **)(*DAT_006720ac + 0x28))(DAT_006720ac,DAT_006720b8), iVar1 != 0))
    goto LAB_0049c5ad;
  }
  iVar1 = (**(code **)(*DAT_006720b0 + 0x18))
                    (DAT_006720b0,0xffffffff,&stack0xfffffec4,*(undefined4 *)(param_1 + 0xd70),
                     *(undefined4 *)(param_1 + 0xebc));
  if (iVar1 != 0) {
    auStack_40[0] = 0xffffffff;
    (**(code **)(*piVar8 + 0xf0))(piVar8,piVar6,piVar11);
    ExceptionList = local_c;
    return;
  }
  iVar1 = (**(code **)(*DAT_006720b0 + 0x24))
                    (DAT_006720b0,0xffffffff,*(undefined4 *)(param_1 + 0xec8),0,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xeb8)) {
      puVar5 = (undefined4 *)(param_1 + 0xe38);
      do {
        iVar3 = **(int **)Pipeline_exref;
        uVar2 = FUN_00425640(0);
        (**(code **)(iVar3 + 0x108))(*(undefined4 *)Pipeline_exref,0,uVar2);
        (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0xb,0);
        piVar6 = *(int **)Pipeline_exref;
        puVar7 = &DAT_005d2e5c;
        iVar3 = 1;
        do {
          (**(code **)(*piVar6 + 0xf8))(piVar6,0,iVar3,*(undefined4 *)(puVar7 + 4));
          iVar3 = *(int *)(puVar7 + 8);
          puVar7 = puVar7 + 8;
        } while (iVar3 != 0);
        piVar6 = *(int **)Pipeline_exref;
        puVar7 = &DAT_005d2e94;
        iVar3 = 1;
        do {
          (**(code **)(*piVar6 + 0xf8))(piVar6,1,iVar3,*(undefined4 *)(puVar7 + 4));
          iVar3 = *(int *)(puVar7 + 8);
          puVar7 = puVar7 + 8;
        } while (iVar3 != 0);
        (**(code **)(*DAT_006720b4 + 0xc))
                  (DAT_006720b4,4,puVar5[-0x30],puVar5[-0x20],puVar5[-0x10] + iVar4,*puVar5);
        iVar1 = iVar1 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar1 < *(int *)(param_1 + 0xeb8));
    }
    (**(code **)(**(int **)Pipeline_exref + 0x108))(*(int **)Pipeline_exref,0,0);
    piVar6 = *(int **)Pipeline_exref;
    puVar7 = &DAT_005d2e4c;
    iVar1 = 0x8d;
    do {
      (**(code **)(*piVar6 + 0xf0))(piVar6,iVar1,*(undefined4 *)(puVar7 + 4));
      iVar1 = *(int *)(puVar7 + 8);
      puVar7 = puVar7 + 8;
    } while (iVar1 != 0);
    auStack_40[2] = 0xffffffff;
    (**(code **)(*piVar11 + 0xf0))(piVar11,piVar12,iVar4);
    ExceptionList = local_c;
    return;
  }
LAB_0049c5ad:
  local_30[1] = 0xffffffff;
  (**(code **)(*piVar13 + 0xf0))(piVar13,piVar14,puVar15);
  ExceptionList = local_c;
  return;
}

