
undefined4 __thiscall FUN_0055bc30(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 0xc:
    *(byte *)(param_1 + 0x330) =
         ((param_3 != (undefined4 *)0x0) << 6 ^ *(byte *)(param_1 + 0x330)) & 0x40 ^
         *(byte *)(param_1 + 0x330);
    return 0;
  default:
    uVar2 = FUN_005a13c0();
    return uVar2;
  case 0x2c:
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 2;
    return 0;
  case 0x2d:
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfd;
    return 0;
  case 0x2e:
    *param_3 = *(undefined4 *)(param_1 + 0x34c);
    return 0;
  case 0x32:
    *(byte *)(param_1 + 0x331) =
         (param_3 != (undefined4 *)0x0 ^ *(byte *)(param_1 + 0x331)) & 1 ^
         *(byte *)(param_1 + 0x331);
    break;
  case 0x33:
    *(undefined4 *)(param_1 + 0x370) = *param_3;
    *(bool *)(param_1 + 0x336) = param_4 == 1;
    return 0;
  case 0x34:
    bVar1 = *(byte *)(param_1 + 0x331) & 0xef;
    *(byte *)(param_1 + 0x331) = bVar1;
    if (param_3 != (undefined4 *)0x0) {
      *(byte *)(param_1 + 0x331) = bVar1 | 0x10;
      return 0;
    }
    break;
  case 0x35:
    *(undefined1 *)(param_1 + 0x337) = 0;
    if (param_3 != (undefined4 *)0x0) {
      *(undefined1 *)(param_1 + 0x337) = 1;
      return 0;
    }
    break;
  case 0x36:
    *(undefined1 *)(param_1 + 0x332) = 0;
    if (param_3 == (undefined4 *)0x1) {
      *(undefined1 *)(param_1 + 0x332) = 1;
      return 0;
    }
    break;
  case 0x51:
    *(undefined1 *)(param_1 + 0x333) = 0;
    if (param_3 != (undefined4 *)0x0) {
      *(undefined1 *)(param_1 + 0x333) = 1;
      return 0;
    }
  }
  return 0;
}

