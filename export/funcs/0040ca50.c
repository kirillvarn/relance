
undefined4 FUN_0040ca50(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b8717;
  pvStack_c = ExceptionList;
  switch(param_1) {
  case (undefined4 *)0x2:
    ExceptionList = &pvStack_c;
    puVar2 = operator_new(0x88);
    local_4 = 2;
    puVar4 = (undefined4 *)0x0;
    param_1 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,3);
      ID_String::clear((ID_String *)(puVar2 + 0x15));
      ID_String::clear((ID_String *)(puVar2 + 0x16));
      uVar3 = 0xffffffff;
      puVar2[0x17] = 0;
      *(undefined1 *)(puVar2 + 0x18) = 0;
      *puVar2 = &PTR_FUN_005c7908;
      pcVar6 = "DEFAULT_TEXTURE";
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      if (0x1f < uVar3) {
        uVar3 = 0x1f;
      }
      pcVar6 = "DEFAULT_TEXTURE";
      pcVar7 = (char *)(puVar2 + 0x18);
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(undefined1 *)(uVar3 + 0x60 + (int)puVar2) = 0;
      puVar2[0x17] = uVar3;
      puVar2[0x20] = 0;
      *(undefined1 *)(puVar2 + 0x21) = 0;
      puVar4 = puVar2;
    }
    *param_2 = puVar4;
    local_4 = 0xffffffff;
    (**(code **)*puVar4)();
    ExceptionList = pvStack_c;
    return 0;
  case (undefined4 *)0x3:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x88);
    local_4 = 0;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,1);
      ID_String::clear((ID_String *)(puVar4 + 0x16));
      ID_String::clear((ID_String *)(puVar4 + 0x17));
      CacheString::clear((CacheString *)(puVar4 + 0x18));
      ID_String::clear((ID_String *)(puVar4 + 0x19));
      puVar4[0x1a] = 0;
      puVar4[0x1b] = 0;
      puVar4[0x1c] = 0x3d8f5c29;
      puVar4[0x1d] = 0x3d23d70a;
      puVar4[0x1e] = 0x3e4ccccd;
      puVar4[0x1f] = 0x3e4ccccd;
      puVar4[0x20] = 0x3e4ccccd;
      puVar4[0x21] = 0x3f000000;
      *puVar4 = &PTR_FUN_005c77b8;
      goto LAB_0040cee1;
    }
    break;
  case (undefined4 *)0x4:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x54);
    local_4 = 0xc;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      *puVar4 = &PTR_FUN_005c7a3c;
      goto LAB_0040cee1;
    }
    break;
  case (undefined4 *)0x5:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x5c);
    local_4 = 0xd;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,0xe);
      ID_String::clear((ID_String *)(puVar4 + 0x15));
      *puVar4 = &PTR_FUN_005c7a78;
      uVar3 = CreateID((char *)0x0);
      *(uint *)(puVar4 + 0x15) = uVar3;
      *(undefined1 *)(puVar4 + 0x16) = 0;
      goto LAB_0040cee1;
    }
    break;
  default:
    ExceptionList = &pvStack_c;
    param_1 = operator_new(0x54);
    local_4 = 0x24;
    if (param_1 == (undefined4 *)0x0) {
LAB_0040d121:
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_004068d0();
    }
    goto LAB_0040d123;
  case (undefined4 *)0xc:
    ExceptionList = &pvStack_c;
    param_1 = operator_new(0xac);
    local_4 = 0xf;
    if (param_1 == (undefined4 *)0x0) goto LAB_0040d121;
    puVar4 = (undefined4 *)FUN_00408f20();
    goto LAB_0040d123;
  case (undefined4 *)0xd:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x54);
    local_4 = 0x10;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      *puVar4 = &PTR_FUN_005c83e4;
      *param_2 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
      goto LAB_0040d12d;
    }
    goto LAB_0040d0f0;
  case (undefined4 *)0xe:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x70);
    local_4 = 0x11;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      ID_String::clear((ID_String *)(puVar4 + 0x15));
      ID_String::clear((ID_String *)(puVar4 + 0x16));
      ID_String::clear((ID_String *)(puVar4 + 0x17));
      *(undefined1 *)(puVar4 + 0x18) = param_2._0_1_;
      puVar4[0x19] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x1b] = 0;
      *puVar4 = &PTR_FUN_005c7cfc;
      goto LAB_0040cee1;
    }
    break;
  case (undefined4 *)0xf:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x5c);
    local_4 = 0x19;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,0x1a);
      ID_String::clear((ID_String *)(puVar4 + 0x15));
      CacheString::clear((CacheString *)(puVar4 + 0x16));
      *puVar4 = &PTR_FUN_005c7d98;
      *param_2 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
      goto LAB_0040d12d;
    }
    goto LAB_0040d0f0;
  case (undefined4 *)0x11:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x88);
    local_4 = 0x13;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4._0_1_ = 0x14;
      ID_String::clear((ID_String *)(puVar4 + 0x15));
      puVar4[0x16] = 0x40800000;
      puVar4[0x17] = 0;
      *(undefined1 *)(puVar4 + 0x18) = 0;
      ID_String::clear((ID_String *)(puVar4 + 0x20));
      *puVar4 = &PTR_FUN_005c7df0;
      local_4 = CONCAT31(local_4._1_3_,0x15);
      ID_String::clear((ID_String *)(puVar4 + 0x21));
      *puVar4 = &PTR_FUN_005c7e6c;
      goto LAB_0040cee1;
    }
    break;
  case (undefined4 *)0x12:
  case (undefined4 *)0x13:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x84);
    local_4 = 0x16;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,0x17);
      ID_String::clear((ID_String *)(puVar4 + 0x15));
      puVar4[0x16] = 0x40800000;
      puVar4[0x17] = 0;
      *(undefined1 *)(puVar4 + 0x18) = 0;
      ID_String::clear((ID_String *)(puVar4 + 0x20));
      *puVar4 = &PTR_FUN_005c7df0;
      goto LAB_0040cee1;
    }
    break;
  case (undefined4 *)0x15:
    ExceptionList = &pvStack_c;
    param_1 = operator_new(0x98);
    local_4 = 0x18;
    if (param_1 == (undefined4 *)0x0) goto LAB_0040d121;
    puVar4 = (undefined4 *)FUN_0040a9e0();
    goto LAB_0040d123;
  case (undefined4 *)0x16:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x60);
    local_4 = 0x1b;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,0x1c);
      ID_String::clear((ID_String *)(puVar4 + 0x16));
      ID_String::clear((ID_String *)(puVar4 + 0x17));
      *(undefined1 *)((int)puVar4 + 0x56) = 0xff;
      *(undefined1 *)((int)puVar4 + 0x55) = 0xff;
      *(undefined1 *)(puVar4 + 0x15) = 0xff;
      *puVar4 = &PTR_FUN_005c7f78;
      *param_2 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
      goto LAB_0040d12d;
    }
    goto LAB_0040d0f0;
  case (undefined4 *)0x17:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x5c);
    local_4 = 0x1d;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,0x1e);
      ID_String::clear((ID_String *)(puVar4 + 0x15));
      *(undefined1 *)(puVar4 + 0x16) = 0;
      *puVar4 = &PTR_FUN_005c7fe0;
      *param_2 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
      goto LAB_0040d12d;
    }
    goto LAB_0040d0f0;
  case (undefined4 *)0x18:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(100);
    local_4 = 0x1f;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,0x20);
      ID_String::clear((ID_String *)(puVar4 + 0x15));
      puVar4[0x16] = 0x43b40000;
      puVar4[0x17] = 0x43b40000;
      puVar4[0x18] = 0;
      *puVar4 = &PTR_FUN_005c802c;
      *param_2 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
      goto LAB_0040d12d;
    }
    goto LAB_0040d0f0;
  case (undefined4 *)0x19:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x58);
    local_4 = 0x22;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,0x23);
      ID_String::clear((ID_String *)(puVar4 + 0x15));
      *puVar4 = &PTR_FUN_005c83a8;
      *param_2 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
      goto LAB_0040d12d;
    }
