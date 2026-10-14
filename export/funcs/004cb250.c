
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004cb250(BaseWatcher *param_1,int param_2)

{
  Watchable *pWVar1;
  int iVar2;
  CostumeDescriptions *this;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  BaseWatcher *pBVar11;
  undefined4 *puVar12;
  byte bVar13;
  float10 fVar14;
  int *in_stack_0000002c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  Costume *pCVar15;
  int *piStack_284;
  float fStack_27c;
  wchar_t *pwStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 local_26c [9];
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 auStack_23c [12];
  wchar_t awStack_20c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bda5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    ExceptionList = &pvStack_c;
    FUN_0043d2a0(*(int *)(param_1 + 0x1bc));
    *(undefined4 *)(param_1 + 0x1bc) = 0;
  }
  FUN_004cbb40();
  if (*(int *)(param_1 + 0x170) != 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  param_1[0x174] = (BaseWatcher)0x0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  if (param_2 == 0) {
    pWVar1 = (Watchable *)0x0;
  }
  else {
    pWVar1 = (Watchable *)(param_2 + 0x9c);
  }
  if (pWVar1 != *(Watchable **)param_1) {
    BaseWatcher::set_pointer(param_1,pWVar1);
  }
  *(undefined4 *)(param_1 + 0x1b4) = in_stack_00000040;
  param_1[0x84] = (BaseWatcher)0x1;
  param_1[0x85] = (BaseWatcher)0x0;
  param_1[0x38] = (BaseWatcher)0x1;
  fVar14 = (float10)FUN_005b3510(5);
  if (fVar14 <= (float10)_DAT_005c8ba8) {
    *(undefined4 *)(param_1 + 0x170) = 0;
    param_1[0x174] = (BaseWatcher)0x1;
    goto LAB_004cb769;
  }
  iVar2 = FUN_004c9a80(&stack0x0000000c);
  *(int *)(param_1 + 0x170) = iVar2;
  param_1[0x174] = (BaseWatcher)0x0;
  if (iVar2 == 0) goto LAB_004cb769;
  pCVar15 = (Costume *)&stack0x0000000c;
  this = GetCostumeDescriptions();
  iVar2 = CostumeDescriptions::get_costume_gender(this,pCVar15);
  FUN_004215b0();
  local_240 = 0;
  local_244 = 0;
  local_248 = 0;
  pBVar11 = param_1 + 0x178;
  puVar4 = local_26c;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar4 = *(undefined4 *)pBVar11;
    pBVar11 = pBVar11 + 4;
    puVar4 = puVar4 + 1;
  }
  if (iVar2 == 1) {
LAB_004cb3e5:
    local_248 = *(undefined4 *)(param_1 + 0x19c);
    local_244 = *(undefined4 *)(param_1 + 0x1a0);
    local_240 = *(undefined4 *)(param_1 + 0x1a4);
  }
  else {
    if (iVar2 != 2) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp",0x523,
                 "Invalid gender for comm appearance\n");
      goto LAB_004cb3e5;
    }
    local_248 = *(undefined4 *)(param_1 + 0x1a8);
    local_244 = *(undefined4 *)(param_1 + 0x1ac);
    local_240 = *(undefined4 *)(param_1 + 0x1b0);
  }
  if (**(int **)(param_1 + 0x170) != 0) {
    (**(code **)(**(int **)Deform_exref + 0x60))
              (*(int **)Deform_exref,**(int **)(param_1 + 0x170),local_244);
  }
  puVar4 = *(undefined4 **)(param_1 + 0x170);
  (**(code **)(**(int **)Deform_exref + 0x4c))(*(int **)Deform_exref,*puVar4,&local_248);
  (**(code **)(**(int **)Deform_exref + 0x50))(*(int **)Deform_exref,*puVar4,&pwStack_278);
  pwStack_278 = (wchar_t *)(**(code **)(*in_stack_0000002c + 0x18))();
  piStack_284 = (int *)**(int **)(pwStack_278 + 2);
  if (piStack_284 != *(int **)(pwStack_278 + 2)) {
    do {
      pcVar10 = (code *)piStack_284[3];
      if ((code *)piStack_284[3] == (code *)0x0) {
        pcVar10 = _C_exref;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x170);
      iVar2 = **(int **)Engine_exref;
      uVar3 = FUN_004ca480();
      uVar3 = (**(code **)(iVar2 + 0xa0))(*(undefined4 *)Engine_exref,uVar3);
      FUN_00406880(uVar3);
      puVar6 = auStack_23c;
      puVar12 = puVar4 + 0x9a;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar12 = puVar12 + 1;
      }
      if ((pcVar10 != (code *)0x0) && (*pcVar10 != (code)0x0)) {
        iVar2 = 0;
        piVar5 = puVar4 + 0x95;
        do {
          iVar8 = iVar2;
          if (*piVar5 == -1) break;
          iVar2 = iVar2 + 1;
          piVar5 = piVar5 + 1;
          iVar8 = -1;
        } while (iVar2 < 4);
        FUN_004cec20(pcVar10);
        puVar6 = puVar4 + iVar8 * 0x21 + 0x12;
        FUN_004356c0(puVar6);
        uVar3 = FUN_00434e90(puVar6);
        iVar2 = (**(code **)(**(int **)Deform_exref + 0x1c))
                          (*(int **)Deform_exref,*puVar4,puVar4 + iVar8 + 0x95,uVar3,pcVar10,0,0,
                           0x3f800000,0x3f800000,0,0xbf800000,0);
        if (iVar2 != 0) {
          puVar4 = (undefined4 *)FUN_00411c50(0x10000,2);
          (**(code **)FDUMP_exref)
                    (*puVar4,"%s(%d) : *** WARNING: failed to play character animation \'%s\'\n",
                     "cmn\\EngineCharacter.h",0x1f7,pcVar10);
        }
      }
      piStack_284 = (int *)*piStack_284;
    } while (piStack_284 != (int *)*(int *)(pwStack_278 + 2));
  }
  piStack_284 = (int *)0x3dcccccd;
  do {
    if (_DAT_005d043c <= (float)piStack_284) {
      fStack_27c = 0.2;
    }
    else {
      fStack_27c = (float)piStack_284;
    }
    FUN_004cba60(fStack_27c);
    piStack_284 = (int *)((float)piStack_284 - fStack_27c);
  } while ((float)_DAT_005c8ba8 < (float)piStack_284);
  piVar5 = *(int **)(param_1 + 0x170);
  if (*piVar5 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x24))(*(int **)Deform_exref,*piVar5);
    piVar9 = piVar5 + 0x95;
    piVar5 = piVar5 + 0x11;
    iVar2 = 4;
    do {
      if (*piVar9 != -1) {
        *piVar5 = 0;
        *(undefined1 *)(piVar5 + 1) = 0;
        *piVar9 = -1;
      }
      piVar9 = piVar9 + 1;
      piVar5 = piVar5 + 0x21;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  piStack_284 = (int *)**(int **)(pwStack_278 + 2);
  if (piStack_284 != *(int **)(pwStack_278 + 2)) {
    do {
      pcVar10 = (code *)piStack_284[3];
      if ((code *)piStack_284[3] == (code *)0x0) {
        pcVar10 = _C_exref;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x170);
      puVar6 = (undefined4 *)FUN_004cba10(auStack_23c);
      puVar12 = puVar4 + 0x9a;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar12 = puVar12 + 1;
      }
      if ((pcVar10 != (code *)0x0) && (*pcVar10 != (code)0x0)) {
        iVar2 = 0;
        piVar5 = puVar4 + 0x95;
        do {
          iVar8 = iVar2;
          if (*piVar5 == -1) break;
          iVar2 = iVar2 + 1;
          piVar5 = piVar5 + 1;
          iVar8 = -1;
        } while (iVar2 < 4);
        FUN_004cec20(pcVar10);
        puVar6 = puVar4 + iVar8 * 0x21 + 0x12;
        FUN_004356c0(puVar6);
        uVar3 = FUN_00434e90(puVar6);
        iVar2 = (**(code **)(**(int **)Deform_exref + 0x1c))
                          (*(int **)Deform_exref,*puVar4,puVar4 + iVar8 + 0x95,uVar3,pcVar10,0,
                           0x3e99999a,0x3f800000,0x3f800000,2,0xbf800000,0);
        if (iVar2 != 0) {
          (**(code **)FDUMP_exref)
                    (0x100002,"%s(%d) : *** WARNING: failed to play character animation \'%s\'\n",
                     "cmn\\EngineCharacter.h",0x1f7,pcVar10);
        }
      }
      piStack_284 = (int *)*piStack_284;
    } while (piStack_284 != (int *)*(int *)(pwStack_278 + 2));
  }
