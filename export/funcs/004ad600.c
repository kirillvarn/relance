
undefined4 __thiscall FUN_004ad600(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_2bc [4];
  int local_2b8;
  int local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac [5];
  undefined1 auStack_298 [12];
  undefined1 auStack_28c [12];
  undefined1 local_280 [128];
  undefined2 local_200 [256];
  
  uVar3 = 0;
  do {
    if (param_2 == *(int *)((int)&DAT_00611e28 + uVar3)) {
      return 0;
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x20);
  *(undefined4 *)(param_1 + 0x880) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x87d) = 0;
  iVar8 = 0;
  do {
    FUN_004ade00(local_2bc,iVar8);
    uVar3 = 0;
    piVar5 = (int *)(local_2b8 + 8);
    while ((local_2b8 != 0 && (uVar3 < (uint)((local_2b4 - local_2b8) / 0x2c)))) {
      if (*(int *)(param_1 + 0x880) == -1) {
        if ((param_2 != piVar5[-1]) || (*piVar5 != param_3)) {
          if ((param_2 == piVar5[2]) && (piVar5[3] == param_3)) {
            *(uint *)(param_1 + 0x880) = uVar3;
            *(int *)(param_1 + 0x884) = iVar8;
            *(int *)(param_1 + 0x888) = piVar5[6];
            *(undefined1 *)(param_1 + 0x87d) = 1;
            *(undefined1 *)(param_1 + 0x87e) = 1;
          }
          goto LAB_004ad711;
        }
        *(uint *)(param_1 + 0x880) = uVar3;
        *(int *)(param_1 + 0x884) = iVar8;
        uVar3 = uVar3 + 1;
        *(int *)(param_1 + 0x888) = piVar5[6];
        *(undefined1 *)(param_1 + 0x87d) = 0;
        *(undefined1 *)(param_1 + 0x87e) = 1;
        piVar5 = piVar5 + 0xb;
      }
      else {
LAB_004ad711:
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 0xb;
      }
    }
    FUN_005b7e1d(local_2b8);
    iVar8 = iVar8 + 1;
    local_2b8 = 0;
    local_2b4 = 0;
    local_2b0 = 0;
    if (3 < iVar8) {
      if (-1 < *(int *)(param_1 + 0x880)) {
        piVar5 = (int *)(param_1 + 0x484);
        iVar8 = 0xd;
        do {
          *(byte *)(piVar5[-0xd] + 0x6c) = *(byte *)(piVar5[-0xd] + 0x6c) & 0xfc;
          *(byte *)(*piVar5 + 0x6c) = *(byte *)(*piVar5 + 0x6c) & 0xfc;
          piVar2 = piVar5 + -0x1b;
          piVar5 = piVar5 + 1;
          iVar8 = iVar8 + -1;
          *(byte *)(*piVar2 + 0x6c) = *(byte *)(*piVar2 + 0x6c) & 0xfc;
        } while (iVar8 != 0);
        pbVar1 = (byte *)(*(int *)(param_1 + 0x450) + 0x6c);
        *pbVar1 = *pbVar1 & 0xfc;
        iVar8 = *(int *)(param_1 + 0x880);
        local_200[0] = 0;
        iVar6 = FUN_004ade00(local_2bc,*(undefined4 *)(param_1 + 0x884));
        puVar9 = (undefined4 *)(iVar8 * 0x2c + *(int *)(iVar6 + 4));
        puVar10 = local_2ac;
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        FUN_005b7e1d(local_2b8);
        if (*(char *)(param_1 + 0x87d) == '\0') {
          puVar9 = local_2ac;
        }
        else {
          puVar9 = local_2ac + 3;
        }
        FUN_00577f50(puVar9,local_200,0x100);
        FUN_0058a530(local_200);
        FUN_004347e0(DAT_0067eca8,0x5eb,local_280,0x40);
        (**(code **)(**(int **)(param_1 + 0x4ec) + 0xa8))(0x1d,local_280,0);
        FUN_004347e0(DAT_0067eca8,local_2ac[3],auStack_28c,0x40);
        (**(code **)(**(int **)(param_1 + 0x4f0) + 0xa8))(0x1d,auStack_28c,0);
        FUN_004347e0(DAT_0067eca8,0x5e8,auStack_298,0x40);
        (**(code **)(**(int **)(param_1 + 0x4fc) + 0xa8))(0x1d,auStack_298,0);
        FUN_004abfb0();
        return 1;
      }
      if (*(char *)(param_1 + 0x87c) == '\0') {
        uVar4 = *(undefined4 *)(param_1 + 0x858);
        uVar12 = *(undefined4 *)(param_1 + 0x854);
        uVar11 = *(undefined4 *)(param_1 + 0x870);
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x864);
        uVar12 = *(undefined4 *)(param_1 + 0x860);
        uVar11 = *(undefined4 *)(param_1 + 0x870);
      }
      FUN_00578220(uVar11,param_2,param_3,uVar12,uVar4);
      *(undefined1 *)(param_1 + 0x848) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x7ac) + 0x348) = DAT_00679bb0;
      *(undefined1 *)(*(int *)(param_1 + 0x7a8) + 0x37c) = 0;
      *(byte *)(*(int *)(param_1 + 0x7a8) + 0x388) =
           *(byte *)(*(int *)(param_1 + 0x7a8) + 0x388) | 4;
      FUN_004af230("../Data/interface/keylist.ini");
      uVar4 = (**(code **)(**(int **)(param_1 + 0x4b8) + 0xa8))(0x3b,0,0);
      FUN_004af900(uVar4);
      *(undefined1 *)(param_1 + 0x84c) = 0;
      FUN_0059d960(param_1);
      *(byte *)(*(int *)(param_1 + 0x4e8) + 0x6c) =
           *(byte *)(*(int *)(param_1 + 0x4e8) + 0x6c) & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x4ec) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x4f0) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x4fc) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x500) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x4f4) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x4f8) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      *(byte *)(*(int *)(param_1 + 0x4e4) + 0x6c) =
           *(byte *)(*(int *)(param_1 + 0x4e4) + 0x6c) & 0xfc;
      FUN_004abdf0(0);
      piVar5 = (int *)(param_1 + 0x484);
      iVar8 = 0xd;
      do {
        *(byte *)(piVar5[-0xd] + 0x6c) = *(byte *)(piVar5[-0xd] + 0x6c) | 3;
        *(byte *)(*piVar5 + 0x6c) = *(byte *)(*piVar5 + 0x6c) | 3;
        *(byte *)(piVar5[-0x1b] + 0x6c) = *(byte *)(piVar5[-0x1b] + 0x6c) | 3;
        piVar5 = piVar5 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(byte *)(*(int *)(param_1 + 0x450) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x450) + 0x6c) | 3;
      return 1;
    }
  } while( true );
}

