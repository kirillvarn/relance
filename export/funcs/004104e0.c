
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_004104e0(int param_1,int *param_2,float param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  float10 fVar10;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  bVar9 = false;
  if ((*(byte *)(param_1 + 0xb4) & 8) != 0) {
    if ((*(byte *)(param_1 + 0xb4) & 0x20) == 0) {
      local_28 = 0xbf800000;
      puVar7 = (undefined4 *)FUN_00411370(&local_c,param_3,&local_28);
      local_24 = *puVar7;
      local_20 = puVar7[1];
      local_1c = (float)puVar7[2];
      if (((*(byte *)(param_1 + 0xb4) & 2) != 0) &&
         ((iVar2 = *(int *)(param_1 + 0xb0), iVar2 == 3 || (iVar2 == 2)))) {
        if (iVar2 != 1) {
          *(float *)(param_1 + 0x54) = -local_1c;
          *(undefined4 *)(param_1 + 0x4c) = local_24;
          *(undefined4 *)(param_1 + 0x50) = local_20;
        }
        FUN_00411350(&local_c);
        *(float *)(param_1 + 0x7c) = local_c;
        *(float *)(param_1 + 0x88) = local_8;
        *(float *)(param_1 + 0x94) = local_4;
        FUN_00410ec0();
      }
      cVar5 = FUN_00410850(local_28,&local_18);
      if (cVar5 != '\0') {
        *(float *)(param_1 + 0x10) = local_18;
        *(float *)(param_1 + 0x14) = local_14;
        *(float *)(param_1 + 0x18) = local_10;
        *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
        if ((DAT_00610588 == 0) && ((*(byte *)(param_1 + 0xb4) & 4) != 0)) {
          (**(code **)(**(int **)Pipeline_exref + 300))(*(int **)Pipeline_exref,param_1 + 0xc);
        }
      }
      if (*(int *)(param_1 + 0xb0) == -2) {
        if (*(int **)(param_1 + 0xb8) == (int *)0x0) {
          param_3 = 1.0;
        }
        else {
          local_4 = *(float *)(param_1 + 0x58);
          local_c = (float)CONCAT31(local_c._1_3_,1);
          local_8 = 0.0;
          fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0xb8) + 0x18))(local_28,&local_c);
          param_3 = (float)fVar10;
        }
        FUN_00411d60(&local_c,&local_18,param_3);
        *param_4 = local_c + *param_4;
        param_4[1] = local_8 + param_4[1];
        param_4[2] = local_4 + param_4[2];
      }
      bVar9 = _DAT_005c7f68 <= local_10 + local_14 + local_18;
    }
    else {
      puVar7 = (undefined4 *)FUN_00411370(&local_c,0,0);
      local_24 = *puVar7;
      local_20 = puVar7[1];
      local_1c = (float)puVar7[2];
      bVar9 = true;
    }
    if (DAT_00610588 != 0) {
      if (*(int *)(param_1 + 0xb0) != 3) {
        uVar8 = (**(code **)(*param_2 + 0x40))(param_2);
        if (DAT_006164ec == (int *)0x0) {
          DAT_006164ec = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_006164ec + 0x28))(DAT_006164ec,&local_10,uVar8,param_1 + 0x98);
        *(float *)(param_1 + 0x48) = -local_4;
        *(float *)(param_1 + 0x40) = local_c;
        *(float *)(param_1 + 0x44) = local_8;
      }
      if (*(int *)(param_1 + 0xb0) != 1) {
        uVar8 = (**(code **)(*param_2 + 0x40))(param_2);
        if (DAT_006164ec == (int *)0x0) {
          DAT_006164ec = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_006164ec + 0x30))(DAT_006164ec,&local_10,uVar8,&local_28);
        *(float *)(param_1 + 0x54) = -local_4;
        *(float *)(param_1 + 0x4c) = local_c;
        *(float *)(param_1 + 0x50) = local_8;
      }
      (**(code **)(**(int **)Pipeline_exref + 0x98))
                (*(int **)Pipeline_exref,param_1 + 0xc,param_1 + 0xc);
    }
  }
  bVar6 = *(byte *)(param_1 + 0xb4);
  if ((bool)(bVar6 >> 4 & 1) != bVar9) {
    bVar6 = (bVar9 << 4 ^ bVar6) & 0x10 ^ bVar6;
    *(byte *)(param_1 + 0xb4) = bVar6;
    iVar2 = DAT_006164e4;
    if ((bVar6 & 0x10) != 0) {
      iVar3 = param_1;
      iVar4 = param_1;
      if (DAT_006164e4 != 0) {
        piVar1 = (int *)(DAT_006164e4 + 4);
        DAT_006164e4 = param_1;
        *piVar1 = param_1;
        iVar3 = DAT_006164e0;
        iVar4 = DAT_006164e4;
      }
      DAT_006164e4 = iVar4;
      DAT_006164e0 = iVar3;
      *(int *)(param_1 + 8) = iVar2;
      *(undefined4 *)(param_1 + 4) = 0;
      DAT_006164e8 = DAT_006164e8 + 1;
      (**(code **)(**(int **)Pipeline_exref + 0xa4))(*(int **)Pipeline_exref,param_1 + 0xc,1);
      return bVar9;
    }
    if (*(int *)(param_1 + 8) == 0) {
      DAT_006164e0 = *(int *)(param_1 + 4);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
    }
    if (*(int *)(param_1 + 4) == 0) {
      DAT_006164e4 = *(int *)(param_1 + 8);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
    }
    DAT_006164e8 = DAT_006164e8 + -1;
    (**(code **)(**(int **)Pipeline_exref + 0xa4))(*(int **)Pipeline_exref,param_1 + 0xc,0);
  }
  return bVar9;
}

