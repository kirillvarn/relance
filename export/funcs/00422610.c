
void FUN_00422610(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    DAT_00664994 = 0;
    iVar2 = 0;
    DAT_006649a0 = DAT_00610854;
    DAT_0066499c = DAT_00610850;
  }
  else {
    piVar1 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
    DAT_00664994 = *piVar1;
    iVar2 = piVar1[1];
    DAT_006649a0 = (piVar1[3] - iVar2) + 1;
    DAT_0066499c = (piVar1[2] - DAT_00664994) + 1;
  }
  DAT_00664998 = (DAT_00610854 - DAT_006649a0) - iVar2;
  (**(code **)(**(int **)Pipeline_exref + 0x54))
            (*(int **)Pipeline_exref,DAT_00664994,(DAT_00610854 - DAT_00664998) - DAT_006649a0,
             DAT_0066499c,DAT_006649a0);
  return;
}

