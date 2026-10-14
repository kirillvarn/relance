
void __thiscall FUN_0043b570(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iStack_8;
  int iStack_4;
  
  uVar1 = param_2;
  *(uint *)(param_1 + 0x34) = param_2;
  if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
    (**(code **)(*DAT_0067ecd0 + 0x8c))(param_2,DAT_00673344);
  }
  param_2 = uVar1;
  iStack_8 = FUN_0052c7a0(&param_2);
  if ((iStack_8 == *(int *)(param_1 + 0x24)) || (param_2 < *(uint *)(iStack_8 + 0xc))) {
    iStack_4 = *(int *)(param_1 + 0x24);
    piVar2 = &iStack_4;
  }
  else {
    piVar2 = &iStack_8;
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
  if (*(int *)(iVar3 + 8) == 0) {
    FUN_004397a0(uVar1);
  }
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  return;
}

