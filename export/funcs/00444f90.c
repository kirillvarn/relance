
void __thiscall FUN_00444f90(int *param_1,int *param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float unaff_EBX;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  int local_30;
  int *piStack_2c;
  
  iVar3 = (**(code **)(*param_1 + 0x18))();
  if (iVar3 != -1) {
    (**(code **)(**(int **)Engine_exref + 0x90))(*(int **)Engine_exref,iVar3);
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  fVar8 = (float10)(**(code **)(*param_2 + 0x18))(param_2);
  fVar1 = (float)DAT_00610850;
  iVar3 = 0;
  piStack_2c = param_1 + 0x70;
  local_30 = 0;
  iVar5 = 0;
  do {
    if (0 < param_1[iVar5 + 0xd]) {
      fVar9 = DetailSwitchTable::adjust_distance
                        ((DetailSwitchTable *)param_1[iVar5 + 0x51],unaff_EBX,(float)fVar8,fVar1);
      iVar4 = -1;
      iVar3 = 0;
      if (0 < param_1[iVar5 + 0xd]) {
        pfVar6 = (float *)(param_1 + iVar5 * 0x10 + 0x11);
        do {
          if (fVar9 <= *pfVar6) {
            iVar4 = iVar3;
            if ((((iVar3 != -1) && (bVar2 = RtcSlider::is_enabled("low_character_lod"), bVar2)) &&
                (fVar10 = DetailSwitchTable::get_switch_distance
                                    ((DetailSwitchTable *)param_1[iVar5 + 0x51],100.0),
                fVar10 < fVar9)) && (iVar4 = iVar3 + 1, param_1[iVar5 + 0xd] <= iVar3 + 1)) {
              if (iVar5 == 0) {
                iVar4 = param_1[0xd] + -1;
              }
              else {
                iVar4 = -1;
              }
            }
            break;
          }
          iVar3 = iVar3 + 1;
          pfVar6 = pfVar6 + 1;
        } while (iVar3 < param_1[iVar5 + 0xd]);
      }
      iVar3 = local_30 + 1;
      *piStack_2c = iVar4;
      piStack_2c = piStack_2c + 1;
      local_30 = iVar3;
    }
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      if (iVar3 < 4) {
        piVar7 = param_1 + iVar3 + 0x70;
        for (iVar5 = 4 - iVar3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar7 = -1;
          piVar7 = piVar7 + 1;
        }
      }
      return;
    }
  } while( true );
}

