
void __thiscall
FUN_0055c1c0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  
  *(undefined1 *)((int)param_1 + 0x335) = 1;
  FUN_0055ac30(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_12,param_13,param_14,0);
  if (param_3 != 0) {
    FUN_0059ec80(param_3,0,0);
    (**(code **)(**(int **)Engine_exref + 0x7c))(*(int **)Engine_exref,param_1[0xdf],param_1 + 0x25)
    ;
    iVar2 = param_1[0xdf];
    if (iVar2 != -1) {
      FUN_00422b80((float)param_1[0x2a] + (float)param_1[0x18],
                   (float)param_1[0x2b] + (float)param_1[0x19],
                   (float)param_1[0x2c] + (float)param_1[0x1a]);
      (**(code **)(**(int **)Engine_exref + 0x8c))(*(int **)Engine_exref,iVar2,&stack0xffffffb8);
      (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,param_1[0xdf],0,0);
      if (param_1[0x21] != -1) {
        puVar1 = (undefined4 *)
                 (**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,param_1[0x21]);
        iVar2 = param_1[0xdf];
        puVar5 = (undefined4 *)&stack0xffffffbc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        }
        (**(code **)(**(int **)Engine_exref + 0x94))(*(int **)Engine_exref,iVar2,&stack0xffffffbc);
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
  pcVar4 = (code *)param_1[0xea];
  if ((code *)param_1[0xea] == (code *)0x0) {
    pcVar4 = _C_exref;
  }
  iVar2 = FUN_00564610(pcVar4);
  param_1[0xf1] = iVar2;
  pcVar4 = (code *)param_1[0xee];
  if ((code *)param_1[0xee] == (code *)0x0) {
    pcVar4 = _C_exref;
  }
  iVar2 = FUN_00564610(pcVar4);
  param_1[0xf2] = iVar2;
  return;
}

