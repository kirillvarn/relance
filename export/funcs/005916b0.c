
undefined4 FUN_005916b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  void **ppvVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_d4 [4];
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 *local_c4;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int iStack_88;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_80 [4];
  undefined4 auStack_7c [4];
  undefined1 local_6c [32];
  undefined4 auStack_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c4964;
  local_c = ExceptionList;
  uVar5 = CONCAT31((int3)((uint)ExceptionList >> 8),1);
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    ppvVar3 = &local_c;
    while (ExceptionList = ppvVar3, iVar2 != 0) {
      puVar8 = (undefined4 *)*param_1;
      local_c4 = puVar8;
      piVar4 = (int *)FUN_0059db20(puVar8[2],*puVar8,param_2,puVar8[1]);
      if (piVar4 == (int *)0x0) {
        ExceptionList = local_c;
        return 0;
      }
      local_90 = puVar8[4];
      local_94 = puVar8[3];
      local_98 = 0x3f800000;
      local_a8 = 0x3f800000;
      local_b8 = 0x3f800000;
      local_9c = 0;
      local_a0 = 0;
      local_a4 = 0;
      local_ac = 0;
      local_b0 = 0;
      local_b4 = 0;
      local_8c = 0;
      if (DAT_0067d96c == (int *)0x0) {
        DAT_0067d96c = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_0067d96c + 0x1c))(DAT_0067d96c,local_6c,param_3,&local_b8);
      iVar2 = *piVar4;
      puVar8 = auStack_7c;
      puVar9 = auStack_4c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      (**(code **)(iVar2 + 0x20))(auStack_4c);
      puVar8 = local_c4;
      uVar7 = 0xffffffff;
      iStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      pcVar10 = (char *)local_c4[2];
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_d4,(char *)local_c4[2],~uVar7 - 1);
      iStack_4 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_80,
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 abStack_d4);
      auStack_7c[3] = 0;
      iStack_4._0_1_ = 1;
      FUN_00594b90(auStack_c0,abStack_80);
      FUN_0046d660(auStack_c0,auStack_bc);
      iVar2 = iStack_88;
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(abStack_80,true);
      *(int **)(iVar2 + 0x1c) = piVar4;
      iStack_4 = 0xffffffff;
      if (iStack_d0 != 0) {
        cVar1 = *(char *)(iStack_d0 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005b7e1d((char *)(iStack_d0 + -1));
        }
        else {
          *(char *)(iStack_d0 + -1) = cVar1 + -1;
        }
      }
      iStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uVar5 = FUN_005916b0(puVar8[7],piVar4,param_3);
      piVar4 = param_1 + 1;
      param_1 = param_1 + 1;
      ppvVar3 = ExceptionList;
      iVar2 = *piVar4;
    }
  }
  ExceptionList = local_c;
  return uVar5;
}

