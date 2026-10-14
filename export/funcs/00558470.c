
void __thiscall FUN_00558470(int param_1,HardpointSummary *param_2,undefined4 param_3)

{
  HardpointInfo *pHVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4 [9];
  undefined4 local_90 [9];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [9];
  Csys local_30 [48];
  
  piVar3 = (int *)**(int **)(param_1 + 4);
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      HardpointSummary::get_instance(param_2,*(int *)(piVar3[2] + 4));
      DALib_Engine_get_csys((long)local_30);
      pHVar1 = HardpointSummary::get_info(param_2,*(int *)(piVar3[2] + 4));
      local_60 = *(undefined4 *)(pHVar1 + 4);
      local_5c = *(undefined4 *)(pHVar1 + 8);
      local_58 = *(undefined4 *)(pHVar1 + 0xc);
      pHVar1 = HardpointSummary::get_info(param_2,*(int *)(piVar3[2] + 4));
      pHVar1 = pHVar1 + 0x10;
      puVar4 = local_54;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *(undefined4 *)pHVar1;
        pHVar1 = pHVar1 + 4;
        puVar4 = puVar4 + 1;
      }
      Csys::trans_from_frame(local_30,(Csys *)&local_c0);
      puVar4 = local_b4;
      puVar5 = local_90;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_6c = local_c0;
      local_68 = local_bc;
      local_64 = local_b8;
      puVar4 = local_90;
      puVar5 = (undefined4 *)(*(int *)piVar3[2] + 0x4c);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_00557860(param_3);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 4));
  }
  return;
}

