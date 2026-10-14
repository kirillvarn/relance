
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004afd80(int *param_1,INI_Reader *param_2,char param_3)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar3 = INI_Reader::get_num_parameters(param_2);
  iVar4 = INI_Reader::get_value_int(param_2,0);
  *param_1 = iVar4;
  if ((int)uVar3 < 2) {
    *(undefined1 *)((int)param_1 + 0x16) = 1;
  }
  else {
    iVar4 = INI_Reader::get_value_int(param_2,1);
    param_1[1] = iVar4;
    iVar4 = INI_Reader::get_value_int(param_2,2);
    param_1[2] = iVar4;
    bVar2 = INI_Reader::get_value_bool(param_2,3);
    *(bool *)(param_1 + 5) = bVar2;
    bVar2 = INI_Reader::get_value_bool(param_2,4);
    *(bool *)((int)param_1 + 0x15) = bVar2;
    if (5 < (int)uVar3) {
      iVar4 = INI_Reader::get_value_int(param_2,5);
      param_1[3] = iVar4;
      iVar4 = INI_Reader::get_value_int(param_2,6);
      param_1[4] = iVar4;
    }
  }
  if (param_3 != '\0') {
    puVar5 = (undefined4 *)FUN_005b3770(*param_1);
    if (puVar5 != (undefined4 *)0x0) {
      iVar4 = param_1[2];
      fVar1 = (float)_DAT_005d5138;
      puVar5[4] = (float)iVar4 * fVar1;
      (**(code **)*puVar5)((float)iVar4 * fVar1);
    }
  }
  return;
}

