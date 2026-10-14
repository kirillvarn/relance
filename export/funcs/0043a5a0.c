
void __thiscall FUN_0043a5a0(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  local_8 = FUN_0052c7a0(&param_2);
  if ((local_8 == *(int *)(param_1 + 0x24)) || (param_2 < *(uint *)(local_8 + 0xc))) {
    local_4 = *(int *)(param_1 + 0x24);
    piVar1 = &local_4;
  }
  else {
    piVar1 = &local_8;
  }
  if (*piVar1 == *(int *)(param_1 + 0x24)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find base id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,param_2);
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*piVar1 + 0x10);
  }
  if (*(int *)(iVar2 + 4) != 0) {
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x48) = param_3;
  }
  return;
}

