
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005247f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  if ((param_2 < *(int *)(param_1 + 0x154)) && (-1 < param_2)) {
    fVar3 = (float10)FUN_0054d950();
    return fVar3;
  }
  piVar2 = *(int **)(param_1 + 0x188);
  while( true ) {
    if (piVar2 == *(int **)(param_1 + 0x18c)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x6ad,
                 "bad piece number supplied to get_piece_radius in asteroid field");
      return (float10)_DAT_005c75dc;
    }
    iVar1 = *(int *)(*piVar2 + 0x5c);
    if ((iVar1 <= param_2) && (param_2 < iVar1 + *(int *)(*piVar2 + 0x58))) break;
    piVar2 = piVar2 + 1;
  }
  fVar3 = (float10)FUN_0054d950();
  return fVar3;
}

