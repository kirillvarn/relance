
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0055ac30(int *param_1,char *param_2,char *param_3,char *param_4,char *param_5,float *param_6,
            char *param_7,int *param_8,byte param_9,char param_10,char param_11,undefined1 param_12,
            int param_13,int param_14,int param_15)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar11 = 0;
  if (param_2 != (char *)0x0) {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)param_1 + (0xd0 - (int)param_2)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (DAT_00679af0 == '\0') {
      FUN_00559db0();
    }
    param_1[0xce] = 0;
    if (DAT_00679a48 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = (DAT_00679a4c - DAT_00679a48) / 0x24;
    }
    if (0 < local_10) {
      iVar10 = 0;
      do {
        pcVar5 = *(code **)(iVar10 + 4 + DAT_00679a48);
        if (pcVar5 == (code *)0x0) {
          pcVar5 = _C_exref;
        }
        iVar6 = stricmp((char *)pcVar5,(char *)(param_1 + 0x34));
        if (iVar6 == 0) {
          param_1[0xce] = DAT_00679a48 + iVar11 * 0x24;
          break;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 0x24;
      } while (iVar11 < local_10);
    }
    if ((param_1[0xce] == 0) || (*(float *)(param_1[0xce] + 0x20) == _DAT_005c7474)) {
      (**(code **)(*param_1 + 0x98))(param_2,0);
    }
  }
  if (param_3 != (char *)0x0) {
    uVar8 = 0xffffffff;
    pcVar4 = param_3;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (param_1 + 0xd4),uVar8,true);
    if (bVar2) {
      pcVar4 = (char *)param_1[0xd5];
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)param_3;
        param_3 = param_3 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar4 = *param_3;
        param_3 = param_3 + 1;
        pcVar4 = pcVar4 + 1;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xd4)
                 ,uVar8);
    }
  }
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    uVar8 = 0xffffffff;
    pcVar4 = param_4;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (param_1 + 0xd8),uVar8,true);
    if (bVar2) {
      pcVar4 = (char *)param_1[0xd9];
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)param_4;
        param_4 = param_4 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar4 = *param_4;
        param_4 = param_4 + 1;
        pcVar4 = pcVar4 + 1;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xd8)
                 ,uVar8);
    }
    pcVar5 = (code *)param_1[0xd9];
    if ((code *)param_1[0xd9] == (code *)0x0) {
      pcVar5 = _C_exref;
    }
    iVar11 = FUN_00564610(pcVar5);
    param_1[0xdd] = iVar11;
  }
  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    FUN_0055a490(param_5,param_1 + 0xd3,param_1 + 0x33);
    if ((param_1[0xd3] != 0) || (param_1[0x33] != 0)) {
      (**(code **)(*param_1 + 0x8c))();
    }
  }
  param_1[0x2a] = (int)*param_6;
  param_1[0x2b] = (int)param_6[1];
  param_1[0x2c] = (int)param_6[2];
  if (param_1[0x21] != -1) {
    fStack_c = (float)param_1[0x2a] + (float)param_1[0x18];
    fStack_8 = (float)param_1[0x2b] + (float)param_1[0x19];
    fStack_4 = (float)param_1[0x2c] + (float)param_1[0x1a];
    (**(code **)(**(int **)Engine_exref + 0x8c))(*(int **)Engine_exref,param_1[0x21],&fStack_c);
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x21],0,0);
  }
  if (param_7 != (char *)0x0) {
    pcVar4 = param_7;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)param_1 + (0x1d0 - (int)param_7)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    param_1[0xc6] = 0x3f800000;
    param_1[0xc2] = 0x3f800000;
    param_1[0xbe] = 0x3f800000;
    param_1[0xc5] = 0;
    param_1[0xc4] = 0;
    param_1[0xc3] = 0;
    param_1[0xc1] = 0;
    param_1[0xc0] = 0;
    param_1[0xbf] = 0;
    param_1[0xc9] = 0;
    param_1[200] = 0;
    param_1[199] = 0;
    if (((int *)param_1[1] != (int *)0x0) &&
       (piVar7 = (int *)(**(code **)(*(int *)param_1[1] + 8))(), piVar7 != (int *)0x0)) {
      (**(code **)(*piVar7 + 0x90))(param_7,param_1 + 0xbe);
    }
  }
  param_1[0x2d] = *param_8;
  param_1[0x2e] = param_8[1];
  param_1[0x2f] = param_8[2];
  bVar3 = (param_10 << 3 ^ *(byte *)(param_1 + 0xcc)) & 8 ^ *(byte *)(param_1 + 0xcc);
  *(byte *)((int)param_1 + 0x331) =
       (*(byte *)((int)param_1 + 0x331) ^ param_9) & 1 ^ *(byte *)((int)param_1 + 0x331);
  *(byte *)(param_1 + 0xcc) = (param_11 << 5 ^ bVar3) & 0x20 ^ bVar3;
  *(undefined1 *)((int)param_1 + 0x2d1) = param_12;
  param_1[0x33] = param_13;
  param_1[0xcb] = param_14;
  param_1[0xd3] = param_15;
  return;
}

