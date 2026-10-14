
void __thiscall FUN_00491e10(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_11c [4];
  undefined4 local_118;
  undefined1 local_114;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_bc;
  undefined1 local_b8;
  int iStack_98;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_48;
  undefined1 local_44;
  
  if (*(int *)(param_1 + 0x838) == param_3) {
    *param_2 = *(undefined4 *)(param_1 + 0x83c);
    param_2[1] = *(undefined4 *)(param_1 + 0x840);
    param_2[2] = *(undefined4 *)(param_1 + 0x844);
    return;
  }
  if (param_4 != (int *)0x0) {
    local_118 = 0;
    local_114 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_8c = 0;
    local_88 = 0;
    local_48 = 0;
    local_44 = 0;
    uVar2 = (**(code **)(*param_4 + 0x3c))();
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        cVar1 = (**(code **)(*param_4 + 0x40))(uVar3,&local_118);
        if ((cVar1 != '\0') && (iStack_98 == param_3)) {
          *(undefined4 *)(param_1 + 0x83c) = uStack_d4;
          *(undefined4 *)(param_1 + 0x840) = uStack_d0;
          *(int *)(param_1 + 0x838) = param_3;
          *(undefined4 *)(param_1 + 0x844) = uStack_cc;
          *param_2 = uStack_d4;
          param_2[1] = uStack_d0;
          param_2[2] = uStack_cc;
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    cVar1 = FUN_00476fe0(param_3,&uStack_128,auStack_11c);
    if (cVar1 != '\0') {
      *param_2 = uStack_128;
      param_2[1] = uStack_124;
      param_2[2] = uStack_120;
      return;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

