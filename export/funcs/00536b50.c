
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536b50(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  
  iVar2 = rand();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 8) - iVar3 >> 3;
  }
  iVar7 = 0;
  if (0 < iVar5) {
    pfVar6 = (float *)(iVar3 + 4);
    fVar1 = _DAT_005c7474;
    do {
      fVar1 = fVar1 + *pfVar6;
      if ((float)iVar2 * _DAT_005caeec < fVar1) {
        if (iVar7 == -1) {
          FUN_00530a10();
          return;
        }
        iVar3 = FUN_005309c0(iVar3 + iVar7 * 8);
        if (iVar3 == 0) {
          pcVar4 = ID_String::get_string((ID_String *)(*(int *)(param_1 + 4) + iVar7 * 8));
          (**(code **)FDUMP_exref)
                    (0x100002,
                     "%s(%d) : *** WARNING: Exploding: Couldn\'t find debris_type[%s]. using default."
                     ,"E:\\FL\\Scratch\\Source\\Client\\space\\explosion.cpp",0x70,pcVar4);
          FUN_00530a10();
          return;
        }
        return;
      }
      iVar7 = iVar7 + 1;
      pfVar6 = pfVar6 + 2;
    } while (iVar7 < iVar5);
  }
  FUN_00530a10();
  return;
}

