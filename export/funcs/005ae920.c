
void FUN_005ae920(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if (param_1 != param_2) {
    piVar4 = param_1 + 6;
    do {
      *param_1 = *param_3;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar4 + -5),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_3 + 1),0,*(uint *)npos_exref);
      if (piVar4 + -1 != param_3 + 5) {
        FUN_005afb40(local_c,*(undefined4 *)*piVar4,(undefined4 *)*piVar4);
        iVar1 = *piVar4;
        *(undefined1 *)((int)piVar4 + -3) = *(undefined1 *)((int)param_3 + 0x15);
        uVar3 = FUN_005afd60(*(undefined4 *)(param_3[6] + 4),iVar1);
        *(undefined4 *)(iVar1 + 4) = uVar3;
        puVar2 = (undefined4 *)*piVar4;
        piVar4[3] = param_3[9];
        if (puVar2[1] == piVar4[1]) {
          *puVar2 = puVar2;
          *(int *)(*piVar4 + 8) = *piVar4;
        }
        else {
          uVar3 = FUN_0046e8e0(puVar2[1]);
          *puVar2 = uVar3;
          iVar1 = *piVar4;
          uVar3 = FUN_005afe20(*(undefined4 *)(iVar1 + 4));
          *(undefined4 *)(iVar1 + 8) = uVar3;
        }
      }
      if (piVar4 + 4 != param_3 + 10) {
        FUN_005afb40(local_8,*(undefined4 *)piVar4[5],(undefined4 *)piVar4[5]);
        iVar1 = piVar4[5];
        *(undefined1 *)((int)piVar4 + 0x11) = *(undefined1 *)((int)param_3 + 0x29);
        uVar3 = FUN_005afd60(*(undefined4 *)(param_3[0xb] + 4),iVar1);
        *(undefined4 *)(iVar1 + 4) = uVar3;
        puVar2 = (undefined4 *)piVar4[5];
        piVar4[8] = param_3[0xe];
        if (puVar2[1] == piVar4[6]) {
          *puVar2 = puVar2;
          *(int *)(piVar4[5] + 8) = piVar4[5];
        }
        else {
          uVar3 = FUN_0046e8e0(puVar2[1]);
          *puVar2 = uVar3;
          iVar1 = piVar4[5];
          uVar3 = FUN_005afe20(*(undefined4 *)(iVar1 + 4));
          *(undefined4 *)(iVar1 + 8) = uVar3;
        }
      }
      if (piVar4 + 9 != param_3 + 0xf) {
        FUN_005afb40(local_4,*(undefined4 *)piVar4[10],(undefined4 *)piVar4[10]);
        iVar1 = piVar4[10];
        *(undefined1 *)((int)piVar4 + 0x25) = *(undefined1 *)((int)param_3 + 0x3d);
        uVar3 = FUN_005afd60(*(undefined4 *)(param_3[0x10] + 4),iVar1);
        *(undefined4 *)(iVar1 + 4) = uVar3;
        puVar2 = (undefined4 *)piVar4[10];
        piVar4[0xd] = param_3[0x13];
        if (puVar2[1] == piVar4[0xb]) {
          *puVar2 = puVar2;
          *(int *)(piVar4[10] + 8) = piVar4[10];
        }
        else {
          uVar3 = FUN_0046e8e0(puVar2[1]);
          *puVar2 = uVar3;
          iVar1 = piVar4[10];
          uVar3 = FUN_005afe20(*(undefined4 *)(iVar1 + 4));
          *(undefined4 *)(iVar1 + 8) = uVar3;
        }
      }
      param_1 = param_1 + 0x14;
      piVar4 = piVar4 + 0x14;
    } while (param_1 != param_2);
  }
  return;
}

