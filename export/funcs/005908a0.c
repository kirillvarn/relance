
undefined4 * __thiscall FUN_005908a0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar3 = param_2;
  if (param_3 != puVar2) {
    puVar4 = param_2 + 6;
    puVar5 = param_3 + 0xb;
    do {
      *puVar3 = puVar5[-0xb];
      puVar4[-5] = puVar5[-10];
      FUN_00413df0(puVar5[-9],0xffffffff);
      FUN_00413df0(puVar5[-7],0xffffffff);
      *puVar4 = *(undefined4 *)((int)puVar4 + ((int)param_3 - (int)param_2));
      FUN_00591230(puVar5 + -4);
      puVar4[5] = *puVar5;
      puVar4[6] = puVar5[1];
      puVar4[7] = puVar5[2];
      puVar4[8] = puVar5[3];
      puVar4[9] = puVar5[4];
      *(undefined1 *)(puVar4 + 10) = *(undefined1 *)(puVar5 + 5);
      puVar4[0xb] = puVar5[6];
      puVar4[0xc] = puVar5[7];
      puVar4[0xd] = puVar5[8];
      puVar4[0xe] = puVar5[9];
      puVar4[0xf] = puVar5[10];
      puVar4[0x10] = puVar5[0xb];
      puVar4[0x11] = puVar5[0xc];
      *(undefined1 *)(puVar4 + 0x12) = *(undefined1 *)(puVar5 + 0xd);
      puVar1 = puVar5 + 0xe;
      puVar3 = puVar3 + 0x19;
      puVar4 = puVar4 + 0x19;
      puVar5 = puVar5 + 0x19;
    } while (puVar1 != puVar2);
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar4 = puVar3;
  if (puVar3 == puVar2) {
    *(undefined4 **)(param_1 + 8) = puVar3;
    return param_2;
  }
  do {
    FUN_00444ee0();
    puVar4 = puVar4 + 0x19;
  } while (puVar4 != puVar2);
  *(undefined4 **)(param_1 + 8) = puVar3;
  return param_2;
}

