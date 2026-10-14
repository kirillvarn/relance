
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00491be0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  ISystem *pIVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint *puVar7;
  IBase *pIVar8;
  uint uVar9;
  undefined4 uVar10;
  float10 fVar11;
  float10 fVar12;
  float local_c [3];
  
  if (*(int *)(param_1 + 2000) == 0) {
    local_c[0] = 0.0;
    *param_2 = 0.0;
    local_c[1] = 0.0;
    param_2[1] = 0.0;
    local_c[2] = 0.0;
    param_2[2] = 0.0;
    *param_3 = 0.0;
    pIVar3 = Universe::GetFirstSystem();
    if (pIVar3 != (ISystem *)0x0) {
      do {
        iVar4 = (*(code *)**(undefined4 **)pIVar3)();
        iVar5 = FUN_004c4830();
        if (iVar4 == iVar5) {
          pfVar6 = (float *)(**(code **)(*(int *)pIVar3 + 0x44))();
          *param_2 = *pfVar6;
          param_2[1] = pfVar6[1];
          param_2[2] = pfVar6[2];
          fVar1 = param_2[1] * _DAT_005d3d34;
          param_2[1] = 0.0;
          param_2[2] = fVar1 - _DAT_005d3d28;
          *param_2 = *param_2 * _DAT_005d3d34 - _DAT_005d3d28;
          param_2[2] = param_2[2] + _DAT_005d3d24;
          return;
        }
        pIVar3 = Universe::GetNextSystem();
      } while (pIVar3 != (ISystem *)0x0);
      return;
    }
  }
  else {
    pfVar6 = (float *)FUN_004c4a20();
    *param_2 = *pfVar6;
    param_2[1] = pfVar6[1];
    param_2[2] = pfVar6[2];
    *param_3 = 0.0;
    cVar2 = FUN_004c4810();
    if (cVar2 == '\0') {
      iVar4 = FUN_004c4a50();
      local_c[0] = *(float *)(iVar4 + 8);
      local_c[2] = *(float *)(iVar4 + 0x20);
      fVar1 = _DAT_005c75dc / SQRT(local_c[0] * local_c[0] + local_c[2] * local_c[2]);
      local_c[0] = local_c[0] * fVar1;
      local_c[2] = local_c[2] * fVar1;
      fVar11 = (float10)FUN_0053eb10(local_c[0],local_c[2]);
      fVar12 = -fVar11 * (float10)_DAT_005d3d38;
      fVar11 = (float10)_DAT_005c7474;
      *param_3 = (float)fVar12;
      if (fVar12 < fVar11) {
        do {
          fVar12 = fVar12 + (float10)_DAT_005ca23c;
        } while (fVar12 < (float10)_DAT_005c7474);
        *param_3 = (float)fVar12;
      }
      fVar1 = *param_3;
      if (_DAT_005ca23c <= fVar1) {
        do {
          fVar1 = fVar1 - _DAT_005ca23c;
        } while (_DAT_005ca23c <= fVar1);
        *param_3 = fVar1;
      }
    }
    else {
      puVar7 = (uint *)FUN_004c4900();
      pIVar8 = Universe::get_base(*puVar7);
      if (pIVar8 != (IBase *)0x0) {
        uVar9 = FUN_004c4830();
        pIVar3 = Universe::get_system(uVar9);
        uVar10 = (*(code *)**(undefined4 **)pIVar8)(pIVar3);
        pfVar6 = (float *)FUN_00491e10(local_c,uVar10,pIVar3);
        *param_2 = *pfVar6;
        param_2[1] = pfVar6[1];
        param_2[2] = pfVar6[2];
      }
    }
    fVar1 = *(float *)(param_1 + 0xf48);
    *param_2 = fVar1 * *param_2;
    param_2[1] = fVar1 * param_2[1];
    param_2[2] = fVar1 * param_2[2];
  }
  return;
}

