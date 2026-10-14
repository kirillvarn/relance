
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00583e30(int param_1,int *param_2,INI_Reader *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar5;
  char *pcVar6;
  undefined3 extraout_var_01;
  undefined3 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  
  FUN_0059dd00(param_1,param_2);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | 3;
  uVar7 = extraout_var;
  if ((param_3 != (INI_Reader *)0x0) &&
     (bVar2 = INI_Reader::read_value(param_3), uVar7 = extraout_var_00, bVar2)) {
    do {
      bVar2 = INI_Reader::is_value(param_3,"rot_speed");
      if (bVar2) {
        fVar8 = INI_Reader::get_value_float(param_3,1);
        fVar9 = INI_Reader::get_value_float(param_3,0);
        fVar10 = INI_Reader::get_value_float(param_3,2);
        *(float *)(param_1 + 0x4e4) = fVar9;
        *(float *)(param_1 + 0x4e8) = fVar8;
        *(float *)(param_1 + 0x4ec) = fVar10;
      }
      bVar2 = INI_Reader::is_value(param_3,"offset");
      if (bVar2) {
        fVar8 = INI_Reader::get_value_float(param_3,1);
        fVar9 = INI_Reader::get_value_float(param_3,0);
        fVar10 = INI_Reader::get_value_float(param_3,2);
        *(float *)(param_1 + 0x488) = fVar9;
        *(float *)(param_1 + 0x48c) = fVar8;
        *(float *)(param_1 + 0x490) = fVar10;
      }
      bVar2 = INI_Reader::is_value(param_3,"object_ypr");
      if (bVar2) {
        fVar8 = INI_Reader::get_value_float(param_3,1);
        fVar9 = INI_Reader::get_value_float(param_3,0);
        fVar10 = INI_Reader::get_value_float(param_3,2);
        *(float *)(param_1 + 0x37c) = fVar9;
        *(float *)(param_1 + 0x380) = fVar8;
        *(float *)(param_1 + 900) = fVar10;
        fVar8 = *(float *)(param_1 + 900);
        fVar9 = *(float *)(param_1 + 0x380);
        FUN_004c8b40(*(float *)(param_1 + 0x37c) * _DAT_005c77f4);
        FUN_004c8b80(fVar9 * _DAT_005c77f4);
        FUN_004c8bc0(fVar8 * _DAT_005c77f4);
      }
      bVar2 = INI_Reader::is_value(param_3,"viewSize");
      if (bVar2) {
        fVar8 = INI_Reader::get_value_float(param_3,1);
        fVar9 = INI_Reader::get_value_float(param_3,0);
        fVar10 = INI_Reader::get_value_float(param_3,2);
        *(float *)(param_1 + 0x470) = fVar9;
        *(float *)(param_1 + 0x474) = fVar8;
        *(float *)(param_1 + 0x478) = fVar10;
      }
      else {
        bVar2 = INI_Reader::is_value(param_3,"hardpoint");
        if (bVar2) {
          iVar11 = param_1 + 0x2f8;
          FUN_004215b0();
          *(undefined4 *)(param_1 + 0x324) = 0;
          *(undefined4 *)(param_1 + 800) = 0;
          *(undefined4 *)(param_1 + 0x31c) = 0;
          if ((param_2 != (int *)0x0) &&
             (piVar5 = (int *)(**(code **)(*param_2 + 8))(), piVar5 != (int *)0x0)) {
            iVar1 = *piVar5;
            pcVar6 = INI_Reader::get_value_string(param_3);
            (**(code **)(iVar1 + 0x90))(pcVar6,iVar11);
            *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x31c);
            *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 800);
            *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x324);
          }
        }
      }
      bVar2 = INI_Reader::is_value(param_3,"show_rect");
      if (bVar2) {
        fVar8 = INI_Reader::get_value_float(param_3,0);
        *(byte *)(param_1 + 0x518) =
             ((fVar8 != (float)_DAT_005c8ba8) << 2 ^ *(byte *)(param_1 + 0x518)) & 4 ^
             *(byte *)(param_1 + 0x518);
      }
      bVar2 = INI_Reader::is_value(param_3,"show_wireframe");
      if (bVar2) {
        fVar8 = INI_Reader::get_value_float(param_3,0);
        *(byte *)(param_1 + 0x518) =
             ((fVar8 != (float)_DAT_005c8ba8) << 3 ^ *(byte *)(param_1 + 0x518)) & 8 ^
             *(byte *)(param_1 + 0x518);
      }
      bVar2 = INI_Reader::is_value(param_3,"rect_color");
      if (bVar2) {
        INI_Reader::get_value_float(param_3,2);
        INI_Reader::get_value_float(param_3,1);
        INI_Reader::get_value_float(param_3,0);
        INI_Reader::get_value_float(param_3,3);
        uVar3 = ftol();
        uVar4 = ftol();
        *(undefined1 *)(param_1 + 0x4c0) = uVar4;
        uVar4 = ftol();
        *(undefined1 *)(param_1 + 0x4c1) = uVar4;
        uVar4 = ftol();
        *(undefined1 *)(param_1 + 0x4c2) = uVar4;
        *(undefined1 *)(param_1 + 0x4c3) = uVar3;
      }
      bVar2 = INI_Reader::is_value(param_3,"wire_color");
      if (bVar2) {
        INI_Reader::get_value_float(param_3,2);
        INI_Reader::get_value_float(param_3,1);
        INI_Reader::get_value_float(param_3,0);
        INI_Reader::get_value_float(param_3,3);
        uVar3 = ftol();
        uVar4 = ftol();
        *(undefined1 *)(param_1 + 0x4bc) = uVar4;
        uVar4 = ftol();
        *(undefined1 *)(param_1 + 0x4bd) = uVar4;
        uVar4 = ftol();
        *(undefined1 *)(param_1 + 0x4be) = uVar4;
        *(undefined1 *)(param_1 + 0x4bf) = uVar3;
      }
      bVar2 = INI_Reader::read_value(param_3);
      uVar7 = extraout_var_01;
    } while (bVar2);
  }
  return CONCAT31(uVar7,1);
}

