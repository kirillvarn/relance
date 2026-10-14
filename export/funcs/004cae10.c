
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004cae10(BaseWatcher *param_1,int *param_2,char param_3,char param_4,BaseWatcher param_5,
            int *param_6,int *param_7,int *param_8)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  Watchable *pWVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwStack_264;
  int iStack_260;
  int *local_25c;
  wchar_t *pwStack_258;
  int iStack_254;
  uint uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  float fStack_244;
  long alStack_240 [16];
  wchar_t awStack_200 [256];
  
  param_1[0x15] = (BaseWatcher)0x0;
  iVar8 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *(int *)(param_1 + 0x18) = param_2[0x23];
  param_1[0x20] = param_5;
  local_25c = (int *)FUN_00430ab0(param_2[0xf]);
  iVar9 = *(int *)(param_1 + 0x28);
  if (iVar9 != *(int *)(param_1 + 0x2c)) {
    do {
      if ((*(int **)(iVar9 + 4) != (int *)0x0) && (*(char *)(iVar9 + 8) == '\x01')) {
        (**(code **)(**(int **)(iVar9 + 4) + 0x10))();
        *(undefined1 *)(iVar9 + 8) = 0;
      }
      piVar2 = *(int **)(iVar9 + 0xc);
      if ((piVar2 != (int *)0x0) && (piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x60))();
        (**(code **)(**(int **)(iVar9 + 0xc) + 8))(*(int **)(iVar9 + 0xc));
        *(undefined4 *)(iVar9 + 0xc) = 0;
      }
      iVar9 = iVar9 + 0x10;
    } while (iVar9 != *(int *)(param_1 + 0x2c));
  }
  FUN_00501f80(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  iStack_260 = 0;
  if (param_2[0x22] == 0) {
    if (1 < param_2[0x21]) {
      (**(code **)FDUMP_exref)
                (0x100002,
                 "%s(%d) : *** WARNING: No permutation for comm, playing %d messages in order\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp",0x2f3,param_2[0x21]);
    }
    iVar8 = param_2[0x21];
    iVar9 = 0;
    if (0 < iVar8) {
      do {
        alStack_240[iVar9] = iVar9;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
    }
  }
  else {
    iVar9 = FUN_004347e0(DAT_0067eca8,param_2[0x22],awStack_200,0x100);
    if (iVar9 == 0) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Error loading resource string %d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp",0x2e8,param_2[0x22]);
      iVar8 = iStack_260;
    }
    else {
      pwVar10 = awStack_200;
      while( true ) {
        for (; ((wVar1 = *pwVar10, wVar1 == L' ' || (wVar1 == L'\t')) || (wVar1 == L','));
            pwVar10 = pwVar10 + 1) {
        }
        lVar5 = wcstol(pwVar10,&pwStack_264,10);
        if (pwStack_264 <= pwVar10) break;
        alStack_240[iVar8] = lVar5;
        iVar8 = iVar8 + 1;
        pwVar10 = pwStack_264;
      }
    }
  }
  iStack_260 = iVar8;
  iVar9 = param_2[0x21];
  iVar8 = 0;
  pwStack_264 = (wchar_t *)0x0;
  if (0 < iVar9) {
    do {
      if (iVar8 < iStack_260) {
        iVar3 = alStack_240[iVar8];
        if (iVar3 < iVar9) {
          pwVar10 = (wchar_t *)param_2[iVar3 + 0x11];
          iVar9 = (**(code **)(*local_25c + 0x14))(pwVar10);
          if (iVar9 == 0) {
            uVar7 = (**(code **)(*local_25c + 0x10))();
            (**(code **)FDUMP_exref)
                      (0x100002,"%s(%d) : *** WARNING: invalid MSG id (%u) for voice profile (%s)\n"
                       ,"E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp",0x318,pwVar10,uVar7);
          }
          else {
            uStack_24c = 0;
            uStack_250 = uStack_250 & 0xffffff00;
            pwStack_258 = pwVar10;
            iStack_254 = iVar9;
            FUN_00501c60(*(undefined4 *)(param_1 + 0x2c),1,&pwStack_258);
            pwStack_264 = pwVar10;
          }
        }
        else {
          (**(code **)FDUMP_exref)
                    (0x100002,
                     "%s(%d) : *** WARNING: Ignoring comm sequence permutation index %d which is >= message count %d\n"
                     ,"E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp",0x30f,iVar3,iVar9);
        }
      }
      else {
        (**(code **)FDUMP_exref)
                  (0x100002,
                   "%s(%d) : *** WARNING: Comm message index %d is >= permutation size %d, skipping message part\n"
                   ,"E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp",0x305,iVar8,iStack_260);
      }
      iVar9 = param_2[0x21];
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar9);
  }
  if ((*(int *)(param_1 + 0x28) != 0) &&
     (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 4 != 0)) {
    iVar9 = param_2[1];
    *param_6 = *param_2;
    *param_7 = iVar9;
    *param_8 = (int)pwStack_264;
    if (*param_2 == 0) {
      if (*(int *)param_1 != 0) {
        BaseWatcher::set_pointer(param_1,(Watchable *)0x0);
      }
      param_1[8] = (BaseWatcher)0x0;
    }
    else {
      iVar9 = FUN_005416c0(*param_2,0);
      if (((iVar9 == 0) || (iVar9 == -0xc)) ||
         ((iVar9 = *(int *)(iVar9 + 0x10), iVar9 == 0 ||
          ((*(uint *)(iVar9 + 0x4c) & 0x103) != 0x103)))) {
        pWVar6 = (Watchable *)0x0;
      }
      else {
        pWVar6 = (Watchable *)(iVar9 + 0x9c);
      }
      if (pWVar6 != *(Watchable **)param_1) {
        BaseWatcher::set_pointer(param_1,pWVar6);
      }
      param_1[8] = (BaseWatcher)0x1;
    }
    fStack_244 = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x1c);
    iVar9 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x34) = iVar9;
    pwStack_258 = (wchar_t *)0x0;
    piVar2 = (int *)(iVar9 + 0xc);
    iStack_254 = CONCAT31(iStack_254._1_3_,(byte)iStack_254 & 0xf8 ^ ((byte)param_1[0x15] & 1) << 2)
    ;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    cVar4 = FUN_00428680(*(undefined4 *)(iVar9 + 4),&pwStack_258,piVar2,0);
    if (cVar4 == '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x40400000;
    }
    else {
      *(undefined4 *)(*piVar2 + 4) = 2;
      (**(code **)(*(int *)*piVar2 + 0x80))(*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x1c))
      ;
    }
    if (param_4 != '\0') {
      FUN_00428db0();
      if (DAT_006735b0 == 0) {
        DAT_006735a4 = DAT_006108f0;
        _DAT_006735ac = DAT_006108f4;
      }
      DAT_006735b0 = DAT_006735b0 + 1;
      param_1[0x14] = (BaseWatcher)0x1;
    }
    if (param_3 != '\0') {
      pwStack_264 = (wchar_t *)CreateID("comm_static_1");
      uVar7 = FUN_0042ae40(&pwStack_264);
      cVar4 = FUN_00428680(uVar7,0,param_1 + 0xc,0);
      if (cVar4 != '\0') {
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 2;
      }
    }
  }
  return;
}

