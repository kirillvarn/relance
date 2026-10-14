
undefined1 __thiscall FUN_0055bfd0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *(undefined1 *)((int)param_1 + 0x335) = 1;
  uVar1 = FUN_0055a6b0(param_2,param_3);
  pcVar2 = _C_exref;
  if (param_1[0xd5] != 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Freeze
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xd4));
    pcVar2 = (code *)param_1[0xd5];
  }
  if (*pcVar2 != (code)0x0) {
    pcVar2 = (code *)param_1[0xd5];
    if ((code *)param_1[0xd5] == (code *)0x0) {
      pcVar2 = _C_exref;
    }
    FUN_0059ec80(pcVar2,0,0);
    (**(code **)(**(int **)Engine_exref + 0x7c))(*(int **)Engine_exref,param_1[0xdf],param_1 + 0x25)
    ;
    iVar4 = param_1[0xdf];
    if (iVar4 != -1) {
      FUN_00422b80((float)param_1[0x2a] + (float)param_1[0x18],
                   (float)param_1[0x2b] + (float)param_1[0x19],
                   (float)param_1[0x2c] + (float)param_1[0x1a]);
      (**(code **)(**(int **)Engine_exref + 0x8c))(*(int **)Engine_exref,iVar4,&stack0xffffffb8);
      (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0xdf],0,0);
      if (param_1[0x21] != -1) {
        puVar3 = (undefined4 *)
                 (**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,param_1[0x21]);
        iVar4 = param_1[0xdf];
        puVar6 = (undefined4 *)&stack0xffffffbc;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        (**(code **)(**(int **)Engine_exref + 0x94))(*(int **)Engine_exref,iVar4,&stack0xffffffbc);
        (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0xdf],0,0);
      }
    }
    (**(code **)(*param_1 + 0x8c))();
  }
  param_1[0xe8] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xe9),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xd8),0,*(uint *)npos_exref);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xed),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xd8),0,*(uint *)npos_exref);
  pcVar2 = (code *)param_1[0xea];
  if ((code *)param_1[0xea] == (code *)0x0) {
    pcVar2 = _C_exref;
  }
  iVar4 = FUN_00564610(pcVar2);
  param_1[0xf1] = iVar4;
  pcVar2 = (code *)param_1[0xee];
  if ((code *)param_1[0xee] == (code *)0x0) {
    pcVar2 = _C_exref;
  }
  iVar4 = FUN_00564610(pcVar2);
  param_1[0xf2] = iVar4;
  return uVar1;
}