LAB_0040d0f0:
    *param_2 = 0;
    puVar4 = puRam00000000;
LAB_0040d12d:
    local_4 = 0xffffffff;
    (*(code *)*puVar4)();
    ExceptionList = pvStack_c;
    return 0;
  case (undefined4 *)0x1d:
    ExceptionList = &pvStack_c;
    param_1 = operator_new(200);
    local_4 = 0x21;
    if (param_1 == (undefined4 *)0x0) goto LAB_0040d121;
    puVar4 = (undefined4 *)FUN_0040bd90();
LAB_0040d123:
    *param_2 = puVar4;
    puVar4 = (undefined4 *)*puVar4;
    goto LAB_0040d12d;
  case (undefined4 *)0x1f:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x84);
    local_4 = 4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4._0_1_ = 5;
      puVar4[0x15] = 0;
      ID_String::clear((ID_String *)(puVar4 + 0x16));
      ID_String::clear((ID_String *)(puVar4 + 0x17));
      *puVar4 = &PTR_FUN_005c79a8;
      local_4._0_1_ = 6;
      CacheString::clear((CacheString *)(puVar4 + 0x18));
      *(undefined1 *)(puVar4 + 0x19) = param_2._0_1_;
      puVar4[0x1a] = 0;
      puVar4[0x1b] = 0;
      puVar4[0x1c] = 0;
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_005a6900(&param_1);
      *puVar4 = &PTR_FUN_005c8420;
      goto LAB_0040cee1;
    }
    break;
  case (undefined4 *)0x20:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x60);
    local_4 = 8;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,9);
LAB_0040cc72:
      puVar4[0x15] = 0;
      ID_String::clear((ID_String *)(puVar4 + 0x16));
      ID_String::clear((ID_String *)(puVar4 + 0x17));
      *puVar4 = &PTR_FUN_005c79a8;
      goto LAB_0040cee1;
    }
    break;
  case (undefined4 *)0x21:
    ExceptionList = &pvStack_c;
    puVar4 = operator_new(0x60);
    local_4 = 10;
    param_1 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004068d0();
      local_4 = CONCAT31(local_4._1_3_,0xb);
      goto LAB_0040cc72;
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_0040cee1:
  *param_2 = puVar4;
  local_4 = 0xffffffff;
  (**(code **)*puVar4)();
  ExceptionList = pvStack_c;
  return 0;
}

