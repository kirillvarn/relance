
undefined4 __thiscall FUN_0040a850(int param_1,INI_Reader *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  
  cVar1 = FUN_0040a4d0(param_2);
  if (cVar1 == '\0') {
    bVar2 = INI_Reader::is_value(param_2,"turret_sound");
    if (!bVar2) {
      return 0;
    }
    pcVar3 = INI_Reader::get_value_string(param_2);
    uVar4 = CreateID(pcVar3);
    *(uint *)(param_1 + 0x84) = uVar4;
  }
  return 1;
}

