
void FUN_00578a40(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c3bea;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,param_2,0,*(uint *)npos_exref);
    local_4 = CONCAT31(local_4._1_3_,1);
    param_1[0x10] =
         *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x10);
    piVar4 = operator_new(0xc);
    *piVar4 = (int)piVar4;
    piVar4[1] = (int)piVar4;
    *(int **)(param_1 + 0x14) = piVar4;
    *(undefined4 *)(param_1 + 0x18) = 0;
    puVar1 = *(undefined4 **)(param_2 + 0x14);
    iVar3 = *piVar4;
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      piVar4 = *(int **)(iVar3 + 4);
      piVar5 = operator_new(0xc);
      *piVar5 = iVar3;
      if (piVar4 == (int *)0x0) {
        piVar4 = piVar5;
      }
      piVar5[1] = (int)piVar4;
      *(int **)(iVar3 + 4) = piVar5;
      *(int **)piVar5[1] = piVar5;
      if (piVar5 + 2 != (int *)0x0) {
        piVar5[2] = puVar2[2];
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
  }
  ExceptionList = local_c;
  return;
}

