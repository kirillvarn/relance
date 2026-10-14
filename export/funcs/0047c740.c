
uint __thiscall
FUN_0047c740(int param_1,int *param_2,uint param_3,uint param_4,wchar_t *param_5,int param_6,
            int param_7,char param_8,undefined4 param_9,char param_10,undefined4 param_11,
            int param_12,undefined4 param_13,char param_14)

{
  byte *pbVar1;
  GoodInfo *pGVar2;
  Equipment *this;
  HpAttachmentType HVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  char cVar7;
  undefined1 uVar8;
  wchar_t *pwVar9;
  int iVar10;
  wchar_t *unaff_ESI;
  uint uVar11;
  bool bVar12;
  float10 fVar13;
  undefined1 unaff_retaddr;
  undefined1 uStack00000035;
  undefined1 uStack00000036;
  undefined1 uStack00000037;
  undefined4 uVar14;
  undefined2 *puVar15;
  undefined1 auStack_10 [3];
  bool local_d;
  GoodInfo *local_c;
  HpAttachmentType HStack_8;
  int iStack_4;
  
  pwVar9 = param_5;
  if ((param_3 == 0) && (param_12 == 0)) {
    return 0;
  }
  local_d = false;
  if ((((*(char *)(param_1 + 0x35c) != '\0') || (*(int *)(param_1 + 0x360) != 0)) &&
      (*(int *)(param_1 + 0x36c) != 0)) &&
     (((*(int *)(param_1 + 0x370) != 0 && (*(int *)(param_1 + 0x374) != 0)) &&
      ((*(int *)(param_1 + 0x378) != 0 && (*(int *)(param_1 + 0x37c) != 0)))))) {
    local_d = true;
  }
  if ((param_4 != *(int *)(param_1 + 0x32c)) && (param_4 != -1)) {
    return 0;
  }
  bVar12 = *param_2 == *(int *)(param_1 + 0x3a4);
  param_4 = CONCAT31(param_4._1_3_,bVar12);
  if (!bVar12) {
    local_d = bVar12;
  }
  if (param_3 == 0) {
    local_d = false;
    if (bVar12) {
      if (*(int *)(param_1 + 0x360) == 0) {
        *(undefined4 *)(param_1 + 0x390) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x390) = 0;
      }
    }
  }
  else if (local_d != false) {
    if (*(int *)(param_1 + 0x360) == 0) {
      *(wchar_t **)(param_1 + 0x38c) = param_5;
      *(uint *)(param_1 + 0x390) = param_3;
      *(int *)(param_1 + 0x388) = param_6;
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x360) + 0x390) = param_3;
      *(wchar_t **)(*(int *)(param_1 + 0x360) + 0x38c) = param_5;
      *(int *)(*(int *)(param_1 + 0x360) + 0x388) = param_6;
    }
  }
  local_c = (GoodInfo *)0x0;
  if (((param_3 == 0) ||
      (local_c = GoodList::find_by_archetype(param_3), local_c == (GoodInfo *)0x0)) &&
     (param_12 == 0)) {
    return 0;
  }
  uVar11 = *param_2 - *(int *)(param_1 + 0x3c4);
  if (4 < uVar11) goto LAB_0047d27b;
  piVar6 = *(int **)(param_1 + 1000 + uVar11 * 4);
  if (piVar6 != (int *)0x0) {
    if (param_3 == 0) {
      if (param_12 != 0) {
        uVar14 = 0x38a;
LAB_0047cac3:
        (**(code **)(*piVar6 + 0xa8))(0x1e,uVar14,0);
      }
    }
    else {
      this = Archetype::GetEquipment(param_3);
      if (this == (Equipment *)0x0) {
        piVar6 = *(int **)(param_1 + 1000 + uVar11 * 4);
        uVar14 = 0;
        goto LAB_0047cac3;
      }
      if ((*(int *)(param_1 + 0x32c) == 0) || (*(int *)(param_1 + 0x32c) == 2)) {
        HStack_8 = (**(code **)(*(int *)this + 0x18))();
        iVar10 = (**(code **)(*(int *)this + 0x10))();
        if (iVar10 == 0x11) {
          iStack_4 = Archetype::Gun::get_number_of_hp_types((Gun *)this);
          iVar10 = 0;
          if (0 < iStack_4) {
            do {
              HVar3 = Archetype::Gun::get_hp_type_by_index((Gun *)this,iVar10);
              if ((int)HStack_8 < (int)HVar3) {
                HStack_8 = Archetype::Gun::get_hp_type_by_index((Gun *)this,iVar10);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < iStack_4);
          }
        }
        switch(HStack_8) {
        case 0xf:
        case 0x19:
        case 0x25:
        case 0x2f:
        case 0x39:
          pwVar9 = (wchar_t *)0x1;
          break;
        case 0x10:
        case 0x1a:
        case 0x26:
        case 0x30:
        case 0x3a:
          pwVar9 = (wchar_t *)0x2;
          break;
        case 0x11:
        case 0x1b:
        case 0x27:
        case 0x31:
        case 0x3b:
          pwVar9 = (wchar_t *)0x3;
          break;
        case 0x12:
        case 0x1c:
        case 0x28:
        case 0x32:
        case 0x3c:
          pwVar9 = (wchar_t *)0x4;
          break;
        case 0x13:
        case 0x1d:
        case 0x29:
        case 0x33:
        case 0x3d:
          pwVar9 = (wchar_t *)0x5;
          break;
        case 0x14:
        case 0x1e:
        case 0x2a:
        case 0x34:
        case 0x3e:
          pwVar9 = (wchar_t *)0x6;
          break;
        case 0x15:
        case 0x1f:
        case 0x2b:
        case 0x35:
        case 0x3f:
          pwVar9 = (wchar_t *)0x7;
          break;
        case 0x16:
        case 0x20:
        case 0x2c:
        case 0x36:
        case 0x40:
          pwVar9 = (wchar_t *)0x8;
          break;
        case 0x17:
        case 0x21:
        case 0x2d:
        case 0x37:
        case 0x41:
          pwVar9 = (wchar_t *)0x9;
          break;
        case 0x18:
        case 0x22:
        case 0x2e:
        case 0x38:
        case 0x42:
          pwVar9 = (wchar_t *)0xa;
          break;
        default:
          goto switchD_0047c950_caseD_23;
        }
        FUN_004347e0(DAT_0067eca8,*(undefined4 *)(this + 0x14),&DAT_0066fc60,DAT_006119f8);
        FUN_004347e0(DAT_0067eca8,0x3df,&DAT_0066dc60,DAT_006119f8);
        wcscat(&DAT_0066fc60,&DAT_0066dc60);
        swprintf(&DAT_0066dc60,0x5d0ec4,pwVar9);
        wcscat(&DAT_0066fc60,&DAT_0066dc60);
        FUN_004347e0(DAT_0067eca8,0x3e0,&DAT_0066dc60,DAT_006119f8);
        wcscat(&DAT_0066fc60,&DAT_0066dc60);
        unaff_ESI = &DAT_0066fc60;
        (**(code **)(**(int **)(param_1 + 1000 + uVar11 * 4) + 0xa8))(0x1d,&DAT_0066fc60,0);
        if (local_d != false) {
          (**(code **)(**(int **)(param_1 + 0x370) + 0xa8))(0x1d,&DAT_0066fc60,0);
        }
      }
      else {
switchD_0047c950_caseD_23:
        (**(code **)(**(int **)(param_1 + 1000 + uVar11 * 4) + 0xa8))
                  (0x1e,*(undefined4 *)(this + 0x14),0);
        if (local_d != false) {
          uVar14 = *(undefined4 *)(this + 0x14);
          piVar6 = *(int **)(param_1 + 0x370);
          goto LAB_0047cac3;
        }
      }
    }
    (**(code **)(**(int **)(param_1 + 1000 + uVar11 * 4) + 0xa8))(0xc,param_4 & 0xff,0);
    pwVar9 = param_5;
  }
  piVar6 = *(int **)(param_1 + 0x424 + uVar11 * 4);
  if (piVar6 != (int *)0x0) {
    if (*(char *)(param_1 + 0x35c) == '\0') {
LAB_0047cb23:
      if ((int)pwVar9 < 1) goto LAB_0047cb27;
LAB_0047cb3a:
      unaff_ESI = (wchar_t *)(param_1 + 0x508);
      swprintf(unaff_ESI,0x5d0ec4,pwVar9);
      (**(code **)(**(int **)(param_1 + 0x424 + uVar11 * 4) + 0xa8))(0x1d,unaff_ESI,0);
      (**(code **)(**(int **)(param_1 + 0x424 + uVar11 * 4) + 0xa8))(0xc,param_4 & 0xff,0);
      piVar6 = *(int **)(param_1 + 0x424 + uVar11 * 4);
      puVar15 = (undefined2 *)0x0;
      uVar14 = 1;
    }
    else {
      if (*(int *)(param_1 + 0x978) == 2) {
        if ((local_c == (GoodInfo *)0x0) || (local_c[0x70] != (GoodInfo)0x0)) goto LAB_0047cb23;
        pwVar9 = (wchar_t *)0x0;
      }
      else {
        pwVar9 = (wchar_t *)0x0;
      }
LAB_0047cb27:
      if (param_14 != '\0') goto LAB_0047cb3a;
      puVar15 = &DAT_005c8ce0;
      uVar14 = 0x1d;
    }
    (**(code **)(*piVar6 + 0xa8))(uVar14,puVar15,0);
    if (*(int *)(param_1 + 0x32c) == 3) {
      uVar14 = 1;
      if (((param_3 == DAT_00674a8c) || (param_3 == DAT_00674a88)) ||
         (*(char *)(param_1 + 0x35c) != '\0')) {
        uVar14 = 0;
      }
      (**(code **)(**(int **)(param_1 + 0x424 + uVar11 * 4) + 0xa8))(1,uVar14,0);
    }
    if (param_12 == 0) {
      if ((*(char *)(param_1 + 0x35c) != '\0') ||
         ((*(int *)(param_1 + 0x32c) != 0 && (*(int *)(param_1 + 0x32c) != 2)))) goto LAB_0047cc3f;
      uVar4 = 1;
      uVar14 = 1;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x424 + uVar11 * 4) + 0xa8))(0x1e,param_12,0);
      (**(code **)(**(int **)(param_1 + 0x424 + uVar11 * 4) + 0xa8))(1,0,0);
      uVar4 = param_4 & 0xff;
      uVar14 = 0xc;
    }
    (**(code **)(**(int **)(param_1 + 0x424 + uVar11 * 4) + 0xa8))(uVar14,uVar4,0);
  }
