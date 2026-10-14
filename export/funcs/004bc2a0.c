
void __fastcall FUN_004bc2a0(int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  int *piVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  FmtStr *pFVar9;
  size_t sVar10;
  undefined4 *puVar11;
  wchar_t *pwVar12;
  int iVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  wchar_t *pwStack_64;
  int *piStack_60;
  int local_5c;
  int iStack_58;
  undefined4 local_54;
  StyleNode local_50 [8];
  StyleNode aSStack_48 [8];
  StyleNode aSStack_40 [8];
  StyleNode aSStack_38 [8];
  undefined1 local_30 [4];
  int *local_2c;
  int local_28;
  FmtStr aFStack_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd446;
  pvStack_c = ExceptionList;
  local_54 = *(undefined4 *)(param_1 + 0x334);
  ExceptionList = &pvStack_c;
  local_5c = param_1;
  FUN_0057b370();
  local_2c = (int *)FUN_0042a7e0(0,0);
  local_28 = 0;
  local_4 = 0;
  piVar7 = (int *)StyleNode::StyleNode(local_50,0x9ca4);
  local_4._0_1_ = 1;
  puStack_70 = (undefined4 *)(**(code **)(*piVar7 + 0x1c))();
  local_4._0_1_ = 2;
  FUN_0046c800(&iStack_58,local_2c,&puStack_70);
  local_4._0_1_ = 1;
  if (puStack_70 != (undefined4 *)0x0) {
    (**(code **)*puStack_70)(1);
    puStack_70 = (undefined4 *)0x0;
  }
  local_4._0_1_ = 0;
  StyleNode::~StyleNode(local_50);
  bVar15 = DAT_00672338 == 0;
  *(int *)(param_1 + 0x338) = DAT_00672338;
  if (bVar15) {
    FUN_0057da40(0x40f,local_30);
  }
  else {
    piStack_60 = (int *)*DAT_00672334;
    bVar3 = false;
    bVar15 = false;
    if (piStack_60 != DAT_00672334) {
      do {
        piVar5 = piStack_60;
        piVar7 = piStack_60 + 2;
        FUN_004ba860(piVar7,&DAT_0066fc60,DAT_006119f8,1);
        pwStack_64 = &DAT_0066fc60;
        if (*(char *)(param_1 + 0x37c) == '\0') {
          if (DAT_0066fc60 == 0x2a) {
            pwStack_64 = &DAT_0066fc62;
            goto LAB_004bc5bb;
          }
        }
        else if (DAT_0066fc60 != 0x2a) {
          if (!bVar15) {
            iVar8 = FUN_004c4fb0();
            iVar13 = 0;
            iStack_58 = iVar8;
            if (0 < iVar8) {
              do {
                pFVar9 = (FmtStr *)FUN_004c4ff0(iVar13);
                if (pFVar9 != (FmtStr *)0x0) {
                  FmtStr::FmtStr(aFStack_24,pFVar9);
                  local_4._0_1_ = 3;
                  FUN_004ba5a0(aFStack_24);
                  iVar8 = DAT_006119f8 / 2;
                  FUN_004ba860(aFStack_24,&DAT_0066dc60,iVar8,0);
                  FUN_004ba860(piVar7,&DAT_0066dc60 + iVar8,iVar8,0);
                  iVar8 = wcscmp(&DAT_0066dc60 + iVar8,&DAT_0066dc60);
                  local_4._0_1_ = 0;
                  if (iVar8 == 0) {
                    bVar15 = true;
                    FmtStr::~FmtStr(aFStack_24);
                    piVar7 = (int *)StyleNode::StyleNode(aSStack_48,0x3d0a);
                    local_4._0_1_ = 4;
                    puStack_70 = (undefined4 *)(**(code **)(*piVar7 + 0x1c))();
                    local_4._0_1_ = 5;
                    FUN_0046c800(local_50,local_2c,&puStack_70);
                    local_4._0_1_ = 4;
                    if (puStack_70 != (undefined4 *)0x0) {
                      (**(code **)*puStack_70)(1);
                      puStack_70 = (undefined4 *)0x0;
                    }
                    local_4._0_1_ = 0;
                    StyleNode::~StyleNode(aSStack_48);
                    goto LAB_004bc5bb;
                  }
                  FmtStr::~FmtStr(aFStack_24);
                  iVar8 = iStack_58;
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < iVar8);
            }
          }
          piVar7 = (int *)StyleNode::StyleNode(aSStack_40,0x9ca4);
          local_4._0_1_ = 6;
          puStack_6c = (undefined4 *)(**(code **)(*piVar7 + 0x1c))();
          piVar7 = local_2c + 1;
          local_4._0_1_ = 7;
          iVar8 = FUN_0042a7e0(local_2c,local_2c[1]);
          *piVar7 = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          FUN_0046ea00(iVar8 + 8,&puStack_6c);
          local_28 = local_28 + 1;
          local_4._0_1_ = 6;
          if (puStack_6c != (undefined4 *)0x0) {
            (**(code **)*puStack_6c)(1);
            puStack_6c = (undefined4 *)0x0;
          }
          local_4._0_1_ = 0;
          StyleNode::~StyleNode(aSStack_40);
LAB_004bc5bb:
          if (bVar3) {
            wcscpy(&DAT_0066dc60,L"\n\n");
            uVar17 = 0;
            puVar16 = local_30;
            sVar10 = wcslen(&DAT_0066dc60);
            FUN_0057e2c0(&DAT_0066dc60,sVar10,puVar16,uVar17);
          }
          bVar2 = false;
          if (piVar5[3] == 0x723) {
            bVar2 = true;
            piVar7 = (int *)StyleNode::StyleNode(aSStack_38,0x3d0a);
            local_4._0_1_ = 8;
            puStack_68 = (undefined4 *)(**(code **)(*piVar7 + 0x1c))();
            piVar5 = local_2c;
            puVar14 = (undefined4 *)local_2c[1];
            piVar7 = local_2c + 1;
            local_4._0_1_ = 9;
            puVar11 = operator_new(0xc);
            *puVar11 = piVar5;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = puVar11;
            }
            puVar11[1] = puVar14;
            *piVar7 = (int)puVar11;
            *(undefined4 **)puVar11[1] = puVar11;
            FUN_0046ea00(puVar11 + 2,&puStack_68);
            local_28 = local_28 + 1;
            local_4._0_1_ = 8;
            if (puStack_68 != (undefined4 *)0x0) {
              (**(code **)*puStack_68)(1);
              puStack_68 = (undefined4 *)0x0;
            }
            local_4._0_1_ = 0;
            StyleNode::~StyleNode(aSStack_38);
          }
          pwVar12 = wcschr(&DAT_0066fc60,L':');
          param_1 = local_5c;
          pwVar4 = pwStack_64;
          if ((pwVar12 != (wchar_t *)0x0) || (bVar2)) {
            uVar17 = 0;
            puVar16 = local_30;
            sVar10 = wcslen(pwStack_64);
            FUN_0057e2c0(pwVar4,sVar10,puVar16,uVar17);
            param_1 = local_5c;
          }
          else {
            if (*(char *)(local_5c + 0x37c) == '\0') {
              uVar17 = 0x63c;
            }
            else {
              cVar6 = FUN_0045dcd0();
              if ((cVar6 == '\0') || (bVar3)) {
                uVar17 = 0x626;
              }
              else {
                uVar17 = 0x3db;
              }
            }
            FUN_004347e0(DAT_0067eca8,uVar17,&DAT_0066dc60,DAT_006119f8);
            wcscat(&DAT_0066dc60,pwStack_64);
            uVar17 = 0;
            puVar16 = local_30;
            sVar10 = wcslen(&DAT_0066dc60);
            FUN_0057e2c0(&DAT_0066dc60,sVar10,puVar16,uVar17);
          }
          bVar3 = true;
        }
        piStack_60 = (int *)*piStack_60;
      } while (piStack_60 != DAT_00672334);
    }
  }
  FUN_0057b3e0(local_30);
  piVar5 = local_2c;
  local_4 = 0xffffffff;
  piVar7 = (int *)*local_2c;
  while (piVar7 != piVar5) {
    piVar1 = (int *)*piVar7;
    *(int *)piVar7[1] = *piVar7;
    *(int *)(*piVar7 + 4) = piVar7[1];
    FUN_0046ea80(0);
    FUN_005b7e1d(piVar7);
    local_28 = local_28 + -1;
    piVar7 = piVar1;
  }
  FUN_005b7e1d(local_2c);
  ExceptionList = pvStack_c;
  return;
}

