
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00580d00(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float unaff_ESI;
  float10 fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puStack_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  float fStack_74;
  undefined4 *puStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_64 [12];
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined4 local_18 [3];
  undefined1 local_c [12];
  
  if (*(char *)(param_1 + 0x67b) == '\0') {
    puStack_7c = &local_30;
    puStack_80 = local_18;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    puStack_84 = (undefined4 *)0x580f77;
    FUN_004e7090();
    puStack_7c = &local_30;
    puStack_80 = (undefined4 *)local_c;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    puStack_84 = (undefined4 *)0x580fa4;
    FUN_004e7090();
    puStack_7c = local_18;
    puStack_80 = (undefined4 *)local_1c;
    puStack_84 = (undefined4 *)local_20;
    puStack_88 = &local_24;
    puStack_8c = &DAT_0067dbf8;
    puStack_90 = (undefined4 *)0x580fc6;
    cVar1 = (**(code **)(DAT_0067dbf8 + 0x34))();
    if (cVar1 == '\0') {
      return;
    }
    puStack_90 = (undefined4 *)local_20;
    puStack_94 = &local_48;
    cVar1 = (**(code **)(DAT_0067dbf8 + 0x34))(&DAT_0067dbf8,&uStack_50,auStack_4c);
    if (cVar1 == '\0') {
      return;
    }
    fStack_58 = (float)DAT_00616840;
    fStack_54 = (float)DAT_00616844;
    uStack_50 = 0;
    FUN_00423b60(&puStack_88,auStack_4c,auStack_64);
    fVar7 = (float)puStack_88 * (float)puStack_88 +
            (float)puStack_84 * (float)puStack_84 + (float)puStack_80 * (float)puStack_80;
    fVar5 = (float10)FUN_00507e70(fVar7);
    fVar7 = (float)(fVar5 * (float10)fVar7);
    FUN_00423b60(&puStack_94,&fStack_58,auStack_64);
    fVar6 = (float)puStack_94 * (float)puStack_94 +
            (float)puStack_90 * (float)puStack_90 + (float)puStack_8c * (float)puStack_8c;
    fVar3 = (float)(0x5f3759df - ((int)fVar6 >> 1));
    fVar6 = (_DAT_005ca220 - fVar3 * fVar3 * fVar6 * _DAT_005c75e0) * fVar3 * fVar6;
    if (fVar7 == _DAT_005c7474) {
      return;
    }
    if (fVar6 == _DAT_005c7474) {
      return;
    }
    FUN_004c8b10(&puStack_70,&puStack_88,fVar7);
    puStack_88 = puStack_70;
    puStack_84 = (undefined4 *)fStack_6c;
    puStack_80 = (undefined4 *)fStack_68;
    FUN_004c8b10(&puStack_7c,&puStack_94,fVar6);
    puStack_94 = puStack_7c;
    if (fVar7 <= (fStack_68 * fStack_74 +
                 fStack_6c * unaff_ESI + (float)puStack_70 * (float)puStack_7c) * fVar6) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x664) + *(int *)(param_1 + 0x660);
    *(int *)(param_1 + 0x664) = iVar2;
    iVar4 = *(int *)(param_1 + 0x65c);
    if (iVar2 <= iVar4) goto LAB_00581199;
  }
  else {
    puStack_7c = &local_48;
    puStack_80 = &local_24;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    puStack_84 = (undefined4 *)0x580d41;
    FUN_004e7090();
    puStack_7c = &local_48;
    puStack_80 = local_18;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    puStack_84 = (undefined4 *)0x580d6e;
    FUN_004e7090();
    puStack_7c = &local_24;
    puStack_80 = &local_28;
    puStack_84 = &local_2c;
    puStack_88 = &local_30;
    puStack_8c = &DAT_0067dbf8;
    puStack_90 = (undefined4 *)0x580d90;
    cVar1 = (**(code **)(DAT_0067dbf8 + 0x34))();
    if (cVar1 == '\0') {
      return;
    }
    puStack_90 = &local_2c;
    puStack_94 = &local_48;
    cVar1 = (**(code **)(DAT_0067dbf8 + 0x34))(&DAT_0067dbf8,&uStack_50,auStack_4c);
    if (cVar1 == '\0') {
      return;
    }
    puStack_70 = (undefined4 *)(float)DAT_00616840;
    fStack_6c = (float)DAT_00616844;
    fStack_68 = 0.0;
    FUN_00423b60(&puStack_94,&fStack_58,auStack_64);
    fVar7 = (float)puStack_94 * (float)puStack_94 +
            (float)puStack_90 * (float)puStack_90 + (float)puStack_8c * (float)puStack_8c;
    fVar5 = (float10)FUN_00507e70(fVar7);
    fVar7 = (float)(fVar5 * (float10)fVar7);
    FUN_00423b60(&puStack_88,&puStack_70,auStack_64);
    fVar6 = (float)puStack_88 * (float)puStack_88 +
            (float)puStack_84 * (float)puStack_84 + (float)puStack_80 * (float)puStack_80;
    fVar5 = (float10)FUN_00507e70(fVar6);
    fVar6 = (float)(fVar5 * (float10)fVar6);
    if (fVar7 == _DAT_005c7474) {
      return;
    }
    if (fVar6 == _DAT_005c7474) {
      return;
    }
    FUN_004c8b10(&puStack_7c,&puStack_94,fVar7);
    puStack_94 = puStack_7c;
    FUN_004c8b10(&puStack_70,&puStack_88,fVar6);
    puStack_80 = (undefined4 *)fStack_68;
    puStack_88 = puStack_70;
    puStack_84 = (undefined4 *)fStack_6c;
    if (fVar7 <= (fStack_74 * fStack_68 +
                 unaff_ESI * fStack_6c + (float)puStack_7c * (float)puStack_70) * fVar6) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x664) - *(int *)(param_1 + 0x660);
    *(int *)(param_1 + 0x664) = iVar2;
    iVar4 = *(int *)(param_1 + 0x658);
    if (iVar4 <= iVar2) goto LAB_00581199;
  }
  *(int *)(param_1 + 0x664) = iVar4;
LAB_00581199:
  FUN_00580290();
  FUN_00581560();
  return;
}

