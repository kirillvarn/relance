
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005552e0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 local_c [12];
  
  piVar3 = (int *)FUN_005553b0(param_1,&param_1,0);
  if (piVar3 == (int *)0x0) {
    *param_2 = DAT_006140b4;
    param_2[1] = DAT_006140b5;
    param_2[2] = DAT_006140b6;
    return;
  }
  if (_DAT_005c75dc <= (float)param_1) {
    (**(code **)(*piVar3 + 0x34))(local_c);
    uVar2 = ftol();
    puVar1 = param_1;
    *param_1 = uVar2;
    uVar2 = ftol();
    puVar1[1] = uVar2;
    uVar2 = ftol();
    puVar1[2] = uVar2;
    return;
  }
  *param_2 = DAT_006140b4;
  param_2[1] = DAT_006140b5;
  param_2[2] = DAT_006140b6;
  return;
}

