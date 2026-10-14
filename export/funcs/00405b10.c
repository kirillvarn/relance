
undefined4 __thiscall FUN_00405b10(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int *piStack_120;
  undefined4 *puStack_11c;
  int *piStack_118;
  int iStack_114;
  int *piStack_110;
  int **ppiStack_10c;
  int *piStack_108;
  int *piStack_104;
  int *piStack_100;
  int *piStack_fc;
  int *piStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int *apiStack_d8 [6];
  code *pcStack_c0;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 auStack_44 [5];
  int *piStack_30;
  int iStack_2c;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005b848a;
  local_c = ExceptionList;
  if (param_2 == (int *)0xffffffff) {
    uVar3 = 0;
  }
  else {
    iVar6 = *param_1;
    ExceptionList = &local_c;
    if (iVar6 != 0) {
      apiStack_d8[5] = *(int **)(iVar6 + -4);
      pcStack_c0 = FUN_004058b0;
      apiStack_d8[4] = (int *)0x1c;
      apiStack_d8[2] = (int *)0x405b61;
      ExceptionList = &local_c;
      apiStack_d8[3] = (int *)iVar6;
      FUN_005b7ec6();
      apiStack_d8[5] = (int *)0x405b67;
      pcStack_c0 = (code *)(iVar6 + -4);
      FUN_005b7e1d();
    }
    pcStack_c0 = (code *)param_1[4];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    apiStack_d8[5] = (int *)0x405b7f;
    FUN_005b7e1d();
    param_1[4] = 0;
    apiStack_d8[5] = *(int **)Engine_exref;
    pcStack_c0 = (code *)param_2;
    apiStack_d8[4] = (int *)0x405b97;
    puVar2 = (undefined4 *)(**(code **)(*apiStack_d8[5] + 0xa0))();
    puVar8 = auStack_44;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    uStack_84 = 0x3f800000;
    uStack_94 = 0x3f800000;
    uStack_a4 = 0x3f800000;
    uStack_88 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_78 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    apiStack_d8[2] = *(int **)Engine_exref;
    apiStack_d8[4] = &uStack_a4;
    apiStack_d8[3] = param_2;
    apiStack_d8[1] = (int *)0x405c1e;
    (**(code **)(*apiStack_d8[2] + 0x9c))();
    piStack_e0 = *(int **)Engine_exref;
    apiStack_d8[1] = (int *)0x0;
    apiStack_d8[0] = (int *)0x0;
    piStack_dc = param_2;
    uStack_e4 = 0x405c30;
    (**(code **)(*piStack_e0 + 0x6c))();
    uStack_e4 = 0xffffffff;
    param_1[1] = 1;
    uStack_e8 = 0;
    iVar6 = (**(code **)(**(int **)Engine_exref + 0xd8))();
    while (iVar6 != -1) {
      param_1[1] = param_1[1] + 1;
      piStack_100 = *(int **)Engine_exref;
      piStack_f8 = (int *)0x0;
      piStack_fc = param_2;
      piStack_104 = (int *)0x405c6e;
      iVar6 = (**(code **)(*piStack_100 + 0xd8))();
    }
    iVar6 = param_1[1];
    piStack_f8 = (int *)0x405c84;
    apiStack_d8[1] = operator_new(iVar6 * 0x1c + 4);
    auStack_44[3] = 0;
    if (apiStack_d8[1] == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piStack_f8 = (int *)&LAB_00405f80;
      piVar7 = apiStack_d8[1] + 1;
      piStack_100 = (int *)0x1c;
      *apiStack_d8[1] = iVar6;
      piStack_108 = (int *)0x405cb2;
      piStack_104 = piVar7;
      piStack_fc = (int *)iVar6;
      FUN_005b7fba();
    }
    *param_1 = (int)piVar7;
    param_1[3] = 0;
    param_1[2] = 0;
    piStack_f8 = *(int **)Engine_exref;
    piVar7[5] = iStack_2c;
    piVar7[4] = (int)piStack_30;
    *(undefined1 *)((int)piVar7 + 0x1b) = 0;
    auStack_44[3] = 0xffffffff;
    piStack_fc = (int *)0x405cfa;
    apiStack_d8[1] = piStack_f8;
    puVar2 = (undefined4 *)(**(code **)(*piStack_f8 + 0xa0))();
    piVar1 = piStack_dc;
    ppiVar9 = apiStack_d8;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppiVar9 = (int *)*puVar2;
      puVar2 = puVar2 + 1;
      ppiVar9 = ppiVar9 + 1;
    }
    uStack_e4 = 0;
    piStack_104 = (int *)piVar7[4];
    piStack_fc = &uStack_e4;
    piStack_100 = (int *)0x5c7710;
    piStack_108 = piStack_dc;
    auStack_44[1] = 1;
    ppiStack_10c = (int **)0x405d30;
    piStack_110 = piStack_30;
    iVar6 = (**(code **)(*piStack_dc + 0x78))();
    if (iVar6 < 0) {
      piStack_f8 = (int *)0x0;
      iStack_114 = piVar7[4];
      ppiStack_10c = &piStack_f8;
      piStack_110 = (int *)0x5c7704;
      piStack_118 = piVar1;
      uStack_50 = CONCAT31(uStack_50._1_3_,2);
      puStack_11c = (undefined4 *)0x405d67;
      iVar6 = (**(code **)(*piVar1 + 0x78))();
      if (-1 < iVar6) {
        ppiStack_10c = (int **)&uStack_e8;
        piStack_110 = piStack_f8;
        iStack_114 = 0x405d7c;
        FUN_00406200();
      }
      uStack_50 = CONCAT31(uStack_50._1_3_,1);
      ppiStack_10c = (int **)0x405d8d;
      FUN_00526a20();
    }
    else {
      ppiStack_10c = (int **)&uStack_e8;
      iStack_114 = 0x405d45;
      FUN_00405fb0();
    }
    uStack_50 = 0xffffffff;
    ppiStack_10c = (int **)0x405da1;
    FUN_00526a20();
    param_1[2] = param_1[2] + piVar7[2];
    param_1[3] = param_1[3] + *piVar7;
    piStack_118 = *(int **)Engine_exref;
    ppiStack_10c = (int **)0xffffffff;
    piStack_110 = (int *)0x0;
    iStack_114 = uStack_48;
    puStack_11c = (undefined4 *)0x405dd4;
    iVar6 = (**(code **)(*piStack_118 + 0xd8))();
    while (iVar6 != -1) {
      piVar1 = *(int **)Engine_exref;
      piVar7[0xc] = iStack_54;
      piVar7[0xb] = iVar6;
      *(undefined1 *)((int)piVar7 + 0x37) = 0;
      piStack_120 = piVar1;
      puStack_11c = (undefined4 *)iVar6;
      uVar3 = (**(code **)(*piVar1 + 0xa0))();
      FUN_00406880(uVar3);
      piStack_108 = (int *)0x0;
      uStack_68 = 3;
      iVar4 = (**(code **)(*piVar1 + 0x78))(piVar1,piVar7[0xb],"1.11_IVMeshWire",&piStack_108);
      if (iVar4 < 0) {
        piStack_120 = (int *)0x0;
        uStack_78 = CONCAT31(uStack_78._1_3_,4);
        iVar4 = (**(code **)(*piVar1 + 0x78))(piVar1,piVar7[0xb],"1.11_IMesh",&piStack_120);
        if (-1 < iVar4) {
          FUN_00406200(piStack_120,&piStack_e0);
        }
        uStack_78 = CONCAT31(uStack_78._1_3_,3);
        FUN_00526a20();
      }
      else {
        FUN_00405fb0(piStack_118,&piStack_e0);
      }
      uStack_78 = 0xffffffff;
      FUN_00526a20();
      param_1[2] = param_1[2] + piVar7[9];
      param_1[3] = param_1[3] + piVar7[7];
      iVar6 = (**(code **)(**(int **)Engine_exref + 0xd8))(*(int **)Engine_exref,uStack_70,0,iVar6);
      piVar7 = piVar7 + 7;
      uStack_48 = uStack_58;
    }
    puStack_11c = &uStack_98;
    (**(code **)(**(int **)Engine_exref + 0x9c))(*(int **)Engine_exref);
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,uStack_48,0,0);
    if (param_1[2] < 0x3e81) {
      pvVar5 = operator_new(param_1[2] * 2);
      param_1[4] = (int)pvVar5;
      uVar3 = 1;
    }
    else {
      pcStack_c0 = (code *)0x5c76a4;
      apiStack_d8[5] = (int *)0x5c7688;
      apiStack_d8[4] = (int *)0x100004;
      apiStack_d8[3] = (int *)0x405f48;
      (**(code **)FDUMP_exref)();
      FUN_004058e0();
      uVar3 = 0;
    }
  }
  ExceptionList = local_c;
  return uVar3;
}

