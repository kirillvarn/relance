
void __fastcall FUN_0046c640(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *local_20;
  int local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005bb95e;
  pvStack_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &pvStack_c;
  local_1c = param_1;
  FUN_0046c860(&local_20,**(undefined4 **)(param_1 + 0x5a0),*(undefined4 **)(param_1 + 0x5a0));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x5a0));
  *(undefined4 *)(param_1 + 0x5a0) = 0;
  *(undefined4 *)(param_1 + 0x5a4) = 0;
  local_4._0_1_ = 4;
  FUN_0046c860(&local_20,**(undefined4 **)(param_1 + 0x594),*(undefined4 **)(param_1 + 0x594));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x594));
  *(undefined4 *)(param_1 + 0x594) = 0;
  *(undefined4 *)(param_1 + 0x598) = 0;
  local_4._0_1_ = 3;
  FUN_0046c860(&local_20,**(undefined4 **)(param_1 + 0x588),*(undefined4 **)(param_1 + 0x588));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x588));
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x58c) = 0;
  local_4._0_1_ = 2;
  FUN_0046c860(&local_20,**(undefined4 **)(param_1 + 0x57c),*(undefined4 **)(param_1 + 0x57c));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x57c));
  *(undefined4 *)(param_1 + 0x57c) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  piVar1 = *(int **)(param_1 + 0x570);
  local_20 = (int *)*piVar1;
  local_4._0_1_ = 1;
  while (local_20 != piVar1) {
    puVar2 = (undefined4 *)FUN_0053ab20(local_18,0);
    FUN_0046d680(local_14,*puVar2);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x570));
  local_10 = (undefined4 *)(param_1 + 0x53c);
  *(undefined4 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x574) = 0;
  *local_10 = &PTR_FUN_005cef80;
  local_4._0_1_ = 6;
  if (*(char *)(param_1 + 0x551) != '\0') {
    (**(code **)(**(int **)TextureLib_exref + 0x38))
              (*(int **)TextureLib_exref,*(undefined4 *)(param_1 + 0x558));
    FUN_0041c830(*(undefined4 *)(param_1 + 0x554));
    *(undefined1 *)(param_1 + 0x551) = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x540),
             true);
  local_4 = 0xffffffff;
  FUN_0057bbf0();
  ExceptionList = pvStack_c;
  return;
}

