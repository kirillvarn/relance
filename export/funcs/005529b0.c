
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005529b0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  
  if ((*(char *)(param_1 + 0x53) != '\0') && (_DAT_005c7474 <= *param_1)) {
    FUN_00421ed0(0xb44);
    FUN_00421dd0(0xbe2);
    FUN_004220c0(2,2);
    FUN_00422190(0);
    fVar1 = param_1[7];
    fVar2 = param_1[8];
    fVar3 = param_1[9];
    iVar6 = rand();
    fVar4 = param_1[5];
    fVar5 = (float)iVar6 * _DAT_005caeec;
    FUN_00422950(param_2);
    uVar7 = FUN_00425640(0);
    FUN_004220a0(uVar7);
    FUN_00421ad0(fVar1 * fVar5 * fVar4,fVar2 * fVar5 * fVar4,fVar3 * fVar5 * fVar4);
    FUN_00421670(8);
    pfVar8 = param_1 + 0x12;
    param_1 = param_1 + 0x4a;
    iVar6 = 8;
    do {
      if ((int)*param_1 < 3) {
        uVar7 = (**(code **)(*param_2 + 0xc))(param_2);
        FUN_005526f0(pfVar8,uVar7);
      }
      param_1 = param_1 + 1;
      pfVar8 = pfVar8 + 7;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_00421690();
    FUN_00422190(1);
    FUN_00421ed0(0xbe2);
    FUN_00421dd0(0xb44);
  }
  return;
}

