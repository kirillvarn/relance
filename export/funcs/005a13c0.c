
int __thiscall FUN_005a13c0(int *param_1,undefined4 param_2,float *param_3,size_t param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [9];
  float local_c;
  float local_8;
  float local_4;
  
  switch(param_2) {
  case 1:
    break;
  case 2:
    *(byte *)(param_1 + 0x1b) =
         (param_3 == (float *)0x0 ^ *(byte *)(param_1 + 0x1b)) & 1 ^ *(byte *)(param_1 + 0x1b);
    return 1;
  case 3:
    param_1[0x33] = (int)param_3;
    return 1;
  case 4:
    (**(code **)(*param_1 + 0x98))(param_3,param_4);
    return 1;
  case 5:
    (**(code **)(*param_1 + 0x14))(param_3);
    return 1;
  case 6:
    param_1[0x2a] = (int)*param_3;
    param_1[0x2b] = (int)param_3[1];
    param_1[0x2c] = (int)param_3[2];
    if (param_1[0x21] == -1) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0xbd) & 1) == 0) {
      pfVar2 = (float *)(param_1 + 0x18);
    }
    else {
      local_48 = (float)param_1[0x2a] + (float)param_1[0x18];
      local_44 = (float)param_1[0x2b] + (float)param_1[0x19];
      pfVar2 = &local_48;
      local_40 = (float)param_1[0x2c] + (float)param_1[0x1a];
    }
    local_3c = *pfVar2;
    local_38 = pfVar2[1];
    local_34 = pfVar2[2];
    (**(code **)(**(int **)Engine_exref + 0x8c))(*(int **)Engine_exref,param_1[0x21],&local_3c);
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x21],0,0);
    return 0;
  case 7:
    *param_3 = (float)param_1[0x2a];
    param_3[1] = (float)param_1[0x2b];
    param_3[2] = (float)param_1[0x2c];
    return 0;
  case 8:
    iVar1 = param_1[0x21];
    if (iVar1 != -1) {
      local_48 = (float)param_1[0x18] + (float)param_1[0x2a];
      local_44 = (float)param_1[0x19] + (float)param_1[0x2b];
      pfVar2 = local_30;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar2 = *param_3;
        param_3 = param_3 + 1;
        pfVar2 = pfVar2 + 1;
      }
      local_40 = (float)param_1[0x1a] + (float)param_1[0x2c];
      local_c = local_48;
      local_8 = local_44;
      local_4 = local_40;
      (**(code **)(**(int **)Engine_exref + 0x9c))(*(int **)Engine_exref,iVar1,local_30);
      (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0x21],0,0);
    }
    return 1;
  case 9:
    *(undefined1 *)((int)param_1 + 0x2d2) = 0;
    if (param_3 != (float *)0x0) {
      *(undefined1 *)((int)param_1 + 0x2d2) = 1;
    }
    return 1;
  case 10:
    return param_1[0x21];
  case 0xb:
    strncpy((char *)param_3,(char *)(param_1 + 0x34),param_4);
    return 0;
  default:
    return 0;
  }
  if (param_3 == (float *)0x1) {
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
    return 1;
  }
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 3;
  return 1;
}

