
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __fastcall FUN_0041fa10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_ESI;
  uint uVar7;
  undefined1 uVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  undefined1 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uStack_44;
  undefined1 auStack_3c [4];
  undefined4 local_38 [14];
  
  local_38[0] = *(undefined4 *)(param_1 + 0x24);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x28))
                    (*(int **)(param_1 + 0x10),0x14,*(undefined4 *)(param_1 + 0x28),local_38,0);
  uVar8 = -1 < iVar1;
  if (((bool)uVar8) && (uVar11 = 0, unaff_ESI != 0)) {
    iVar1 = 0;
    uVar9 = uVar8;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + iVar1);
      iVar2 = *(int *)(param_1 + 0x28) + iVar1;
      switch(iVar3) {
      case 0:
        if ((*(byte *)(param_1 + 0x14) & 0x40) == 0) {
          if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
            iVar3 = ftol();
            *(float *)(param_1 + 100) = (float)(extraout_ST0 - (float10)iVar3);
            DAT_00616840 = DAT_00616840 + iVar3;
          }
          else {
            DAT_00616840 = ftol();
          }
        }
        break;
      case 4:
        if ((*(byte *)(param_1 + 0x14) & 0x40) == 0) {
          if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
            iVar3 = ftol();
            *(float *)(param_1 + 0x68) = (float)(extraout_ST0_00 - (float10)iVar3);
            DAT_00616844 = DAT_00616844 + iVar3;
          }
          else {
            DAT_00616844 = ftol();
          }
        }
        break;
      case 8:
        if ((*(byte *)(param_1 + 0x14) & 0x40) == 0) {
          if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
            iVar3 = ftol();
            *(float *)(param_1 + 0x6c) = (float)(extraout_ST0_01 - (float10)iVar3);
            DAT_00616848 = DAT_00616848 + iVar3;
          }
          else {
            DAT_00616848 = ftol();
          }
        }
        break;
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        uVar6 = *(uint *)(iVar2 + 8);
        uVar4 = *(uint *)(iVar2 + 4) >> 7;
        iVar3 = iVar3 + -0xc;
        uStack_44 = CONCAT31(uStack_44._1_3_,(char)uVar4) & 0xffffff01;
        if ((uVar4 & 1) == 0) {
          DAT_00616850 = DAT_00616850 & ~(1 << ((byte)iVar3 & 0x1f));
        }
        else {
          DAT_00616850 = DAT_00616850 | 1 << ((byte)iVar3 & 0x1f);
        }
        uVar10 = 0;
        if ((uVar4 & 1) != 0) {
          uVar4 = *(uint *)(param_1 + 0x44 + iVar3 * 4);
          uVar5 = 0;
          if (uVar4 < uVar6) {
            uVar5 = uVar6 - uVar4;
          }
          uVar4 = DAT_00616840 - DAT_006107d4;
          uVar7 = DAT_00616844 - _DAT_006107d8;
          DAT_006107d4 = DAT_00616840;
          _DAT_006107d8 = DAT_00616844;
          if (((uVar5 < *(uint *)(param_1 + 0x40)) &&
              (uVar5 = (int)uVar4 >> 0x1f, (int)((uVar4 ^ uVar5) - uVar5) < 5)) &&
             (uVar4 = (int)uVar7 >> 0x1f, (int)((uVar7 ^ uVar4) - uVar4) < 5)) {
            uVar10 = 1;
            uVar6 = uVar6 - *(uint *)(param_1 + 0x40);
          }
          else {
            uVar10 = 0;
          }
          *(uint *)(param_1 + 0x44 + iVar3 * 4) = uVar6;
        }
        uVar8 = uVar9;
        FUN_0041fd00(iVar3,uStack_44,uVar10);
        FUN_004207b0(auStack_3c,*(undefined4 *)(param_1 + 4),local_38);
        uVar9 = uVar8;
      }
      uVar11 = uVar11 + 1;
      iVar1 = iVar1 + 0x14;
    } while (uVar11 < unaff_ESI);
  }
  return uVar8;
}

