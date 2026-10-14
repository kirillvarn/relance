
int __fastcall FUN_004ca480(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar1 = *param_1;
  iVar2 = -1;
  local_4 = 0xffffffff;
  if (iVar1 != 0) {
    iVar2 = iVar1;
    (**(code **)(**(int **)Deform_exref + 0x48))(*(int **)Deform_exref,iVar1,&local_4);
  }
  return iVar2;
}

