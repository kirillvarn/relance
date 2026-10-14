
undefined4 * __thiscall
FUN_00491f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,char *param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined1 param_13)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  char local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bc83e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x84);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00420d40();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00492250();
    puVar2[2] = &PTR_FUN_005d2efc;
    puVar2[6] = 0xffffffff;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x1e] = 0;
    *(undefined1 *)(puVar2 + 0x20) = 0;
    *(undefined1 *)((int)puVar2 + 0x81) = 0;
  }
  puVar2[0xc] = param_4;
  puVar2[0xd] = param_5;
  puVar2[0xe] = param_6;
  puVar2[1] = param_3;
  puVar2[0xf] = param_7;
  *puVar2 = param_2;
  puVar2[0x13] = param_9;
  puVar2[0x11] = param_11;
  puVar2[0x14] = param_10;
  puVar2[0x1c] = param_12;
  local_4 = 0xffffffff;
  *(undefined1 *)(puVar2 + 0x12) = 1;
  puVar2[0x19] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x10] = param_7;
  *(undefined1 *)(puVar2 + 0x1d) = param_13;
  iVar3 = 0;
  do {
    cVar1 = "Interface\\NeuroNet\\NavMap\\NewNavMap\\SpaceObjects\\"[iVar3];
    local_214[iVar3] = cVar1;
    iVar3 = iVar3 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_8 + 1;
    cVar1 = *param_8;
    param_8 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar3 = -1;
  pcVar9 = local_214;
  do {
    pcVar8 = pcVar9;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar3 = -1;
  pcVar7 = local_214;
  do {
    pcVar9 = pcVar7;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar9 + -1) = DAT_005d3d84;
  pcVar9[3] = DAT_005d3d88;
  GetFileSysPath(local_110,local_214,*(IFileSystem **)Data_exref);
  iVar3 = _access(local_110,0);
  if (iVar3 == -1) {
    local_4 = 2;
    iVar3 = puVar2[0x1e];
    if (iVar3 != 0) {
      local_4._0_1_ = 5;
      local_4._1_3_ = 0;
      FUN_004144f0();
      local_4._0_1_ = 4;
      FUN_00445d70();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_00444e20();
      FUN_005b7e1d(iVar3);
      puVar2[0x1e] = 0;
    }
    if ((void *)puVar2[0x17] != (void *)0x0) {
      free((void *)puVar2[0x17]);
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
    }
    local_4 = 0xffffffff;
    FUN_0059ef20();
    FUN_005b7e1d(puVar2);
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0059ec80(local_214,"Interface\\NeuroNet\\NavMap\\NewNavMap\\SpaceObjects\\spaceobjects.mat",
                 1);
    iVar3 = *(int *)(param_1 + 0x400);
    piVar10 = *(int **)(iVar3 + 4);
    piVar4 = operator_new(0xc);
    *piVar4 = iVar3;
    if (piVar10 == (int *)0x0) {
      piVar10 = piVar4;
    }
    piVar4[1] = (int)piVar10;
    *(int **)(iVar3 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    if (piVar4 + 2 != (int *)0x0) {
      piVar4[2] = (int)puVar2;
    }
    *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 1;
  }
  ExceptionList = local_c;
  return puVar2;
}

