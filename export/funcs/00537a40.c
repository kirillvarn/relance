
void __thiscall FUN_00537a40(int *param_1,INI_Reader *param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  
  bVar1 = INI_Reader::read_value(param_2);
  if (bVar1) {
    do {
      pcVar2 = INI_Reader::get_value_string(param_2);
      pcVar3 = INI_Reader::get_name_ptr(param_2);
      FUN_00411690(pcVar3,pcVar2);
      bVar1 = INI_Reader::read_value(param_2);
    } while (bVar1);
  }
  (**(code **)(*param_1 + 4))();
  return;
}

