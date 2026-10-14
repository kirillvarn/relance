
void __thiscall FUN_00405fb0(uint *param_1,int *param_2,undefined4 param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ushort uVar15;
  ushort uVar16;
  int iVar17;
  int iStack_1c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar7 = (**(code **)(*param_2 + 0x14))();
  iVar8 = (**(code **)(*param_2 + 0xc))();
  iVar17 = 0;
  if (((iVar7 != 0) && (iVar8 != 0)) &&
     (uVar2 = *(ushort *)(iVar8 + 10), *param_1 = (uint)uVar2, uVar2 != 0)) {
    uVar2 = *(ushort *)(iVar7 + 0xc);
    bVar6 = (byte)uVar2;
    param_2 = (int *)0x0;
    if ((bVar6 & 0xc) == 0xc) {
      param_2 = (int *)0x1c;
    }
    else if ((bVar6 & 4) == 4) {
      param_2 = (int *)0x10;
    }
    else if ((bVar6 & 2) == 2) {
      param_2 = (int *)0xc;
    }
    iStack_1c = 0;
    if ((uVar2 & 0x10) != 0) {
      iStack_1c = 0xc;
    }
    if ((uVar2 & 0x40) != 0) {
      iVar17 = 4;
    }
    if ((char)bVar6 < '\0') {
      iVar17 = iVar17 + 4;
    }
    iVar9 = FUN_004061a0(uVar2);
    pvVar10 = operator_new(*param_1 << 4);
    param_1[1] = (uint)pvVar10;
    uVar2 = *(ushort *)(iVar8 + 0xc);
    param_1[2] = (uint)uVar2;
    pvVar10 = operator_new((uint)uVar2 * 2);
    param_1[3] = (uint)pvVar10;
    uVar2 = *(ushort *)(iVar7 + 0xe);
    uVar13 = (uint)uVar2 * 2;
    puVar11 = operator_new(uVar13);
    puVar14 = puVar11;
    for (uVar12 = (uint)(uVar2 >> 1); uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)puVar14 = 0xff;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    uVar2 = *(ushort *)(iVar7 + 8);
    uVar3 = *(ushort *)(iVar7 + 10);
    uVar15 = 0;
    uVar13 = 0;
    if (param_1[2] != 0) {
      do {
        uVar4 = *(ushort *)(iVar8 + 0x10 + uVar13 * 2);
        sVar5 = *(short *)(iVar8 + 8);
        puVar1 = (ushort *)((int)puVar11 + (uint)uVar4 * 2);
        uVar16 = *puVar1;
        if (uVar16 == 0xffff) {
          *puVar1 = uVar15;
          if (DAT_0061649c == (int *)0x0) {
            DAT_0061649c = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_0061649c + 0x28))
                    (DAT_0061649c,&uStack_c,param_3,
                     (uint)(ushort)(sVar5 + uVar4) * (iVar9 + iVar17 + iStack_1c + (int)param_2) +
                     iVar7 + 0x10 + ((uint)uVar3 + (uint)uVar2 * 6) * 2);
          puVar14 = (undefined4 *)(param_1[1] + (uint)uVar15 * 0x10);
          *puVar14 = uStack_c;
          puVar14[1] = uStack_8;
          puVar14[2] = uStack_4;
          *(uint *)(param_1[1] + 0xc + (uint)uVar15 * 0x10) = param_1[5];
          uVar16 = uVar15;
          uVar15 = uVar15 + 1;
        }
        *(ushort *)(param_1[3] + uVar13 * 2) = uVar16;
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_1[2]);
    }
    FUN_005b7e1d(puVar11);
  }
  return;
}

