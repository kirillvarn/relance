
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004021b0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float unaff_EBX;
  int iVar3;
  int *piVar4;
  
  fVar1 = _DAT_005c7500;
  if ((param_3 != (float *)0x0) && (param_3 != param_1)) {
    for (; param_1 != (float *)0x0; param_1 = (float *)param_1[0xc]) {
      iVar3 = 0;
      pfVar2 = param_3;
      do {
        if (*pfVar2 < _DAT_005c7474) break;
        *(float *)(((int)param_1 - (int)param_3) + (int)pfVar2) = *pfVar2;
        iVar3 = iVar3 + 1;
        pfVar2 = pfVar2 + 1;
      } while (iVar3 < 8);
      param_1[iVar3] = -1.0;
    }
  }
  if (param_2 != -1) {
    piVar4 = *(int **)Engine_exref;
    iVar3 = (**(code **)(*piVar4 + 0x4c))(piVar4,param_2);
    if (iVar3 != 0) {
      (**(code **)(**(int **)Engine_exref + 0x54))
                (*(int **)Engine_exref,param_2,FUN_00401ed0,&stack0xffffffe4);
      return (float10)(float)piVar4;
    }
    FUN_00401ed0(0xffffffff,param_2,0,&stack0xffffffe4);
    fVar1 = unaff_EBX;
  }
  return (float10)fVar1;
}

