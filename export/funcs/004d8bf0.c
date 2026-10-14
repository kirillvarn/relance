
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d8bf0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  float fStack_3c;
  float *pfStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  float afStack_24 [3];
  
  if ((((param_2 == 0x13) || (param_2 == 2)) || (param_2 == 3)) ||
     ((param_2 == 5 || (param_2 == 7)))) {
    afStack_24[2] = 0.0;
    afStack_24[1] = 0.0;
    afStack_24[0] = 1.4013e-45;
    uStack_28 = 0x4d8c4d;
    (**(code **)(**(int **)(param_1 + 0x3bc) + 0xa8))();
    if (param_2 == 2) {
      piVar2 = *(int **)(param_1 + 0x370);
    }
    else if (param_2 == 7) {
      piVar2 = *(int **)(param_1 + 0x374);
    }
    else {
      piVar2 = *(int **)(param_1 + 0x36c);
    }
    uStack_28 = 0;
    puStack_2c = &stack0xffffffe8;
    uStack_30 = 7;
    iStack_34 = 0x4d8c96;
    (**(code **)(*piVar2 + 0xa8))();
    if (*(int *)(param_1 + 0x3c0) != 1) {
      *(undefined4 *)(param_1 + 0x3c0) = 1;
      iStack_34 = 0;
      pfStack_38 = (float *)PTR_s_Interface_Baseside_CITY_maneuver_0061262c;
      fStack_3c = 5.60519e-45;
      (**(code **)(**(int **)(param_1 + 0x3bc) + 0xa8))();
      iStack_34 = *(int *)(param_1 + 0x3bc) + 0x80;
      pfStack_38 = (float *)0x4d8cd4;
      FUN_005a1340();
    }
    iStack_34 = 0;
    afStack_24[0] = afStack_24[0] + afStack_24[0];
    pfStack_38 = afStack_24;
    afStack_24[1] = 0.29380003;
    afStack_24[2] = -1.0;
    fStack_3c = 8.40779e-45;
    (**(code **)(**(int **)(param_1 + 0x3bc) + 0xa8))();
    if (((param_2 == 2) || (param_2 == 0x13)) || (param_2 == 7)) {
      (**(code **)(**(int **)(param_1 + 0x3c4) + 0xa8))(1,0,0);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x3c4) + 0xa8))(1,0,0);
      fStack_3c = fStack_3c - _DAT_005d69c0;
    }
    iStack_34 = 0;
    pfStack_38 = (float *)0x3e981062;
    (**(code **)(**(int **)(param_1 + 0x3c4) + 0xa8))(6,&fStack_3c,0);
    uStack_28 = 0x4d8d76;
    uVar1 = FUN_004c7b90();
    puStack_2c = (undefined1 *)(uVar1 & 0xff);
    uStack_30 = 0xc;
  }
  else {
    afStack_24[2] = 0.0;
    afStack_24[1] = 1.4013e-45;
    afStack_24[0] = 1.4013e-45;
    uStack_28 = 0x4d8c2c;
    (**(code **)(**(int **)(param_1 + 0x3bc) + 0xa8))();
    puStack_2c = (undefined1 *)0x1;
    uStack_30 = 1;
  }
  uStack_28 = 0;
  iStack_34 = 0x4d8d8c;
  (**(code **)(**(int **)(param_1 + 0x3c4) + 0xa8))();
  return;
}

