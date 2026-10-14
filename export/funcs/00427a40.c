
void FUN_00427a40(ID_String *param_1)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = ID_String::IsEmpty(param_1);
  if (!bVar1) {
    piVar2 = (int *)FUN_0042ae40(param_1);
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00427a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x10))();
      return;
    }
  }
  return;
}

