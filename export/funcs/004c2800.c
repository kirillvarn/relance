
void __thiscall FUN_004c2800(int param_1,int param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bd6a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CacheString::clear((CacheString *)&local_38);
  CacheString::clear((CacheString *)&local_3c);
  iVar8 = param_2;
  cVar3 = (char)param_3;
  if ((char)param_3 != '\0') {
    FUN_004be6c0(*(undefined4 *)(param_2 + 0x58),&local_38,&local_3c,&param_3,&local_34,1);
  }
  if (iVar8 == *(int *)(param_1 + 0x338)) {
    *(char *)(iVar8 + 0x5d) = cVar3;
    FUN_004bf850(0xffffffff);
    bVar9 = cVar3 == '\0';
    (**(code **)(**(int **)(param_1 + 0x368) + 0xa8))(1,bVar9,0);
    (**(code **)(**(int **)(param_1 + 0x36c) + 0xa8))(1,bVar9,0);
    (**(code **)(**(int **)(param_1 + 0x370) + 0xa8))(1,bVar9,0);
    (**(code **)(**(int **)(param_1 + 0x374) + 0xa8))(1,bVar9,0);
    if (cVar3 != '\0') {
      IDPMsgHandler::OnAddHost
                (*(IDPMsgHandler **)(param_1 + 0x370),(_DPNMSG_ENUM_HOSTS_RESPONSE *)0x1);
      if (local_38 != 0) {
        FUN_00585890(local_38,local_3c,0,0);
      }
      (**(code **)(**(int **)(param_1 + 0x374) + 0xa8))(0x1e,param_3,0);
      piStack_30 = (int *)CONCAT31(piStack_30._1_3_,(undefined1)iStack_4);
      uStack_2c = FUN_0042a7e0(0,0);
      uStack_28 = 0;
      iStack_10 = 0;
      piVar5 = (int *)StyleNode::StyleNode((StyleNode *)&local_38,0xd801);
      iStack_10 = CONCAT31(iStack_10._1_3_,1);
      param_3 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
      iStack_4._0_1_ = 2;
      FUN_0046c800(&param_2,pvStack_20,&param_3);
      iStack_4._0_1_ = 1;
      if (param_3 != (undefined4 *)0x0) {
        (**(code **)*param_3)(1);
        param_3 = (undefined4 *)0x0;
      }
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      StyleNode::~StyleNode((StyleNode *)&uStack_2c);
      FUN_0057da40(local_34,auStack_24);
      FUN_0057b370();
      FUN_0057b3e0(auStack_24);
      pbVar1 = (byte *)(*(int *)(param_1 + 0x378) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      FUN_00579bd0(1);
      iStack_4 = 0xffffffff;
      puVar6 = (undefined4 *)FUN_0053e430(&param_3);
      FUN_0046c860(&param_2,*puVar6,pvStack_20);
      FUN_005b7e1d(pvStack_20);
      goto LAB_004c2c37;
    }
    pbVar1 = (byte *)(*(int *)(param_1 + 0x378) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
  }
  else {
    if (iVar8 != *(int *)(param_1 + 0x330)) goto LAB_004c2c37;
    *(char *)(iVar8 + 0x5d) = cVar3;
    FUN_004bf850(0xffffffff);
    bVar9 = cVar3 == '\0';
    (**(code **)(**(int **)(param_1 + 0x37c) + 0xa8))(1,bVar9,0);
    (**(code **)(**(int **)(param_1 + 0x380) + 0xa8))(1,bVar9,0);
    (**(code **)(**(int **)(param_1 + 900) + 0xa8))(1,bVar9,0);
    (**(code **)(**(int **)(param_1 + 0x388) + 0xa8))(1,bVar9,0);
    if (cVar3 != '\0') {
      IDPMsgHandler::OnAddHost
                (*(IDPMsgHandler **)(param_1 + 900),(_DPNMSG_ENUM_HOSTS_RESPONSE *)0x1);
      FUN_00585890(local_38,local_3c,0,0);
      (**(code **)(**(int **)(param_1 + 0x388) + 0xa8))(0x1e,param_3,0);
      auStack_24[0] = (undefined1)iStack_4;
      pvStack_20 = operator_new(0xc);
      *(void **)pvStack_20 = pvStack_20;
      *(void **)((int)pvStack_20 + 4) = pvStack_20;
      uStack_1c = 0;
      iStack_10 = 3;
      piVar5 = (int *)StyleNode::StyleNode((StyleNode *)&local_38,0xd801);
      iStack_10 = CONCAT31(iStack_10._1_3_,4);
      param_3 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
      puVar6 = (undefined4 *)piStack_14[1];
      piStack_30 = piStack_14;
      piVar5 = piStack_14 + 1;
      iStack_4._0_1_ = 5;
      puVar7 = operator_new(0xc);
      *puVar7 = piStack_30;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = puVar7;
      }
      puVar7[1] = puVar6;
      *piVar5 = (int)puVar7;
      *(undefined4 **)puVar7[1] = puVar7;
      FUN_0046ea00(puVar7 + 2,&param_3);
      iStack_10 = iStack_10 + 1;
      iStack_4._0_1_ = 4;
      if (param_3 != (undefined4 *)0x0) {
        (**(code **)*param_3)(1);
        param_3 = (undefined4 *)0x0;
      }
      iStack_4 = CONCAT31(iStack_4._1_3_,3);
      StyleNode::~StyleNode((StyleNode *)&uStack_2c);
      FUN_0057da40(local_34,auStack_18);
      FUN_0057b370();
      FUN_0057b3e0(auStack_18);
      pbVar1 = (byte *)(*(int *)(param_1 + 0x38c) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      FUN_00579bd0(1);
      piVar4 = piStack_14;
      iStack_4 = 0xffffffff;
      piVar5 = (int *)*piStack_14;
      while (piVar5 != piVar4) {
        piVar2 = (int *)*piVar5;
        FUN_0046d680(&piStack_30,piVar5);
        piVar5 = piVar2;
      }
      FUN_005b7e1d(piStack_14);
      iVar8 = param_2;
      goto LAB_004c2c37;
    }
    pbVar1 = (byte *)(*(int *)(param_1 + 0x38c) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
  }
  FUN_00579bd0(0);
LAB_004c2c37:
  if ((*(int *)(param_1 + 0x424) != 0) && (*(int *)(*(int *)(param_1 + 0x424) + 4) == iVar8)) {
    **(char **)(param_1 + 0x428) = cVar3;
  }
  ExceptionList = local_c;
  return;
}

