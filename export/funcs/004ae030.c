
undefined1 * __thiscall FUN_004ae030(int param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar3 = *(int *)(param_1 + 0x838);
  if (iVar3 == 0) {
    *param_2 = *(undefined1 *)(param_1 + 0x7fc);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x800) != 0) {
      iVar3 = (*(int *)(param_1 + 0x804) - *(int *)(param_1 + 0x800)) / 0x2c;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    puVar5 = operator_new(iVar3 * 0x2c);
    *(undefined4 **)(param_2 + 4) = puVar5;
    puVar1 = *(undefined4 **)(param_1 + 0x804);
    for (puVar6 = *(undefined4 **)(param_1 + 0x800); puVar6 != puVar1; puVar6 = puVar6 + 0xb) {
      if (puVar5 != (undefined4 *)0x0) {
        puVar7 = puVar6;
        puVar8 = puVar5;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar5 = puVar5 + 0xb;
    }
  }
  else if (iVar3 == 1) {
    *param_2 = *(undefined1 *)(param_1 + 0x80c);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x810) != 0) {
      iVar3 = (*(int *)(param_1 + 0x814) - *(int *)(param_1 + 0x810)) / 0x2c;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    puVar5 = operator_new(iVar3 * 0x2c);
    *(undefined4 **)(param_2 + 4) = puVar5;
    puVar1 = *(undefined4 **)(param_1 + 0x814);
    puVar6 = *(undefined4 **)(param_1 + 0x810);
    if (puVar6 != puVar1) {
      do {
        if (puVar5 != (undefined4 *)0x0) {
          puVar7 = puVar6;
          puVar8 = puVar5;
          for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar6 = puVar6 + 0xb;
        puVar5 = puVar5 + 0xb;
      } while (puVar6 != puVar1);
      *(undefined4 **)(param_2 + 8) = puVar5;
      *(undefined4 **)(param_2 + 0xc) = puVar5;
      return param_2;
    }
  }
  else {
    if (iVar3 != 2) {
      *param_2 = DAT_006721c0;
      iVar3 = 0;
      if (DAT_006721c4 != 0) {
        iVar3 = (DAT_006721c8 - DAT_006721c4) / 0x2c;
      }
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      pvVar4 = operator_new(iVar3 * 0x2c);
      *(void **)(param_2 + 4) = pvVar4;
      iVar2 = DAT_006721c8;
      for (iVar3 = DAT_006721c4; iVar3 != iVar2; iVar3 = iVar3 + 0x2c) {
        FUN_004b2b50(pvVar4,iVar3);
        pvVar4 = (void *)((int)pvVar4 + 0x2c);
      }
      *(void **)(param_2 + 8) = pvVar4;
      *(void **)(param_2 + 0xc) = pvVar4;
      return param_2;
    }
    *param_2 = *(undefined1 *)(param_1 + 0x81c);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x820) != 0) {
      iVar3 = (*(int *)(param_1 + 0x824) - *(int *)(param_1 + 0x820)) / 0x2c;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    puVar5 = operator_new(iVar3 * 0x2c);
    *(undefined4 **)(param_2 + 4) = puVar5;
    puVar1 = *(undefined4 **)(param_1 + 0x824);
    puVar6 = *(undefined4 **)(param_1 + 0x820);
    if (puVar6 != puVar1) {
      do {
        if (puVar5 != (undefined4 *)0x0) {
          puVar7 = puVar6;
          puVar8 = puVar5;
          for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar6 = puVar6 + 0xb;
        puVar5 = puVar5 + 0xb;
      } while (puVar6 != puVar1);
      *(undefined4 **)(param_2 + 8) = puVar5;
      *(undefined4 **)(param_2 + 0xc) = puVar5;
      return param_2;
    }
  }
  *(undefined4 **)(param_2 + 8) = puVar5;
  *(undefined4 **)(param_2 + 0xc) = puVar5;
  return param_2;
}