LAB_0047cc3f:
  cVar7 = param_10;
  piVar6 = *(int **)(param_1 + 0x410 + uVar11 * 4);
  if (piVar6 != (int *)0x0) {
    if ((param_6 < 1) || (param_10 != '\0')) {
      (**(code **)(*piVar6 + 0xa8))(0x1d,&DAT_005c8ce0,0);
      piVar6 = *(int **)(param_1 + 0x460 + uVar11 * 4);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xa8))(2,1,0);
      }
      if (local_d == false) goto LAB_0047cd7b;
      (**(code **)(**(int **)(param_1 + 0x378) + 0xa8))(0x1d,&DAT_005c8ce0,0);
      piVar6 = *(int **)(param_1 + 0x37c);
      uVar14 = 1;
    }
    else {
      iVar10 = param_1 + 0x508;
      FUN_004779a0(iVar10,param_6,0xffffffff);
      (**(code **)(**(int **)(param_1 + 0x410 + uVar11 * 4) + 0xa8))(0x1d,iVar10,0);
      (**(code **)(**(int **)(param_1 + 0x410 + uVar11 * 4) + 0xa8))(0xc,unaff_retaddr,0);
      if (local_d != false) {
        (**(code **)(**(int **)(param_1 + 0x378) + 0xa8))(0x1d,iVar10,0);
        pbVar1 = (byte *)(*(int *)(param_1 + 0x37c) + 0x6c);
        *pbVar1 = *pbVar1 | 3;
        if (*(char *)(param_1 + 0x35c) == '\0') {
          if (*(int *)(param_1 + 0x360) != 0) {
            iVar10 = *(int *)(*(int *)(param_1 + 0x360) + 0x978);
            goto LAB_0047ccee;
          }
LAB_0047ccfe:
          iVar10 = *(int *)(param_1 + 0x37c);
          bVar5 = *(byte *)(iVar10 + 0x6c) | 3;
        }
        else {
          iVar10 = *(int *)(param_1 + 0x978);
LAB_0047ccee:
          if (iVar10 == 1) goto LAB_0047ccfe;
          iVar10 = *(int *)(param_1 + 0x37c);
          bVar5 = *(byte *)(iVar10 + 0x6c) & 0xfc;
        }
        *(byte *)(iVar10 + 0x6c) = bVar5;
      }
      piVar6 = *(int **)(param_1 + 0x460 + uVar11 * 4);
      if (piVar6 == (int *)0x0) goto LAB_0047cd7b;
      uVar14 = 0;
    }
    (**(code **)(*piVar6 + 0xa8))(2,uVar14,0);
  }
