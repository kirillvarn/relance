
int __thiscall FUN_00590040(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = param_2;
  if (param_3 != iVar1) {
    iVar2 = param_3 - param_2;
    do {
      FUN_00591150(param_3);
      FUN_00591150(iVar3 + 0xc + iVar2);
      *(undefined1 *)(iVar3 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0x1c;
      iVar3 = iVar3 + 0x1c;
    } while (param_3 != iVar1);
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar3;
  if (iVar3 == iVar1) {
    *(int *)(param_1 + 8) = iVar3;
    return param_2;
  }
  do {
    FUN_0058e360();
    iVar2 = iVar2 + 0x1c;
  } while (iVar2 != iVar1);
  *(int *)(param_1 + 8) = iVar3;
  return param_2;
}

