
void FUN_00433d50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    uVar1 = param_2[2];
    param_1[1] = &PTR_LAB_005cad44;
    param_1[2] = uVar1;
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
    *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
    param_1[1] = &PTR_LAB_005cabfc;
  }
  return;
}

