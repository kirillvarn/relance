
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559aa0(int param_1,byte *param_2)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  local_1c = 0.022;
  if ((*(int *)(param_1 + 0x338) != 0) &&
     (local_1c = *(float *)(*(int *)(param_1 + 0x338) + 0x20), local_1c == _DAT_005c7474)) {
    (**(code **)(**(int **)Engine_exref + 0x88))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x84),1,&local_1c,&local_c);
  }
  fVar1 = local_1c * _DAT_005e1514;
  if (*(int *)(param_1 + 0x84) == -1) {
    fStack_18 = *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0x60);
    fStack_14 = *(float *)(param_1 + 100) + *(float *)(param_1 + 0xac);
    fStack_10 = *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0xb0);
    local_c = fStack_18;
    fStack_8 = fStack_14;
    fStack_4 = fStack_10;
  }
  else {
    pfVar3 = (float *)FUN_00420fb0();
    fStack_18 = *pfVar3;
    fStack_14 = pfVar3[1];
    fStack_10 = pfVar3[2];
  }
  cVar2 = FUN_00559900(*(undefined4 *)(param_1 + 0x338),&fStack_18,param_2,fVar1,0,0);
  if ((cVar2 == '\0') && (*(int *)(param_1 + 0x84) != -1)) {
    *(float *)(param_1 + 0x94) = (float)*param_2 * _DAT_005c7f68;
    *(float *)(param_1 + 0x98) = (float)param_2[1] * _DAT_005c7f68;
    *(float *)(param_1 + 0x9c) = (float)param_2[2] * _DAT_005c7f68;
    *(float *)(param_1 + 0xa4) = (float)param_2[3] * _DAT_005c7f68;
    FUN_0059efa0(&DAT_0067dbf8,0,0x3f800000,0);
  }
  return;
}

