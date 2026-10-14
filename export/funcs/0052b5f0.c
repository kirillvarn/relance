
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0052b5f0(FuseAction *param_1,INI_Reader *param_2)

{
  int iVar1;
  bool bVar2;
  FuseAction FVar3;
  undefined3 extraout_var;
  char *pcVar4;
  uint uVar5;
  float *pfVar6;
  undefined3 extraout_var_00;
  undefined3 uVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char *local_34 [10];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar2 = INI_Reader::read_value(param_2);
  uVar7 = extraout_var;
  if (bVar2) {
    do {
      bVar2 = FuseAction::ReadFuseActionValue(param_1,param_2);
      if (!bVar2) {
        bVar2 = INI_Reader::is_value(param_2,"effect");
        if (bVar2) {
          pcVar4 = INI_Reader::get_value_string(param_2);
          uVar5 = CreateID(pcVar4);
          *(uint *)(param_1 + 0x28) = uVar5;
        }
        else {
          bVar2 = INI_Reader::is_value(param_2,"attached");
          if (bVar2) {
            FVar3 = (FuseAction)INI_Reader::get_value_bool(param_2,0);
            param_1[0x2c] = FVar3;
          }
          else {
            bVar2 = INI_Reader::is_value(param_2,"hardpoint");
            if (bVar2) {
              CacheString::clear((CacheString *)local_34);
              FUN_004215b0();
              local_4 = 0;
              local_8 = 0;
              local_c = 0;
              pcVar4 = INI_Reader::get_value_string(param_2);
              local_34[0] = StringAlloc(pcVar4,false);
              FUN_0052c4d0(*(undefined4 *)(param_1 + 0x38),1,local_34);
            }
            else {
              bVar2 = INI_Reader::is_value(param_2,"pos_offset");
              if (bVar2) {
                if ((*(int *)(param_1 + 0x34) == 0) ||
                   ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x34 == 0)) {
                  pcVar4 = "StartEffectAction::Read() pos_offset precedes any hardpoint.  Ignored.";
LAB_0052b894:
                  INI_Reader::log_link(param_2,pcVar4);
                }
                else {
                  fVar11 = INI_Reader::get_value_float(param_2,0);
                  fVar12 = INI_Reader::get_value_float(param_2,1);
                  fVar13 = INI_Reader::get_value_float(param_2,2);
                  iVar1 = *(int *)(param_1 + 0x38);
                  *(float *)(iVar1 + -0xc) = fVar11;
                  *(float *)(iVar1 + -8) = fVar12;
                  *(float *)(iVar1 + -4) = fVar13;
                }
              }
              else {
                bVar2 = INI_Reader::is_value(param_2,"ori_offset");
                if (bVar2) {
                  if ((*(int *)(param_1 + 0x34) == 0) ||
                     ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x34 == 0)) {
                    pcVar4 = 
                    "StartEffectAction::Read() ori_offset precedes any hardpoint.  Ignored.";
                    goto LAB_0052b894;
                  }
                  fVar11 = INI_Reader::get_value_float(param_2,0);
                  fVar12 = INI_Reader::get_value_float(param_2,1);
                  fVar13 = INI_Reader::get_value_float(param_2,2);
                  fVar10 = (float10)_DAT_005c77f4;
                  iVar1 = *(int *)(param_1 + 0x38);
                  fVar9 = (float10)fcos((float10)fVar13 * fVar10);
                  *(undefined4 *)(iVar1 + -0x2c) = 0;
                  *(undefined4 *)(iVar1 + -0x20) = 0x3f800000;
                  *(undefined4 *)(iVar1 + -0x1c) = 0;
                  *(undefined4 *)(iVar1 + -0x14) = 0;
                  *(float *)(iVar1 + -0x24) = 0.0;
                  fVar10 = (float10)fsin((float10)(float)((float10)fVar13 * fVar10));
                  *(float *)(iVar1 + -0x30) = (float)fVar9;
                  *(float *)(iVar1 + -0x28) = (float)fVar10;
                  *(float *)(iVar1 + -0x18) = (float)-fVar10;
                  *(float *)(iVar1 + -0x10) = (float)fVar9;
                  iVar8 = 3;
                  fVar10 = (float10)fcos((float10)fVar11 * (float10)_DAT_005c77f4);
                  fVar9 = (float10)fsin((float10)fVar11 * (float10)_DAT_005c77f4);
                  pfVar6 = (float *)(iVar1 + -0x18);
                  do {
                    fVar11 = pfVar6[-3];
                    iVar8 = iVar8 + -1;
                    pfVar6[-3] = (float)((float10)(float)fVar10 * (float10)fVar11 -
                                        fVar9 * (float10)*pfVar6);
                    *pfVar6 = (float)((float10)(float)fVar10 * (float10)*pfVar6 +
                                     (float10)fVar11 * fVar9);
                    pfVar6 = pfVar6 + 1;
                  } while (iVar8 != 0);
                  iVar8 = 3;
                  fVar10 = (float10)fcos((float10)fVar12 * (float10)_DAT_005c77f4);
                  fVar9 = (float10)fsin((float10)fVar12 * (float10)_DAT_005c77f4);
                  pfVar6 = (float *)(iVar1 + -0x24);
                  do {
                    fVar11 = pfVar6[-3];
                    iVar8 = iVar8 + -1;
                    pfVar6[-3] = (float)((float10)(float)fVar10 * (float10)fVar11 -
                                        fVar9 * (float10)*pfVar6);
                    *pfVar6 = (float)((float10)(float)fVar10 * (float10)*pfVar6 +
                                     (float10)fVar11 * fVar9);
                    pfVar6 = pfVar6 + 1;
                  } while (iVar8 != 0);
                }
              }
            }
          }
        }
      }
      bVar2 = INI_Reader::read_value(param_2);
      uVar7 = extraout_var_00;
    } while (bVar2);
  }
  return CONCAT31(uVar7,1);
}

