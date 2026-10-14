
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004cc140(int *param_1,float param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  float fStack00000008;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  piVar1 = param_1 + 0xe;
  if ((char)param_1[0xe] != '\0') {
    if ((char)param_1[0x21] == '\0') {
      if (*(char *)((int)param_1 + 0x85) != '\0') {
        param_1[0x1f] = 0;
        *(undefined1 *)((int)param_1 + 0x85) = 0;
        *(char *)piVar1 = '\0';
      }
    }
    else {
      param_1[0x1f] = 0x3f800000;
      *(undefined1 *)(param_1 + 0x21) = 0;
      *(char *)piVar1 = '\x01';
    }
    FUN_004ccde0(&DAT_0067dbf8);
    local_2c = param_1[0x35];
    local_28 = param_1[0x36];
    local_24 = param_1[0x37];
    local_38 = param_1[0x59];
    local_34 = param_1[0x5a];
    local_30 = param_1[0x5b];
    puVar3 = (undefined4 *)FUN_004c71b0(local_10,&local_2c,&local_38);
    local_20 = *puVar3;
    local_1c = puVar3[1];
    local_18 = puVar3[2];
    local_14 = puVar3[3];
    FUN_0040fb80(&local_20,1);
    if ((char)*piVar1 != '\0') {
      if ((param_1[0x5c] != 0) && (fStack00000008 = param_2, (float)_DAT_005c8ba8 < param_2)) {
        do {
          if (_DAT_005d043c <= fStack00000008) {
            param_2 = 0.2;
          }
          else {
            param_2 = fStack00000008;
          }
          FUN_004cba60(param_2);
          fStack00000008 = fStack00000008 - param_2;
        } while ((float)_DAT_005c8ba8 < fStack00000008);
      }
      if ((((char)param_1[2] != '\0') &&
          (((*param_1 == 0 || (*param_1 == 0x9c)) && ((char)*piVar1 != '\0')))) &&
         (*(char *)((int)param_1 + 0x85) == '\0')) {
        *(undefined1 *)(param_1 + 0x21) = 0;
        *(undefined1 *)((int)param_1 + 0x85) = 1;
        if (param_1[0x5c] != 0) {
          param_1[0x5c] = 0;
        }
        if (param_1[0x6f] != 0) {
          pbVar2 = (byte *)(param_1[0x6f] + 0x6c);
          *pbVar2 = *pbVar2 & 0xfc;
        }
      }
    }
  }
  return;
}

