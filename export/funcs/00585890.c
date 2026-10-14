
bool __thiscall
FUN_00585890(int param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 **ppuVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined1 *puStack_c0;
  undefined1 *puStack_bc;
  undefined1 local_ac [16];
  int *piStack_9c;
  float fStack_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70 [6];
  undefined1 local_58 [12];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 auStack_40 [16];
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    puStack_bc = (undefined1 *)0x5858c0;
    FUN_0059eee0();
    puStack_bc = (undefined1 *)0x0;
    puStack_c0 = param_3;
    FUN_0059ec80(param_2);
    if (param_5 != '\0') {
      puStack_bc = *(undefined1 **)(param_1 + 0x334);
      puStack_c0 = (undefined1 *)0x5858e9;
      FUN_004482b0();
    }
    puStack_c0 = *(undefined1 **)(param_1 + 0x334);
    puStack_bc = param_4;
    local_74 = 0x3f800000;
    local_84 = 0x3f800000;
    local_94 = 1.0;
    local_78 = 0.0;
    local_7c = 0.0;
    local_80 = 0.0;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    local_70[2] = 0;
    local_70[1] = 0;
    local_70[0] = 0;
    FUN_00585380();
    piVar6 = *(int **)Engine_exref;
    puStack_bc = local_ac;
    puStack_c0 = local_58;
    fVar7 = *(float *)(param_1 + 0x4b8);
    fVar8 = 0.0;
    (**(code **)(*piVar6 + 0x88))(piVar6,fVar7,0);
    puVar1 = (undefined4 *)
             (**(code **)(**(int **)Engine_exref + 0xa0))
                       (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x4b8));
    puVar3 = local_70;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    local_80 = fVar7 - fStack_4c;
    local_7c = fVar8 - fStack_48;
    puVar1 = local_70;
    puVar3 = auStack_40;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    local_78 = (float)puStack_c0 - fStack_44;
    if (DAT_0067c500 == (int *)0x0) {
      DAT_0067c500 = (int *)FUN_005b73e0();
    }
    ppuVar5 = &puStack_bc;
    piVar4 = DAT_0067c500;
    (**(code **)(*DAT_0067c500 + 0x38))(DAT_0067c500,ppuVar5,auStack_40,&local_80);
    piStack_9c = piVar6;
    fStack_98 = fVar7;
    local_94 = fVar8;
    (**(code **)(**(int **)Engine_exref + 0x9c))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x334),&puStack_c0,piVar4,ppuVar5,
               piVar6,fVar7,fVar8);
    (**(code **)(**(int **)Engine_exref + 0x6c))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x334),0,0);
  }
  return *(int *)(param_1 + 0x4b8) != -1;
}

