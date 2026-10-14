
void __thiscall
FUN_0058a110(int param_1,int param_2,undefined4 *param_3,char *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined1 param_11)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  
  *(undefined1 *)(param_1 + 0x378) = param_11;
  if (param_2 != 0) {
    iVar3 = FUN_004177b0(param_2);
    if ((iVar3 != 0) && (iVar2 = *(int *)(param_1 + 0x334), *(int *)(iVar2 + 0x1c) != iVar3)) {
      *(int *)(iVar2 + 0x1c) = iVar3;
      for (uVar6 = 0;
          (iVar3 = *(int *)(iVar2 + 0x10), iVar3 != 0 &&
          (uVar6 < (uint)(*(int *)(iVar2 + 0x14) - iVar3 >> 3))); uVar6 = uVar6 + 1) {
        (**(code **)(**(int **)(iVar3 + uVar6 * 8) + 8))(*(undefined4 *)(iVar2 + 0x1c));
      }
      *(undefined4 *)(iVar2 + 0x28) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xa8) = *param_3;
  *(undefined4 *)(param_1 + 0xac) = param_3[1];
  *(undefined4 *)(param_1 + 0xb0) = param_3[2];
  if (param_4 != (char *)0x0) {
    pcVar4 = param_4;
    do {
      cVar1 = *pcVar4;
      pcVar4[(param_1 - (int)param_4) + 0x1d0] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)(param_1 + 0x318) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x308) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2f8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x314) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x324) = 0;
    *(undefined4 *)(param_1 + 800) = 0;
    *(undefined4 *)(param_1 + 0x31c) = 0;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 4) + 8))();
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x90))(param_4,(undefined4 *)(param_1 + 0x2f8));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x330) = param_6;
  *(undefined4 *)(param_1 + 0x32c) = param_5;
  FUN_0058a5f0(param_8);
  *(undefined4 *)(param_1 + 0x358) = param_9;
  *(undefined4 *)(param_1 + 0x344) = param_10;
  return;
}

