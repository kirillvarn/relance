
undefined4 __thiscall FUN_00406dc0(int param_1,INI_Reader *param_2)

{
  int iVar1;
  uint uVar2;
  INI_Reader *this;
  bool bVar3;
  char cVar4;
  char *pcVar5;
  float fVar6;
  int local_40;
  uint local_3c;
  char *local_38;
  int local_34;
  undefined1 local_30 [4];
  CacheString local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  CacheString local_1c [4];
  uchar *local_18;
  ulong local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b84f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar3 = INI_Reader::is_value(param_2,"material_library");
  if (bVar3) {
    local_40 = -1;
    bVar3 = INI_Reader::is_value_empty(this,2);
    if (!bVar3) {
      local_40 = INI_Reader::get_value_int(this,2);
    }
    pcVar5 = INI_Reader::get_value_string(this);
    CacheString::clear((CacheString *)&param_2);
    param_2 = (INI_Reader *)StringAlloc(pcVar5,true);
    CacheString::clear((CacheString *)&local_38);
    local_34 = local_40;
    local_38 = (char *)param_2;
    FUN_0040d830(*(undefined4 *)(param_1 + 0x28),1,&local_38);
  }
  else {
    cVar4 = FUN_00402310(this,param_1 + 4);
    if (cVar4 == '\0') {
      bVar3 = INI_Reader::is_value(this,"distance_render");
      if (bVar3) {
        fVar6 = INI_Reader::get_value_float(this,0);
        *(float *)(param_1 + 8) = fVar6;
        ExceptionList = local_c;
        return 1;
      }
      bVar3 = INI_Reader::is_value(this,"envmap_material");
      if (bVar3) {
        pcVar5 = INI_Reader::get_value_string(this);
        CacheString::clear((CacheString *)&param_2);
        pcVar5 = StringAlloc(pcVar5,true);
        *(char **)(param_1 + 0x10) = pcVar5;
        ExceptionList = local_c;
        return 1;
      }
      bVar3 = INI_Reader::is_value(this,"surface_hit_effects");
      if (bVar3) {
        param_2 = (INI_Reader *)INI_Reader::get_value_float(this,0);
        local_2c = param_2._0_1_;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c[0] = param_2._0_1_;
        local_18 = (uchar *)0x0;
        local_14 = 0;
        local_10 = 0;
        local_4 = 0;
        FUN_0040daa0(*(undefined4 *)(param_1 + 0x48),1,local_30);
        local_4 = 1;
        IDPMsgHandler::OnReceive((IDPMsgHandler *)local_1c,local_18,local_14);
        FUN_005b7e1d(local_18);
        local_18 = (uchar *)0x0;
        local_14 = 0;
        local_10 = 0;
        local_4 = 0xffffffff;
        FUN_004de730();
        iVar1 = *(int *)(param_1 + 0x48);
        *(INI_Reader **)(iVar1 + -0x24) = param_2;
        bVar3 = INI_Reader::is_value_empty(this,1);
        uVar2 = 1;
        while (!bVar3) {
          pcVar5 = INI_Reader::get_value_string(this,uVar2);
          local_3c = CreateID(pcVar5);
          FUN_00537260(*(undefined4 *)(iVar1 + -0x18),1,&local_3c);
          bVar3 = INI_Reader::is_value_empty(this,uVar2 + 1);
          uVar2 = uVar2 + 1;
        }
        ExceptionList = local_c;
        return 1;
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  ExceptionList = local_c;
  return 1;
}

