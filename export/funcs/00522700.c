
void __thiscall FUN_00522700(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float unaff_EDI;
  undefined4 unaff_retaddr;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  
  iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  fVar1 = *(float *)(iVar3 + 8);
  fVar2 = *(float *)(iVar3 + 0x14);
  fStack_8 = *(float *)(iVar3 + 0x20);
  fStack_14 = fStack_8 * (float)param_2;
  if (*(char *)(param_1 + 0xd3) != '\0') {
    if ((DAT_00675244 == (int *)0x0) || (DAT_0067524c == 0)) {
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    else {
      *(int **)(param_1 + 0xd4) = DAT_00675244;
      (**(code **)(*DAT_00675244 + 0x24))();
    }
  }
  pfVar4 = (float *)(**(code **)(*param_2 + 0xc))(param_2);
  fStack_c = fVar2 * (float)param_2 + pfVar4[2];
  fStack_10 = fVar1 * (float)param_2 + pfVar4[1];
  fStack_14 = unaff_EDI + *pfVar4;
  FUN_005554d0(&fStack_14,0x437a0000,param_2,*(undefined4 *)(param_1 + 0xd4),unaff_retaddr,1);
  FUN_00410280(&bStack_4);
  uVar5 = (uint)*(byte *)(param_1 + 0xd0) + (uint)bStack_4;
  uVar7 = (uint)*(byte *)(param_1 + 0xd1) + (uint)bStack_3;
  uVar6 = (uint)*(byte *)(param_1 + 0xd2) + (uint)bStack_2;
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  if (0xff < uVar7) {
    uVar7 = 0xff;
  }
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  bStack_3 = (byte)uVar7;
  bStack_4 = (byte)uVar5;
  bStack_2 = (byte)uVar6;
  FUN_00410240(&bStack_4);
  return;
}

