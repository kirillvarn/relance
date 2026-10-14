
undefined2 * __thiscall FUN_004dea90(int param_1,undefined2 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  puVar4 = param_2;
  if (param_3 != puVar2) {
    puVar5 = param_3 + 0xc;
    do {
      *puVar4 = *(undefined2 *)(puVar5 + -0xc);
      *(undefined4 *)(puVar4 + 2) =
           *(undefined4 *)((int)puVar4 + (int)(param_3 + (4 - (int)param_2)));
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar5 + -4);
      *(undefined1 *)(puVar4 + 6) = *puVar5;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar4 + 8),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (puVar5 + 4),0,*(uint *)npos_exref);
      *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)(puVar5 + 0x14);
      puVar1 = puVar5 + 0x18;
      puVar4 = puVar4 + 0x12;
      puVar5 = puVar5 + 0x24;
    } while (puVar1 != puVar2);
  }
  puVar3 = *(undefined2 **)(param_1 + 8);
  puVar6 = puVar4;
  if (puVar4 == puVar3) {
    *(undefined2 **)(param_1 + 8) = puVar4;
    return param_2;
  }
  do {
    FUN_004dde70();
    puVar6 = puVar6 + 0x12;
  } while (puVar6 != puVar3);
  *(undefined2 **)(param_1 + 8) = puVar4;
  return param_2;
}

