
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484090(uint param_1,uint param_2,char param_3,uint param_4)

{
  float fVar1;
  bool bVar2;
  Equipment *pEVar3;
  undefined4 uVar4;
  HpAttachmentType HVar5;
  Equipment *pEVar6;
  Explosion *pEVar7;
  wchar_t *pwVar8;
  int iVar9;
  size_t sVar10;
  code *pcVar11;
  code *pcVar12;
  HpAttachmentType HVar13;
  int iVar14;
  ulonglong uVar15;
  wchar_t awStack_200 [6];
  wchar_t awStack_1f4 [250];
  
  pEVar3 = Archetype::GetEquipment(param_2);
  if (pEVar3 == (Equipment *)0x0) {
    return;
  }
  DAT_0066fc60 = 0;
  uVar4 = (**(code **)(*(int *)pEVar3 + 0x10))();
  switch(uVar4) {
  case 0xe:
    iVar9 = (**(code **)(*(int *)pEVar3 + 0x18))();
    switch(iVar9) {
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      uVar4 = 0x395;
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
      uVar4 = 0x396;
      break;
    default:
      goto switchD_00484f14_caseD_23;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
      uVar4 = 0x397;
      break;
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      uVar4 = 0x398;
      break;
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
      uVar4 = 0x399;
    }
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,uVar4,&DAT_0066fc60);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)&PTR_caseD_7_0048562c + iVar9 + 1)) {
    case 0:
      pwVar8 = (wchar_t *)0x1;
      break;
    case 1:
      pwVar8 = (wchar_t *)0x2;
      break;
    case 2:
      pwVar8 = (wchar_t *)0x3;
      break;
    case 3:
      pwVar8 = (wchar_t *)0x4;
      break;
    case 4:
      pwVar8 = (wchar_t *)0x5;
      break;
    case 5:
      pwVar8 = (wchar_t *)0x6;
      break;
    case 6:
      pwVar8 = (wchar_t *)0x7;
      break;
    case 7:
      pwVar8 = (wchar_t *)0x8;
      break;
    case 8:
      pwVar8 = (wchar_t *)0x9;
      break;
    case 9:
      pwVar8 = (wchar_t *)0xa;
      break;
    case 10:
      pwVar8 = (wchar_t *)0x0;
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
switchD_00484f14_caseD_23:
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d8,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
      pcVar11 = swprintf_exref;
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      pcVar11 = swprintf_exref;
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d9,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      ftol();
      (*pcVar11)(awStack_200,&PTR_DAT_005d1d14);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6da,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      ftol();
      (*pcVar11)(awStack_200,&PTR_DAT_005d1d14);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    break;
  case 0xf:
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x3c6,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6dc,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      swprintf(awStack_200,0x5d1d04,
               SUB84((double)((*(float *)(pEVar3 + 0x8c) + _DAT_005d1d00) * _DAT_005d1cfc),0));
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    break;
  default:
    wcscpy(&DAT_0066fc60,L"\n");
    goto LAB_004854b2;
  case 0x11:
    HVar13 = 0;
    iVar9 = Archetype::Gun::get_number_of_hp_types((Gun *)pEVar3);
    iVar14 = 0;
    if (0 < iVar9) {
      do {
        HVar5 = Archetype::Gun::get_hp_type_by_index((Gun *)pEVar3,iVar14);
        if ((int)HVar13 < (int)HVar5) {
          HVar13 = Archetype::Gun::get_hp_type_by_index((Gun *)pEVar3,iVar14);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar9);
    }
    switch(HVar13) {
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      uVar4 = 0x395;
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
      uVar4 = 0x396;
      break;
    default:
      goto switchD_004843c2_caseD_23;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
      uVar4 = 0x397;
      break;
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      uVar4 = 0x398;
      break;
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
      uVar4 = 0x399;
    }
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,uVar4,&DAT_0066fc60);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)&PTR_caseD_7_00485580 + HVar13 + 1)) {
    case 0:
      pwVar8 = (wchar_t *)0x1;
      break;
    case 1:
      pwVar8 = (wchar_t *)0x2;
      break;
    case 2:
      pwVar8 = (wchar_t *)0x3;
      break;
    case 3:
      pwVar8 = (wchar_t *)0x4;
      break;
    case 4:
      pwVar8 = (wchar_t *)0x5;
      break;
    case 5:
      pwVar8 = (wchar_t *)0x6;
      break;
    case 6:
      pwVar8 = (wchar_t *)0x7;
      break;
    case 7:
      pwVar8 = (wchar_t *)0x8;
      break;
    case 8:
      pwVar8 = (wchar_t *)0x9;
      break;
    case 9:
      pwVar8 = (wchar_t *)0xa;
      break;
    case 10:
      pwVar8 = (wchar_t *)0x0;
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
switchD_004843c2_caseD_23:
    bVar2 = ID_String::IsEmpty((ID_String *)(pEVar3 + 0x98));
    if (bVar2) {
      return;
    }
    pEVar6 = Archetype::GetEquipmentByName((ID_String *)(pEVar3 + 0x98));
    if (pEVar6 == (Equipment *)0x0) {
      return;
    }
    iVar9 = (**(code **)(*(int *)pEVar6 + 0x10))();
    if (iVar9 != 0x1f) {
      return;
    }
    bVar2 = ID_String::IsEmpty((ID_String *)(pEVar6 + 0x24));
    if (!bVar2) {
      Archetype::GetExplosion((ID_String *)(pEVar6 + 0x24));
    }
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6cf,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    pcVar11 = wcslen_exref;
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d0,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d1,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      bVar2 = ID_String::IsEmpty((ID_String *)(pEVar6 + 0x8c));
      if (!bVar2) {
        Archetype::GetMotor(*(uint *)(pEVar6 + 0x8c));
      }
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d0ec4,pwVar8);
      FUN_004347e0(DAT_0067eca8,0x6df,&DAT_0066dc60);
      wcscat(awStack_1f4,&DAT_0066dc60);
      wcscat(awStack_1f4,L"\n");
      pcVar11 = wcslen_exref;
      param_1 = param_4;
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar4 = (*pcVar11)(&DAT_0066fc60,param_1);
    FUN_0057e2c0(&DAT_0066fc60,uVar4);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d2,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d0ec4,pwVar8);
      FUN_004347e0(DAT_0067eca8,0x6e0,&DAT_0066dc60);
      wcscat(awStack_1f4,&DAT_0066dc60);
      wcscat(awStack_1f4,L"\n");
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar4 = (*pcVar11)(&DAT_0066fc60,param_1);
    FUN_0057e2c0(&DAT_0066fc60,uVar4);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d3,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      fVar1 = _DAT_005c7474;
      if (_DAT_005c7474 < *(float *)(pEVar3 + 0x90)) {
        fVar1 = _DAT_005c75dc / *(float *)(pEVar3 + 0x90);
      }
      swprintf(awStack_200,0x5d1d04,SUB84((double)fVar1,0));
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar4 = (*pcVar11)(&DAT_0066fc60,param_1);
    FUN_0057e2c0(&DAT_0066fc60,uVar4);
    DAT_0066fc60 = 0;
    if (*(int *)(pEVar6 + 0x90) == 0) {
      if (param_3 != '\0') {
        FUN_004347e0(DAT_0067eca8,0x6d4,&DAT_0066fc60);
      }
      if ((char)param_4 == '\0') goto LAB_00484a44;
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    else {
      if (param_3 != '\0') {
        FUN_004347e0(DAT_0067eca8,0x3d1,&DAT_0066fc60);
      }
      if ((char)param_4 == '\0') {
LAB_00484a44:
        wcscpy(awStack_200,L"\n");
      }
      else {
        swprintf(awStack_200,0x5d1d04,SUB84((double)*(float *)(pEVar6 + 0xa0),0));
      }
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = (*pcVar11)(&DAT_0066fc60,param_1,0);
    break;
  case 0x12:
    bVar2 = ID_String::IsEmpty((ID_String *)(pEVar3 + 0x98));
    if (bVar2) {
      return;
    }
    pEVar3 = Archetype::GetEquipmentByName((ID_String *)(pEVar3 + 0x98));
    if (pEVar3 == (Equipment *)0x0) {
      return;
    }
    iVar9 = (**(code **)(*(int *)pEVar3 + 0x10))();
    if (iVar9 != 0x20) {
      return;
    }
    bVar2 = ID_String::IsEmpty((ID_String *)(pEVar3 + 0x24));
    if (!bVar2) {
      Archetype::GetExplosion((ID_String *)(pEVar3 + 0x24));
    }
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6cf,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d0,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x3b1,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d0ec4,pwVar8);
      FUN_004347e0(DAT_0067eca8,0x6e0,&DAT_0066dc60);
      wcscat(awStack_1f4,&DAT_0066dc60);
      wcscat(awStack_1f4,L"\n");
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    return;
  case 0x13:
    pEVar3 = Archetype::GetEquipmentByName((ID_String *)(pEVar3 + 0x98));
    if (pEVar3 == (Equipment *)0x0) {
      return;
    }
    iVar9 = (**(code **)(*(int *)pEVar3 + 0x10))();
    if (iVar9 != 0x21) {
      return;
    }
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d6,&DAT_0066fc60);
    }
    pcVar11 = wcscat_exref;
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d0ec4,pwVar8);
      FUN_004347e0(DAT_0067eca8,0x6df,&DAT_0066dc60);
      wcscat(awStack_1f4,&DAT_0066dc60);
      wcscat(awStack_1f4,L"\n");
    }
    wcscat(&DAT_0066fc60,awStack_200);
    pcVar12 = wcslen_exref;
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d7,&DAT_0066fc60);
    }
    if ((char)param_4 != '\0') goto LAB_00485300;
