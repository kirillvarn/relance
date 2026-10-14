
undefined4 * FUN_005aeb00(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if (param_1 != param_2) {
    piVar4 = param_3 + 6;
    piVar6 = (int *)(param_2 + 0x18);
    do {
      puVar1 = (undefined4 *)(param_2 + -0x50);
      param_2 = param_2 + -0x50;
      param_3 = param_3 + -0x14;
      *param_3 = *puVar1;
      piVar5 = piVar4 + -0x14;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar4 + -0x19)
                 ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  (piVar6 + -0x19),0,*(uint *)npos_exref);
      if (piVar4 + -0x15 != piVar6 + -0x15) {
        FUN_005afb40(local_c,*(undefined4 *)*piVar5,(undefined4 *)*piVar5);
        iVar2 = *piVar5;
        *(undefined1 *)((int)piVar4 + -0x53) = *(undefined1 *)((int)piVar6 + -0x53);
        uVar3 = FUN_005afd60(*(undefined4 *)(piVar6[-0x14] + 4),iVar2);
        *(undefined4 *)(iVar2 + 4) = uVar3;
        puVar1 = (undefined4 *)*piVar5;
        piVar4[-0x11] = piVar6[-0x11];
        if (puVar1[1] == piVar4[-0x13]) {
          *puVar1 = puVar1;
          *(int *)(*piVar5 + 8) = *piVar5;
        }
        else {
          uVar3 = FUN_0046e8e0(puVar1[1]);
          *puVar1 = uVar3;
          iVar2 = *piVar5;
          uVar3 = FUN_005afe20(*(undefined4 *)(iVar2 + 4));
          *(undefined4 *)(iVar2 + 8) = uVar3;
        }
      }
      if (piVar4 + -0x10 != piVar6 + -0x10) {
        FUN_005afb40(local_8,*(undefined4 *)piVar4[-0xf],(undefined4 *)piVar4[-0xf]);
        iVar2 = piVar4[-0xf];
        *(undefined1 *)((int)piVar4 + -0x3f) = *(undefined1 *)((int)piVar6 + -0x3f);
        uVar3 = FUN_005afd60(*(undefined4 *)(piVar6[-0xf] + 4),iVar2);
        *(undefined4 *)(iVar2 + 4) = uVar3;
        puVar1 = (undefined4 *)piVar4[-0xf];
        piVar4[-0xc] = piVar6[-0xc];
        if (puVar1[1] == piVar4[-0xe]) {
          *puVar1 = puVar1;
          *(int *)(piVar4[-0xf] + 8) = piVar4[-0xf];
        }
        else {
          uVar3 = FUN_0046e8e0(puVar1[1]);
          *puVar1 = uVar3;
          iVar2 = piVar4[-0xf];
          uVar3 = FUN_005afe20(*(undefined4 *)(iVar2 + 4));
          *(undefined4 *)(iVar2 + 8) = uVar3;
        }
      }
      if (piVar4 + -0xb != piVar6 + -0xb) {
        FUN_005afb40(local_4,*(undefined4 *)piVar4[-10],(undefined4 *)piVar4[-10]);
        iVar2 = piVar4[-10];
        *(undefined1 *)((int)piVar4 + -0x2b) = *(undefined1 *)((int)piVar6 + -0x2b);
        uVar3 = FUN_005afd60(*(undefined4 *)(piVar6[-10] + 4),iVar2);
        *(undefined4 *)(iVar2 + 4) = uVar3;
        puVar1 = (undefined4 *)piVar4[-10];
        piVar4[-7] = piVar6[-7];
        if (puVar1[1] == piVar4[-9]) {
          *puVar1 = puVar1;
          *(int *)(piVar4[-10] + 8) = piVar4[-10];
        }
        else {
          uVar3 = FUN_0046e8e0(puVar1[1]);
          *puVar1 = uVar3;
          iVar2 = piVar4[-10];
          uVar3 = FUN_005afe20(*(undefined4 *)(iVar2 + 4));
          *(undefined4 *)(iVar2 + 8) = uVar3;
        }
      }
      piVar4 = piVar5;
      piVar6 = piVar6 + -0x14;
    } while (param_2 != param_1);
  }
  return param_3;
}

