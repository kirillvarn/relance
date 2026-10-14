
void __thiscall FUN_005048a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = *param_2;
  puVar1 = param_1 + 1;
  puVar2 = (undefined4 *)((int)puVar1 + (8 - (int)param_1) + (int)param_2);
  iVar3 = 5;
  do {
    *puVar1 = puVar2[-2];
    puVar1[1] = puVar2[-1];
    *(undefined4 *)(((int)param_1 - (int)param_2) + (int)puVar2) = *puVar2;
    puVar1 = puVar1 + 3;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined1 *)((int)param_1 + 0x62) = *(undefined1 *)((int)param_2 + 0x62);
  *(undefined2 *)((int)param_1 + 99) = *(undefined2 *)((int)param_2 + 99);
  *(undefined1 *)((int)param_1 + 0x65) = *(undefined1 *)((int)param_2 + 0x65);
  return;
}

