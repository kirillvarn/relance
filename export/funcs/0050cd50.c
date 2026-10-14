
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0050cd50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_stack_0000002c;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00421dd0(0xbe2);
    if (*(char *)(param_1 + 0x4c) == '\0') {
      uVar7 = 4;
      uVar6 = 2;
    }
    else {
      uVar7 = 6;
      uVar6 = 5;
    }
    FUN_004220c0(uVar6,uVar7);
    uVar6 = FUN_00425640(0);
    FUN_004220a0(uVar6);
    local_80 = param_2;
    local_7c = param_3;
    local_78 = param_4;
    FUN_00411d60(&local_cc,&stack0x00000020,param_5);
    FUN_00411d60(local_6c,&local_cc,*(undefined4 *)(param_1 + 0x24));
    FUN_00411d60(&local_cc,&stack0x00000014,param_5);
    FUN_00411d60(local_60,&local_cc,*(undefined4 *)(param_1 + 0x24));
    FUN_00423b60(&local_cc,&local_80,local_6c);
    FUN_00423b30(&local_b8,&local_cc,local_60);
    FUN_00423b30(&local_cc,&local_80,local_6c);
    FUN_00423b30(&local_94,&local_cc,local_60);
    FUN_00423b30(&local_cc,&local_80,local_6c);
    FUN_00423b60(&local_ac,&local_cc,local_60);
    FUN_00423b60(&local_cc,&local_80,local_6c);
    FUN_00423b60(&local_a0,&local_cc,local_60);
    FUN_00423b30(local_18,&local_b8,&local_94);
    FUN_00423b30(local_c,local_18,&local_ac);
    FUN_00423b30(&local_cc,local_c,&local_a0);
    FUN_00422b80(local_cc * _DAT_005c94f8,local_c8 * _DAT_005c94f8,local_c4 * _DAT_005c94f8);
    FUN_00422b80(local_94 + local_b8,local_90 + local_b4,local_8c + local_b0);
    FUN_00422b80(local_cc * _DAT_005c75e0,local_c8 * _DAT_005c75e0,local_c4 * _DAT_005c75e0);
    FUN_00422b80(local_ac + local_94,local_a8 + local_90,local_a4 + local_8c);
    FUN_00422b80(local_cc * _DAT_005c75e0,local_c8 * _DAT_005c75e0,local_c4 * _DAT_005c75e0);
    FUN_00422b80(local_a0 + local_ac,local_9c + local_a8,local_98 + local_a4);
    FUN_00422b80(local_cc * _DAT_005c75e0,local_c8 * _DAT_005c75e0,local_c4 * _DAT_005c75e0);
    FUN_00422b80(local_a0 + local_b8,local_9c + local_b4,local_98 + local_b0);
    FUN_00422b80(local_cc * _DAT_005c75e0,local_c8 * _DAT_005c75e0,local_c4 * _DAT_005c75e0);
    iVar1 = *(int *)(param_1 + 0x48);
    local_bc = *(float *)(iVar1 + 0x10);
    local_84 = *(float *)(iVar1 + 8);
    local_74 = (local_bc + local_84) * (float)_DAT_005c75e8;
    local_88 = *(float *)(iVar1 + 0xc);
    local_c0 = *(float *)(iVar1 + 0x14);
    local_70 = (local_c0 + local_88) * (float)_DAT_005c75e8;
    FUN_00421670(6);
    uVar6 = in_stack_0000002c;
    FUN_00421bd0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),in_stack_0000002c);
    fVar5 = local_70;
    fVar4 = local_74;
    FUN_00421ca0(local_74,local_70);
    FUN_00421cc0(local_24,local_20,local_1c);
    FUN_00421bd0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                 *(undefined4 *)(param_1 + 0x3c),uVar6);
    fVar3 = local_84;
    fVar2 = local_88;
    FUN_00421ca0(local_84,local_88);
    FUN_00421cc0(local_b8,local_b4,local_b0);
    FUN_00421ca0(fVar4,fVar2);
    FUN_00421cc0(local_54,local_50,local_4c);
    FUN_00421ca0(local_bc,fVar2);
    FUN_00421cc0(local_94,local_90,local_8c);
    FUN_00421ca0(local_bc,fVar5);
    FUN_00421cc0(local_30,local_2c,local_28);
    FUN_00421ca0(local_bc,local_c0);
    FUN_00421cc0(local_ac,local_a8,local_a4);
    FUN_00421ca0(fVar4,local_c0);
    FUN_00421cc0(local_48,local_44,local_40);
    FUN_00421ca0(fVar3,local_c0);
    FUN_00421cc0(local_a0,local_9c,local_98);
    FUN_00421ca0(fVar3,fVar5);
    FUN_00421cc0(local_3c,local_38,local_34);
    FUN_00421ca0(fVar3,fVar2);
    FUN_00421cc0(local_b8,local_b4,local_b0);
    FUN_00421690();
  }
  return;
}

