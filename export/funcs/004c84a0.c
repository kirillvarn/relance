
undefined4 * FUN_004c84a0(INI_Reader *param_1)

{
  BaseWatcher *this;
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd822;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x74);
  if (puVar2 != (undefined4 *)0x0) {
    this = (BaseWatcher *)(puVar2 + 10);
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined4 *)this = 0;
    puVar2[0xb] = 0;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    BaseWatcher::set(this,(Watchable *)0x0);
    *puVar2 = &PTR_FUN_005d6eac;
    puVar2[0xd] = 0;
    local_4._0_1_ = 2;
    if (*(int *)this != 0) {
      BaseWatcher::set_pointer(this,(Watchable *)0x0);
    }
    puVar2[0xc] = 0;
    local_4._0_1_ = 3;
    FUN_00420d40();
    puVar2[0x1b] = 0x3f800000;
    puVar2[0x1a] = 0x3f800000;
    puVar2[0x19] = 0x3f800000;
    puVar2[0x18] = 0x3f800000;
    puVar2[0x1c] = 0x3f800000;
    puVar2[0x13] = &PTR_FUN_005d2efc;
    puVar2[0x17] = 0xffffffff;
    local_4 = CONCAT31(local_4._1_3_,4);
    *puVar2 = &PTR_FUN_005d6e7c;
    uVar3 = FUN_00417c50(puVar2 + 2,0x20,"Steer");
    puVar2[1] = uVar3;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    if (*(int *)this != 0) {
      BaseWatcher::set_pointer(this,(Watchable *)0x0);
    }
    puVar2[0x11] = 0x3e4ccccd;
    puVar2[0x10] = 0x43480000;
    puVar2[0xf] = 0x42200000;
    *(undefined1 *)(puVar2 + 0x12) = 0;
    FUN_0059ec80("interface\\hud\\HUD_steeringarrow.3db",0,1);
    bVar1 = INI_Reader::read_value(param_1);
    if (bVar1) {
      do {
        bVar1 = INI_Reader::is_value(param_1,"radius");
        if (bVar1) {
          fVar4 = INI_Reader::get_value_float(param_1,0);
          puVar2[0xf] = fVar4;
        }
        else {
          bVar1 = INI_Reader::is_value(param_1,"range");
          if (bVar1) {
            fVar4 = INI_Reader::get_value_float(param_1,0);
            puVar2[0x10] = fVar4;
          }
        }
        bVar1 = INI_Reader::read_value(param_1);
      } while (bVar1);
    }
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

