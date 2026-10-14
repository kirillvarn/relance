
undefined1 __thiscall FUN_0058e000(int param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  RenderDisplayList *pRVar10;
  undefined1 *puVar11;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  RenderDisplayList local_28 [12];
  RenderDisplayList local_1c [12];
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4852;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar5 = FUN_0057a810(param_2,0);
  puVar4 = param_3;
  if (param_3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x488) = *param_3;
    *(undefined4 *)(param_1 + 0x48c) = param_3[1];
    param_3 = (undefined4 *)0x0;
    uVar8 = puVar4[2];
    if (*(int *)(param_1 + 0x4a4) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2;
    }
    if (uVar6 < uVar8) {
      uVar2 = *(undefined4 *)(param_1 + 0x4a8);
      puVar9 = &param_3;
      iVar7 = FUN_005ad970(puVar9);
      FUN_00537260(uVar2,uVar8 - iVar7,puVar9);
    }
    else {
      uVar6 = FUN_005ad970();
      if (uVar8 < uVar6) {
        FUN_005995c0(*(int *)(param_1 + 0x4a4) + uVar8 * 4,*(undefined4 *)(param_1 + 0x4a8));
      }
    }
    uVar8 = puVar4[3];
    param_3 = (undefined4 *)0x0;
    if (*(int *)(param_1 + 0x4b4) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2;
    }
    if (uVar6 < uVar8) {
      uVar2 = *(undefined4 *)(param_1 + 0x4b8);
      puVar9 = &param_3;
      iVar7 = FUN_005ad970(puVar9);
      FUN_00537260(uVar2,uVar8 - iVar7,puVar9);
    }
    else {
      uVar6 = FUN_005ad970();
      if (uVar8 < uVar6) {
        FUN_005995c0(*(int *)(param_1 + 0x4b4) + uVar8 * 4,*(undefined4 *)(param_1 + 0x4b8));
      }
    }
    RenderDisplayList::RenderDisplayList(local_28);
    local_4 = 0;
    RenderDisplayList::RenderDisplayList(local_1c);
    local_10 = 0;
    uVar6 = puVar4[2] * puVar4[3];
    local_4 = 1;
    uVar8 = FUN_0058f9e0();
    if (uVar8 < uVar6) {
      param_3 = *(undefined4 **)(param_1 + 0x498);
      pRVar10 = local_28;
      iVar7 = FUN_0058f9e0(pRVar10);
      FUN_0058fd10(param_3,uVar6 - iVar7,pRVar10);
    }
    else {
      uVar8 = FUN_0058f9e0();
      if (uVar6 < uVar8) {
        FUN_00590040(uVar6 * 0x1c + *(int *)(param_1 + 0x494),*(undefined4 *)(param_1 + 0x498));
      }
    }
    local_4 = 2;
    FUN_0046ba90();
    local_4 = 0xffffffff;
    FUN_0046ba90();
    local_2c = 0;
    local_33 = 1;
    local_34 = 1;
    local_32 = 1;
    local_30 = 0;
    uVar8 = puVar4[2];
    local_4 = 3;
    uVar6 = FUN_0059f590();
    if (uVar6 < uVar8) {
      uVar2 = *(undefined4 *)(param_1 + 0x4c8);
      puVar11 = &local_34;
      iVar7 = FUN_0059f590(puVar11);
      FUN_005900d0(uVar2,uVar8 - iVar7,puVar11);
    }
    else {
      uVar6 = FUN_0059f590();
      if (uVar8 < uVar6) {
        FUN_00590450(*(int *)(param_1 + 0x4c4) + uVar8 * 0xc,*(undefined4 *)(param_1 + 0x4c8));
      }
    }
    local_4 = 0xffffffff;
    FUN_00599a60();
  }
  iVar7 = FUN_005ad970();
  if (iVar7 != 0) {
    iVar7 = FUN_005ad970();
    if (iVar7 != 0) {
      if (*(int *)(param_1 + 0x4a4) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2;
      }
      param_3 = (undefined4 *)(*(float *)(param_1 + 0x48c) / (float)uVar8);
      if (*(int *)(param_1 + 0x4b4) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2;
      }
      uVar6 = 0;
      fVar1 = *(float *)(param_1 + 0x488);
      while ((*(int *)(param_1 + 0x4a4) != 0 &&
             (uVar6 < (uint)(*(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2)))) {
        uVar3 = (ulonglong)uVar6;
        uVar6 = uVar6 + 1;
        *(float *)(*(int *)(param_1 + 0x4a4) + -4 + uVar6 * 4) = -((float)uVar3 * (float)param_3);
      }
      uVar6 = 0;
      while ((*(int *)(param_1 + 0x4b4) != 0 &&
             (uVar6 < (uint)(*(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2)))) {
        uVar3 = (ulonglong)uVar6;
        uVar6 = uVar6 + 1;
        *(float *)(*(int *)(param_1 + 0x4b4) + -4 + uVar6 * 4) =
             (float)uVar3 * (fVar1 / (float)uVar8);
      }
    }
  }
  FUN_00579cc0(*(undefined4 *)(param_1 + 0x488),*(undefined4 *)(param_1 + 0x48c));
  ExceptionList = local_c;
  return uVar5;
}

