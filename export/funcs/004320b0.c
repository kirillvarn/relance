
void __thiscall FUN_004320b0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)(param_3 + 4);
  param_1[1] = &PTR_LAB_005cad44;
  param_1[2] = uVar1;
  param_1[3] = *(undefined4 *)(param_3 + 8);
  param_1[4] = *(undefined4 *)(param_3 + 0xc);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 0x10);
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)(param_3 + 0x11);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)(param_3 + 0x12);
  param_1[1] = &PTR_LAB_005cabfc;
  return;
}

