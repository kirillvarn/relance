
void __thiscall FUN_0043a6c0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  iVar1 = param_2;
  param_2 = *(uint *)(param_2 + 4);
  local_8 = FUN_0052c7a0(&param_2);
  if ((local_8 == *(int *)(param_1 + 0x24)) || (param_2 < *(uint *)(local_8 + 0xc))) {
    local_4 = *(int *)(param_1 + 0x24);
    piVar2 = &local_4;
  }
  else {
    piVar2 = &local_8;
  }
  if (*piVar2 == *(int *)(param_1 + 0x24)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find base id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,param_2);
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*piVar2 + 0x10);
  }
  if (*(int *)(iVar3 + 4) != 0) {
    FUN_0043c3f0(iVar1);
  }
  return;
}

