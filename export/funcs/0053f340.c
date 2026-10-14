
void __thiscall FUN_0053f340(int *param_1,undefined4 param_2,char param_3)

{
  ID_String *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_ac [13];
  int local_78 [9];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  Vector local_48 [36];
  int local_24 [9];
  
  iVar3 = param_1[4];
  if ((iVar3 == 0) || (((byte)*(undefined4 *)(iVar3 + 0x4c) & 7) != 7)) {
    iVar3 = 0;
  }
  local_ac[0xc] = *(int *)(*(int *)(iVar3 + 0x88) + 4);
  if (local_ac[0xc] != 0) {
    if (param_3 == '\0') {
      local_ac[8] = 0x3f800000;
      local_ac[4] = 0x3f800000;
      local_ac[0] = 0x3f800000;
      local_ac[7] = 0;
      local_ac[6] = 0;
      local_ac[5] = 0;
      local_ac[3] = 0;
      local_ac[2] = 0;
      local_ac[1] = 0;
    }
    else {
      LookMatrix(local_48);
      iVar3 = param_1[4];
      if ((iVar3 == 0) || (((byte)*(undefined4 *)(iVar3 + 0x4c) & 0x67) != 0x67)) {
        iVar3 = 0;
      }
      piVar7 = (int *)(iVar3 + 8);
      piVar8 = local_ac;
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      FUN_00447b60(local_ac[0],local_ac[3],local_ac[6],local_ac[1],local_ac[4],local_ac[7],
                   local_ac[2],local_ac[5],local_ac[8]);
      if (DAT_00678a28 == (int *)0x0) {
        DAT_00678a28 = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00678a28 + 0x20))(DAT_00678a28,local_24,local_ac,local_48);
      piVar7 = local_24;
      piVar8 = local_ac;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
    }
    local_ac[9] = 0;
    piVar7 = local_ac;
    piVar8 = local_78;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    uStack_54 = 0;
    local_ac[10] = 0;
    this = (ID_String *)(local_ac[0xc] + 0x58);
    local_ac[0xb] = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    bVar1 = ID_String::IsEmpty(this);
    if (!bVar1) {
      iVar3 = FUN_0040f080(this);
      if ((*(undefined4 **)(iVar3 + 0x14) != (undefined4 *)0x0) &&
         (*(char *)**(undefined4 **)(iVar3 + 0x14) != '\0')) {
        iVar6 = FUN_004f79a0(0x84);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_004f9540(0);
        }
        param_1[0x34] = iVar6;
        *(byte *)(iVar6 + 0x70) =
             (param_3 << 3 ^ *(byte *)(iVar6 + 0x70)) & 8 ^ *(byte *)(iVar6 + 0x70);
        param_1[0x32] = param_1[0x34];
        FUN_004f7a80();
      }
      uVar4 = (**(code **)(*param_1 + 0x1c))();
      if (param_1[0x32] != 0) {
        FUN_004f7d20(param_1,uVar4,local_78);
      }
      if ((int *)param_1[0x31] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x31] + 0x94))(uVar4,local_78);
      }
      if (param_1[0x33] != 0) {
        FUN_005377c0(uVar4,local_78);
      }
      if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
        cVar2 = (*(code *)**(undefined4 **)param_1[0x32])(iVar3);
        if (cVar2 == '\0') {
          FUN_004f7a90();
          param_1[0x32] = 0;
        }
        else {
          piVar7 = (int *)param_1[4];
          if ((piVar7 == (int *)0x0) || (((byte)piVar7[0x13] & 0x67) != 0x67)) {
            piVar7 = (int *)0x0;
          }
          pfVar5 = (float *)(**(code **)(*piVar7 + 0x54))(local_ac + 9);
          FUN_004fc8b0(SQRT(pfVar5[2] * pfVar5[2] + pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5));
        }
      }
      FUN_004fcea0(param_1 + 0x30);
    }
  }
  FUN_005426e0();
  return;
}

