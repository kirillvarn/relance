
/* WARNING: Removing unreachable block (ram,0x00525c19) */
/* WARNING: Removing unreachable block (ram,0x00525a67) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00525800(int param_1,INI_Reader *param_2)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  DynamicAsteroid *pDVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int *unaff_ESI;
  int *unaff_EDI;
  int iVar9;
  float fVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piStack_20;
  uint local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c019b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  bVar1 = INI_Reader::read_value(param_2);
  if (bVar1) {
    do {
      bVar1 = INI_Reader::is_value(param_2,"asteroid");
      if (bVar1) {
        pcVar2 = INI_Reader::get_value_string(param_2,0);
        local_1c = CreateID(pcVar2);
        uVar3 = Archetype::GetDynamicAsteroidID((ID_String *)&local_1c);
        pDVar4 = Archetype::GetDynamicAsteroid(uVar3);
        *(DynamicAsteroid **)(param_1 + 8) = pDVar4;
        if (pDVar4 == (DynamicAsteroid *)0x0) {
          (**(code **)FDUMP_exref)
                    (0x100002,"%s(%d) : *** WARNING: dynamic asteroid archetype (%s) not found",
                     "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x8cb,pcVar2);
        }
        if (*(int **)(param_1 + 8) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 8) + 0xc))();
          piVar11 = *(int **)(*(int *)(param_1 + 8) + 4);
          if (piVar11 != (int *)0x0) {
            (**(code **)(*piVar11 + 0x20))(0);
          }
        }
      }
      else {
        bVar1 = INI_Reader::is_value(param_2,"count");
        if (bVar1) {
          INI_Reader::get_value_float(param_2,0);
          uVar5 = ftol();
          *(undefined4 *)(param_1 + 0x10) = uVar5;
        }
        else {
          bVar1 = INI_Reader::is_value(param_2,"placement_radius");
          if (bVar1) {
            fVar10 = INI_Reader::get_value_float(param_2,0);
            *(float *)(param_1 + 0x20) = fVar10;
            *(float *)(param_1 + 0x24) = fVar10 * (float)_DAT_005cf0f8;
          }
          else {
            bVar1 = INI_Reader::is_value(param_2,"max_velocity");
            if (bVar1) {
              fVar10 = INI_Reader::get_value_float(param_2,0);
              *(float *)(param_1 + 0x18) = fVar10;
            }
            else {
              bVar1 = INI_Reader::is_value(param_2,"max_angular_velocity");
              if (bVar1) {
                fVar10 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 0x1c) = fVar10;
              }
              else {
                bVar1 = INI_Reader::is_value(param_2,"color_shift");
                if (bVar1) {
                  local_18 = INI_Reader::get_value_float(param_2,0);
                  local_14 = INI_Reader::get_value_float(param_2,1);
                  local_10 = INI_Reader::get_value_float(param_2,2);
                  *(float *)(param_1 + 0xd4) = local_18;
                  *(float *)(param_1 + 0xd8) = local_14;
                  *(float *)(param_1 + 0xdc) = local_10;
                }
              }
            }
          }
        }
      }
      bVar1 = INI_Reader::read_value(param_2);
    } while (bVar1);
  }
  FUN_005267b0();
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar6 = ftol();
  *(int *)(param_1 + 0x14) = iVar6;
  pvVar7 = operator_new(iVar6 * 4);
  *(void **)(param_1 + 0xc) = pvVar7;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar6 * 4) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  piVar12 = *(int **)(param_1 + 0xa8);
  piVar11 = (int *)(param_1 + 0xa8);
  if (piVar12 != (int *)0x0) {
    (**(code **)(*piVar12 + 8))(piVar12);
    *piVar11 = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    piStack_20 = (int *)0x0;
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x40);
    uStack_4._0_1_ = 1;
    uStack_4._1_3_ = 0;
    iVar6 = (**(code **)(**(int **)Engine_exref + 0x48))
                      (*(int **)Engine_exref,uVar5,"1.11_IMesh",&piStack_20);
    if (iVar6 < 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      uStack_4 = 0xffffffff;
      if (piStack_20 == (int *)0x0) {
        ExceptionList = pvStack_c;
        return;
      }
      (**(code **)(*piStack_20 + 8))(piStack_20);
      ExceptionList = pvStack_c;
      return;
    }
    piVar13 = (int *)((int)&uRam00000000 + 1);
    piVar12 = (int *)0x0;
    (**(code **)(*piStack_20 + 0x24))(piStack_20);
    if (*piVar11 == 0) {
      (**(code **)(*unaff_ESI + 0x38))(unaff_ESI,piVar11);
    }
    (**(code **)(*unaff_ESI + 0x34))(unaff_ESI,param_1 + 0xac);
    (**(code **)(*piVar13 + 0x28))(piVar13);
    piVar11 = *(int **)Renderer_exref;
    (**(code **)(*piVar11 + 0x34))(piVar11,uVar5);
    (**(code **)(**(int **)Engine_exref + 0x48))
              (*(int **)Engine_exref,uVar5,"1.11_IRenderableMesh",&piStack_20);
    puVar8 = operator_new(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[1] = 0;
    }
    *(undefined4 **)(param_1 + 0xb0) = puVar8;
    (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,puVar8 + 1);
    iVar6 = *(int *)(*(int *)(param_1 + 0xb0) + 4);
    pvVar7 = operator_new(iVar6 * 0x2c);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else if (-1 < iVar6 + -1) {
      iVar9 = (int)pvVar7 + 0x1c;
      do {
        FUN_00405860(iVar9,8,2,FUN_0043d950);
        iVar9 = iVar9 + 0x2c;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    **(undefined4 **)(param_1 + 0xb0) = pvVar7;
    puVar8 = *(undefined4 **)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + puVar8[1];
    (**(code **)(*piVar12 + 0x10))(piVar12,*puVar8,0x252,0,puVar8[1]);
    (**(code **)(uRam00000000 + 0x14))(0,*(int *)(param_1 + 0xb0) + 0xc);
    pvVar7 = operator_new(*(int *)(*(int *)(param_1 + 0xb0) + 0xc) << 1);
    *(void **)(*(int *)(param_1 + 0xb0) + 8) = pvVar7;
    (**(code **)(*piVar11 + 0x18))
              (piVar11,*(int *)(param_1 + 0xb0) + 8,*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0xc))
    ;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(*(int *)(param_1 + 0xb0) + 0xc);
    uStack_4 = 0xffffffff;
    if (piStack_20 != (int *)0x0) {
      (**(code **)(*piStack_20 + 8))(piStack_20);
    }
  }
  FUN_0051feb0(param_1 + 0x38,**(undefined4 **)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0xb4));
  ExceptionList = pvStack_c;
  return;
}

