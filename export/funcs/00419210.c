
void __thiscall FUN_00419210(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  pvVar4 = *(void **)(param_1 + 0x1c);
  if (((void *)param_2[2] == pvVar4) && ((uint)param_2[1] <= *(uint *)(param_1 + 0x18))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  iVar5 = param_2[1];
  if (iVar5 != *(int *)(param_1 + 0x18)) {
    if (iVar5 == 0) {
      if (pvVar4 != (void *)0x0) {
        free(pvVar4);
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    else if ((pvVar4 == (void *)0x0) || (iVar5 != *(int *)(param_1 + 0x18))) {
      pvVar4 = realloc(pvVar4,iVar5 * 8);
      *(void **)(param_1 + 0x1c) = pvVar4;
      *(int *)(param_1 + 0x18) = iVar5;
    }
  }
  if (!bVar3) {
    puVar7 = (undefined4 *)param_2[2];
    puVar8 = *(undefined4 **)(param_1 + 0x1c);
    for (iVar5 = (param_2[1] & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  pfVar6 = *(float **)(param_1 + 0x1c);
  fVar1 = *pfVar6;
  *(float *)(param_1 + 0x28) = fVar1;
  *(float *)(param_1 + 0x24) = fVar1;
  if (1 < *(uint *)(param_1 + 0x18)) {
    iVar5 = *(uint *)(param_1 + 0x18) - 1;
    do {
      pfVar6 = pfVar6 + 2;
      fVar1 = *pfVar6;
      fVar2 = fVar1;
      if (*(float *)(param_1 + 0x24) < fVar1) {
        fVar2 = *(float *)(param_1 + 0x24);
      }
      *(float *)(param_1 + 0x24) = fVar2;
      if (fVar1 < *(float *)(param_1 + 0x28)) {
        fVar1 = *(float *)(param_1 + 0x28);
      }
      *(float *)(param_1 + 0x28) = fVar1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

