
undefined4 __thiscall FUN_004242e0(int param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  char *_Str;
  undefined1 local_6;
  undefined1 local_5;
  uint *local_4;
  
  uVar3 = 0;
  local_6 = 0;
  if (*param_2 == 0) {
    return 0;
  }
  local_4 = param_2 + 1;
  if (*param_2 != 0) goto LAB_00424312;
  _Str = (char *)0x0;
  cVar2 = (char)param_2;
  do {
    switch(local_5) {
    case 0x42:
      local_6 = 1;
      *(bool *)(param_1 + 0x24) = cVar2 == '\0';
      break;
    case 0x46:
      local_6 = 1;
      *(bool *)(param_1 + 0x25) = cVar2 == '\0';
      break;
    case 0x4d:
      local_6 = 1;
      iVar1 = atoi(_Str);
      if (iVar1 < 0x321) {
        if (iVar1 == 800) {
          *(undefined4 *)(param_1 + 8) = 800;
          *(undefined4 *)(param_1 + 0xc) = 600;
        }
        else if (iVar1 == 0x140) {
          *(undefined4 *)(param_1 + 8) = 0x140;
          *(undefined4 *)(param_1 + 0xc) = 0xf0;
        }
        else {
          if (iVar1 != 0x200) goto LAB_004243e7;
          *(undefined4 *)(param_1 + 8) = 0x200;
          *(undefined4 *)(param_1 + 0xc) = 0x180;
        }
      }
      else if (iVar1 == 0x400) {
        *(undefined4 *)(param_1 + 8) = 0x400;
        *(undefined4 *)(param_1 + 0xc) = 0x300;
      }
      else {
LAB_004243e7:
        *(undefined4 *)(param_1 + 8) = 0x280;
        *(undefined4 *)(param_1 + 0xc) = 0x1e0;
      }
      break;
    case 0x57:
      local_6 = 1;
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    uVar3 = uVar3 + 1;
    local_4 = local_4 + 1;
    if (*param_2 <= uVar3) {
      return CONCAT31((int3)(*param_2 >> 8),local_6);
    }
LAB_00424312:
    _Str = (char *)*local_4;
    cVar2 = *_Str;
    if ((cVar2 == '+') || (cVar2 == '-')) {
      cVar2 = cVar2 != '-';
      iVar1 = toupper((int)_Str[1]);
      local_5 = (undefined1)iVar1;
      _Str = _Str + 2;
    }
    else {
      cVar2 = '\0';
      local_5 = 0;
    }
  } while( true );
}

