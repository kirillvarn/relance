
void __thiscall FUN_0045f860(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_65;
  void *local_64;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ba4bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0046cd50(&local_64,&param_2);
  if (local_64 == *(void **)(param_1 + 4)) {
    pvVar2 = operator_new(0xc);
    local_4 = 0;
    local_64 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      FUN_0046ba60(&local_65);
    }
    local_4 = 0xffffffff;
    piVar3 = (int *)FUN_0046baf0(&local_64);
    puVar6 = (undefined4 *)*piVar3;
    uVar4 = FUN_0053e430(local_60);
    FUN_0046bba0(uVar4);
    puVar5 = (undefined4 *)FUN_0046baf0(&local_5c);
    uVar4 = *puVar5;
    for (; param_3 != puVar6; param_3 = (undefined4 *)*param_3) {
      FUN_0046c800(&local_50,uVar4,param_3 + 2);
    }
    local_4c = 0;
    local_50 = param_2;
    piVar3 = (int *)FUN_0046cc90(&local_5c,&local_50);
    *(void **)(*piVar3 + 0x10) = pvVar2;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    uVar4 = FUN_0046d0d0(&param_2,&local_5c);
    piVar3 = (int *)FUN_0046cdc0(&local_50,uVar4);
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    (**(code **)FDUMP_exref)
              (0x100003,"%s(%d) : NOTICE:General:%s",
               "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_Chat.cpp",0x552,"Channel add successful.\n")
    ;
  }
  else {
    (**(code **)FDUMP_exref)
              (0x100003,"%s(%d) : NOTICE:General:%s",
               "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_Chat.cpp",0x558,
               "Channel add attempted on existing channel. Modifying instead.\n");
    local_50 = param_2;
    local_4c = 0;
    piVar3 = (int *)FUN_0046cc90(&local_5c,&local_50);
    uVar4 = *(undefined4 *)(*(int *)(*piVar3 + 0x10) + 4);
    puVar6 = (undefined4 *)FUN_0053e430(&local_50);
    FUN_0046c860(&local_5c,*puVar6,uVar4);
    puVar6 = (undefined4 *)FUN_0046baf0(&local_50);
    puVar6 = (undefined4 *)*puVar6;
    uVar4 = FUN_0053e430(&local_5c);
    FUN_0046bba0(uVar4);
    puVar5 = (undefined4 *)FUN_0046baf0(local_60);
    uVar4 = *puVar5;
    for (; param_3 != puVar6; param_3 = (undefined4 *)*param_3) {
      FUN_0046c800(&local_64,uVar4,param_3 + 2);
    }
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    auStack_2c[0] = param_2;
    FUN_0045fb20(&uStack_38);
    FUN_0046d990(auStack_48,auStack_2c);
    FUN_0046d660(auStack_48,auStack_44);
    *(undefined4 *)(iStack_40 + 0x10) = 0;
    *(undefined4 *)(iStack_40 + 0x14) = 0;
    *(undefined4 *)(iStack_40 + 0x18) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  ExceptionList = pvStack_c;
  return;
}

