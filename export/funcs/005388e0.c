
void __thiscall
FUN_005388e0(int *param_1,int param_2,int param_3,float param_4,float param_5,float param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  
  iVar4 = param_1[2];
  if (iVar4 != 0) {
    iVar6 = *param_1;
    puVar2 = (undefined4 *)FUN_005afe60();
    puVar2[1] = *(undefined4 *)(iVar4 + 0x40);
    *puVar2 = 0;
    puVar2[2] = iVar6;
    if (*(undefined4 **)(iVar4 + 0x40) == (undefined4 *)0x0) {
      *(undefined4 **)(iVar4 + 0x3c) = puVar2;
    }
    else {
      **(undefined4 **)(iVar4 + 0x40) = puVar2;
    }
    *(undefined4 **)(iVar4 + 0x40) = puVar2;
    *param_1 = 0;
    param_1[2] = 0;
  }
  param_1[2] = param_2;
  iVar4 = *(int *)(param_2 + 0x3c);
  if (iVar4 == 0) {
    iVar6 = 0;
    for (puVar2 = *(undefined4 **)(param_2 + 4); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      iVar6 = iVar6 + 1;
    }
    param_2 = iVar4;
    pvVar3 = malloc(iVar6 << 4);
  }
  else {
    pvVar3 = *(void **)(iVar4 + 8);
    param_2 = iVar4;
  }
  FUN_0043cf80(&param_2);
  *param_1 = (int)pvVar3;
  iVar4 = 0;
  for (puVar2 = *(undefined4 **)(param_1[2] + 4); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    iVar4 = iVar4 + 1;
  }
  puVar2 = (undefined4 *)0x0;
  param_1[1] = iVar4;
  iVar4 = 0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_1[2] + 4);
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    puVar1 = (undefined4 *)puVar2[2];
    puVar5 = (undefined4 *)(*param_1 + iVar4);
    *puVar5 = *puVar1;
    puVar5[1] = puVar1[1];
    puVar5[2] = puVar1[2];
    puVar5[3] = puVar1[3];
    *(float *)(*param_1 + iVar4) = param_5 * *(float *)(*param_1 + iVar4);
    pfVar7 = (float *)(iVar4 + 8 + *param_1);
    iVar4 = iVar4 + 0x10;
    *pfVar7 = param_4 * *pfVar7;
  }
  pfVar7 = (float *)*param_1;
  param_1[4] = (int)param_6;
  iVar4 = param_1[1];
  param_1[5] = param_3;
  param_1[3] = 0;
  if (pfVar7[iVar4 * 4 + -4] < param_6 == (pfVar7[iVar4 * 4 + -4] == param_6)) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        if (*pfVar7 < param_6) {
          param_1[3] = iVar6;
        }
        iVar6 = iVar6 + 1;
        pfVar7 = pfVar7 + 4;
      } while (iVar6 < iVar4);
    }
    return;
  }
  param_1[3] = -1;
  return;
}

