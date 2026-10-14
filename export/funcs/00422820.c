
void FUN_00422820(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  float local_10 [4];
  
  if (DAT_00610844 == '\0') {
    (**(code **)(**(int **)Pipeline_exref + 0x94))
              (*(int **)Pipeline_exref,param_1,param_2,param_3,param_4);
    return;
  }
  local_10[0] = param_1;
  local_10[3] = (float)param_4;
  local_10[2] = (float)param_3;
  bVar2 = DAT_0066490c != 1;
  local_10[1] = (float)param_2;
  iVar1 = 0;
  do {
    if ((bVar2) || (*(float *)((int)&DAT_00664910 + iVar1) != *(float *)((int)local_10 + iVar1))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    *(undefined4 *)((int)&DAT_00664910 + iVar1) = *(undefined4 *)((int)local_10 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x10);
  if (bVar2) {
    DAT_00664990 = DAT_00664990 + 1;
    DAT_0066490c = 1;
    (**(code **)(**(int **)Pipeline_exref + 0x94))
              (*(int **)Pipeline_exref,param_1,param_2,param_3,param_4);
    return;
  }
  DAT_0066498c = DAT_0066498c + 1;
  return;
}