LAB_0047cd7b:
  piVar6 = *(int **)(param_1 + 0x49c + uVar11 * 4);
  if (piVar6 != (int *)0x0) {
    if (cVar7 == '\0') {
      (**(code **)(*piVar6 + 0xa8))(0x1d,&DAT_005c8ce0,0);
    }
    else {
      (**(code **)(*piVar6 + 0xa8))(0x1e,0x576);
    }
  }
  iVar10 = param_7;
  piVar6 = *(int **)(param_1 + 0x474 + uVar11 * 4);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xa8))(0x40,100,param_7);
    if (iVar10 < 0x46) {
      if (iVar10 < 0x1e) {
        param_11._0_3_ = 0x2626ff;
      }
      else {
        param_11._0_3_ = 0x26eaf5;
      }
    }
    else {
      param_11._0_3_ = 0x30c24b;
    }
    param_11 = CONCAT13(0xff,(undefined3)param_11);
    uVar14 = param_11;
    (**(code **)(**(int **)(param_1 + 0x474 + uVar11 * 4) + 0xa8))(0x3f,param_11,0);
    if (local_d != false) {
      (**(code **)(**(int **)(param_1 + 0x374) + 0xa8))(0x40,100,iVar10);
      (**(code **)(**(int **)(param_1 + 0x374) + 0xa8))(0x3f,uVar14,0);
    }
  }
  if (*(int *)(param_1 + 0x488 + uVar11 * 4) != 0) {
    if ((param_3 == DAT_00674a8c) || (param_3 == DAT_00674a88)) {
LAB_0047cead:
      cVar7 = '\0';
    }
    else {
      cVar7 = param_8;
      if (((char)param_9 == '\0') &&
         ((*(int *)(param_1 + 0x32c) == 0 || (*(int *)(param_1 + 0x32c) == 2)))) {
        if (local_c == (GoodInfo *)0x0) {
          cVar7 = '\0';
        }
        else {
          iVar10 = FUN_00585f20(*(undefined4 *)(local_c + 0x48),0);
          cVar7 = param_8;
          if (iVar10 == 0) goto LAB_0047cead;
        }
      }
    }
    (**(code **)(**(int **)(param_1 + 0x488 + uVar11 * 4) + 0xa8))(1,cVar7 == '\0',0);
    if (cVar7 != '\0') {
      piVar6 = *(int **)(param_1 + 0x488 + uVar11 * 4);
      if ((char)param_9 == '\0') {
        (**(code **)(*piVar6 + 0xa8))(0x30,1,0);
      }
      else {
        (**(code **)(*piVar6 + 0xa8))(0x30,0);
      }
    }
  }
  if ((*(int *)(param_1 + 0x460 + uVar11 * 4) != 0) && (iVar10 = 0, local_c != (GoodInfo *)0x0)) {
    uVar14 = 0;
    if (DAT_0066873c != 0) {
      FUN_0043a510(DAT_0066873c);
      pGVar2 = local_c;
      if (*(int *)(param_1 + 0x360) == 0) {
        uVar4 = Arch2Good(param_3);
        fVar13 = (float10)FUN_00438060(uVar4);
        if (fVar13 < (float10)*(float *)(local_c + 0x5c) ==
            (fVar13 == (float10)*(float *)(local_c + 0x5c))) {
          if ((float10)*(float *)(local_c + 0x60) <= fVar13) {
            uVar14 = 0x418;
            iVar10 = 4;
          }
          else {
            uVar14 = 0x419;
            iVar10 = 5;
          }
        }
        else {
          uVar14 = 0x417;
          iVar10 = 3;
        }
      }
      else {
        fVar13 = (float10)FUN_00438060(*(undefined4 *)(local_c + 0x48));
        if (fVar13 < (float10)*(float *)(pGVar2 + 100)) {
          if (fVar13 <= (float10)*(float *)(pGVar2 + 0x68)) {
            uVar14 = 0x41b;
            iVar10 = 1;
          }
          else {
            uVar14 = 0x41c;
            iVar10 = 2;
          }
        }
        else {
          uVar14 = 0x41a;
          iVar10 = 0;
        }
      }
    }
    (**(code **)(**(int **)(param_1 + 0x460 + uVar11 * 4) + 0xa8))
              (4,(&PTR_s_Interface_NeuroNet_Inventory_INV_00611a4c)[iVar10],0);
    (**(code **)(**(int **)(param_1 + 0x460 + uVar11 * 4) + 0xa8))(3,uVar14,0);
    if (local_d != false) {
      (**(code **)(**(int **)(param_1 + 0x37c) + 0xa8))(3,uVar14,0);
      (**(code **)(**(int **)(param_1 + 0x37c) + 0xa8))
                (4,(&PTR_s_Interface_NeuroNet_Inventory_INV_00611a4c)[iVar10],0);
    }
  }
  piVar6 = *(int **)(param_1 + 0x3fc + uVar11 * 4);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xa8))(0xc,param_4 & 0xff,0);
  }
  piVar6 = *(int **)(param_1 + 0x44c + uVar11 * 4);
  if ((piVar6 != (int *)0x0) && (*(int *)(param_1 + 0x438 + uVar11 * 4) != 0)) {
    param_9 = 0;
    if (local_c == (GoodInfo *)0x0) {
      if (param_12 == 0) {
        (**(code **)(*piVar6 + 0xa8))(0x17,0xffffffff,0);
      }
      else {
        (**(code **)(*piVar6 + 0xa8))();
      }
    }
    else {
      piVar6[0xbb] = uVar11;
      iVar10 = *(int *)(local_c + 0x78);
      if ((iVar10 != 0) && ((**(code **)(*piVar6 + 0xa8))(4,iVar10,0), local_d != false)) {
        (**(code **)(**(int **)(param_1 + 0x36c) + 0xa8))(4,iVar10,0);
      }
      param_9 = *(undefined4 *)(local_c + 0x88);
    }
    (**(code **)(*piVar6 + 0xa8))(0x19,0x10000,0x10000);
    if (*(int **)(param_1 + 0x4c4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4c4) + 0xa8))(0x19,0,0);
    }
    (**(code **)(*piVar6 + 0xa8))(0xc,unaff_retaddr,0);
    (**(code **)(**(int **)(param_1 + 0x438 + uVar11 * 4) + 0xa8))(0xc,unaff_retaddr,0);
    (**(code **)(**(int **)(param_1 + 0x438 + uVar11 * 4) + 0xa8))(3,iStack_4,0);
  }
  piVar6 = *(int **)(param_1 + 0x438 + uVar11 * 4);
  if ((((piVar6 != (int *)0x0) && (*(int *)(param_1 + 0x3fc + uVar11 * 4) != 0)) &&
      (*(int *)(param_1 + 1000 + uVar11 * 4) != 0)) &&
     ((*(int *)(param_1 + 0x410 + uVar11 * 4) != 0 && (*(int *)(param_1 + 0x424 + uVar11 * 4) != 0))
     )) {
    if (((char)param_11 == '\0') && ((char)param_4 == '\0')) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    param_14 = 0x80;
    uStack00000035 = 0x80;
    uStack00000036 = 0x80;
    uStack00000037 = 0xff;
    (**(code **)(*piVar6 + 0xa8))(0x33,&param_14,uVar8);
    (**(code **)(**(int **)(param_1 + 0x3fc + uVar11 * 4) + 0xa8))(0x33,&param_11,uVar8);
    param_3 = 0xffc0c0c0;
    (**(code **)(**(int **)(param_1 + 0x410 + uVar11 * 4) + 0xa8))(0x33,&param_3,uVar8);
    if (unaff_ESI == (wchar_t *)0x0) {
      uVar8 = 1;
    }
    (**(code **)(**(int **)(param_1 + 1000 + uVar11 * 4) + 0xa8))(0x33,&iStack_4,uVar8);
    if (iStack_4 != 0) {
      uVar8 = 1;
    }
    (**(code **)(**(int **)(param_1 + 0x424 + uVar11 * 4) + 0xa8))(0x33,auStack_10,uVar8);
  }
LAB_0047d27b:
  *param_2 = *param_2 + 1;
  return param_4 & 0xff;
}

