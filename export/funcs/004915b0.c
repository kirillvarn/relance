
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004915b0(int param_1)

{
  undefined1 uVar1;
  ISystem *pIVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bStack_31;
  float local_30;
  undefined4 uStack_2c;
  int local_28;
  uint local_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  *(undefined4 *)(param_1 + 0xf48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4a8) = 0x47dac000;
  *(undefined4 *)(param_1 + 0x4ac) = 0x47dac000;
  local_28 = param_1;
  pIVar2 = Universe::GetFirstSystem();
  while (pIVar2 != (ISystem *)0x0) {
    iVar3 = rand();
    local_24 = ((int)(iVar3 * 2000 + (iVar3 * 2000 >> 0x1f & 0x7fffU)) >> 0xf) + 3000;
    uStack_20 = 0;
    local_30 = (float)local_24;
    pfVar4 = (float *)(**(code **)(*(int *)pIVar2 + 0x44))();
    fStack_c = *pfVar4 * _DAT_005d3d30 * _DAT_005d3d2c - _DAT_005d3d28;
    uStack_8 = 0;
    fStack_4 = (pfVar4[1] * _DAT_005d3d30 * _DAT_005d3d2c - _DAT_005d3d28) + _DAT_005d3d24;
    uVar5 = (*(code *)**(undefined4 **)pIVar2)();
    uVar1 = (**(code **)(*(int *)pIVar2 + 0x48))();
    uStack_2c = CONCAT31(uStack_2c._1_3_,uVar1);
    uVar11 = 0;
    uVar12 = uStack_2c;
    uVar6 = (**(code **)(*(int *)pIVar2 + 0x10))(0,uVar5,uStack_2c);
    uVar7 = (**(code **)(*(int *)pIVar2 + 0xc))(uVar6);
    iVar3 = local_28;
    iVar8 = FUN_00491f90(0,4,fStack_c,uStack_8,fStack_4,local_30,"NAV_star",uVar7,uVar6,uVar11,uVar5
                         ,uVar12);
    *(ISystem **)(iVar8 + 100) = pIVar2;
    iVar9 = rand();
    *(int *)(iVar8 + 0x54) = (int)(iVar9 * 7 + (iVar9 * 7 >> 0x1f & 0x7fffU)) >> 0xf;
    iVar9 = rand();
    uStack_1c = ((int)(iVar9 * 900 + (iVar9 * 900 >> 0x1f & 0x7fffU)) >> 0xf) + 100;
    uStack_18 = 0;
    *(float *)(iVar8 + 0x6c) = (float)uStack_1c * _DAT_005d1494;
    iVar9 = rand();
    uStack_14 = ((int)(iVar9 * 100 + (iVar9 * 100 >> 0x1f & 0x7fffU)) >> 0xf) + 1;
    uStack_10 = 0;
    *(float *)(iVar8 + 0x40) = local_30;
    *(float *)(iVar8 + 0x68) = (float)uStack_14 * _DAT_005c99c8;
    if (*(int *)(iVar8 + 0x70) != 0) {
      bStack_31 = 0;
      FUN_004c4da0(*(int *)(iVar8 + 0x70),&bStack_31,0,0);
      bVar10 = *(byte *)(iVar8 + 0x74) | bStack_31;
      *(byte *)(iVar8 + 0x74) = bVar10;
      *(byte *)(iVar8 + 0x48) = bVar10 & 1;
      if (*(char *)(iVar3 + 0x87e) != '\0') {
        *(undefined1 *)(iVar8 + 0x48) = 1;
      }
    }
    pIVar2 = Universe::GetNextSystem();
  }
  FUN_004975a0();
  return;
}