LAB_00485467:
    wcscpy(awStack_200,L"\n");
    goto LAB_0048547a;
  case 0x1a:
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6dd,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    goto LAB_004854b2;
  case 0x1b:
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6de,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
LAB_004854b2:
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    break;
  case 0x1f:
  case 0x20:
    bVar2 = ID_String::IsEmpty((ID_String *)(pEVar3 + 0x24));
    if (bVar2) {
      return;
    }
    pEVar7 = Archetype::GetExplosion((ID_String *)(pEVar3 + 0x24));
    if (pEVar7 == (Explosion *)0x0) {
      return;
    }
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6cf,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d0,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d1d14,pwVar8);
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d5,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d0ec4,pwVar8);
      FUN_004347e0(DAT_0067eca8,0x6df,&DAT_0066dc60);
      wcscat(awStack_1f4,&DAT_0066dc60);
      wcscat(awStack_1f4,L"\n");
    }
    wcscat(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    break;
  case 0x21:
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d6,&DAT_0066fc60);
    }
    pcVar11 = wcscat_exref;
    if ((char)param_4 == '\0') {
      wcscpy(awStack_200,L"\n");
    }
    else {
      pwVar8 = (wchar_t *)ftol();
      swprintf(awStack_200,0x5d0ec4,pwVar8);
      FUN_004347e0(DAT_0067eca8,0x6df,&DAT_0066dc60);
      wcscat(awStack_1f4,&DAT_0066dc60);
      wcscat(awStack_1f4,L"\n");
    }
    wcscat(&DAT_0066fc60,awStack_200);
    pcVar12 = wcslen_exref;
    uVar15 = (ulonglong)param_1;
    sVar10 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
    DAT_0066fc60 = 0;
    if (param_3 != '\0') {
      FUN_004347e0(DAT_0067eca8,0x6d7,&DAT_0066fc60);
    }
    if ((char)param_4 == '\0') goto LAB_00485467;
LAB_00485300:
    pwVar8 = (wchar_t *)ftol();
    swprintf(awStack_200,0x5d1cf0,pwVar8);
LAB_0048547a:
    (*pcVar11)(&DAT_0066fc60,awStack_200);
    uVar15 = (ulonglong)param_1;
    sVar10 = (*pcVar12)(&DAT_0066fc60,param_1,0);
  }
  FUN_0057e2c0(&DAT_0066fc60,sVar10,uVar15);
  return;
}

