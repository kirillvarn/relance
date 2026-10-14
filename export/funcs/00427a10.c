
uint FUN_00427a10(ID_String *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  uint uVar3;
  
  bVar1 = ID_String::IsEmpty(param_1);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (!bVar1) {
    piVar2 = (int *)FUN_0042ae40(param_1);
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00427a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0xc))();
      return uVar3;
    }
  }
  return uVar3 & 0xffffff00;
}

