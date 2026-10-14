
undefined4 __thiscall FUN_0052b020(FuseAction *param_1,INI_Reader *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  char *pcVar2;
  uint uVar3;
  undefined3 extraout_var_00;
  undefined3 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  bVar1 = INI_Reader::read_value(param_2);
  uVar4 = extraout_var;
  if (bVar1) {
    do {
      bVar1 = FuseAction::ReadFuseActionValue(param_1,param_2);
      if (!bVar1) {
        bVar1 = INI_Reader::is_value(param_2,"explosion");
        if (bVar1) {
          pcVar2 = INI_Reader::get_value_string(param_2);
          uVar3 = CreateID(pcVar2);
          *(uint *)(param_1 + 0x28) = uVar3;
        }
        else {
          bVar1 = INI_Reader::is_value(param_2,"hardpoint");
          if (bVar1) {
            pcVar2 = INI_Reader::get_value_string(param_2);
            pcVar2 = StringAlloc(pcVar2,false);
            *(char **)(param_1 + 0x2c) = pcVar2;
          }
          else {
            bVar1 = INI_Reader::is_value(param_2,"pos_offset");
            if (bVar1) {
              fVar5 = INI_Reader::get_value_float(param_2,0);
              fVar6 = INI_Reader::get_value_float(param_2,1);
              fVar7 = INI_Reader::get_value_float(param_2,2);
              *(float *)(param_1 + 0x30) = fVar5;
              *(float *)(param_1 + 0x34) = fVar6;
              *(float *)(param_1 + 0x38) = fVar7;
            }
          }
        }
      }
      bVar1 = INI_Reader::read_value(param_2);
      uVar4 = extraout_var_00;
    } while (bVar1);
  }
  return CONCAT31(uVar4,1);
}

