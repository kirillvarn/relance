
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e50d0(int param_1)

{
  float *pfVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  double dVar7;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if ((*(char *)(param_1 + 0x594) == '\0') || (*(int *)(param_1 + 0x58c) == 0)) {
    *(undefined1 *)(param_1 + 0x5b4) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x5b4) != '\0') {
    *(undefined1 *)(param_1 + 0x5b4) = 0;
    FUN_004e4f70();
    FUN_004e4f70();
    *(undefined4 *)(param_1 + 0x5b0) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
  }
  fVar6 = (float10)FUN_0042d680();
  *(float *)(param_1 + 0x5b0) = (float)(fVar6 + (float10)*(float *)(param_1 + 0x5b0));
  while (_DAT_005d3e08 <= *(float *)(param_1 + 0x5b0)) {
    *(float *)(param_1 + 0x5b0) = *(float *)(param_1 + 0x5b0) - _DAT_005d3e08;
    *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x5a4);
    *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_1 + 0x5a8);
    *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_1 + 0x5ac);
    FUN_004e4f70();
  }
  local_28 = *(float *)(param_1 + 0x5b0) * _DAT_005d8d44;
  FUN_00422b80(*(float *)(param_1 + 0x5a4) - *(float *)(param_1 + 0x598),
               *(float *)(param_1 + 0x5a8) - *(float *)(param_1 + 0x59c),
               *(float *)(param_1 + 0x5ac) - *(float *)(param_1 + 0x5a0));
  local_14 = local_8 * local_28 + *(float *)(param_1 + 0x59c);
  dVar7 = floor((double)(local_c * local_28 + *(float *)(param_1 + 0x598) + _DAT_005d1910));
  local_18 = (float)dVar7;
  dVar7 = floor((double)(local_14 + _DAT_005d1910));
  local_14 = (float)dVar7;
  FUN_00421ed0(0xde1);
  FUN_00421ed0(0xb71);
  FUN_004227d0(param_1 + 0x3b8);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(5,6);
  local_30 = 0xff;
  local_2f = 0;
  local_2e = 0;
  local_2d = 0x80;
  FUN_00421ba0(&local_30);
  FUN_00421670(2);
  local_24 = (float)((*(int *)(param_1 + 0x470) - *(int *)(param_1 + 0x468)) + 1);
  local_20 = (float)((*(int *)(param_1 + 0x46c) - *(int *)(param_1 + 0x464)) + 1);
  FUN_00421cc0(local_18,0,0);
  FUN_00421cc0(local_18,local_24,0);
  FUN_00421cc0(0,local_14,0);
  FUN_00421cc0(local_20,local_14,0);
  local_2c = (int)(0x80 / (longlong)(*(int *)(param_1 + 0x630) + 1));
  iVar3 = *(int *)(param_1 + 0x630) + -1;
  local_28 = 128.0;
  local_1c = (float)local_2c;
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)(param_1 + 0x5bc + iVar3 * 0xc);
    do {
      local_28 = local_28 - local_1c;
      local_2c = CONCAT13(local_2c._3_1_,0xff);
      uVar2 = ftol();
      local_2c = CONCAT13(uVar2,(undefined3)local_2c);
      FUN_00421ba0();
      if ((-1 < iVar3) && (iVar3 < 10)) {
        FUN_00421cc0(puVar4[-1],0,0);
        FUN_00421cc0(puVar4[-1],local_24);
        FUN_00421cc0(0,*puVar4);
        FUN_00421cc0(local_20,*puVar4);
      }
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -3;
    } while (-1 < iVar3);
  }
  FUN_00421690();
  if (*(int *)(param_1 + 0x630) < 10) {
    pfVar1 = (float *)(param_1 + (*(int *)(param_1 + 0x630) * 3 + 0x16e) * 4);
    *pfVar1 = local_18;
    pfVar1[1] = local_14;
    pfVar1[2] = local_10;
    *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
    return;
  }
  puVar4 = (undefined4 *)(param_1 + 0x5c4);
  puVar5 = (undefined4 *)(param_1 + 0x5b8);
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(float *)(param_1 + 0x624) = local_18;
  *(float *)(param_1 + 0x628) = local_14;
  *(float *)(param_1 + 0x62c) = local_10;
  return;
}

