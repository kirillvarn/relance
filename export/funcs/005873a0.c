
undefined4 * __thiscall FUN_005873a0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar3 = param_2;
  if (param_3 != puVar2) {
    puVar4 = param_3 + 6;
    do {
      *puVar3 = puVar4[-6];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar3 + 1),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 ((int)puVar3 + (int)param_3 + (4 - (int)param_2)),0,*(uint *)npos_exref);
      puVar3[5] = puVar4[-1];
      puVar3[6] = *puVar4;
      puVar3[7] = puVar4[1];
      puVar1 = puVar4 + 2;
      puVar3 = puVar3 + 8;
      puVar4 = puVar4 + 8;
    } while (puVar1 != puVar2);
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar4 = puVar3;
  if (puVar3 == puVar2) {
    *(undefined4 **)(param_1 + 8) = puVar3;
    return param_2;
  }
  do {
    FUN_00455e90();
    puVar4 = puVar4 + 8;
  } while (puVar4 != puVar2);
  *(undefined4 **)(param_1 + 8) = puVar3;
  return param_2;
}

