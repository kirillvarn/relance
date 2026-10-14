
void FUN_004a5890(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  wint_t wVar4;
  size_t sVar5;
  size_t sVar6;
  GoodInfo *pGVar7;
  size_t sVar8;
  size_t sVar9;
  wchar_t *_Str;
  void *pvVar10;
  int *piVar11;
  int extraout_ECX;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  float10 fVar16;
  undefined1 unaff_retaddr;
  void *in_stack_00001000;
  int *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  int *local_8;
  
  local_c = 0xffffffff;
  local_10 = &LAB_005bcc3b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005b7e90();
  iVar12 = 0;
  local_10 = (undefined1 *)extraout_ECX;
  FUN_0043a510();
  local_c = CONCAT31(local_c._1_3_,unaff_retaddr);
  local_8 = operator_new(0xc);
  *local_8 = (int)local_8;
  local_8[1] = (int)local_8;
  FUN_00437f70();
  do {
    iVar13 = 0;
    local_14 = (int *)0x0;
    if (0 < *(int *)((int)local_10 + 0x588)) {
      do {
        if (*(char *)(*(int *)((int)local_10 + 0x584) + 8 + iVar13) != '\0') {
          FUN_0041c970();
          wcscpy((wchar_t *)&stack0x00000208,L" --- ");
          sVar5 = wcslen((wchar_t *)&stack0x00000208);
          sVar6 = wcslen((wchar_t *)&stack0x00000008);
          iVar14 = sVar5 + sVar6 + iVar12;
          if (iVar14 < 0x400) {
            wcscat((wchar_t *)&stack0x00000808,(wchar_t *)&stack0x00000008);
            wcscat((wchar_t *)&stack0x00000808,(wchar_t *)&stack0x00000208);
            iVar12 = iVar14;
          }
        }
        local_14 = (int *)((int)local_14 + 1);
        iVar13 = iVar13 + 0x60;
      } while ((int)local_14 < *(int *)((int)local_10 + 0x588));
    }
    local_14 = (int *)*local_8;
    if (local_14 != local_8) {
      do {
        uVar15 = ((uint *)local_14[2])[4];
        if ((uVar15 == 2) || (uVar15 == 0)) {
          uVar15 = *(uint *)local_14[2];
          fVar16 = (float10)FUN_00438060();
          floor((double)fVar16);
          iVar13 = ftol();
          pGVar7 = GoodList::find_by_id(uVar15);
          if ((0 < iVar13) && (*(int *)(pGVar7 + 0x88) != 0)) {
            iVar14 = FUN_004347e0();
            if (iVar14 == 0) {
              ID_String::get_string((ID_String *)(pGVar7 + 0x48));
              (**(code **)FDUMP_exref)();
            }
            uVar15 = 0;
            sVar5 = wcslen((wchar_t *)&stack0x00000008);
            if (sVar5 != 0) {
              do {
                wVar4 = towupper(*(wint_t *)(&stack0x00000008 + uVar15 * 2));
                *(wint_t *)(&stack0x00000008 + uVar15 * 2) = wVar4;
                uVar15 = uVar15 + 1;
                sVar5 = wcslen((wchar_t *)&stack0x00000008);
              } while (uVar15 < sVar5);
            }
            wcscpy((wchar_t *)&stack0x00000208,L" ");
            _itow(iVar13,(wchar_t *)&stack0x00000608,10);
            wcscpy((wchar_t *)&stack0x00000408,L" --- ");
            sVar5 = wcslen((wchar_t *)&stack0x00000408);
            sVar6 = wcslen((wchar_t *)&stack0x00000608);
            sVar8 = wcslen((wchar_t *)&stack0x00000208);
            sVar9 = wcslen((wchar_t *)&stack0x00000008);
            iVar13 = sVar5 + sVar6 + sVar8 + sVar9 + iVar12;
            if (iVar13 < 0x400) {
              wcscat((wchar_t *)&stack0x00000808,(wchar_t *)&stack0x00000008);
              wcscat((wchar_t *)&stack0x00000808,(wchar_t *)&stack0x00000208);
              wcscat((wchar_t *)&stack0x00000808,(wchar_t *)&stack0x00000608);
              wcscat((wchar_t *)&stack0x00000808,(wchar_t *)&stack0x00000408);
              iVar12 = iVar13;
            }
          }
        }
        local_14 = (int *)*local_14;
      } while (local_14 != local_8);
    }
    piVar11 = local_8;
  } while ((iVar12 != 0) && (iVar12 < 0x80));
  piVar2 = (int *)*local_8;
  while (piVar2 != piVar11) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_005b7e1d();
    piVar2 = piVar1;
  }
  _Str = _wcsdup((wchar_t *)&stack0x00000808);
  puVar3 = local_10;
  *(wchar_t **)((int)local_10 + 0x344) = _Str;
  sVar5 = wcslen(_Str);
  *(size_t *)((int)puVar3 + 0x34c) = sVar5;
  pvVar10 = operator_new(sVar5 * 4);
  *(void **)((int)puVar3 + 0x348) = pvVar10;
  piVar11 = (int *)FUN_004177b0();
  (**(code **)(*piVar11 + 0x28))();
  FUN_004a5ca0();
  piVar2 = local_14;
  piVar11 = (int *)*local_14;
  while (piVar11 != piVar2) {
    piVar1 = (int *)*piVar11;
    *(int *)piVar11[1] = *piVar11;
    *(int *)(*piVar11 + 4) = piVar11[1];
    FUN_005b7e1d();
    local_10 = (undefined1 *)((int)local_10 + -1);
    piVar11 = piVar1;
  }
  FUN_005b7e1d();
  ExceptionList = in_stack_00001000;
  return;
}

