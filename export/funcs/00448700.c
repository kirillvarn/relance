
void __thiscall FUN_00448700(undefined4 *param_1,uint param_2)

{
  int iVar1;
  GoodInfo *pGVar2;
  GoodInfo *pGVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  Ship *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [9];
  undefined1 local_18;
  undefined4 local_14;
  GoodInfo *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9a53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00443770();
  iVar1 = param_1[1];
  local_48 = *(undefined4 *)(iVar1 + 4);
  local_44 = *(undefined4 *)(iVar1 + 8);
  local_40 = *(undefined4 *)(iVar1 + 0xc);
  puVar7 = (undefined4 *)(iVar1 + 0x10);
  puVar8 = local_3c;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_18 = 1;
  local_14 = *(undefined4 *)(iVar1 + 8);
  local_4 = 0;
  pGVar2 = GoodList::find_by_id(param_2);
  pGVar3 = GoodList::find_by_id(*(uint *)(pGVar2 + 0x90));
  local_4c = Archetype::GetShip(*(uint *)(pGVar3 + 0x54));
  local_10 = pGVar2 + 0x94;
  pvVar4 = operator_new(100);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004437d0(*param_1,&local_4c);
  }
  param_1[3] = uVar5;
  local_4 = 0xffffffff;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)&local_4c);
  ExceptionList = local_c;
  return;
}

