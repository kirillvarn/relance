
undefined4 * __thiscall FUN_00524740(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((param_3 < *(int *)(param_1 + 0x154)) && (-1 < param_3)) {
    FUN_0054d920(param_2,param_3);
    return param_2;
  }
  piVar2 = *(int **)(param_1 + 0x188);
  while( true ) {
    if (piVar2 == *(int **)(param_1 + 0x18c)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x699,
                 "bad piece number supplied to get_piece_pos in asteroid field");
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return param_2;
    }
    iVar1 = *(int *)(*piVar2 + 0x5c);
    if ((iVar1 <= param_3) && (param_3 < iVar1 + *(int *)(*piVar2 + 0x58))) break;
    piVar2 = piVar2 + 1;
  }
  FUN_0054d920(param_2,param_3);
  return param_2;
}

