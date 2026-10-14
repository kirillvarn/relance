
char * __thiscall FUN_00585e20(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (((param_2 != -1) && (*(int *)(param_1 + 0x4d4) != 0)) &&
     (iVar3 = 0, 0 < *(int *)(*(int *)(param_1 + 0x4d4) + 4))) {
    do {
      iVar1 = FUN_00457f00(iVar3);
      if ((iVar1 == param_2) &&
         ((HardpointSummary *)**(undefined4 **)(param_1 + 0x4d4) != (HardpointSummary *)0x0)) {
        pcVar2 = HardpointSummary::get_name
                           ((HardpointSummary *)**(undefined4 **)(param_1 + 0x4d4),iVar3);
        return pcVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x4d4) + 4));
  }
  return (char *)0x0;
}

