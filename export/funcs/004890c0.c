
undefined4 * __thiscall FUN_004890c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = param_2;
  if (param_3 != puVar1) {
    puVar3 = param_3;
    do {
      *puVar2 = *puVar3;
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                *)(puVar2 + 1),
               (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                *)((int)puVar2 + (int)param_3 + (4 - (int)param_2)),0,*(uint *)npos_exref);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                *)(puVar2 + 5),
               (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                *)(puVar3 + 5),0,*(uint *)npos_exref);
      puVar3 = puVar3 + 9;
      puVar2 = puVar2 + 9;
    } while (puVar3 != puVar1);
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 9) {
    FUN_00487c30();
  }
  *(undefined4 **)(param_1 + 8) = puVar2;
  return param_2;
}

