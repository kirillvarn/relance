
undefined4 __thiscall FUN_005765b0(int *param_1,INI_Reader *param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  pcVar2 = INI_Reader::get_value_string(param_2,0);
  if (*pcVar2 == '\"') {
    *param_1 = (int)pcVar2[1];
  }
  else if (*pcVar2 == '0') {
    iVar3 = sscanf(pcVar2,"%X",param_1);
    if (iVar3 != 1) {
      *param_1 = 0;
      return 0;
    }
  }
  else {
    iVar3 = atoi(pcVar2);
    if ((iVar3 < -8) || (0xff < iVar3)) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: invalid KeyMap key value (%s)",
                 "E:\\FL\\Scratch\\Source\\Client\\Interface\\KeyMap.cpp",0x1e6,pcVar2);
    }
    *param_1 = iVar3;
  }
  uVar4 = 1;
  bVar1 = INI_Reader::is_value_empty(param_2,1);
  while ((!bVar1 && (pcVar2 = INI_Reader::get_value_string(param_2,uVar4), *pcVar2 != '\0'))) {
    iVar3 = _strnicmp(pcVar2,"shift",5);
    if (iVar3 == 0) {
      param_1[1] = 1;
    }
    else {
      iVar3 = _strnicmp(pcVar2,"control",7);
      if (iVar3 == 0) {
        param_1[1] = 4;
      }
      else {
        iVar3 = _strnicmp(pcVar2,"alt",3);
        if (iVar3 != 0) {
          return 0;
        }
        param_1[1] = 0x10;
      }
    }
    uVar4 = uVar4 + 1;
    bVar1 = INI_Reader::is_value_empty(param_2,uVar4);
  }
  return 1;
}

