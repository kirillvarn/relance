
undefined4 __thiscall FUN_004db1c0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_2 == 0x26) {
    if (param_3 == *(int *)(param_1 + 0x548)) {
      (**(code **)(*(int *)(param_1 + -0x38) + 0x30))();
      return 1;
    }
    uVar4 = 0;
    piVar2 = (int *)(param_1 + 0x4f8);
    do {
      if (((param_3 == piVar2[-10]) || (param_3 == *piVar2)) || (param_3 == piVar2[10])) {
        if ((*(int *)(param_1 + 0x558) != 0) &&
           (uVar4 < (uint)((*(int *)(param_1 + 0x55c) - *(int *)(param_1 + 0x558)) / 0x24))) {
          FUN_004db930(*(undefined2 *)
                        (*(int *)(param_1 + 0x558) + (*(int *)(param_1 + 0x590) + uVar4) * 0x24));
          goto LAB_004db290;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar4 < 10);
  }
  else if (((param_2 == 0x3e) && (cVar1 = FUN_0045a740(), cVar1 == '\0')) &&
          (param_3 == *(int *)(param_1 + 0x58c))) {
    *(undefined4 *)(param_1 + 0x590) = param_4;
LAB_004db290:
    *(undefined4 *)(param_1 + 0x550) = DAT_005d8484;
  }
  uVar3 = FUN_004e7950(param_2,param_3,param_4);
  return uVar3;
}