LAB_004cb769:
  if (*(int *)(param_1 + 0x1bc) == 0) {
    uVar3 = FUN_0059db20("CommText","TextControl",in_stack_00000048,0);
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x1bc);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) | 3;
    pwStack_278 = (wchar_t *)0xbf028f5c;
    uStack_274 = 0x3e6a7efa;
    uStack_270 = 0xbf800000;
    FUN_0058a110("Normal",&pwStack_278,0,0x3e041893,0x3d75c28f,0x3f800000,0,1,0,1);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 0x334);
    if (*(char *)(iVar2 + 0x30) != '\x01') {
      *(undefined1 *)(iVar2 + 0x30) = 1;
      *(undefined4 *)(iVar2 + 0x28) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0xa8))(0x33,&DAT_00679bb4,1);
    DAT_0066fc60 = 0;
    bVar13 = 0;
    if ((*(int *)param_1 != 0) && (iVar2 = *(int *)param_1 + -0x9c, iVar2 != 0)) {
      pwStack_278 = (wchar_t *)0x0;
      uStack_274 = 0;
      uStack_4 = 0;
      iVar2 = FUN_005472d0(iVar2,&pwStack_278);
      bVar13 = iVar2 != 0;
      if ((bool)bVar13) {
        wcscat(&DAT_0066fc60,pwStack_278);
      }
      iVar2 = *(int *)param_1;
      if ((((iVar2 != 0) && ((CShip *)(iVar2 + -0x9c) != (CShip *)0x0)) &&
          ((*(uint *)(iVar2 + -0x50) & 0x503) == 0x503)) &&
         (uVar7 = CShip::get_group_name((CShip *)(iVar2 + -0x9c)), uVar7 != 0)) {
        iVar2 = FUN_004347e0(DAT_0067eca8,uVar7,awStack_20c,0x100);
        if (iVar2 == 0) {
          awStack_20c[0] = L'\0';
        }
        if ((bool)bVar13) {
          wcscat(&DAT_0066fc60,L"\n");
        }
        wcscat(&DAT_0066fc60,awStack_20c);
        bVar13 = bVar13 + 1;
      }
      if (bVar13 == 0) {
        if (*(int *)param_1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)param_1 + -0x9c;
        }
        iVar2 = FUN_005472a0(iVar2);
        if (iVar2 != 0) {
          iVar2 = FUN_004347e0(DAT_0067eca8,iVar2,awStack_20c,0x100);
          if (iVar2 == 0) {
            awStack_20c[0] = L'\0';
          }
          wcscat(&DAT_0066fc60,awStack_20c);
          bVar13 = 1;
        }
      }
      uStack_4 = 0xffffffff;
      if (pwStack_278 != (wchar_t *)0x0) {
        free(pwStack_278);
      }
    }
    if ((*(int *)(param_1 + 0x1b4) != 0) && (bVar13 < 2)) {
      if (bVar13 != 0) {
        wcscat(&DAT_0066fc60,L"\n");
      }
      iVar2 = FUN_004347e0(DAT_0067eca8,*(undefined4 *)(param_1 + 0x1b4),awStack_20c,0x100);
      if (iVar2 == 0) {
        awStack_20c[0] = L'\0';
      }
      wcscat(&DAT_0066fc60,awStack_20c);
      bVar13 = bVar13 + 1;
    }
    if (bVar13 != 0) {
      FUN_0058a530(&DAT_0066fc60);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

