
undefined4 __thiscall FUN_0052b2e0(FuseAction *param_1,INI_Reader *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  char *pcVar2;
  uint uVar3;
  undefined3 extraout_var_00;
  undefined3 uVar4;
  
  bVar1 = INI_Reader::read_value(param_2);
  uVar4 = extraout_var;
  if (bVar1) {
    do {
      bVar1 = FuseAction::ReadFuseActionValue(param_1,param_2);
      if ((!bVar1) && (bVar1 = INI_Reader::is_value(param_2,"effect"), bVar1)) {
        pcVar2 = INI_Reader::get_value_string(param_2);
        uVar3 = CreateID(pcVar2);
        *(uint *)(param_1 + 0x28) = uVar3;
      }
      bVar1 = INI_Reader::read_value(param_2);
      uVar4 = extraout_var_00;
    } while (bVar1);
  }
  return CONCAT31(uVar4,1);
}

