
int __thiscall FUN_0044dd80(int param_1,int param_2,ThornEntity *param_3)

{
  ThornEntity *pTVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9d2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = ThornGetUserString(*(IScriptEngine **)(param_1 + 0x3c),param_2,"category");
  iVar3 = PetalInterfaceDatabase::get_category(pcVar2);
  pTVar1 = param_3;
  if (iVar3 == 1) {
    iVar3 = stricmp(*(char **)(param_3 + 0x3c),PTR_s_PlayerShip_00611000);
    if (iVar3 == 0) {
      iVar3 = FUN_00446be0();
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return 0;
      }
    }
  }
  FUN_0044e430(iVar4,&local_4c,&local_48,&local_44,local_3c,&local_40,&param_2);
  param_3 = operator_new(400);
  local_4 = 0;
  if (param_3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004510f0(param_1,local_3c,param_1,pTVar1);
  }
  *(int *)(iVar4 + 0x6c) = local_4c;
  local_4 = 0xffffffff;
  FUN_00451330(local_48);
  *(undefined4 *)(iVar4 + 0x74) = local_44;
  *(undefined4 *)(iVar4 + 0x78) = local_40;
  *(undefined1 *)(iVar4 + 0x7c) = (undefined1)param_2;
  if (local_4c != 0) {
    *(ThornEntity *)(local_4c + 0x15) = pTVar1[0x40];
    *(ThornEntity *)(local_4c + 0x16) = pTVar1[0x41];
    uVar5 = ThornGetRenderType(pTVar1,*(char **)(param_1 + 0xa4));
    *(ulong *)(local_4c + 0x18) = uVar5;
  }
  ExceptionList = local_c;
  return iVar4;
}

