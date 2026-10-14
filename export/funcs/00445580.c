
void __thiscall FUN_00445580(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (((param_2 != (char *)0x0) && (*(char **)(param_1 + 0x364) != (char *)0x0)) &&
     (iVar1 = stricmp(param_2,*(char **)(param_1 + 0x364)), iVar1 == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x360) != 0) {
    FUN_004568d0(*(int *)(param_1 + 0x360));
    *(undefined4 *)(param_1 + 0x360) = 0;
    *(undefined1 *)(param_1 + 0x368) = 0;
    malloc_strfree((char **)(param_1 + 0x364));
  }
  malloc_strcpy((char **)(param_1 + 0x364),param_2);
  iVar1 = FUN_00445340(param_2,param_3);
  *(int *)(param_1 + 0x360) = iVar1;
  if ((*(int *)(param_1 + 0x36c) == 0) && (iVar1 != 0)) {
    FUN_00454f80();
    *(undefined1 *)(param_1 + 0x368) = 1;
  }
  return;
}

