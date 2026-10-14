
undefined4 * __thiscall FUN_00555e30(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_005e1218;
  FUN_00558de0(param_1);
  piVar1 = (int *)*DAT_0067999c;
  do {
    if (piVar1 == DAT_0067999c) {
LAB_00555e80:
      if ((param_2 & 1) != 0) {
        FUN_005b7e1d(param_1);
      }
      return param_1;
    }
    if ((undefined4 *)piVar1[2] == param_1) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      FUN_005b7e1d(piVar1);
      DAT_006799a0 = DAT_006799a0 + -1;
      goto LAB_00555e80;
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

