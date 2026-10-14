
int __thiscall FUN_00425640(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_14 [20];
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x58))
              (*(int **)TextureLib_exref,iVar1,param_2,local_14);
    return iVar1;
  }
  return 0;
}

