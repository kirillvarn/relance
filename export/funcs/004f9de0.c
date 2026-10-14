
void FUN_004f9de0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 uStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_1c = *(int **)Pipeline_exref;
  uStack_10 = 0;
  uStack_14 = 0xb;
  uStack_18 = 0;
  uStack_20 = 0x4f9df9;
  (**(code **)(*piStack_1c + 0xf8))();
  piVar1 = *(int **)Pipeline_exref;
  puVar4 = &DAT_005d9a04;
  iStack_24 = 1;
  do {
    uStack_20 = *(undefined4 *)(puVar4 + 4);
    piStack_28 = (int *)0x0;
    uStack_30 = 0x4f9e20;
    piStack_2c = piVar1;
    (**(code **)(*piVar1 + 0xf8))();
    iStack_24 = *(int *)(puVar4 + 8);
    puVar4 = puVar4 + 8;
  } while (iStack_24 != 0);
  piVar1 = *(int **)Pipeline_exref;
  puVar4 = &DAT_005d9a3c;
  iStack_24 = 1;
  do {
    uStack_20 = *(undefined4 *)(puVar4 + 4);
    piStack_28 = (int *)0x1;
    uStack_30 = 0x4f9e50;
    piStack_2c = piVar1;
    (**(code **)(*piVar1 + 0xf8))();
    iStack_24 = *(int *)(puVar4 + 8);
    puVar4 = puVar4 + 8;
  } while (iStack_24 != 0);
  piVar1 = *(int **)Pipeline_exref;
  puVar4 = &DAT_005d99dc;
  iStack_24 = 0x8d;
  do {
    uStack_20 = *(undefined4 *)(puVar4 + 4);
    piStack_2c = (int *)0x4f9e7e;
    piStack_28 = piVar1;
    (**(code **)(*piVar1 + 0xf0))();
    iStack_24 = *(int *)(puVar4 + 8);
    puVar4 = puVar4 + 8;
  } while (iStack_24 != 0);
  iVar3 = **(int **)Pipeline_exref;
  uStack_20 = 0;
  iStack_24 = 0x4f9e9e;
  uStack_20 = FUN_00425640();
  piStack_28 = *(int **)Pipeline_exref;
  iStack_24 = 0;
  piStack_2c = (int *)0x4f9eb0;
  (**(code **)(iVar3 + 0x108))();
  piStack_34 = *(int **)Pipeline_exref;
  piStack_2c = (int *)0x1;
  uStack_30 = 0x88;
  uStack_38 = 0x4f9ec8;
  (**(code **)(*piStack_34 + 0xf0))();
  piStack_40 = *(int **)Pipeline_exref;
  uStack_38 = 1;
  uStack_3c = 0x16;
  uStack_44 = 0x4f9edc;
  (**(code **)(*piStack_40 + 0xf0))();
  piStack_4c = *(int **)Pipeline_exref;
  uStack_44 = 1;
  uStack_48 = 7;
  uStack_50 = 0x4f9ef1;
  (**(code **)(*piStack_4c + 0xf0))();
  piStack_58 = *(int **)Pipeline_exref;
  uStack_50 = 0;
  uStack_54 = 0xe;
  uStack_5c = 0x4f9f06;
  (**(code **)(*piStack_58 + 0xf0))();
  piStack_64 = *(int **)Pipeline_exref;
  uStack_5c = 1;
  uStack_60 = 0x1b;
  uStack_68 = 0x4f9f1b;
  (**(code **)(*piStack_64 + 0xf0))();
  piStack_70 = *(int **)Pipeline_exref;
  uStack_68 = 2;
  uStack_6c = 0x13;
  uStack_74 = 0x4f9f30;
  (**(code **)(*piStack_70 + 0xf0))();
  uStack_74 = 2;
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x14);
  piVar5 = (int *)0x89;
  (**(code **)(**(int **)Pipeline_exref + 0xf4))(*(int **)Pipeline_exref,0x89,&uStack_74);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x89,0);
  iVar3 = **(int **)Pipeline_exref;
  uVar2 = (**(code **)(*piVar5 + 0x40))(piVar5);
  (**(code **)(iVar3 + 0x7c))(*(undefined4 *)Pipeline_exref,uVar2);
  piVar1 = *(int **)Pipeline_exref;
  if (DAT_00674c94 != (int *)0x0) {
    (**(code **)(*DAT_00674c94 + 8))(DAT_00674c94);
    DAT_00674c94 = (int *)0x0;
  }
  if (piVar1 != (int *)0x0) {
    DAT_00674c94 = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if (DAT_00674c94 != (int *)0x0) {
    (**(code **)(*DAT_00674c94 + 0x118))
              (DAT_00674c94,4,DAT_00674c88,DAT_00674c80,DAT_00674c84,DAT_00674c8c,DAT_00674c90,0);
    if (DAT_00674c94 != (int *)0x0) {
      (**(code **)(*DAT_00674c94 + 8))(DAT_00674c94);
      DAT_00674c94 = (int *)0x0;
    }
  }
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x89,piVar5);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1b,0);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,1);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x16,2);
  piVar1 = *(int **)Pipeline_exref;
  puVar4 = &DAT_005d99f4;
  iVar3 = 0x8d;
  do {
    (**(code **)(*piVar1 + 0xf0))(piVar1,iVar3,*(undefined4 *)(puVar4 + 4));
    iVar3 = *(int *)(puVar4 + 8);
    puVar4 = puVar4 + 8;
  } while (iVar3 != 0);
  return;
}

