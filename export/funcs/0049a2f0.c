
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0049a2f0(int param_1,float *param_2,float *param_3,float param_4,float param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  int local_20;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  cVar11 = FUN_0049a1e0(*param_2,*param_3,param_4,param_5);
  if (cVar11 == '\0') {
    fVar7 = (float)DAT_00610850;
    local_20 = 0;
    fVar8 = (float)_DAT_005c89b8;
    fVar9 = (float)DAT_00610854;
    fVar10 = (float)_DAT_005c89b8;
    while( true ) {
      fVar1 = (fVar10 / fVar9) * (float)local_20;
      fVar2 = (float)local_20 * (fVar8 / fVar7);
      fVar3 = fVar1 + *param_3;
      cVar11 = FUN_0049a1e0(*param_2,fVar3,param_4,param_5);
      if (cVar11 != '\0') {
        local_10 = fVar1 + *param_3;
        *param_3 = local_10;
        local_14 = *param_2;
        goto LAB_0049a535;
      }
      fVar4 = *param_3 - fVar1;
      cVar11 = FUN_0049a1e0(*param_2,fVar4,param_4,param_5);
      if (cVar11 != '\0') break;
      fVar5 = fVar2 + *param_2;
      cVar11 = FUN_0049a1e0(fVar5,*param_3,param_4,param_5);
      if (cVar11 != '\0') {
        local_14 = fVar2 + *param_2;
        *param_2 = local_14;
        local_10 = *param_3;
        goto LAB_0049a535;
      }
      fVar6 = *param_2 - fVar2;
      cVar11 = FUN_0049a1e0(fVar6,*param_3,param_4,param_5);
      if (cVar11 != '\0') {
        local_14 = *param_2 - fVar2;
        *param_2 = local_14;
        local_10 = *param_3;
        goto LAB_0049a535;
      }
      cVar11 = FUN_0049a1e0(fVar5,fVar3,param_4,param_5);
      if (cVar11 != '\0') {
        fVar2 = fVar2 + *param_2;
LAB_0049a51d:
        *param_2 = fVar2;
        local_10 = fVar1 + *param_3;
        goto LAB_0049a525;
      }
      cVar11 = FUN_0049a1e0(fVar6,fVar4,param_4,param_5);
      if (cVar11 != '\0') {
        *param_2 = *param_2 - fVar2;
        break;
      }
      cVar11 = FUN_0049a1e0(fVar5,fVar4,param_4,param_5);
      if (cVar11 != '\0') {
        *param_2 = fVar2 + *param_2;
        local_10 = *param_3 - fVar1;
        goto LAB_0049a525;
      }
      cVar11 = FUN_0049a1e0(fVar6,fVar3,param_4,param_5);
      if (cVar11 != '\0') {
        fVar2 = *param_2 - fVar2;
        goto LAB_0049a51d;
      }
      local_20 = local_20 + 1;
      if (0xe < local_20) {
        return 0;
      }
    }
    local_10 = *param_3 - fVar1;
LAB_0049a525:
    *param_3 = local_10;
    local_14 = *param_2;
  }
  else {
    local_14 = *param_2;
    local_10 = *param_3;
  }
LAB_0049a535:
  local_4 = param_6;
  local_c = param_4 * _DAT_005d2ee8;
  local_8 = param_5 * _DAT_005d2ee8;
  FUN_00477510(*(undefined4 *)(param_1 + 0x870),1,&local_14);
  return 1;
}

