
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ccbd0(int param_1,INI_Reader *param_2)

{
  bool bVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar1 = INI_Reader::is_value(param_2,"corner");
  if (bVar1) {
    uVar7 = 0;
    uVar6 = 0;
    pcVar2 = INI_Reader::get_value_string(param_2);
    FUN_0059ec80(pcVar2,uVar6,uVar7);
    *(float *)(param_1 + 100) = (float)(byte)DAT_00679bb0 * _DAT_005c7f68;
    *(float *)(param_1 + 0x68) = (float)DAT_00679bb0._1_1_ * _DAT_005c7f68;
    *(float *)(param_1 + 0x6c) = (float)DAT_00679bb0._2_1_ * _DAT_005c7f68;
    *(float *)(param_1 + 0x74) = (float)DAT_00679bb0._3_1_ * _DAT_005c7f68;
    return 1;
  }
  bVar1 = INI_Reader::is_value(param_2,"btn_pos");
  if (bVar1) {
    fVar3 = INI_Reader::get_value_float(param_2,1);
    fVar4 = INI_Reader::get_value_float(param_2,0);
    fVar5 = INI_Reader::get_value_float(param_2,2);
    *(float *)(param_1 + 0x30) = fVar4;
    *(float *)(param_1 + 0x34) = fVar3;
    *(float *)(param_1 + 0x38) = fVar5;
    return 1;
  }
  bVar1 = INI_Reader::is_value(param_2,"win_pos");
  if (bVar1) {
    fVar3 = INI_Reader::get_value_float(param_2,1);
    fVar4 = INI_Reader::get_value_float(param_2,0);
    fVar5 = INI_Reader::get_value_float(param_2,2);
    *(float *)(param_1 + 0x24) = fVar4;
    *(float *)(param_1 + 0x28) = fVar3;
    *(float *)(param_1 + 0x2c) = fVar5;
    return 1;
  }
  bVar1 = INI_Reader::is_value(param_2,"win_size");
  if (bVar1) {
    fVar3 = INI_Reader::get_value_float(param_2,0);
    *(float *)(param_1 + 0x3c) = fVar3;
    fVar3 = INI_Reader::get_value_float(param_2,1);
    *(float *)(param_1 + 0x40) = fVar3;
    return 1;
  }
  bVar1 = INI_Reader::is_value(param_2,"fly_time");
  if (bVar1) {
    fVar3 = INI_Reader::get_value_float(param_2,0);
    *(float *)(param_1 + 0x48) = fVar3;
    return 1;
  }
  bVar1 = INI_Reader::is_value(param_2,"static");
  if (bVar1) {
    fVar3 = INI_Reader::get_value_float(param_2,0);
    if (fVar3 != (float)_DAT_005c8ba8) {
      *(undefined1 *)(param_1 + 0x4e) = 1;
      return 1;
    }
    *(undefined1 *)(param_1 + 0x4e) = 0;
    return 1;
  }
  return 0;
}

