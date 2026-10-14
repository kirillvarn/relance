
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00557d70(int param_1,int *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float unaff_EBX;
  float unaff_ESI;
  undefined4 *puVar4;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [9];
  
  fVar1 = *(float *)(param_1 + 0x18);
  local_30 = *(float *)(param_1 + 0x70);
  local_2c = *(undefined4 *)(param_1 + 0x74);
  local_28 = *(undefined4 *)(param_1 + 0x78);
  puVar2 = (undefined4 *)(param_1 + 0x4c);
  puVar4 = local_24;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (((fVar1 != (float)_DAT_005c8ba8) || (*(float *)(param_1 + 0x1c) != (float)_DAT_005c8ba8)) ||
     (*(float *)(param_1 + 0x20) != (float)_DAT_005c8ba8)) {
    FUN_00421ad0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20));
    puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2);
    fStack_4c = (float)*puVar2;
    fStack_48 = (float)puVar2[3];
    fStack_44 = (float)puVar2[6];
    iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    fStack_44 = *(float *)(iVar3 + 4);
    fStack_40 = *(float *)(iVar3 + 0x10);
    fStack_3c = *(float *)(iVar3 + 0x1c);
    FUN_00411d60(&stack0xffffff98,&fStack_50,*(undefined4 *)(param_1 + 0x38));
    FUN_00411d60(&fStack_5c,&fStack_44,*(undefined4 *)(param_1 + 0x38));
    FUN_00421ca0(0,0);
    FUN_00423b60(&fStack_50,&fStack_38,&stack0xffffff98);
    FUN_00423b30(&fStack_44,&fStack_50,&fStack_5c);
    FUN_00421cc0(fStack_44,fStack_40,fStack_3c);
    FUN_00421ca0(0x3f800000,0);
    FUN_00422b80(unaff_ESI + fStack_38,unaff_EBX + fStack_34,fStack_60 + local_30);
    FUN_00422b80(fStack_5c + fStack_44,fStack_58 + fStack_40,fStack_54 + fStack_3c);
    FUN_00421cc0(fStack_50,fStack_4c,fStack_48);
    FUN_00421ca0(0x3f800000,0x3f800000);
    FUN_00422b80(unaff_ESI + fStack_38,unaff_EBX + fStack_34,fStack_60 + local_30);
    FUN_00422b80(fStack_44 - fStack_5c,fStack_40 - fStack_58,fStack_3c - fStack_54);
    FUN_00421cc0(fStack_50,fStack_4c,fStack_48);
    FUN_00421ca0(0,0x3f800000);
    fStack_3c = local_30 - fStack_60;
    fStack_50 = (fStack_38 - unaff_ESI) - fStack_5c;
    fStack_4c = (fStack_34 - unaff_EBX) - fStack_58;
    fStack_48 = fStack_3c - fStack_54;
    FUN_00421cc0(fStack_50,fStack_4c,fStack_48);
  }
  return;
}

