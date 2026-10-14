
void FUN_0046f6d0(uint param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  IBase *pIVar5;
  uint uVar6;
  ISystem *pIVar7;
  undefined4 uVar8;
  BaseDataList *this;
  BaseData *pBVar9;
  GoodInfo *pGVar10;
  code *pcVar11;
  byte bStack_66;
  undefined1 uStack_65;
  int iStack_64;
  int iStack_60;
  int local_5c;
  uint uStack_58;
  int iStack_54;
  void *local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  int iStack_30;
  void *pvStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bb9b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004708d0(DAT_0066dac0,DAT_0066dac4);
  FUN_00470bf0();
  iVar1 = DAT_0066da94;
  puVar4 = (undefined4 *)FUN_0053e430(&local_5c);
  FUN_00470b30(&local_50,*puVar4,iVar1);
  pIVar5 = Universe::GetFirstBase();
  do {
    if (pIVar5 == (IBase *)0x0) {
      ExceptionList = local_c;
      return;
    }
    iStack_64 = (**(code **)(*(int *)pIVar5 + 0x5c))();
    uVar6 = (**(code **)(*(int *)pIVar5 + 0x10))();
    pIVar7 = Universe::get_system(uVar6);
    if ((pIVar7 != (ISystem *)0x0) && (iStack_64 != 0)) {
      uVar8 = (**(code **)(*(int *)pIVar5 + 8))();
      cVar2 = FUN_004a2310(uVar8);
      if (cVar2 != '\0') {
        bStack_66 = 0;
        FUN_004c4da0(iStack_64,&bStack_66,0,0);
        bVar3 = (**(code **)(*(int *)pIVar5 + 0x60))();
        bStack_66 = bStack_66 | bVar3;
        if ((bStack_66 & 4) != 0) {
          FUN_00432240(&iStack_60,&iStack_64);
          pcVar11 = free_exref;
          if (iStack_60 == DAT_0066da94) {
            uVar8 = (**(code **)(*(int *)pIVar7 + 0xc))(&DAT_0066fc60,DAT_006119f8);
            FUN_004347e0(DAT_0067eca8,uVar8);
            local_50 = (void *)0x0;
            uStack_4c = 0;
            FUN_00413df0(&DAT_0066fc60,0xffffffff);
            iStack_30 = iStack_64;
            uStack_4 = 0;
            pvStack_2c = (void *)0x0;
            uStack_28 = 0;
            FUN_00413df0(local_50,0xffffffff);
            uStack_4 = CONCAT31(uStack_4._1_3_,1);
            FUN_00470920(auStack_40,&iStack_30);
            pcVar11 = free_exref;
            if (pvStack_2c != (void *)0x0) {
              free(pvStack_2c);
              pvStack_2c = (void *)0x0;
              uStack_28 = 0;
            }
            uStack_4 = 0xffffffff;
            if (local_50 != (void *)0x0) {
              free(local_50);
              local_50 = (void *)0x0;
              uStack_4c = 0;
            }
          }
          FUN_00432240(&local_5c,&iStack_64);
          iStack_60 = local_5c;
          if (local_5c == DAT_0066daa8) {
            uVar8 = (**(code **)(*(int *)pIVar5 + 8))(&DAT_0066fc60,DAT_006119f8);
            FUN_004347e0(DAT_0067eca8,uVar8);
            iStack_48 = 0;
            uStack_44 = 0;
            FUN_00413df0(&DAT_0066fc60,0xffffffff);
            iStack_24 = iStack_64;
            uStack_4 = 2;
            iStack_20 = 0;
            uStack_1c = 0;
            FUN_00413df0(iStack_48,0xffffffff);
            uStack_4 = CONCAT31(uStack_4._1_3_,3);
            FUN_00470920(auStack_38,&iStack_24);
            if (iStack_20 != 0) {
              (*pcVar11)(iStack_20);
              iStack_20 = 0;
              uStack_1c = 0;
            }
            uStack_4 = 0xffffffff;
            if (iStack_48 != 0) {
              (*pcVar11)(iStack_48);
              iStack_48 = 0;
              uStack_44 = 0;
            }
          }
          uVar6 = (*(code *)**(undefined4 **)pIVar5)();
          this = BaseDataList_get();
          pBVar9 = BaseDataList::get_base_data(this,uVar6);
          if ((pBVar9 != (BaseData *)0x0) && (pBVar9 != (BaseData *)0xfffffff0)) {
            uStack_58 = Arch2Good(param_1);
            uVar8 = 0;
            uStack_65 = 1;
            FUN_00432240(&iStack_54,&uStack_58);
            iVar1 = iStack_54;
            if (iStack_54 == *(int *)(pBVar9 + 0x14)) {
              pGVar10 = GoodList::find_by_archetype(param_1);
              if (pGVar10 != (GoodInfo *)0x0) {
                uVar8 = ftol();
                goto LAB_0046f9fb;
              }
            }
            else {
              uVar8 = ftol();
              if (*(int *)(iVar1 + 0x1c) == 0) {
LAB_0046f9fb:
                uStack_65 = 0;
              }
            }
            iStack_18 = iStack_64;
            uStack_10 = uStack_65;
            uStack_14 = uVar8;
            FUN_00470c90(DAT_0066dac4,1,&iStack_18);
          }
        }
      }
    }
    pIVar5 = Universe::GetNextBase();
  } while( true );
}

