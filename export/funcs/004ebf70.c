
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ebf70(int param_1)

{
  IObjInspect *pIVar1;
  BaseWatcher *pBVar2;
  char cVar3;
  undefined1 uVar4;
  IObjRW *pIVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  Watchable *pWVar11;
  int *piVar12;
  bool bVar13;
  undefined4 uStack_6c;
  int *piStack_68;
  int local_64;
  uint uStack_60;
  int *local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  BaseWatcher *pBStack_4c;
  BaseWatcher *pBStack_48;
  CShip *local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  Watchable *pWStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005beea3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_64 = param_1;
  local_5c = (int *)FUN_0054baf0();
  if ((((*(int *)(param_1 + 0x368) != 0) && (local_5c != (int *)0x0)) &&
      (local_5c != (int *)0xfffffff4)) &&
     ((local_44 = (CShip *)local_5c[4], local_44 != (CShip *)0x0 &&
      ((*(uint *)(local_44 + 0x4c) & 0x503) == 0x503)))) {
    pIVar5 = CShip::get_target(local_44);
    local_58 = 0;
    if (pIVar5 != (IObjRW *)0x0) {
      local_58 = (**(code **)(*(int *)pIVar5 + 0x20))();
    }
    FUN_00421ed0(0xb50);
    FUN_00421ed0(0xde1);
    FUN_00421ed0(0xb44);
    FUN_00421ed0(0xb71);
    FUN_00421ed0(0xb60);
    FUN_004101e0();
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x8b,0xffffffff);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x16,1);
    FUN_00421dd0(0xbe2);
    FUN_004220c0(5,6);
    iVar6 = *(int *)(param_1 + 0x36c);
    iStack_54 = 0;
    if (0 < *(int *)(iVar6 + 0x800)) {
      iStack_50 = 0;
      do {
        pWVar11 = *(Watchable **)(iVar6 + iStack_54 * 8);
        if (((pWVar11 != (Watchable *)0x0) &&
            (pIVar1 = (IObjInspect *)(pWVar11 + -8), pIVar1 != (IObjInspect *)0x0)) &&
           ((piVar12 = (int *)(iStack_50 + *(int *)(param_1 + 0x374)), *piVar12 != 0 &&
            ((iVar6 = (**(code **)(*(int *)pIVar1 + 0x20))(), iVar6 != local_58 &&
             ((char)piVar12[0xc] == '\0')))))) {
          pBVar2 = (BaseWatcher *)*piVar12;
          uStack_6c = DAT_00679bb0;
          uStack_60 = uStack_60 & 0xffffff00;
          piVar10 = DAT_00679bb0;
          pBStack_48 = pBVar2;
          if (local_5c[7] == 1) {
            puVar7 = (undefined4 *)FUN_0045a4e0(auStack_40,local_5c,pIVar1);
            piVar10 = (int *)*puVar7;
            uStack_6c = piVar10;
            iVar6 = FUN_0045a490(local_5c,pIVar1);
            if (iVar6 == -1) {
              uStack_60 = CONCAT31(uStack_60._1_3_,1);
            }
          }
          if (((uint)pBVar2 & 0x10000000) != 0) {
            piStack_68 = (int *)0xffffffff;
            uStack_6c = (int *)0xffffffff;
            piVar10 = piStack_68;
          }
          if ((char)piVar12[9] == '\0') {
            uVar8 = (**(code **)(*(int *)pIVar1 + 0x20))();
            cVar3 = FUN_004cc880(uVar8);
            if (cVar3 != '\0') {
              uStack_6c = DAT_00679ba4;
            }
            pBStack_4c = (BaseWatcher *)((uint)uStack_6c >> 0x18);
            uVar4 = ftol();
            uStack_6c = (int *)CONCAT13(uVar4,(undefined3)uStack_6c);
          }
          else {
            cVar3 = FUN_0045a740();
            if (cVar3 == '\0') {
              puVar7 = (undefined4 *)FUN_00561f20(auStack_3c,piVar10);
              uStack_6c = (int *)*puVar7;
            }
          }
          pBVar2 = pBStack_48;
          if (((((uint)pBStack_48 & 0x107f0000) != 0) || ((char)piVar12[0xc] != '\0')) ||
             ((char)piVar12[0xb] != '\0')) {
            FUN_004eada0(piVar12,&uStack_6c,uStack_60,(char)piVar12[0xb]);
          }
          param_1 = local_64;
          if (*(char *)((int)piVar12 + 0x2d) != '\0') {
            if (((uint)pBVar2 & 0x7f0000) == 0) {
              if (((uint)pBVar2 & 0x1000000) == 0) {
                bVar13 = ((uint)pBVar2 & 0x4000000) == 0;
                goto LAB_004ec286;
              }
              uStack_6c = (int *)0x0;
              (**(code **)(*(int *)pIVar1 + 0x74))(&uStack_6c);
              param_1 = local_64;
              if (uStack_6c == (int *)0x0) goto LAB_004ec3ba;
              iVar6 = (**(code **)(*uStack_6c + 0x20))();
              iVar9 = (**(code **)(*local_5c + 0x20))();
              param_1 = local_64;
              if (iVar6 != iVar9) goto LAB_004ec3ba;
            }
            else {
              bVar13 = (char)uStack_60 == '\0';
LAB_004ec286:
              if (bVar13) goto LAB_004ec3ba;
            }
            bVar13 = CShip::get_tgt_lead_fire_pos(local_44,pIVar1,(Vector *)&iStack_38);
            param_1 = local_64;
            if (bVar13) {
              pWStack_2c = (Watchable *)0x0;
              uStack_28 = 0;
              uStack_4 = 1;
              if (pWVar11 != (Watchable *)0x0) {
                BaseWatcher::set_pointer((BaseWatcher *)&pWStack_2c,pWVar11);
              }
              iStack_24 = iStack_38;
              iStack_20 = iStack_34;
              iStack_1c = iStack_30;
              piVar12 = (int *)FUN_0040f130();
              (**(code **)(*piVar12 + 0x44))(piVar12,&iStack_18,&iStack_24);
              iVar9 = local_64;
              iVar6 = *(int *)(local_64 + 0x914);
              piVar12 = *(int **)(iVar6 + 4);
              uStack_4 = 2;
              piVar10 = operator_new(0x28);
              *piVar10 = iVar6;
              if (piVar12 == (int *)0x0) {
                piVar12 = piVar10;
              }
              piVar10[1] = (int)piVar12;
              *(int **)(iVar6 + 4) = piVar10;
              pBStack_4c = (BaseWatcher *)(piVar10 + 2);
              *(int **)piVar10[1] = piVar10;
              pBStack_48 = pBStack_4c;
              if (pBStack_4c != (BaseWatcher *)0x0) {
                *(undefined4 *)pBStack_4c = 0;
                piVar10[3] = 0;
                uStack_4 = CONCAT31(uStack_4._1_3_,4);
                if ((pWStack_2c == (Watchable *)0x0) ||
                   (pWVar11 = pWStack_2c, pWStack_2c == (Watchable *)0x8)) {
                  pWVar11 = (Watchable *)0x0;
                }
                BaseWatcher::set(pBStack_4c,pWVar11);
                piVar10[4] = iStack_24;
                piVar10[5] = iStack_20;
                piVar10[6] = iStack_1c;
                piVar10[7] = iStack_18;
                piVar10[8] = iStack_14;
                piVar10[9] = iStack_10;
              }
              *(int *)(iVar9 + 0x918) = *(int *)(iVar9 + 0x918) + 1;
              uStack_4 = 0xffffffff;
              param_1 = local_64;
              if (pWStack_2c != (Watchable *)0x0) {
                BaseWatcher::set_pointer((BaseWatcher *)&pWStack_2c,(Watchable *)0x0);
                param_1 = local_64;
              }
            }
          }
        }
LAB_004ec3ba:
        iVar6 = *(int *)(param_1 + 0x36c);
        iStack_54 = iStack_54 + 1;
        iStack_50 = iStack_50 + 0x34;
      } while (iStack_54 < *(int *)(iVar6 + 0x800));
    }
  }
  ExceptionList = local_c;
  return;
}

