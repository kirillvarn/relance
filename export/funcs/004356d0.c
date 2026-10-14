
/* WARNING: Removing unreachable block (ram,0x004358fe) */
/* WARNING: Removing unreachable block (ram,0x00435915) */
/* WARNING: Removing unreachable block (ram,0x0043592a) */
/* WARNING: Removing unreachable block (ram,0x00435933) */

void __thiscall FUN_004356d0(IDPMsgHandler *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  int local_8;
  int local_4;
  
  uVar9 = 0;
  iVar5 = *(int *)(param_2 + 4);
  iVar7 = 0;
  while( true ) {
    if (iVar5 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 8) - iVar5 >> 2;
    }
    if (iVar2 <= iVar7) break;
    if (*(int *)(*(int *)(iVar5 + iVar7 * 4) + 0x38) != 3) {
      uVar9 = uVar9 + 1;
    }
    iVar7 = iVar7 + 1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 3;
  }
  if (uVar3 < uVar9) {
    uVar3 = uVar9;
    if ((int)uVar9 < 0) {
      uVar3 = 0;
    }
    pvVar4 = operator_new(uVar3 * 8);
    iVar5 = *(int *)(param_1 + 8);
    pvVar8 = pvVar4;
    for (iVar7 = *(int *)(param_1 + 4); iVar7 != iVar5; iVar7 = iVar7 + 8) {
      FUN_004e5fc0(pvVar8,iVar7);
      pvVar8 = (void *)((int)pvVar8 + 8);
    }
    FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + uVar9 * 8);
    if (*(int *)(param_1 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
    }
    *(void **)(param_1 + 8) = (void *)((int)pvVar4 + iVar5 * 8);
    *(void **)(param_1 + 4) = pvVar4;
  }
  iVar5 = 0;
LAB_004357a0:
  do {
    while( true ) {
      iVar7 = *(int *)(param_2 + 4);
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_2 + 8) - iVar7 >> 2;
      }
      if (iVar2 <= iVar5) {
        return;
      }
      local_8 = *(int *)(iVar7 + iVar5 * 4);
      if (*(int *)(local_8 + 0x38) != 3) break;
LAB_0043594b:
      iVar5 = iVar5 + 1;
    }
    piVar6 = *(int **)(param_1 + 8);
    local_4 = 0;
    if (*(int *)(param_1 + 0xc) - (int)piVar6 >> 3 != 0) {
      FUN_004363b0(piVar6,piVar6,piVar6 + 2);
      FUN_00436bb0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - (int)piVar6 >> 3),&local_8);
      piVar1 = *(int **)(param_1 + 8);
      if (piVar6 == piVar1) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
        goto LAB_0043594b;
      }
      do {
        *piVar6 = local_8;
        piVar6[1] = local_4;
        piVar6 = piVar6 + 2;
      } while (piVar6 != piVar1);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
      iVar5 = iVar5 + 1;
      goto LAB_004357a0;
    }
    uVar9 = FUN_005995f0();
    if (uVar9 < 2) {
      iVar7 = 1;
    }
    else {
      iVar7 = FUN_005995f0();
    }
    iVar2 = FUN_005995f0();
    iVar2 = iVar2 + iVar7;
    iVar7 = iVar2;
    if (iVar2 < 0) {
      iVar7 = 0;
    }
    pvVar8 = operator_new(iVar7 * 8);
    iVar7 = FUN_004363b0(*(undefined4 *)(param_1 + 4),piVar6,pvVar8);
    FUN_00436bb0(iVar7,1,&local_8);
    FUN_004363b0(piVar6,*(undefined4 *)(param_1 + 8),iVar7 + 8);
    IDPMsgHandler::OnReceive(param_1,*(uchar **)(param_1 + 4),*(ulong *)(param_1 + 8));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar8 + iVar2 * 8);
    iVar7 = FUN_005995f0();
    *(void **)(param_1 + 4) = pvVar8;
    *(int *)(param_1 + 8) = (int)pvVar8 + iVar7 * 8 + 8;
    iVar5 = iVar5 + 1;
  } while( true );
}

