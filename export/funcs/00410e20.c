
/* WARNING: Removing unreachable block (ram,0x00410e42) */
/* WARNING: Removing unreachable block (ram,0x00410e59) */
/* WARNING: Removing unreachable block (ram,0x00410e51) */
/* WARNING: Removing unreachable block (ram,0x00410e5c) */

void __fastcall FUN_00410e20(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  *(byte *)(param_1 + 0xb4) = bVar1 & 0xf7;
  if ((bVar1 & 0x10) != 0) {
    *(byte *)(param_1 + 0xb4) = bVar1 & 0xe7;
    if (*(int *)(param_1 + 8) == 0) {
      DAT_006164e0 = *(undefined4 *)(param_1 + 4);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
    }
    if (*(int *)(param_1 + 4) == 0) {
      DAT_006164e4 = *(undefined4 *)(param_1 + 8);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
    }
    DAT_006164e8 = DAT_006164e8 + -1;
    (**(code **)(**(int **)Pipeline_exref + 0xa4))(*(int **)Pipeline_exref,param_1 + 0xc,0);
  }
  return;
}

