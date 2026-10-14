
void __thiscall FUN_00455d70(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 local_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ba018;
  local_c = ExceptionList;
  pcVar7 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar7 = "";
  }
  local_1c[0] = param_3._0_1_;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  uVar5 = 0xffffffff;
  local_4 = 0;
  pcVar8 = pcVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_20 = param_2;
  ExceptionList = &local_c;
  bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (local_1c,uVar5,true);
  if (bVar3) {
    pcVar8 = local_18;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_18[uVar5] = '\0';
    local_14 = uVar5;
  }
  iVar2 = *(int *)(param_1 + 0x128);
  piVar9 = *(int **)(iVar2 + 4);
  piVar4 = operator_new(0x1c);
  *piVar4 = iVar2;
  if (piVar9 == (int *)0x0) {
    piVar9 = piVar4;
  }
  piVar4[1] = (int)piVar9;
  *(int **)(iVar2 + 4) = piVar4;
  *(int **)piVar4[1] = piVar4;
  FUN_00456bd0(piVar4 + 2,&local_20);
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
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

