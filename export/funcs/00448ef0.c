
/* WARNING: Removing unreachable block (ram,0x00449110) */
/* WARNING: Removing unreachable block (ram,0x004490c0) */
/* WARNING: Removing unreachable block (ram,0x0044906b) */
/* WARNING: Removing unreachable block (ram,0x00449089) */
/* WARNING: Removing unreachable block (ram,0x00449090) */
/* WARNING: Removing unreachable block (ram,0x004490b4) */
/* WARNING: Removing unreachable block (ram,0x004490b8) */
/* WARNING: Removing unreachable block (ram,0x004490e3) */

void __thiscall FUN_00448ef0(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 8) - iVar3 >> 4;
  }
  if (uVar2 < param_2) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar3 >> 4;
    }
    puVar5 = *(undefined4 **)(param_1 + 8);
    uVar2 = param_2 - iVar6;
    if ((uint)(*(int *)(param_1 + 0xc) - (int)puVar5 >> 4) < uVar2) {
      if ((iVar3 == 0) || (param_2 = (int)puVar5 - iVar3 >> 4, param_2 <= uVar2)) {
        param_2 = uVar2;
      }
      iVar6 = FUN_004cecd0();
      iVar6 = iVar6 + param_2;
      iVar3 = iVar6;
      if (iVar6 < 0) {
        iVar3 = 0;
      }
      pvVar4 = operator_new(iVar3 << 4);
      iVar3 = FUN_004491a0(*(undefined4 *)(param_1 + 4),puVar5,pvVar4);
      FUN_004491f0(iVar3,uVar2,param_3);
      FUN_004491a0(puVar5,*(undefined4 *)(param_1 + 8),uVar2 * 0x10 + iVar3);
      FUN_00449160(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
      *(void **)(param_1 + 0xc) = (void *)(iVar6 * 0x10 + (int)pvVar4);
      iVar3 = FUN_004cecd0();
      *(void **)(param_1 + 4) = pvVar4;
      *(void **)(param_1 + 8) = (void *)((iVar3 + uVar2) * 0x10 + (int)pvVar4);
      return;
    }
    if (uVar2 != 0) {
      FUN_004491a0(puVar5,puVar5,puVar5 + uVar2 * 4);
      FUN_004491f0(*(int *)(param_1 + 8),uVar2 - (*(int *)(param_1 + 8) - (int)puVar5 >> 4),param_3)
      ;
      puVar1 = *(undefined4 **)(param_1 + 8);
      for (; puVar5 != puVar1; puVar5 = puVar5 + 4) {
        *puVar5 = *param_3;
        puVar5[1] = param_3[1];
        puVar5[2] = param_3[2];
        puVar5[3] = param_3[3];
      }
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar2 * 0x10;
      return;
    }
  }
  else if ((iVar3 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar3 >> 4))) {
    iVar6 = *(int *)(param_1 + 8);
    iVar3 = param_2 * 0x10 + iVar3;
    for (iVar7 = iVar3; iVar7 != iVar6; iVar7 = iVar7 + 0x10) {
      FUN_004486d0();
    }
    *(int *)(param_1 + 8) = iVar3;
  }
  return;
}

