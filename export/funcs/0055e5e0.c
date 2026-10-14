
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0055e5e0(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float local_40;
  int local_3c;
  float local_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((char)param_1[6] != '\0') {
    fVar6 = (float10)FUN_0042d680();
    fVar1 = (float)param_1[5];
    param_1[5] = (int)(float)(fVar6 + (float10)fVar1);
    if ((float10)(float)param_1[7] <= fVar6 + (float10)fVar1) {
      param_1[5] = param_1[7];
      *(undefined1 *)(param_1 + 6) = 0;
    }
    fVar6 = (float10)fcos(((float10)(float)param_1[5] / (float10)(float)param_1[7]) *
                          (float10)_DAT_005c8a5c);
    local_38[0] = (float)((float10)_DAT_005c75dc -
                         (fVar6 + (float10)_DAT_005c75dc) * (float10)_DAT_005c75e0);
    if (param_1[2] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (param_1[3] - param_1[2]) / 0xc;
    }
    if (0 < iVar3) {
      iVar4 = 0;
      local_3c = iVar3;
      do {
        pfVar5 = (float *)(param_1[2] + iVar4);
        local_40 = (*(float *)(param_1[2] + 4 + iVar4) - *pfVar5) * local_38[0] + *pfVar5;
        if (pfVar5[2] != 0.0) {
          cVar2 = (**(code **)(*param_1 + 4))(pfVar5[2],&local_40);
          if (cVar2 == '\0') {
            uStack_10 = 0x3f800000;
            uStack_20 = 0x3f800000;
            uStack_30 = 0x3f800000;
            uStack_14 = 0;
            uStack_18 = 0;
            uStack_1c = 0;
            uStack_24 = 0;
            uStack_28 = 0;
            uStack_2c = 0;
            uStack_4 = 0;
            uStack_8 = 0;
            uStack_c = 0;
            iVar3 = (**(code **)(**(int **)Engine_exref + 0xa0))
                              (*(int **)Engine_exref,*(undefined4 *)((int)pfVar5[2] + 0x84));
            uStack_14 = *(undefined4 *)(iVar3 + 0x24);
            uStack_10 = *(undefined4 *)(iVar3 + 0x28);
            uStack_c = *(undefined4 *)(iVar3 + 0x2c);
            local_3c = unaff_EBX;
            if (DAT_00679b10 == (int *)0x0) {
              DAT_00679b10 = (int *)FUN_005b73e0();
            }
            (**(code **)(*DAT_00679b10 + 0x10))(DAT_00679b10,local_38,local_38,local_3c);
            (**(code **)(**(int **)Engine_exref + 0x9c))
                      (*(int **)Engine_exref,*(undefined4 *)((int)pfVar5[2] + 0x84),&stack0xffffffb8
                      );
            (**(code **)(**(int **)Engine_exref + 0x6c))
                      (*(int **)Engine_exref,*(undefined4 *)((int)pfVar5[2] + 0x84),0,0);
          }
        }
        iVar4 = iVar4 + 0xc;
        local_3c = local_3c + -1;
      } while (local_3c != 0);
      local_3c = 0;
    }
    if ((char)param_1[6] == '\0') {
      (**(code **)*param_1)();
    }
  }
  return;
}

