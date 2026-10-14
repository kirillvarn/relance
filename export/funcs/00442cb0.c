
void __thiscall
FUN_00442cb0(int param_1,undefined4 *param_2,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  puVar2 = puVar3;
  puVar4 = (undefined4 *)puVar3[1];
  if ((undefined4 *)puVar3[1] != *(undefined4 **)(param_1 + 8)) {
    do {
      puVar3 = puVar4;
      bVar1 = std::operator<((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (puVar3 + 3),param_3);
      if (bVar1) {
        puVar4 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (puVar4 != *(undefined4 **)(param_1 + 8));
  }
  if (puVar3 != *(undefined4 **)(param_1 + 4)) {
    bVar1 = std::operator<(param_3,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(puVar3 + 3));
    if (!bVar1) {
      *param_2 = puVar3;
      return;
    }
  }
  *param_2 = *(undefined4 *)(param_1 + 4);
  return;
}

