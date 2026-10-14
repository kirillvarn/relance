
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004fda00(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 local_1c [16];
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  
  *(float *)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  iVar5 = rand();
  iVar2 = *(int *)(param_1 + 0x6c);
  param_2 = ((float)iVar5 * _DAT_005caeec * (float)_DAT_005da4c0 + (float)_DAT_005da4b8) *
            *(float *)(iVar2 + 0x80);
  if (_DAT_005c7474 < param_2) {
    fVar3 = _DAT_005c75dc / param_2;
    *(float *)(param_1 + 0x74) = fVar3;
    fVar1 = param_2;
    if (*(float *)(iVar2 + 0x84) <= param_2) {
      fVar1 = *(float *)(iVar2 + 0x84);
    }
    *(float *)(param_1 + 0x70) = fVar3 * fVar1;
  }
  param_2 = (float)rand();
  fVar1 = (float)(int)param_2 * _DAT_005caeec;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  puVar7 = (undefined4 *)0x0;
  *(float *)(param_1 + 0x78) = fVar1;
  FUN_004205c0("shine");
  cVar4 = FUN_00420690(local_1c);
  if (cVar4 == '\0') {
    piVar6 = (int *)FUN_004206c0(&param_2,local_1c);
    DAT_00674f38 = *piVar6;
  }
  if ((DAT_00674f38 == DAT_00674f28) ||
     (puVar7 = (undefined4 *)(DAT_00674f38 + 0x28), puVar7 == (undefined4 *)0x0)) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
               "cmn\\ShapeDB.h",0xf2,"shine");
  }
  (**(code **)(**(int **)TextureLib_exref + 0x58))
            (*(int **)TextureLib_exref,*puVar7,0,param_1 + 0x84);
  if (_DAT_005c7474 < *(float *)(*(int *)(param_1 + 0x6c) + 0x88)) {
    if (*(float *)(param_1 + 0x74) != _DAT_005c7474) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\FlashLight.cpp",0x8d,
                 "CliEquipLight: real light sources so no longer blink");
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      piVar6 = (int *)FUN_00537a90(0x130);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        FUN_005374e0();
        piVar6[0x4b] = param_1;
        *piVar6 = (int)&PTR_FUN_005da424;
      }
      iVar2 = *(int *)(param_1 + 0x6c);
      *(int **)(param_1 + 0x98) = piVar6;
      floor((double)(*(float *)(iVar2 + 0x54) * (float)_DAT_005c89c0 + (float)_DAT_005c75e8));
      uStack_c = ftol();
      floor((double)(*(float *)(iVar2 + 0x58) * (float)_DAT_005c89c0 + (float)_DAT_005c75e8));
      uStack_b = ftol();
      floor((double)(*(float *)(iVar2 + 0x5c) * (float)_DAT_005c89c0 + (float)_DAT_005c75e8));
      uStack_a = ftol();
      FUN_004115b0();
      FUN_00411300();
      if (_DAT_005da41c <= *(float *)(iVar2 + 0x94)) {
        FUN_004110c0(1,1);
      }
      else {
        FUN_004110c0(2,1);
        FUN_00411670();
      }
      cVar4 = (**(code **)(*piVar6 + 4))();
      if (cVar4 == '\0') {
        FUN_00537ad0();
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
    }
  }
  return 1;
}

