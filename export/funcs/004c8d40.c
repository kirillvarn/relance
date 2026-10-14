
undefined4 * FUN_004c8d40(INI_Reader *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd884;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar4 = operator_new(0x154);
  local_4 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    FUN_004c9060();
    local_4._0_1_ = 1;
    FUN_004b5150();
    *puVar4 = &PTR_FUN_005d7024;
    *(undefined1 *)(puVar4 + 0x37) = 0;
    puVar4[0x38] = 0;
    puVar4[0x39] = 0x43340000;
    puVar4[0x3a] = 0x3f59999a;
    puVar4[0x3b] = 0x3f400000;
    *(undefined1 *)(puVar4 + 0x3c) = 0;
    puVar1 = puVar4 + 0x3d;
    local_4._0_1_ = 2;
    puVar4[0x3e] = 0;
    *(undefined1 *)(puVar4 + 0x3f) = 0;
    FUN_004c95b0(0);
    local_4._0_1_ = 3;
    *puVar1 = &PTR_FUN_005d6eac;
    puVar4[0x4a] = 0;
    BaseWatcher::set((BaseWatcher *)(puVar4 + 0x47),(Watchable *)0x0);
    puVar4[0x49] = 0;
    puVar4[0x4b] = 0;
    *(undefined1 *)(puVar4 + 0x4c) = 0;
    local_4 = CONCAT31(local_4._1_3_,4);
    *puVar4 = &PTR_FUN_005d6fac;
    *puVar1 = &PTR_LAB_005d6f78;
    FUN_00420750("Button");
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0xc0a00000;
    puVar4[0x54] = 0;
    bVar2 = INI_Reader::read_value(param_1);
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_value(param_1,"action");
        if (bVar2) {
          pcVar5 = INI_Reader::get_value_string(param_1);
          FUN_00420750(pcVar5);
          puVar4[0x54] = 0;
          cVar3 = FUN_004c9610("radio");
          if (cVar3 == '\0') {
            cVar3 = FUN_004c9610("status");
            if (cVar3 == '\0') {
              cVar3 = FUN_004c9610(&DAT_005d6f54);
              if (cVar3 == '\0') {
                cVar3 = FUN_004c9610("navmap");
                if (cVar3 == '\0') {
                  cVar3 = FUN_004c9610("toggle_manuevers");
                  if (cVar3 == '\0') {
                    DebugPrint("Warning: unknown HUD_Button action %s\n",pcVar5);
                  }
                  else {
                    puVar4[0x54] = 0x73;
                  }
                }
                else {
                  puVar4[0x54] = 99;
                }
              }
              else {
                puVar4[0x54] = 0x55;
              }
            }
            else {
              puVar4[0x54] = 0x5e;
            }
          }
          else {
            puVar4[0x54] = 0x5c;
          }
        }
        else {
          bVar2 = INI_Reader::is_value(param_1,"object");
          if (bVar2) {
            uVar9 = 0;
            pcVar5 = INI_Reader::get_value_string(param_1);
            FUN_0059f1c0(0,pcVar5,uVar9);
          }
          else {
            bVar2 = INI_Reader::is_value(param_1,"object_pos");
            if (bVar2) {
              fVar6 = INI_Reader::get_value_float(param_1,1);
              fVar7 = INI_Reader::get_value_float(param_1,0);
              fVar8 = INI_Reader::get_value_float(param_1,2);
              puVar4[0x18] = fVar7;
              puVar4[0x19] = fVar6;
              puVar4[0x1a] = fVar8;
              puVar4[0x34] = fVar7;
              puVar4[0x35] = fVar6;
              puVar4[0x36] = fVar8;
              FUN_004c92b0(puVar4 + 0x2b);
            }
            else {
              bVar2 = INI_Reader::is_value(param_1,"tool_tip_id");
              if (bVar2) {
                INI_Reader::get_value_float(param_1,0);
                uVar9 = ftol();
                puVar4[0x49] = uVar9;
              }
            }
          }
        }
        bVar2 = INI_Reader::read_value(param_1);
      } while (bVar2);
    }
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

