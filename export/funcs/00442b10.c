
void __thiscall
FUN_00442b10(int param_1,undefined4 *param_2,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  puVar4 = (undefined4 *)puVar3[1];
  bVar2 = true;
  if (puVar4 != *(undefined4 **)(param_1 + 8)) {
    do {
      puVar3 = puVar4;
      bVar2 = std::operator<(param_3,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)(puVar3 + 3));
      if (bVar2) {
        puVar4 = (undefined4 *)*puVar3;
      }
      else {
        puVar4 = (undefined4 *)puVar3[2];
      }
    } while (puVar4 != *(undefined4 **)(param_1 + 8));
  }
  pbVar1 = param_3;
  if (*(char *)(param_1 + 0xc) != '\0') {
    puVar3 = (undefined4 *)FUN_004431d0(&param_3,puVar4,puVar3,param_3);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar2 != false) {
    if (puVar3 == (undefined4 *)**(int **)(param_1 + 4)) goto LAB_00442bad;
    FUN_005a7c20();
  }
  bVar2 = std::operator<((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (puVar3 + 3),pbVar1);
  if (!bVar2) {
    *param_2 = puVar3;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
LAB_00442bad:
  puVar3 = (undefined4 *)FUN_004431d0(&param_3,puVar4,puVar3,param_3);
  *param_2 = *puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

