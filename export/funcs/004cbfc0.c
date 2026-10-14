
undefined4 __thiscall FUN_004cbfc0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 local_18;
  byte local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_4 = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x1c);
  local_14 = local_14 & 0xf8 ^ (*(byte *)(param_1 + 0x15) & 1) << 2;
  piVar1 = (int *)(param_2 + 0xc);
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  cVar2 = FUN_00428680(*(undefined4 *)(param_2 + 4),&local_18,piVar1,0);
  if (cVar2 != '\0') {
    *(undefined4 *)(*piVar1 + 4) = 2;
    (**(code **)(*(int *)*piVar1 + 0x80))(*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x1c));
    return 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0x40400000;
  return 1;
}

