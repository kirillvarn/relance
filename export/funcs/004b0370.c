
void __thiscall FUN_004b0370(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
LAB_004b0380:
  do {
    if ((*(int *)(param_1 + 0x508) == 0) ||
       ((uint)((*(int *)(param_1 + 0x50c) - *(int *)(param_1 + 0x508)) / 0x18) <= uVar5)) break;
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x508) + iVar4);
    iVar2 = puVar1[2];
    if (iVar2 != -1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        FUN_004b1450(*puVar1,iVar2,0xffffffff);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x18;
        goto LAB_004b0380;
      }
      FUN_004b1d20(*puVar1,iVar2,0xffffffff);
    }
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 0x18;
  } while( true );
  uVar5 = 0;
  iVar4 = 0;
LAB_004b03e4:
  do {
    if ((*(int *)(param_1 + 0x528) == 0) ||
       ((uint)((*(int *)(param_1 + 0x52c) - *(int *)(param_1 + 0x528)) / 0x18) <= uVar5)) break;
    iVar2 = *(int *)(*(int *)(param_1 + 0x528) + 8 + iVar4);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x528) + iVar4);
    if (iVar2 != -1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        FUN_004b1450(*puVar1,iVar2,0xffffffff);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x18;
        goto LAB_004b03e4;
      }
      FUN_004b1d20(*puVar1,iVar2,0xffffffff);
    }
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 0x18;
  } while( true );
  uVar5 = 0;
  iVar4 = 0;
LAB_004b0450:
  do {
    if ((*(int *)(param_1 + 0x548) == 0) ||
       ((uint)((*(int *)(param_1 + 0x54c) - *(int *)(param_1 + 0x548)) / 0x18) <= uVar5)) {
      if (param_2 == -1) {
        FUN_005b36b0("default_graphics");
        param_2 = ftol();
      }
      FUN_004b1450(0x767,param_2,0xffffffff);
      piVar3 = (int *)FUN_005b36b0("advanced_graphics");
      piVar3[4] = 0;
      (**(code **)*piVar3)(0);
      if ((float)piVar3[5] != (float)piVar3[4]) {
        piVar3[5] = piVar3[4];
        (**(code **)(*piVar3 + 4))(piVar3[4]);
      }
      return;
    }
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x548) + iVar4);
    iVar2 = puVar1[2];
    if (iVar2 != -1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        FUN_004b1450(*puVar1,iVar2,0xffffffff);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x18;
        goto LAB_004b0450;
      }
      FUN_004b1d20(*puVar1,iVar2,0xffffffff);
    }
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 0x18;
  } while( true );
}

