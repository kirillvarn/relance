
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005225d0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_EBX;
  char cVar6;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  cVar6 = (char)((uint)unaff_EBX >> 0x18);
  uStack_10 = (uint)(uint3)uStack_10;
  puVar4 = (uint *)(**(code **)(*param_2 + 0xc))(param_2);
  uStack_10 = *puVar4;
  uStack_c = puVar4[1];
  uStack_8 = puVar4[2];
  if ((((*(char *)(param_1 + 0x198) != '\0') && (iVar5 = FUN_005792b0(0x2c), 1 < iVar5)) &&
      (iVar5 = FUN_005792b0(0x25), iVar5 != 0)) && (cVar2 = FUN_0054e040(&uStack_10), cVar2 != '\0')
     ) {
    FUN_00522700(param_2,0x42c80000);
    cVar6 = '\x01';
    FUN_0054e900(param_2,*(undefined4 *)(param_1 + 0xdc),2);
  }
  iVar5 = FUN_005792b0(0x21);
  if (((iVar5 != 0) && (iVar5 = FUN_005792b0(0x1b), iVar5 != 0)) &&
     ((*(CAsteroidField **)(param_1 + 4) != (CAsteroidField *)0x0 &&
      (bVar3 = CmnAsteroid::CAsteroidField::near_field
                         (*(CAsteroidField **)(param_1 + 4),(Vector *)&uStack_10), bVar3)))) {
    if (cVar6 == '\0') {
      FUN_00522700(param_2,0x42c80000);
    }
    FUN_00522a60(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x228);
  for (iVar5 = *(int *)(param_1 + 0x224); iVar5 != iVar1; iVar5 = iVar5 + 4) {
    FUN_005261b0(param_2,&stack0xffffffef,param_1);
  }
  return;
}

