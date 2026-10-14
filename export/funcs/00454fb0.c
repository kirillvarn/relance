
void __thiscall FUN_00454fb0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_4;
  
  local_4 = param_1;
  RefreshLoadingProgress();
  param_1[0x30] = param_2;
  FUN_00454820(param_1[0x2c],param_1);
  *(undefined4 **)(*(int *)(param_1[0x30] * 0x40 + param_1[0x2d]) + 0x38) = param_1 + 0x45;
  param_2 = CONCAT31(param_2._1_3_,*(undefined1 *)((int)param_1 + 7));
  if ((param_1[10] != 0) && (iVar4 = FUN_00455fc0(), (int)param_1[0x2f] <= iVar4)) {
    param_2 = CONCAT31(param_2._1_3_,1);
  }
  iVar4 = param_1[0x30] * 0x40 + param_1[0x2d];
  FUN_0044f720(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8),*param_1,
               *(undefined1 *)(param_1 + 1),*(undefined1 *)((int)param_1 + 5),
               *(undefined1 *)(param_1 + 2),param_1[4],param_2,param_1[0x48],
               *(undefined1 *)(param_1 + 5),*(undefined1 *)((int)param_1 + 0xd));
  if ((((*(char *)((int)param_1 + 0x16) != '\0') && (DAT_0066d304 != '\0')) &&
      (*(char *)((int)param_1 + 0x2d) != '\0')) && (*(char *)((int)param_1 + 0x15) != '\0')) {
    *(undefined1 *)((int)param_1 + 0x2e) = 1;
  }
  if (*(char *)((int)param_1 + 0xf) != '\0') {
    FUN_00558bf0();
  }
  if ((*(char *)(param_1 + 0xc) == '\0') &&
     (piVar5 = (int *)(param_1[0x2d] + param_1[0x30] * 0x40),
     *(char *)(*(int *)(param_1[0x2d] + param_1[0x30] * 0x40) + 0x61) != '\0')) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    puVar7 = (undefined4 *)(*piVar5 + 100);
    puVar8 = param_1 + 0xd;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    param_1[0x19] = *(undefined4 *)(*piVar5 + 0x94);
    param_1[0x1a] = *(undefined4 *)(*piVar5 + 0x98);
    param_1[0x1b] = *(undefined4 *)(*piVar5 + 0x9c);
  }
  if (*(int *)(param_1[0x30] * 0x40 + 0x3c + param_1[0x2d]) != 1) goto LAB_004551c9;
  cVar3 = '\0';
  iVar4 = param_1[0x30] + 1;
  uVar2 = (uint)local_4 >> 8;
  local_4 = (undefined4 *)((uint)local_4 & 0xffffff00);
  param_2 = param_2 & 0xffffff00;
  if (iVar4 < (int)param_1[0x2f]) {
    piVar5 = (int *)(iVar4 * 0x40 + 0x3c + param_1[0x2d]);
    do {
      iVar1 = *piVar5;
      if (iVar1 == 2) {
LAB_00455157:
        cVar3 = '\x01';
      }
      else {
        if (iVar1 != 3) {
          if (iVar1 == 4) goto LAB_00455157;
          if (iVar1 != 6) break;
        }
        if (iVar1 == 4) goto LAB_00455157;
        if (iVar1 == 3) {
          param_2 = CONCAT31(param_2._1_3_,1);
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x10;
    } while (iVar4 < (int)param_1[0x2f]);
    local_4 = (undefined4 *)CONCAT31((int3)uVar2,cVar3);
    if ((cVar3 == '\0') && ((char)param_2 == '\0')) goto LAB_00455171;
  }
  else {
LAB_00455171:
    local_4 = (undefined4 *)CONCAT31(local_4._1_3_,1);
    param_2 = CONCAT31(param_2._1_3_,1);
  }
  if (*(char *)(param_1 + 0x41) == '\0') {
    FUN_00455850(local_4,param_2);
    if (*(char *)((int)param_1 + 6) != '\0') {
      FUN_0041a0f0(0,0x40400000);
      FUN_0041dda0(1);
    }
    *(undefined1 *)(param_1 + 0x41) = 1;
    *(undefined1 *)((int)param_1 + 0x105) = 0;
    *(undefined1 *)((int)param_1 + 0x106) = 0;
  }
LAB_004551c9:
  if ((*(int *)(param_1[0x30] * 0x40 + 0x3c + param_1[0x2d]) == 4) &&
     (*(char *)(param_1 + 0x43) == '\0')) {
    cVar3 = FUN_00459ad0(param_1 + 0x3b,&local_4,&param_2);
    if (cVar3 != '\0') {
      FUN_004a2aa0(local_4,(param_2 & 0x20) != 0);
    }
    uVar6 = FUN_0059db20("ScriptSequence_InfoDialog","NN_OfferDialog",0,0);
    param_1[0x44] = uVar6;
    FUN_004a6630(4,param_1 + 0x3b,1,FUN_00455b10,param_1);
    if (*(char *)((int)param_1 + 6) != '\0') {
      FUN_0041a0f0(0,0x40400000);
      FUN_0041dda0(1);
    }
    *(undefined1 *)(param_1 + 0x43) = 1;
    *(undefined1 *)((int)param_1 + 0x10d) = 0;
  }
  return;
}

