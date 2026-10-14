
void __fastcall FUN_0049e1d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 *puVar6;
  int local_14;
  undefined1 local_10 [16];
  
  if (DAT_006720a0 == 6) {
    FUN_004a0220(*(undefined4 *)(param_1 + 0xf44));
  }
  iVar2 = *(int *)(param_1 + 0x814);
  *(undefined4 *)(param_1 + 2000) = 1;
  *(undefined4 *)(param_1 + 0x838) = 0xffffffff;
  while (iVar2 != 0) {
    FUN_0053e430(&local_14);
    FUN_005b7e1d(*(undefined4 *)(local_14 + 8));
    FUN_00516f70(local_10,local_14);
    iVar2 = *(int *)(param_1 + 0x814);
  }
  iVar2 = *(int *)(param_1 + 0x404);
  while (iVar2 != 0) {
    iVar2 = **(int **)(param_1 + 0x400);
    iVar3 = *(int *)(iVar2 + 8);
    if (iVar3 != 0) {
      FUN_0048dd40();
      FUN_005b7e1d(iVar3);
    }
    FUN_00516f70(local_10,iVar2);
    iVar2 = *(int *)(param_1 + 0x404);
  }
  puVar6 = (undefined4 *)(param_1 + 0x4b8);
  for (iVar2 = 99; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x644);
  for (iVar2 = 99; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_004917c0();
  FUN_00491410();
  (**(code **)(**(int **)(param_1 + 0x7ec) + 0xa8))(1,0,0);
  cVar5 = '\0';
  if (*(undefined4 **)(param_1 + 0x7e0) == (undefined4 *)0x0) {
LAB_0049e2ff:
    cVar5 = '\x01';
  }
  else {
    iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x7e0))();
    piVar4 = (int *)(param_1 + 0xf28);
    iVar3 = 0;
    do {
      if (*piVar4 == iVar2) goto LAB_0049e2ff;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < 4);
  }
  (**(code **)(**(int **)(param_1 + 0x7f0) + 0xa8))(1,cVar5,0);
  (**(code **)(**(int **)(param_1 + 0x8d8) + 0xa8))(1,cVar5,0);
  (**(code **)(**(int **)(param_1 + 0x8dc) + 0xa8))(1,cVar5,0);
  (**(code **)(**(int **)(param_1 + 0xb4c) + 0xa8))(1,cVar5,0);
  (**(code **)(**(int **)(param_1 + 0xc58) + 0xa8))(1,cVar5,0);
  if (((*(int *)(param_1 + 0xb5c) == 0) ||
      (*(int *)(param_1 + 0xb60) - *(int *)(param_1 + 0xb5c) >> 2 == 0)) || (cVar5 != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xb50) + 0xa8))(1,uVar1,0);
  if ((DAT_006720a0 == 1) || (DAT_006720a0 == 2)) {
    (**(code **)(**(int **)(param_1 + 0xc5c) + 0xa8))(1,cVar5,0);
    (**(code **)(**(int **)(param_1 + 0xc60) + 0xa8))(1,cVar5,0);
    (**(code **)(**(int **)(param_1 + 0xc64) + 0xa8))(1,cVar5,0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xc5c) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0xc60) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0xc64) + 0xa8))(1,1,0);
  }
  (**(code **)(**(int **)(param_1 + 0xb54) + 0xa8))(1,cVar5,0);
  (**(code **)(**(int **)(param_1 + 0xc14) + 0xa8))(1,cVar5,0);
  (**(code **)(**(int **)(param_1 + 0xc18) + 0xa8))(1,cVar5,0);
  (**(code **)(**(int **)(param_1 + 0xaf8) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xafc) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xb00) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xb04) + 0xa8))(1,1,0);
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  FUN_004963d0(*(undefined4 *)(param_1 + 2000),0x3f800000);
  FUN_00496600();
  FUN_0049fbf0();
  puVar6 = (undefined4 *)(param_1 + 0xb08);
  iVar2 = 8;
  do {
    (**(code **)(*(int *)*puVar6 + 0xa8))(1,0,0);
    puVar6 = puVar6 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar6 = (undefined4 *)(param_1 + 0xb28);
  iVar2 = 8;
  do {
    (**(code **)(*(int *)*puVar6 + 0xa8))(1,0,0);
    puVar6 = puVar6 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

