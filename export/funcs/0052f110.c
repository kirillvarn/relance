
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052f110(int *param_1)

{
  CEThruster *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBP;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  float local_28;
  int local_24;
  float local_18;
  float local_14;
  float local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((char)param_1[0x11] == '\0') {
    if (param_1[0x12] != 0) goto LAB_0052f13c;
    iVar3 = param_1[0x13];
  }
  else {
    if (param_1[0x13] != 0) goto LAB_0052f13c;
    iVar3 = param_1[0x12];
  }
  if (iVar3 == 0) {
    return;
  }
LAB_0052f13c:
  piVar4 = *(int **)(param_1[0xc] + 0xb8);
  piVar5 = (int *)*piVar4;
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0.0;
  local_28 = 0.0;
  local_24 = 0;
  if (piVar5 != piVar4) {
    do {
      this = *(CEThruster **)(piVar5[2] + 4);
      if (((*(int *)(this + 0x14) == 0x400) &&
          (cVar1 = (**(code **)(*(int *)this + 0xc))(), cVar1 != '\0')) &&
         (bVar2 = CEThruster::CouldThrust(this), bVar2)) {
        fVar7 = CEThruster::GetThrust(this);
        (**(code **)(*(int *)this + 0x48))(&fStack_c,0);
        local_18 = fStack_c + local_18;
        local_24 = local_24 + 1;
        local_14 = local_14 + fStack_8;
        local_10 = local_10 + fStack_4;
        local_28 = fVar7 + local_28;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != piVar4);
    if ((local_24 != 0) && (_DAT_005c7474 < local_28)) {
      fVar7 = _DAT_005c75dc / (float)local_24;
      param_1[0xd] = (int)(local_18 * fVar7);
      param_1[0xe] = (int)(local_14 * fVar7);
      param_1[0xf] = (int)(local_10 * fVar7);
      cVar1 = (**(code **)(*param_1 + 0x14))(param_1);
      if (cVar1 == '\0') {
        if ((char)param_1[0x11] == '\0') {
          iVar3 = param_1[0x12];
          if (iVar3 == 0) {
            iVar3 = param_1[0x13];
          }
        }
        else {
          iVar3 = param_1[0x13];
          if (iVar3 == 0) {
            iVar3 = param_1[0x12];
          }
        }
        (**(code **)(*param_1 + 0x58))(iVar3,0);
      }
      if (*(float *)MIN_VOLUME_FORCE_exref <= unaff_EBP) {
        if (unaff_EBP <= *(float *)MAX_VOLUME_FORCE_exref) {
          fVar6 = ((float10)unaff_EBP - (float10)*(float *)MIN_VOLUME_FORCE_exref) /
                  ((float10)*(float *)MAX_VOLUME_FORCE_exref -
                  (float10)*(float *)MIN_VOLUME_FORCE_exref);
        }
        else {
          fVar6 = (float10)_DAT_005c75dc;
        }
      }
      else {
        fVar6 = (float10)_DAT_005c7474;
      }
      fVar6 = (float10)log2(fVar6 * (float10)_DAT_005d7e50 + (float10)_DAT_005cf100);
      (**(code **)(*param_1 + 0x80))
                ((float)((float10)0.3010299956639812 * fVar6 * (float10)_DAT_005c9ce8));
      iVar3 = (**(code **)(*(int *)param_1[0xc] + 0x20))();
      if ((iVar3 == DAT_00673378) && (cVar1 = FUN_0054bc80(), cVar1 != '\0')) {
        if ((char)param_1[0x11] == '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0x11) = 0;
        if (param_1[0x12] == 0) {
          piVar4 = (int *)FUN_0042ae40(INTERIOR_SOUND_NAME_exref);
          param_1[0x12] = (int)piVar4;
          (**(code **)(*piVar4 + 0xc))();
        }
        (**(code **)(*param_1 + 0x60))();
        return;
      }
      if ((char)param_1[0x11] == '\x01') {
        return;
      }
      if ((char)param_1[0x11] == '\0') {
        *(undefined1 *)(param_1 + 0x11) = 1;
        (**(code **)(*param_1 + 0x60))();
        return;
      }
      *(undefined1 *)(param_1 + 0x11) = 0;
      if (param_1[0x12] == 0) {
        piVar4 = (int *)FUN_0042ae40(INTERIOR_SOUND_NAME_exref);
        param_1[0x12] = (int)piVar4;
        (**(code **)(*piVar4 + 0xc))();
      }
      (**(code **)(*param_1 + 0x60))();
      return;
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x60))();
  }
  return;
}

