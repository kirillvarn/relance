
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffe6c : 0x004d7865 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 * __thiscall FUN_004d75e0(undefined4 *param_1,INI_Reader *param_2)

{
  uchar uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uchar *puVar8;
  uint uVar9;
  uint uVar10;
  uchar *puVar11;
  char *pcVar12;
  undefined4 local_198;
  uchar *local_194;
  uint *local_190;
  undefined1 local_175;
  uint local_15c;
  undefined4 *local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_130;
  undefined1 local_12c;
  undefined4 local_ac;
  undefined1 local_a8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005be316;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_190 = (uint *)0x4d7619;
  local_158 = param_1;
  FUN_004c95b0();
  *param_1 = &PTR_FUN_005d6eac;
  param_1[0xd] = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 10) != 0) {
    local_190 = (uint *)0x4d7636;
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 10),(Watchable *)0x0);
  }
  param_1[0xc] = 0;
  local_4 = 1;
  FUN_0059f860();
  param_1[0xd9] = &PTR_LAB_005cbed8;
  *(undefined1 *)(param_1 + 0xdf) = local_175;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe] = &PTR_LAB_005d8344;
  *param_1 = &PTR_FUN_005d8310;
  param_1[0x2d] = &PTR_OnReceive_005d8304;
  param_1[0xd9] = &PTR_LAB_005d82fc;
  param_1[0xda] = &PTR_LAB_005d82f4;
  local_4 = CONCAT31(local_4._1_3_,6);
  DAT_00674a58 = param_1;
  bVar3 = INI_Reader::read_value(param_2);
  if (bVar3) {
    do {
      local_190 = (uint *)0x4d76dd;
      bVar3 = INI_Reader::is_value(param_2,"maneuver");
      if (bVar3) {
        local_190 = (uint *)param_1[0xe1];
        local_154 = 0;
        local_150 = 0;
        local_130 = 0;
        local_12c = 0;
        local_ac = 0;
        local_a8 = 0;
        local_194 = (uchar *)0x4d771d;
        FUN_004d9a70();
        iVar2 = param_1[0xe1];
        local_190 = (uint *)0x4d7733;
        pcVar5 = INI_Reader::get_value_string(param_2,0);
        puVar8 = (uchar *)(iVar2 + -0x144);
        if (pcVar5 == (char *)0x0) {
          *(undefined4 *)(iVar2 + -0x148) = 0;
          *puVar8 = '\0';
        }
        else {
          local_190 = (uint *)0x20;
          local_198 = 0x4d774a;
          local_194 = puVar8;
          uVar6 = FUN_00417c50();
          *(undefined4 *)(iVar2 + -0x148) = uVar6;
        }
        local_190 = (uint *)0x4d775a;
        INI_Reader::get_value_float(param_2,1);
        uVar6 = ftol();
        *(undefined4 *)(iVar2 + -0x1c) = uVar6;
        local_190 = (uint *)0x4d776f;
        INI_Reader::get_value_float(param_2,2);
        uVar6 = ftol();
        *(undefined4 *)(iVar2 + -0x18) = uVar6;
        local_190 = (uint *)0x4d7784;
        pcVar5 = INI_Reader::get_value_string(param_2,3);
        if (pcVar5 == (char *)0x0) {
          *(undefined4 *)(iVar2 + -0x124) = 0;
          *(undefined1 *)(iVar2 + -0x120) = 0;
        }
        else {
          local_194 = (uchar *)(iVar2 + -0x120);
          local_190 = (uint *)0x80;
          local_198 = 0x4d779f;
          uVar6 = FUN_00417c50();
          *(undefined4 *)(iVar2 + -0x124) = uVar6;
        }
        local_190 = &local_15c;
        local_198 = 0x4d77b7;
        local_194 = puVar8;
        cVar4 = FUN_004d9ca0();
        *(uint *)(iVar2 + -0x14) = -(uint)(cVar4 != '\0') & local_15c;
        local_190 = (uint *)0x4d77d1;
        iVar7 = BehaviorTypes::get_behavior_id((char *)(iVar2 + -0x144));
        *(int *)(iVar2 + -0x10) = iVar7;
        local_190 = (uint *)0x4d77e4;
        pcVar5 = INI_Reader::get_value_string(param_2,4);
        if (pcVar5 == (char *)0x0) {
          *(undefined4 *)(iVar2 + -0xa0) = 0;
          *(undefined1 *)(iVar2 + -0x9c) = 0;
        }
        else {
          local_194 = (uchar *)(iVar2 + -0x9c);
          local_190 = (uint *)0x80;
          local_198 = 0x4d7808;
          uVar6 = FUN_00417c50();
          *(undefined4 *)(iVar2 + -0xa0) = uVar6;
        }
        puVar8 = MD5Hash::GetStatePtr((MD5Hash *)(iVar2 + -0x124));
        local_198 = CONCAT31(local_198._1_3_,local_175);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_198,
                   false);
        uVar9 = 0xffffffff;
        puVar11 = puVar8;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          uVar1 = *puVar11;
          puVar11 = puVar11 + 1;
        } while (uVar1 != '\0');
        uVar9 = ~uVar9 - 1;
        bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_198,uVar9,true);
        if (bVar3) {
          puVar11 = local_194;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)puVar11 = *(undefined4 *)puVar8;
            puVar8 = puVar8 + 4;
            puVar11 = puVar11 + 4;
          }
          for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_198,
                     uVar9);
        }
        uVar6 = FUN_0055a360();
        *(undefined4 *)(iVar2 + -8) = uVar6;
        puVar8 = MD5Hash::GetStatePtr((MD5Hash *)(iVar2 + -0xa0));
        local_198 = CONCAT31(local_198._1_3_,local_175);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_198,
                   false);
        uVar9 = 0xffffffff;
        puVar11 = puVar8;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          uVar1 = *puVar11;
          puVar11 = puVar11 + 1;
        } while (uVar1 != '\0');
        uVar9 = ~uVar9 - 1;
        bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_198,uVar9,true);
        if (bVar3) {
          puVar11 = local_194;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)puVar11 = *(undefined4 *)puVar8;
            puVar8 = puVar8 + 4;
            puVar11 = puVar11 + 4;
          }
          for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          local_194[uVar9] = '\0';
          local_190 = (uint *)uVar9;
        }
        uVar6 = FUN_0055a360();
        *(undefined4 *)(iVar2 + -4) = uVar6;
      }
      bVar3 = INI_Reader::read_value(param_2);
    } while (bVar3);
  }
  local_194 = (uchar *)(param_1 + 2);
  local_190 = (uint *)0x20;
  local_198 = 0x4d793a;
  uVar6 = FUN_00417c50();
  local_190 = (uint *)0x0;
  param_1[1] = uVar6;
  local_194 = (uchar *)0x4d794a;
  FUN_004d7b50();
  uVar9 = 0xffffffff;
  pcVar5 = "HUD_Maneuvers";
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  uVar9 = ~uVar9 - 1;
  if (0x1f < uVar9) {
    uVar9 = 0x1f;
  }
  pcVar5 = "HUD_Maneuvers";
  pcVar12 = (char *)(param_1 + 0x14);
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  *(undefined1 *)(uVar9 + 0x50 + (int)param_1) = 0;
  param_1[0x13] = uVar9;
  param_1[0x12] = "HUD_Maneuvers";
  param_1[0xe3] = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    local_190 = (uint *)0x4d79a5;
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xe4),(Watchable *)0x0);
  }
  param_1[0xe6] = 0x3d1fbe77;
  param_1[0xe7] = 0x3d1fbe77;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0xffffffff;
  param_1[0xea] = 0xffffffff;
  uVar6 = DAT_005d828c;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xfa] = 0;
  param_1[0xeb] = uVar6;
  param_1[0xf0] = 1;
  param_1[0xf2] = 0x13;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  *(undefined1 *)((int)param_1 + 0x3cd) = 0;
  ExceptionList = local_c;
  return param_1;
}

