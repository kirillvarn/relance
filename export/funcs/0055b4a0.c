
void __thiscall FUN_0055b4a0(int *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  param_1[0xb8] = (int)*param_2;
  param_1[0xb9] = (int)param_2[1];
  param_1[0xba] = (int)param_2[2];
  *(undefined1 *)(param_1 + 0xca) = 1;
  if ((*(byte *)(param_1 + 0xbd) & 1) != 0) {
    pfVar1 = (float *)(**(code **)(*param_1 + 0xa4))(&local_c);
    fStack_24 = *param_2 + *pfVar1;
    fStack_20 = pfVar1[1] + param_2[1];
    pfVar2 = param_2 + 2;
    param_2 = &fStack_24;
    fStack_1c = pfVar1[2] + *pfVar2;
  }
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  FUN_005a0880(&local_18);
  if (param_1[0x21] != -1) {
    if ((*(byte *)(param_1 + 0xbd) & 1) == 0) {
      pfVar2 = (float *)(param_1 + 0x18);
    }
    else {
      pfVar2 = &fStack_24;
      fStack_24 = (float)param_1[0x2a] + (float)param_1[0x18];
      fStack_20 = (float)param_1[0x2b] + (float)param_1[0x19];
      fStack_1c = (float)param_1[0x2c] + (float)param_1[0x1a];
    }
    local_c = *pfVar2;
    fStack_8 = pfVar2[1];
    fStack_4 = pfVar2[2];
    (**(code **)(**(int **)Engine_exref + 0x8c))(*(int **)Engine_exref,param_1[0x21],&local_c);
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x21],0,0);
  }
  return;
}

