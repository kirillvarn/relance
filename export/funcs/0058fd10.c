
RenderDisplayList * __thiscall
FUN_0058fd10(RenderDisplayList *param_1,RenderDisplayList *param_2,uint param_3,
            RenderDisplayList *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  RenderDisplayList *pRVar4;
  uint uVar5;
  int iVar6;
  RenderDisplayList *pRVar7;
  void *pvVar8;
  RenderDisplayList *pRVar9;
  RenderDisplayList *pRVar10;
  int iVar11;
  
  pRVar10 = *(RenderDisplayList **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)pRVar10) / 0x1c)) {
    pRVar4 = (RenderDisplayList *)-((int)pRVar10 - (int)param_2 >> 0x1f);
    if (param_3 <= (uint)(((int)pRVar10 - (int)param_2) / 0x1c)) {
      if (param_3 != 0) {
        pRVar7 = pRVar10;
        for (pRVar9 = pRVar10 + param_3 * -0x1c; pRVar9 != pRVar10; pRVar9 = pRVar9 + 0x1c) {
          pRVar4 = (RenderDisplayList *)FUN_005909c0(pRVar7,pRVar9);
          pRVar7 = pRVar7 + 0x1c;
        }
        iVar6 = *(int *)(param_1 + 8);
        pRVar10 = (RenderDisplayList *)(*(int *)(param_1 + 8) + param_3 * -0x1c);
        while (param_2 != pRVar10) {
          FUN_00591150(pRVar10 + -0x1c);
          pRVar4 = RenderDisplayList::operator=
                             ((RenderDisplayList *)(iVar6 + -0x10),pRVar10 + -0x10);
          *(RenderDisplayList *)(iVar6 + -4) = pRVar10[-4];
          iVar6 = iVar6 + -0x1c;
          pRVar10 = pRVar10 + -0x1c;
        }
        pRVar10 = param_2 + param_3 * 0x1c;
        for (; param_2 != pRVar10; param_2 = param_2 + 0x1c) {
          RenderDisplayList::operator=(param_2,param_4);
          pRVar4 = RenderDisplayList::operator=(param_2 + 0xc,param_4 + 0xc);
          param_2[0x18] = param_4[0x18];
        }
        *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1c;
      }
      return pRVar4;
    }
    for (pRVar4 = param_2; pRVar4 != pRVar10; pRVar4 = pRVar4 + 0x1c) {
      FUN_005909c0(pRVar4 + param_3 * 0x1c,pRVar4);
    }
    iVar6 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar6 - (int)param_2) / 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_005909c0(iVar6,param_4);
      iVar6 = iVar6 + 0x1c;
    }
    pRVar10 = *(RenderDisplayList **)(param_1 + 8);
    if (param_2 != pRVar10) {
      do {
        RenderDisplayList::operator=(param_2,param_4);
        RenderDisplayList::operator=(param_2 + 0xc,param_4 + 0xc);
        param_2[0x18] = param_4[0x18];
        param_2 = param_2 + 0x1c;
      } while (param_2 != pRVar10);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1c;
    return param_1;
  }
  iVar6 = *(int *)(param_1 + 4);
  if ((iVar6 == 0) || (uVar5 = ((int)pRVar10 - iVar6) / 0x1c, uVar5 <= param_3)) {
    uVar5 = param_3;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = ((int)pRVar10 - iVar6) / 0x1c;
  }
  iVar6 = iVar6 + uVar5;
  iVar2 = iVar6;
  if (iVar6 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x1c);
  pvVar8 = pvVar3;
  for (pRVar10 = *(RenderDisplayList **)(param_1 + 4); uVar5 = param_3, pvVar1 = pvVar8,
      pRVar10 != param_2; pRVar10 = pRVar10 + 0x1c) {
    FUN_005909c0(pvVar8,pRVar10);
    pvVar8 = (void *)((int)pvVar8 + 0x1c);
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    FUN_005909c0(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0x1c);
  }
  pRVar10 = *(RenderDisplayList **)(param_1 + 8);
  if (param_2 != pRVar10) {
    iVar2 = param_3 * 0x1c - (int)param_2;
    do {
      FUN_005909c0(param_2 + (int)pvVar8 + iVar2,param_2);
      param_2 = param_2 + 0x1c;
    } while (param_2 != pRVar10);
  }
  iVar2 = *(int *)(param_1 + 8);
  for (iVar11 = *(int *)(param_1 + 4); iVar11 != iVar2; iVar11 = iVar11 + 0x1c) {
    FUN_0058e360();
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)(iVar6 * 0x1c + (int)pvVar3);
  if (*(int *)(param_1 + 4) != 0) {
    iVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((iVar6 / 0x1c + param_3) * 0x1c + (int)pvVar3);
    return (RenderDisplayList *)(iVar6 * -0x6db6db6d);
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(void **)(param_1 + 8) = (void *)(param_3 * 0x1c + (int)pvVar3);
  return (RenderDisplayList *)0x0;
}

