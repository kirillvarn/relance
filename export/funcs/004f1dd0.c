
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f1dd0(int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CObject *pCVar4;
  undefined4 uVar5;
  CShip *this;
  int *piVar6;
  int *piVar7;
  IObjInspect *pIVar8;
  undefined4 local_70;
  int *local_6c;
  int local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  Watchable *pWStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [20];
  int local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bf0e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_68 = FUN_0054baf0();
  if (local_68 != 0) {
    local_6c = (int *)FUN_0040f130();
    local_24 = DAT_00610850 + -1;
    local_20 = DAT_00610854 + -1;
    pIVar8 = (IObjInspect *)0x0;
    while( true ) {
      local_70 = 9;
      if (pIVar8 == (IObjInspect *)0x0) {
        pIVar8 = (IObjInspect *)FUN_00540fc0(&local_70);
      }
      else {
        pIVar8 = *(IObjInspect **)(pIVar8 + 0x14);
      }
      if (pIVar8 == (IObjInspect *)0x0) break;
      cVar2 = (**(code **)(*(int *)pIVar8 + 0x158))();
      if (cVar2 == '\0') {
        if (((pIVar8 == (IObjInspect *)0xfffffff4) ||
            (pCVar4 = *(CObject **)(pIVar8 + 0x10), pCVar4 == (CObject *)0x0)) ||
           (((byte)*(undefined4 *)(pCVar4 + 0x4c) & 1) != 1)) {
          pCVar4 = (CObject *)0x0;
        }
        bVar3 = PhySys::GetCollisionState(pCVar4);
        piVar6 = local_6c;
        if (bVar3) {
          iVar1 = *local_6c;
          fStack_64 = 0.0;
          fStack_60 = 0.0;
          uStack_5c = 0;
          uVar5 = (*(code *)**(undefined4 **)pIVar8)();
          cVar2 = (**(code **)(iVar1 + 0x44))(piVar6,&fStack_64,uVar5);
          if (cVar2 != '\0') {
            bVar3 = false;
            if (_DAT_005c7474 <= fStack_64) {
              if ((float)local_24 < fStack_64) {
                bVar3 = true;
                fStack_64 = (float)local_24;
              }
            }
            else {
              fStack_64 = 0.0;
              bVar3 = true;
            }
            if (_DAT_005c7474 <= fStack_60) {
              if ((float)local_20 < fStack_60) {
                bVar3 = true;
                fStack_60 = (float)local_20;
              }
            }
            else {
              fStack_60 = 0.0;
              bVar3 = true;
            }
            if (!bVar3) {
              if (((local_68 == -0xc) || (this = *(CShip **)(local_68 + 0x10), this == (CShip *)0x0)
                  ) || ((*(uint *)(this + 0x4c) & 0x503) != 0x503)) {
                this = (CShip *)0x0;
              }
              bVar3 = CShip::get_tgt_lead_fire_pos(this,pIVar8,(Vector *)&uStack_58);
              if (bVar3) {
                pWStack_4c = (Watchable *)0x0;
                uStack_48 = 0;
                uStack_4 = 0;
                BaseWatcher::set((BaseWatcher *)&pWStack_4c,(Watchable *)0x0);
                uStack_4 = 1;
                if ((Watchable *)(pIVar8 + 8) != pWStack_4c) {
                  BaseWatcher::set_pointer((BaseWatcher *)&pWStack_4c,(Watchable *)(pIVar8 + 8));
                }
                uStack_44 = uStack_58;
                uStack_40 = uStack_54;
                uStack_3c = uStack_50;
                piVar6 = (int *)FUN_0040f130();
                (**(code **)(*piVar6 + 0x44))(piVar6,auStack_38,&uStack_44);
                iVar1 = *(int *)(param_1 + 0x914);
                piVar6 = *(int **)(iVar1 + 4);
                uStack_4 = 2;
                piVar7 = operator_new(0x28);
                *piVar7 = iVar1;
                if (piVar6 == (int *)0x0) {
                  piVar6 = piVar7;
                }
                piVar7[1] = (int)piVar6;
                *(int **)(iVar1 + 4) = piVar7;
                *(int **)piVar7[1] = piVar7;
                FUN_004f3820(piVar7 + 2,&pWStack_4c);
                *(int *)(param_1 + 0x918) = *(int *)(param_1 + 0x918) + 1;
                uStack_4 = 0xffffffff;
                if (pWStack_4c != (Watchable *)0x0) {
                  BaseWatcher::set_pointer((BaseWatcher *)&pWStack_4c,(Watchable *)0x0);
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

