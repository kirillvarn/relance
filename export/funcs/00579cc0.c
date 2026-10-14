
void __thiscall FUN_00579cc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [4];
  undefined1 local_60 [32];
  undefined4 auStack_40 [4];
  undefined1 auStack_30 [48];
  
  *(undefined4 *)(param_1 + 0x334) = param_3;
  *(undefined4 *)(param_1 + 0x330) = param_2;
  if (*(int *)(param_1 + 0x3f0) != 0) {
    FUN_00595e30(*(undefined4 *)(param_1 + 0x3f8),param_3);
    local_70[1] = *(undefined4 *)(param_1 + 0x330);
    local_70[0] = 0x3f800000;
    local_80 = 0x3f800000;
    local_90 = 0x3f800000;
    local_74 = 0;
    local_78 = 0;
    local_7c = 0;
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_70[2] = 0;
    local_70[3] = 0;
    if (DAT_0067c480 == (int *)0x0) {
      DAT_0067c480 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_0067c480 + 0x1c))(DAT_0067c480,local_60,param_1 + 0x3c,&local_90);
    puVar2 = local_70;
    puVar3 = auStack_40;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3f0) + 0x20))(auStack_40);
  }
  if (*(int *)(param_1 + 0x3f4) != 0) {
    FUN_00595e30(*(undefined4 *)(param_1 + 0x330),*(undefined4 *)(param_1 + 0x3f8));
    local_70[2] = *(undefined4 *)(param_1 + 0x334);
    local_70[0] = 0x3f800000;
    local_80 = 0x3f800000;
    local_90 = 0x3f800000;
    local_74 = 0;
    local_78 = 0;
    local_7c = 0;
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_70[1] = 0;
    local_70[3] = 0;
    if (DAT_0067c480 == (int *)0x0) {
      DAT_0067c480 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_0067c480 + 0x1c))(DAT_0067c480,auStack_30,param_1 + 0x3c,&local_90);
    puVar2 = auStack_40;
    puVar3 = local_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3f4) + 0x20))(local_70);
  }
  return;
}

