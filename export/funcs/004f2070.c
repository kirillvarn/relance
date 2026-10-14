
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f2070(int param_1)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iStack_3c;
  uint local_38;
  float fStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  int iStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  FUN_0040f130();
  piVar3 = (int *)FUN_0054baf0();
  local_38 = 0;
  (**(code **)(*piVar3 + 0x74))(&local_38);
  uVar6 = DAT_00679ba8 >> 8 & 0xff;
  uVar4 = ((DAT_00679ba8 & 0xff) << 8 | uVar6) << 8 | DAT_00679ba8._2_2_ & 0xff;
  uVar6 = (((uint)(DAT_00679ba8._2_2_ >> 8) << 8 | DAT_00679ba8 & 0xff) << 8 | uVar6) << 8 |
          DAT_00679ba8._2_2_ & 0xff;
  piVar3 = (int *)**(int **)(param_1 + 0x914);
  if (piVar3 != *(int **)(param_1 + 0x914)) {
    do {
      if ((piVar3[2] != 0) && (piVar1 = (int *)(piVar3[2] + -8), piVar1 != (int *)0x0)) {
        local_38 = 0;
        (**(code **)(*piVar1 + 0x88))(&local_38);
        if (piVar3[2] == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = piVar3[2] + -8;
        }
        if (iVar5 == iStack_3c) {
          fVar2 = (float)DAT_00610850 * _DAT_005d966c * _DAT_005d4f08;
        }
        else {
          if ((local_38 & 0x55f0000) == 0) goto LAB_004f21ff;
          fVar2 = (float)DAT_00610850 * _DAT_005d966c + (float)DAT_00610850 * _DAT_005d966c;
        }
        if (fVar2 != _DAT_005c7474) {
          fStack_28 = (float)piVar3[7] - fVar2;
          iStack_24 = piVar3[8];
          fStack_34 = fVar2 + (float)piVar3[7];
          uStack_20 = 0;
          uStack_2c = 0;
          iStack_30 = piVar3[8];
          FUN_005a2940(&fStack_28,&fStack_34,uVar6,uVar4,0x40000000);
          iStack_10 = piVar3[7];
          fStack_c = (float)piVar3[8] - fVar2;
          iStack_1c = piVar3[7];
          fStack_18 = fVar2 + (float)piVar3[8];
          uStack_8 = 0;
          uStack_14 = 0;
          FUN_005a2940(&iStack_10,&iStack_1c,uVar6,uVar4,0x40000000);
        }
      }
LAB_004f21ff:
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0x914));
  }
  return;
}

