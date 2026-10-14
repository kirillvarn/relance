
undefined4 __thiscall FUN_005919f0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int local_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4979;
  local_c = ExceptionList;
  uVar6 = 0xffffffff;
  local_1c[0] = param_2._0_1_;
  pcVar7 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_1c,param_2,~uVar6 - 1);
  local_4 = 0;
  FUN_00594de0(&param_2,local_1c);
  if (param_2 != *(char **)(param_1 + 8)) {
    bVar3 = std::operator<(local_1c,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)(param_2 + 0xc));
    if (!bVar3) {
      piVar4 = (int *)&param_2;
      goto LAB_00591a88;
    }
  }
  local_20 = *(int *)(param_1 + 8);
  piVar4 = &local_20;
LAB_00591a88:
  iVar2 = *piVar4;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  if (iVar2 == *(int *)(param_1 + 8)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  }
  ExceptionList = local_c;
  return uVar5;
}

