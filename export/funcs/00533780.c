
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00533780(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((((param_1 == (int *)0x0) || (param_1 == (int *)0xfffffff4)) ||
      (iVar3 = param_1[4], iVar3 == 0)) || ((*(uint *)(iVar3 + 0x4c) & 0x103) != 0x103)) {
    iVar3 = 0;
  }
  fVar1 = *(float *)(iVar3 + 0x140);
  if (fVar1 <= _DAT_005c7474) {
    if ((char)param_1[0x38] != '\0') {
      *(undefined1 *)(param_1 + 0x38) = 0;
      iVar3 = (**(code **)(*param_1 + 0x1c))();
      if (iVar3 != -1) {
        FUN_00532170(iVar3);
      }
    }
  }
  else {
    fVar2 = (float)_DAT_005c89b8;
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar4 = (**(code **)(*param_1 + 0x1c))();
    FUN_00533880(uVar4,fVar2 - fVar1);
    if (((param_1 != (int *)0xfffffff4) && (iVar3 = param_1[4], iVar3 != 0)) &&
       (((*(uint *)(iVar3 + 0x4c) & 0x103) == 0x103 &&
        ((*(int *)(iVar3 + 0x88) != 0 && (*(char *)(*(int *)(iVar3 + 0x88) + 0x80) == '\0')))))) {
      FUN_00533930(3,&param_6);
    }
  }
  FUN_00539980(param_2,param_3,param_4,param_5,param_6);
  return param_2;
}

