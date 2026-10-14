
undefined4 __thiscall FUN_004822a0(int param_1,undefined4 param_2,wchar_t *param_3,int param_4)

{
  wchar_t *_String;
  wchar_t *pwVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  EquipDesc *this;
  
  pwVar1 = param_3;
  switch(param_2) {
  case 0x15:
    uVar4 = FUN_00585e20(param_3);
    FUN_0047e270(uVar4);
    return 0;
  case 0x16:
    param_3 = (wchar_t *)StringAlloc((char *)param_3,false);
    if ((*(int *)(param_1 + 0x974) == 0) || (iVar5 = FUN_0047e790(), iVar5 == 0)) {
      iVar5 = FUN_0047e790();
      if ((iVar5 != 0) && (iVar5 = FUN_0047e790(), iVar5 != 0)) {
        param_4 = iVar5;
        FUN_00586560(param_3);
        iVar5 = FUN_0047e460(*(undefined4 *)(iVar5 + 4));
        if (iVar5 == 0) {
          uVar4 = 0;
        }
        else {
          if (iVar5 != 2) {
            return 0;
          }
          uVar4 = 1;
        }
        cVar3 = FUN_00586800(uVar4);
        if (cVar3 != '\0') {
          FUN_004c6910(param_4,param_3);
          *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x4f4) = 0;
          FUN_004c6a50(0,0,5);
          FUN_004795f0(0);
          if (*(int *)(param_1 + 0x360) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4e8) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4ec) = 0;
          }
          iVar5 = *(int *)(param_1 + 0x974);
          if (iVar5 != 0) {
            *(undefined4 *)(iVar5 + 0x3a4) = 0xffffffff;
            *(undefined4 *)(iVar5 + 0x4f4) = 0;
            FUN_004c6a50(0,0,5);
            FUN_004795f0(0);
            if (*(int *)(iVar5 + 0x360) != 0) {
              *(undefined4 *)(*(int *)(iVar5 + 0x360) + 0x4e8) = 0;
              *(undefined4 *)(*(int *)(iVar5 + 0x360) + 0x4ec) = 0;
              return 0;
            }
          }
        }
      }
    }
    else {
      iVar5 = FUN_0047e790();
      if (iVar5 != 0) {
        param_4 = iVar5;
        FUN_00586560(param_3);
        iVar5 = FUN_0047e460(*(undefined4 *)(iVar5 + 4));
        if (iVar5 == 0) {
          uVar4 = 0;
        }
        else {
          if (iVar5 != 2) {
            return 0;
          }
          uVar4 = 1;
        }
        cVar3 = FUN_00586800(uVar4);
        if (cVar3 != '\0') {
          cVar3 = FUN_004c6530(param_4,&param_3,0,1);
          if (cVar3 != '\0') {
            FUN_004c6430(param_4,0);
          }
          *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x4f4) = 0;
          FUN_004c6a50(0,0,5);
          FUN_004795f0(0);
          if (*(int *)(param_1 + 0x360) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4e8) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4ec) = 0;
          }
          iVar5 = *(int *)(param_1 + 0x974);
          *(undefined4 *)(iVar5 + 0x3a4) = 0xffffffff;
          *(undefined4 *)(iVar5 + 0x4f4) = 0;
          FUN_004c6a50(0,0,5);
          FUN_004795f0(0);
          if (*(int *)(iVar5 + 0x360) != 0) {
            *(undefined4 *)(*(int *)(iVar5 + 0x360) + 0x4e8) = 0;
            *(undefined4 *)(*(int *)(iVar5 + 0x360) + 0x4ec) = 0;
            return 0;
          }
        }
      }
    }
    break;
  case 0x1a:
  case 0x26:
    if (param_3 == *(wchar_t **)(param_1 + 0x4d8)) {
      FUN_0045a460();
      return 1;
    }
    if (param_3 == *(wchar_t **)(param_1 + 0x9ec)) {
      FUN_0045a460();
      FUN_00442200(7);
      return 1;
    }
    if ((param_3 == *(wchar_t **)(param_1 + 0x9e0)) && (*(int *)(param_1 + 0x974) != 0)) {
      iVar5 = FUN_004c3e10();
      if (iVar5 == 0) {
        FUN_0045a460();
        return 1;
      }
      if (*(char *)(param_1 + 0x98c) == '\0') {
        FUN_00483ae0();
        return 1;
      }
    }
    else {
      if (param_3 != *(wchar_t **)(param_1 + 0x9b0)) {
        param_3 = (wchar_t *)(param_1 + 0x438);
        iVar5 = 0;
        do {
          if (pwVar1 == *(wchar_t **)param_3) {
LAB_004828d7:
            *(undefined1 *)(param_1 + 0x984) = 0;
LAB_004828de:
            FUN_00482120(iVar5,1);
            iVar2 = *(int *)(param_1 + 0x974);
            *(undefined1 *)(param_1 + 0x4e0) = 0;
            if (iVar2 != 0) {
              *(undefined4 *)(iVar2 + 0x3a4) = 0xffffffff;
              *(undefined4 *)(iVar2 + 0x4f4) = 0;
              FUN_004c6a50(0,0,5);
              FUN_004795f0(0);
              if (*(int *)(iVar2 + 0x360) != 0) {
                *(undefined4 *)(*(int *)(iVar2 + 0x360) + 0x4e8) = 0;
                *(undefined4 *)(*(int *)(iVar2 + 0x360) + 0x4ec) = 0;
              }
            }
          }
          else if ((pwVar1 == *(wchar_t **)((int)param_3 + -0x3c)) ||
                  (pwVar1 == *(wchar_t **)((int)param_3 + 0x28))) {
            if (pwVar1 == *(wchar_t **)param_3) goto LAB_004828d7;
            goto LAB_004828de;
          }
          iVar5 = iVar5 + 1;
          param_3 = (wchar_t *)((int)param_3 + 4);
          if (4 < iVar5) {
            if (pwVar1 == *(wchar_t **)(param_1 + 0x3d8)) {
              uVar4 = 3;
            }
            else {
              if (pwVar1 == *(wchar_t **)(param_1 + 0x3d4)) {
                FUN_0047f240(0,1);
                if (*(int *)(param_1 + 0x974) == 0) {
                  return 0;
                }
                FUN_0047f240(*(undefined4 *)(param_1 + 0x32c),1);
                return 0;
              }
              if (pwVar1 == *(wchar_t **)(param_1 + 0x3dc)) {
                uVar4 = 2;
              }
              else {
                if (pwVar1 == *(wchar_t **)(param_1 + 0x3e0)) {
                  FUN_0047f240(4,1);
                  if (*(int *)(param_1 + 0x974) == 0) {
                    return 0;
                  }
                  FUN_0047f240(*(undefined4 *)(param_1 + 0x32c),1);
                  return 0;
                }
                if (pwVar1 != *(wchar_t **)(param_1 + 0x3e4)) {
                  if (pwVar1 != *(wchar_t **)(param_1 + 0x344)) {
                    return 0;
                  }
                  FUN_00482120(0xffffffff,1);
                  *(undefined1 *)(param_1 + 0x4e0) = 1;
                  return 0;
                }
                uVar4 = 1;
              }
            }
            FUN_0047f240(uVar4,1);
            if (*(int *)(param_1 + 0x974) == 0) {
              return 0;
            }
            FUN_0047f240(*(undefined4 *)(param_1 + 0x32c),1);
            return 0;
          }
        } while( true );
      }
      if (*(int *)(param_1 + 0x978) == 2) {
        if (*(int *)(param_1 + 0x3a4) == -1) {
          iVar5 = *(int *)(param_1 + 0x974);
          this = (EquipDesc *)FUN_0047e790();
          if (((this != (EquipDesc *)0x0) && (*(int *)(iVar5 + 0x360) != 0)) &&
             (pwVar1 = *(wchar_t **)(*(int *)(iVar5 + 0x360) + 0x988), param_3 = pwVar1,
             pwVar1 != (wchar_t *)0x0)) {
            EquipDesc::set_equipped(this,false);
            cVar3 = FUN_004c64b0(this,pwVar1,1);
            if (cVar3 != '\0') {
              FUN_004c6430(this,pwVar1);
            }
            *(undefined4 *)(iVar5 + 0x3a4) = 0xffffffff;
            *(undefined4 *)(iVar5 + 0x4f4) = 0;
            FUN_004c6a50(0,0,5);
            FUN_004795f0(0);
            if (*(int *)(iVar5 + 0x360) != 0) {
              *(undefined4 *)(*(int *)(iVar5 + 0x360) + 0x4e8) = 0;
              *(undefined4 *)(*(int *)(iVar5 + 0x360) + 0x4ec) = 0;
            }
            *(undefined4 *)(iVar5 + 0x4f4) = 0;
            *(undefined4 *)(*(int *)(iVar5 + 0x360) + 0x4f4) = 0;
          }
        }
        else {
          FUN_0047e920();
        }
      }
      else if (*(int *)(param_1 + 0x3a4) == -1) {
        FUN_0047eea0(*(undefined4 *)(param_1 + 0x988));
      }
      else {
        FUN_0047eab0(*(undefined4 *)(param_1 + 0x988));
        CacheString::clear((CacheString *)(*(int *)(param_1 + 0x974) + 0x394));
      }
      *(undefined4 *)(param_1 + 0x988) = 1;
      (**(code **)(**(int **)(param_1 + 0x9b8) + 0xa8))(0x38,1,0);
      swprintf((wchar_t *)(param_1 + 0x508),0x5d0ec4,*(wchar_t **)(param_1 + 0x988));
      (**(code **)(**(int **)(param_1 + 0x9cc) + 0xa8))(0x1d,(wchar_t *)(param_1 + 0x508),0);
    }
    return 1;
  case 0x2c:
  case 0x2d:
    uVar4 = FUN_00479d10(param_2,param_3,param_4);
    return uVar4;
  case 0x3e:
    if (param_3 == *(wchar_t **)(param_1 + 0x3d0)) {
      *(int *)(param_1 + 0x3c4) = param_4;
      return 0;
    }
    if (param_3 == *(wchar_t **)(param_1 + 0x9b8)) {
      *(int *)(param_1 + 0x988) = param_4;
      if (param_4 < 0) {
        *(undefined4 *)(param_1 + 0x988) = 0;
      }
      swprintf((wchar_t *)(param_1 + 0x508),0x5d0ec4,*(wchar_t **)(param_1 + 0x988));
      (**(code **)(**(int **)(param_1 + 0x9cc) + 0xa8))(0x1d,(wchar_t *)(param_1 + 0x508),0);
      return 0;
    }
    break;
  case 0x45:
    if (param_3 != (wchar_t *)0x0) {
      param_3 = (wchar_t *)0x1;
      swscanf(pwVar1,(wchar_t *)&PTR_DAT_005d0ec4,&param_3);
      if ((int)param_3 < 1) {
        *(undefined4 *)(param_1 + 0x988) = 1;
      }
      else if (*(int *)(param_1 + 0x38c) < (int)param_3) {
        *(int *)(param_1 + 0x988) = *(int *)(param_1 + 0x38c);
      }
      else {
        *(wchar_t **)(param_1 + 0x988) = param_3;
      }
      _String = (wchar_t *)(param_1 + 0x508);
      swprintf(_String,0x5d0ec4,*(wchar_t **)(param_1 + 0x988));
      iVar5 = _wcsicmp(pwVar1,_String);
      if (iVar5 != 0) {
        (**(code **)(**(int **)(param_1 + 0x9cc) + 0xa8))(0x1d,_String,0);
      }
      (**(code **)(**(int **)(param_1 + 0x9b8) + 0xa8))(0x38,*(undefined4 *)(param_1 + 0x988),0);
      return 0;
    }
    (**(code **)(**(int **)(param_1 + 0x9b8) + 0xa8))(0x38,1,0);
    return 0;
  }
  return 0;
}

