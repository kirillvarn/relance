
uint __thiscall FUN_004d9ca0(undefined4 *param_1,char *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  uint in_EAX;
  uint uVar2;
  
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      in_EAX = 0;
      if (((char *)*param_1 != (char *)0x0) &&
         (in_EAX = stricmp(param_2,(char *)*param_1), in_EAX == 0)) {
        uVar1 = param_1[1];
        *param_3 = uVar1;
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 2;
    } while (uVar2 < param_4);
  }
  return in_EAX & 0xffffff00;
}

