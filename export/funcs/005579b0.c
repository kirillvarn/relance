
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005579b0(int param_1,int *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  float unaff_EBX;
  float unaff_EBP;
  undefined4 *puVar5;
  float10 fVar6;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [2];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_58;
  undefined4 local_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [7];
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [20];
  
  fVar1 = *(float *)(param_1 + 0x24);
  local_48 = *(float *)(param_1 + 0x70);
  local_44 = *(undefined4 *)(param_1 + 0x74);
  local_40 = *(undefined4 *)(param_1 + 0x78);
  puVar3 = (undefined4 *)(param_1 + 0x4c);
  puVar5 = local_3c;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  if (((fVar1 != (float)_DAT_005c8ba8) || (*(float *)(param_1 + 0x28) != (float)_DAT_005c8ba8)) ||
     (*(float *)(param_1 + 0x2c) != (float)_DAT_005c8ba8)) {
    local_58 = _DAT_005c75dc;
    fVar1 = _DAT_005c75dc;
    if (*(float *)(param_1 + 0x48) < *(float *)(param_1 + 0x44)) {
      uVar2 = (**(code **)(*param_2 + 0xc))(param_2);
      FUN_00423b60(afStack_80,param_1 + 0x70,uVar2);
      FUN_00557d00();
      FUN_004cbfa0(&fStack_8c);
      fVar6 = (float10)FUN_004cbf40(afStack_80,&fStack_8c);
      fStack_74 = (float)fVar6;
      fVar1 = _DAT_005c7474;
      if (((float10)*(float *)(param_1 + 0x48) <= fVar6) &&
         (fVar1 = local_58, fStack_74 < *(float *)(param_1 + 0x44))) {
        fVar1 = (fStack_74 - *(float *)(param_1 + 0x48)) /
                (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x48));
      }
    }
    FUN_00411d60(&local_54,param_1 + 0x24,fVar1);
    FUN_00421ad0(local_54,fStack_50,fStack_4c);
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2);
    FUN_00422b80(*puVar3,puVar3[3],puVar3[6]);
    iVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_00422b80(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 0x10),
                 *(undefined4 *)(iVar4 + 0x1c));
    FUN_00411d60(&fStack_6c,auStack_14,*(undefined4 *)(param_1 + 0x3c));
    FUN_00411d60(&fStack_78,auStack_20,*(undefined4 *)(param_1 + 0x3c));
    FUN_00421ca0(0,0);
    FUN_00423b60(&fStack_88,&fStack_50,&fStack_6c);
    FUN_00423b30(&stack0xffffff6c,&fStack_88,&fStack_78);
    FUN_00421cc0(unaff_EBP,unaff_EBX,fStack_8c);
    FUN_00421ca0(0x3f800000,0);
    FUN_00422b80(fStack_6c + fStack_50,fStack_68 + fStack_4c,fStack_64 + local_48);
    FUN_00422b80(fStack_78 + unaff_EBP,fStack_74 + unaff_EBX,fStack_70 + fStack_8c);
    FUN_00421cc0(fStack_88,fStack_84,afStack_80[0]);
    FUN_00421ca0(0x3f800000,0x3f800000);
    FUN_00422b80(fStack_6c + fStack_50,fStack_68 + fStack_4c,fStack_64 + local_48);
    FUN_00422b80(fStack_88 - fStack_78,fStack_84 - fStack_74,afStack_80[0] - fStack_70);
    FUN_00421cc0(unaff_EBP,unaff_EBX,fStack_8c);
    FUN_00421ca0(0,0x3f800000);
    afStack_80[0] = local_48 - fStack_64;
    fStack_8c = afStack_80[0] - fStack_70;
    FUN_00421cc0((fStack_50 - fStack_6c) - fStack_78,(fStack_4c - fStack_68) - fStack_74,fStack_8c);
  }
  return;
}

