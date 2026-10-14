
void __thiscall FUN_00408520(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  iVar3 = __RTDynamicCast(param_2,0,&Archetype::ICliObj::RTTI_Type_Descriptor,
                          &Archetype::CliMunition::RTTI_Type_Descriptor,0);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  FUN_004086c0(iVar3);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar3 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar3 + 0x60);
  if ((IDPMsgHandler *)(param_1 + 100) != (IDPMsgHandler *)(iVar3 + 100)) {
    if (*(int *)(iVar3 + 0x68) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)(iVar3 + 0x6c) - *(int *)(iVar3 + 0x68) >> 2;
    }
    puVar10 = *(undefined4 **)(param_1 + 0x68);
    if (puVar10 == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(int *)(param_1 + 0x6c) - (int)puVar10 >> 2;
    }
    if (uVar11 < uVar4) {
      uVar4 = FUN_0040d740();
      uVar11 = FUN_005ad970();
      if (uVar4 < uVar11) {
        IDPMsgHandler::OnReceive
                  ((IDPMsgHandler *)(param_1 + 100),*(uchar **)(param_1 + 0x68),
                   *(ulong *)(param_1 + 0x6c));
        FUN_005b7e1d(*(undefined4 *)(param_1 + 0x68));
        iVar7 = FUN_005ad970();
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        pvVar8 = operator_new(iVar7 << 2);
        *(void **)(param_1 + 0x68) = pvVar8;
        uVar9 = FUN_00597c70(*(undefined4 *)(iVar3 + 0x68),*(undefined4 *)(iVar3 + 0x6c),pvVar8);
        *(undefined4 *)(param_1 + 0x6c) = uVar9;
        *(undefined4 *)(param_1 + 0x70) = uVar9;
      }
      else {
        iVar7 = *(int *)(iVar3 + 0x68);
        iVar6 = FUN_005ad970();
        iVar7 = iVar7 + iVar6 * 4;
        FUN_00527820(*(undefined4 *)(iVar3 + 0x68),iVar7,*(undefined4 *)(param_1 + 0x68));
        FUN_00597c70(iVar7,*(undefined4 *)(iVar3 + 0x6c),*(undefined4 *)(param_1 + 0x6c));
        iVar7 = FUN_005ad970();
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x68) + iVar7 * 4;
      }
    }
    else {
      puVar2 = *(undefined4 **)(iVar3 + 0x6c);
      for (puVar5 = *(undefined4 **)(iVar3 + 0x68); puVar5 != puVar2; puVar5 = puVar5 + 1) {
        *puVar10 = *puVar5;
        puVar10 = puVar10 + 1;
      }
      if (*(int *)(iVar3 + 0x68) == 0) {
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
      }
      else {
        *(int *)(param_1 + 0x6c) =
             *(int *)(param_1 + 0x68) + (*(int *)(iVar3 + 0x6c) - *(int *)(iVar3 + 0x68) >> 2) * 4;
      }
    }
  }
  FUN_005595c0(iVar3 + 0x74);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

