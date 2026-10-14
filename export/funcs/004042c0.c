
void __thiscall FUN_004042c0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  short sVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 unaff_ESI;
  uint uVar15;
  undefined4 *puVar16;
  uint uStack_3c;
  int *piStack_38;
  short *psStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_1c;
  int *piStack_14;
  int *piStack_10;
  int *piStack_8;
  
  uStack_30 = *(undefined4 *)(param_1 + 0x20);
  psStack_34 = (short *)0x0;
  piStack_38 = param_2;
  uStack_3c = 0x4042dc;
  (**(code **)(*param_2 + 0x108))();
  if (*(int *)(param_1 + 0x24) == 1) {
    uStack_3c = 2;
    (**(code **)(*param_2 + 0xf0))(param_2,0x13);
    (**(code **)(*param_2 + 0xf0))(param_2,0x14,2);
  }
  else if (*(int *)(param_1 + 0x24) == 2) {
    uStack_3c = 5;
    (**(code **)(*param_2 + 0xf0))(param_2,0x13);
    (**(code **)(*param_2 + 0xf0))(param_2,0x14,6);
  }
  uStack_3c = (uint)(*(int *)(param_1 + 0x24) != 0);
  (**(code **)(*param_2 + 0xf0))(param_2,0x1b);
  iVar11 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0xc) * 4;
  if ((iVar11 != 0) &&
     (iVar11 = (**(code **)(*piStack_10 + 0x14))(piStack_10,0x1c4,iVar11,&stack0xffffffd8),
     -1 < iVar11)) {
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar14 = 0;
      puVar12 = puStack_1c + 10;
      puVar16 = puStack_1c;
      do {
        iVar8 = *(int *)(param_1 + 8);
        uVar2 = *(undefined4 *)(iVar8 + 0x1c + iVar14);
        puVar1 = (undefined4 *)(iVar8 + 0x28 + iVar14);
        uVar3 = *(undefined4 *)(iVar8 + 0x18 + iVar14);
        puVar13 = (undefined4 *)(iVar8 + iVar14);
        uVar4 = puVar13[5];
        iVar11 = iVar11 + 1;
        uVar5 = puVar13[4];
        iVar14 = iVar14 + 0x2c;
        uVar6 = puVar13[1];
        puStack_1c = puVar16 + 0x20;
        uVar7 = *puVar13;
        puVar12[-6] = *puVar1;
        puVar12[-5] = 0;
        *puVar16 = uVar7;
        puVar12[-9] = uVar6;
        puVar12[-8] = uVar5;
        puVar12[-7] = uVar4;
        puVar12[-4] = uVar3;
        puVar12[-3] = uVar2;
        uVar2 = puVar13[9];
        uVar3 = puVar13[6];
        uVar4 = puVar13[5];
        uVar5 = puVar13[4];
        uVar6 = puVar13[3];
        uVar7 = *puVar13;
        puVar12[2] = puVar13[10];
        puVar12[3] = 0;
        puVar12[-2] = uVar7;
        puVar12[-1] = uVar6;
        *puVar12 = uVar5;
        puVar12[1] = uVar4;
        puVar12[4] = uVar3;
        puVar12[5] = uVar2;
        uVar2 = puVar13[9];
        uVar3 = puVar13[8];
        uVar4 = puVar13[5];
        uVar5 = puVar13[4];
        uVar6 = puVar13[3];
        uVar7 = puVar13[2];
        puVar12[10] = puVar13[10];
        puVar12[6] = uVar7;
        puVar12[0xb] = 0;
        puVar12[7] = uVar6;
        puVar12[8] = uVar5;
        puVar12[9] = uVar4;
        puVar12[0xc] = uVar3;
        puVar12[0xd] = uVar2;
        uVar2 = puVar13[7];
        uVar3 = puVar13[8];
        uVar4 = puVar13[5];
        uVar5 = puVar13[4];
        uVar6 = puVar13[1];
        uVar7 = puVar13[2];
        puVar12[0x12] = puVar13[10];
        puVar12[0xe] = uVar7;
        puVar12[0x13] = 0;
        puVar12[0xf] = uVar6;
        puVar12[0x10] = uVar5;
        puVar12[0x11] = uVar4;
        puVar12[0x14] = uVar3;
        puVar12[0x15] = uVar2;
        puVar12 = puVar12 + 0x20;
        puVar16 = puStack_1c;
      } while (iVar11 < *(int *)(param_1 + 0xc));
    }
    puVar12 = *(undefined4 **)(param_1 + 0x14);
    for (iVar11 = (*(uint *)(param_1 + 0x18) & 0x7ffffff) << 3; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puStack_1c = *puVar12;
      puVar12 = puVar12 + 1;
      puStack_1c = puStack_1c + 1;
    }
    for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined1 *)puStack_1c = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puStack_1c = (undefined4 *)((int)puStack_1c + 1);
    }
    (**(code **)(*piStack_10 + 0x18))(piStack_10,&stack0xffffffd8);
    psVar9 = psStack_34;
    uVar15 = (uint)psStack_34 >> 2;
    iVar14 = uVar15 * 6;
    piStack_38 = (int *)0x0;
    uStack_3c = 0;
    iVar11 = (**(code **)(*piStack_14 + 0x1c))(piStack_14,0xffffffff,&piStack_38,&uStack_3c,iVar14);
    param_2 = piStack_14;
    if (-1 < iVar11) {
      sVar10 = 0;
      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
        *psStack_34 = sVar10;
        psStack_34[1] = sVar10 + 1;
        psStack_34[2] = sVar10 + 2;
        psStack_34[3] = sVar10;
        psStack_34[4] = sVar10 + 2;
        psStack_34[5] = sVar10 + 3;
        psStack_34 = psStack_34 + 6;
        sVar10 = sVar10 + 4;
      }
      (**(code **)(*piStack_14 + 0x20))(piStack_14,0xffffffff);
      iVar11 = (**(code **)(*piStack_14 + 0x24))(piStack_14,0xffffffff,unaff_ESI,0,0);
      if (-1 < iVar11) {
        (**(code **)(*piStack_8 + 0xc))(piStack_8,4,0,psVar9,uStack_30,iVar14);
      }
    }
  }
  (**(code **)(*param_2 + 0xf0))(param_2,0x1b,0);
  return;
}

