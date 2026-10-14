
undefined4 FUN_00402310(INI_Reader *param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  bVar1 = INI_Reader::is_value(param_1,"LODranges");
  if (bVar1) {
    if (*param_2 == 0) {
      puVar2 = operator_new(0x34);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[9] = 0;
        *(undefined1 *)(puVar2 + 10) = 0;
        puVar2[0xb] = 1;
        puVar2[0xc] = 0;
        *puVar2 = 0xbf800000;
      }
      *param_2 = (int)puVar2;
    }
    uVar4 = 0;
    bVar1 = INI_Reader::is_value_empty(param_1,0);
    while ((!bVar1 && (fVar5 = INI_Reader::get_value_float(param_1,uVar4), (int)uVar4 < 8))) {
      *(float *)(*param_2 + uVar4 * 4) = fVar5;
      uVar4 = uVar4 + 1;
      bVar1 = INI_Reader::is_value_empty(param_1,uVar4);
    }
    *(undefined4 *)(*param_2 + uVar4 * 4) = 0xbf800000;
    if ((int)uVar4 < 3) {
      *(undefined4 *)(*param_2 + 0x2c) = 0;
    }
    return 1;
  }
  bVar1 = INI_Reader::is_value(param_1,"MinSpecLOD");
  if (bVar1) {
    iVar3 = INI_Reader::get_value_int(param_1,0);
    *(int *)(*param_2 + 0x2c) = iVar3;
    return 1;
  }
  return 0;
}

