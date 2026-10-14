
void __thiscall FUN_00453a40(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 local_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9eb8;
  local_c = ExceptionList;
  local_1c[0] = param_2._0_1_;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  local_20 = param_2;
  if (param_3 == (char *)0x0) {
    param_3 = "";
  }
  uVar5 = 0xffffffff;
  pcVar7 = param_3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  ExceptionList = &local_c;
  bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (local_1c,uVar5,true);
  if (bVar3) {
    pcVar7 = local_18;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar7 = *param_3;
      param_3 = param_3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_18[uVar5] = '\0';
    local_14 = uVar5;
  }
  iVar2 = *(int *)(param_1 + 4);
  piVar8 = *(int **)(iVar2 + 4);
  piVar4 = operator_new(0x1c);
  *piVar4 = iVar2;
  if (piVar8 == (int *)0x0) {
    piVar8 = piVar4;
  }
  piVar4[1] = (int)piVar8;
  *(int **)(iVar2 + 4) = piVar4;
  *(int **)piVar4[1] = piVar4;
  FUN_00453bc0(piVar4 + 2,&local_20);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005b7e1d(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

