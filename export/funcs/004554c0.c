
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004554c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float fVar11;
  float local_34;
  undefined4 local_30 [9];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    RefreshLoadingProgress();
    iVar7 = *(int *)(param_1 + 0x28);
    bVar4 = false;
    bVar5 = false;
    if (iVar7 != 0) {
      if (iVar7 == *(int *)SpaceflightLocationID_exref) {
        FUN_00558a30();
      }
      else {
        cVar6 = FUN_0043a340(iVar7);
        if (cVar6 == '\0') {
          FUN_0043ba90(*(undefined4 *)(param_1 + 0x28),0,1);
        }
        else {
          FUN_0043bab0(*(undefined4 *)(param_1 + 0x28));
          FUN_0043ba90(*(undefined4 *)(param_1 + 0x28),0,0);
        }
      }
      FUN_00412070(0x3f800000);
      FUN_00558bf0();
      bVar5 = true;
      bVar4 = true;
    }
    if (((*(char *)(param_1 + 0xe) != '\0') && (!bVar4)) && (*(char *)(param_1 + 0x30) != '\0')) {
      (**(code **)(**(int **)Deform_exref + 0x4c))
                (*(int **)Deform_exref,*(undefined4 *)(param_1 + 0x68),param_1 + 0x34);
      (**(code **)(**(int **)Deform_exref + 0x50))
                (*(int **)Deform_exref,*(undefined4 *)(param_1 + 0x68),param_1 + 0x40);
      (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))(*(undefined4 *)(param_1 + 100));
    }
    if ((*(char *)(param_1 + 6) != '\0') && (!bVar4)) {
      FUN_0041a0f0(0,0x40400000);
      FUN_005592a0();
      FUN_0041dda0(1);
      FUN_0044ad70();
    }
    if ((*(char *)(param_1 + 10) == '\0') || (bVar4)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((*(char *)(param_1 + 0xb) == '\0') || (bVar4)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar3) {
      if (*(char *)(param_1 + 0xc) == '\0') {
        FUN_00428d00(3,0,0x501502f9);
        FUN_00428be0(0,&local_34,0);
        _DAT_0066d2e8 = 0;
        if (local_34 <= (float)_DAT_005c8ba8) {
          _DAT_0066d2ec = 1e+06;
        }
        else {
          _DAT_0066d2ec = ABS(-_DAT_0066d2e0) / local_34;
        }
      }
      else {
        FUN_00428d00(3,0,_DAT_005ce060);
        _DAT_0066d2ec = _DAT_005ce060;
        _DAT_0066d2e8 = 0;
      }
    }
    if (bVar4) {
      fVar11 = _DAT_005ce060;
      if (*(char *)(param_1 + 0xc) == '\0') {
        fVar11 = 1e+10;
      }
      FUN_00428c50(3,0,fVar11);
    }
    if ((*(char *)(param_1 + 9) != '\0') && (!bVar5)) {
      uVar1 = *(undefined4 *)(param_1 + 0x70);
      uVar2 = *(undefined4 *)(param_1 + 0x78);
      puVar9 = (undefined4 *)(param_1 + 0x7c);
      puVar10 = local_30;
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_8 = *(undefined4 *)(param_1 + 0x74);
      local_c = uVar1;
      local_4 = uVar2;
      FUN_00556cd0(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x500),local_30);
      FUN_00556ce0(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x500),*(undefined4 *)(param_1 + 0xa0)
                  );
      FUN_00556e00(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x500),*(undefined4 *)(param_1 + 0xa4)
                  );
      FUN_00556f10(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x500),*(undefined4 *)(param_1 + 0xa8)
                  );
    }
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0xbc)) {
      iVar8 = 0;
      do {
        uVar1 = *(undefined4 *)(iVar8 + 4 + *(int *)(param_1 + 0xb4));
        FUN_0044fb80(uVar1,0);
        FUN_0044fa90(uVar1,0);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x40;
      } while (iVar7 < *(int *)(param_1 + 0xbc));
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
    if (*(int *)(param_1 + 0x24) != 0) {
      (**(code **)(*DAT_0067ecd0 + 0x114))(DAT_00673344,*(int *)(param_1 + 0x24));
    }
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))
                (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),param_2);
    }
  }
  return;
}

