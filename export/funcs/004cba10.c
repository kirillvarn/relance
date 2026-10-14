
void __fastcall FUN_004cba10(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  if (*param_1 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x48))(*(int **)Deform_exref,*param_1,&local_4);
  }
  puVar1 = (undefined4 *)(**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,local_4)
  ;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *local_4 = *puVar1;
    puVar1 = puVar1 + 1;
    local_4 = local_4 + 1;
  }
  return;
}

