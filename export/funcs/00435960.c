
undefined4 __thiscall FUN_00435960(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_7c [10];
  undefined4 uStack_54;
  undefined4 auStack_30 [12];
  
  iVar6 = *(int *)(param_2 + 0x1c);
  if ((*(int *)(param_2 + 4) != 0) && (*(int *)(param_2 + 4) != DAT_00673344)) {
    iVar6 = 2;
  }
  if ((*(char **)(param_2 + 0x18) != (char *)0x0) && (**(char **)(param_2 + 0x18) != '\0')) {
    iVar5 = 0;
    do {
      iVar6 = *(int *)(param_1 + 4);
      if (iVar6 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 8) - iVar6 >> 3;
      }
      if (iVar2 <= iVar5) {
        return 0;
      }
      if (*(int *)(iVar6 + 4 + iVar5 * 8) == 0) {
        uStack_54 = 0x4359c4;
        bVar1 = CharPlaceInfo::is_named
                          (*(CharPlaceInfo **)(iVar6 + iVar5 * 8),*(char **)(param_2 + 0x18));
        if (bVar1) goto LAB_00435a15;
      }
      iVar5 = iVar5 + 1;
    } while( true );
  }
  if ((iVar6 != 1) && (iVar6 != 2)) {
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[0xb] = 0x3f800000;
    auStack_30[7] = 0x3f800000;
    auStack_30[3] = 0x3f800000;
    auStack_30[10] = 0;
    auStack_30[9] = 0;
    auStack_30[8] = 0;
    auStack_30[6] = 0;
    auStack_30[5] = 0;
    auStack_30[4] = 0;
    puVar7 = auStack_30;
    puVar8 = auStack_7c;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar4 = FUN_00435b80(param_2,0,0xffffffff,param_3,1);
    return uVar4;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) - iVar2 >> 3;
    }
    if (iVar3 <= iVar5) {
      return 0;
    }
    if (((*(int *)(iVar2 + 4 + iVar5 * 8) == 0) &&
        (iVar3 = *(int *)(iVar2 + iVar5 * 8), iVar6 == *(int *)(iVar3 + 0x34))) &&
       (*(int *)(param_2 + 0x20) == *(int *)(iVar3 + 0x38))) break;
    iVar5 = iVar5 + 1;
  }
LAB_00435a15:
  if (iVar5 == -1) {
    return 0;
  }
  puVar7 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar5 * 8);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 8);
  puVar8 = auStack_7c;
  for (iVar6 = 0xc; puVar7 = puVar7 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar8 = puVar8 + 1;
  }
  uVar4 = FUN_00435b80(param_2,uVar4,iVar5,param_3,0);
  *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar5 * 8) = uVar4;
  return uVar4;
}

