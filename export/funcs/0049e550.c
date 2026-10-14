
void __fastcall FUN_0049e550(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_14;
  undefined1 local_10 [16];
  
  *(undefined4 *)(param_1 + 2000) = 0;
  if ((DAT_006720a0 == 4) || (DAT_006720a0 == 7)) {
    uVar6 = 0;
  }
  else {
    if (DAT_006720a0 != 6) goto LAB_0049e589;
    uVar6 = *(undefined4 *)(param_1 + 0xf44);
  }
  FUN_004a0220(uVar6);
LAB_0049e589:
  iVar3 = *(int *)(param_1 + 0x814);
  while (iVar3 != 0) {
    FUN_0053e430(&local_14);
    FUN_005b7e1d(*(undefined4 *)(local_14 + 8));
    FUN_00516f70(local_10,local_14);
    iVar3 = *(int *)(param_1 + 0x814);
  }
  iVar3 = *(int *)(param_1 + 0x404);
  while (iVar3 != 0) {
    iVar3 = **(int **)(param_1 + 0x400);
    iVar2 = *(int *)(iVar3 + 8);
    if (iVar2 != 0) {
      FUN_0048dd40();
      FUN_005b7e1d(iVar2);
    }
    FUN_00516f70(local_10,iVar3);
    iVar3 = *(int *)(param_1 + 0x404);
  }
  puVar5 = (undefined4 *)(param_1 + 0x4b8);
  for (iVar3 = 99; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)(param_1 + 0x644);
  for (iVar3 = 99; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_004915b0();
  FUN_00491410();
  piVar4 = (int *)**(int **)(param_1 + 0x400);
  if (piVar4 != *(int **)(param_1 + 0x400)) {
    do {
      piVar1 = (int *)piVar4[2];
      if (*piVar1 == 0) {
        iVar3 = (*(code *)**(undefined4 **)piVar1[0x19])();
        iVar2 = FUN_004c4830();
        if (iVar3 == iVar2) {
          iVar3 = *(int *)(param_1 + 0x4b4);
          *(int *)(iVar3 + 0x30) = piVar1[0xc];
          *(int *)(iVar3 + 0x34) = piVar1[0xd];
          *(int *)(iVar3 + 0x38) = piVar1[0xe];
          break;
        }
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x400));
  }
  (**(code **)(**(int **)(param_1 + 0x7f0) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x7ec) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x8d8) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x8dc) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xb4c) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xb50) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xc58) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xc14) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xc18) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xc5c) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xc60) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xc64) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xb54) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0xaf8) + 0xa8))(1,0,0);
  (**(code **)(**(int **)(param_1 + 0xafc) + 0xa8))(1,0,0);
  (**(code **)(**(int **)(param_1 + 0xb00) + 0xa8))(1,0,0);
  (**(code **)(**(int **)(param_1 + 0xb04) + 0xa8))(1,0,0);
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  FUN_00496600();
  puVar5 = (undefined4 *)(param_1 + 0xb08);
  iVar3 = 8;
  do {
    (**(code **)(*(int *)*puVar5 + 0xa8))(1,1,0);
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar5 = (undefined4 *)(param_1 + 0xb28);
  iVar3 = 8;
  do {
    (**(code **)(*(int *)*puVar5 + 0xa8))(1,1,0);
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  (**(code **)(**(int **)(param_1 + 0x8c8) + 0xa8))(0x1e,0x505,0);
  return;
}

