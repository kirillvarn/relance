
void __fastcall FUN_0044b570(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *unaff_EBX;
  int *unaff_EBP;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_5c;
  void **ppvStack_58;
  int **ppiStack_54;
  undefined4 uStack_40;
  int *local_3c;
  int *piStack_38;
  void *local_34;
  undefined1 local_30 [4];
  int *piStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined1 local_20;
  int *local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9c50;
  pvStack_c = ExceptionList;
  ppiStack_54 = (int **)0x44b593;
  ExceptionList = &pvStack_c;
  FUN_0041a670();
  uStack_5c = *(int **)(param_1 + 0x500);
  ppiStack_54 = (int **)0x748;
  ppvStack_58 = (void **)0x5cbf24;
  FUN_00422610();
  FUN_00422950(*(undefined4 *)(param_1 + 0x500));
  FUN_00422120(2);
  FUN_00421dd0(0xb71);
  FUN_00422190(1);
  FUN_00421dd0(0xb44);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(5,6);
  ppiStack_54 = *(int ***)(param_1 + 0x500);
  ppvStack_58 = (void **)0x44b5fb;
  FUN_0044b450();
  ppiStack_54 = (int **)0x44b600;
  FUN_00454760();
  ppiStack_54 = (int **)((int)&uStack_40 + 2);
  ppvStack_58 = (void **)0x0;
  uStack_5c = (int *)((int)&uStack_40 + 3);
  FUN_0044c4b0();
  local_4 = 0;
  ppiStack_54 = (int **)0x44b622;
  iVar4 = FUN_005593c0();
  piVar7 = (int *)**(int **)(iVar4 + 4);
  if (piVar7 != *(int **)(iVar4 + 4)) {
    do {
      if (*(int *)(piVar7[2] + 8) == param_1) {
        ppiStack_54 = (int **)((int)&uStack_40 + 1);
        uStack_40._0_2_ = CONCAT11(*(undefined1 *)(piVar7[2] + 0x16),(undefined1)uStack_40);
        ppvStack_58 = &local_34;
        uStack_5c = (int *)0x44b652;
        FUN_0044c520();
        ppiStack_54 = (int **)local_30;
        ppvStack_58 = &local_34;
        uStack_5c = (int *)0x44b665;
        FUN_0046d660();
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(iVar4 + 4));
  }
  ppiStack_54 = &local_3c;
  ppvStack_58 = (void **)0x44b67a;
  FUN_0053e430();
  if (local_3c != local_1c) {
    do {
      uStack_40._0_2_ = CONCAT11((char)local_3c[3],(undefined1)uStack_40);
      ppiStack_54 = (int **)0x44b690;
      iVar4 = FUN_005593c0();
      piVar7 = (int *)**(int **)(iVar4 + 4);
      if (piVar7 != *(int **)(iVar4 + 4)) {
        do {
          piVar6 = (int *)piVar7[2];
          if ((piVar6[2] == param_1) && (*(char *)((int)piVar6 + 0x16) == uStack_40._1_1_)) {
            uStack_5c = (int *)0x44b6b8;
            ppvStack_58 = (void **)param_1;
            ppiStack_54 = (int **)piVar6;
            FUN_0041a6f0();
            ppiStack_54 = *(int ***)(param_1 + 0x500);
            ppvStack_58 = (void **)0x44b6c9;
            (**(code **)(*piVar6 + 0x1c))();
            ppiStack_54 = (int **)0x44b6ce;
            FUN_0041a720();
          }
          piVar7 = (int *)*piVar7;
        } while (piVar7 != (int *)*(int *)(iVar4 + 4));
      }
      ppiStack_54 = (int **)0x44b6de;
      FUN_0044cd90();
    } while (local_3c != local_1c);
  }
  ppiStack_54 = (int **)0x44b6ed;
  FUN_0041a6b0();
  local_3c = (int *)*local_1c;
  if (local_3c != local_1c) {
    do {
      iVar4 = local_3c[3];
      ppiStack_54 = (int **)0x44b708;
      iVar5 = FUN_005593c0();
      piVar7 = (int *)**(int **)(iVar5 + 4);
      if (piVar7 != *(int **)(iVar5 + 4)) {
        do {
          piVar6 = (int *)piVar7[2];
          if ((piVar6[2] == param_1) && (*(char *)((int)piVar6 + 0x16) == (char)iVar4)) {
            ppiStack_54 = *(int ***)(param_1 + 0x500);
            ppvStack_58 = (void **)0x44b72c;
            (**(code **)(*piVar6 + 0x20))();
          }
          piVar7 = (int *)*piVar7;
        } while (piVar7 != (int *)*(int *)(iVar5 + 4));
      }
      ppiStack_54 = (int **)0x44b73c;
      FUN_0044cd90();
    } while (local_3c != local_1c);
  }
  ppiStack_54 = (int **)0x25;
  ppvStack_58 = (void **)0x44b74d;
  iVar4 = FUN_005792b0();
  if (iVar4 != 0) {
    ppiStack_54 = (int **)0x29;
    ppvStack_58 = (void **)0x44b75b;
    iVar4 = FUN_005792b0();
    if (0 < iVar4) {
      ppiStack_54 = *(int ***)(param_1 + 0x500);
      ppvStack_58 = *(void ***)(param_1 + 0x101c);
      uStack_5c = (int *)(param_1 + 0x81c);
      FUN_00558000();
    }
  }
  ppiStack_54 = (int **)0x2;
  ppvStack_58 = (void **)0x44b786;
  FUN_00422120();
  ppvStack_58 = (void **)0xb71;
  uStack_5c = (int *)0x44b790;
  FUN_00421dd0();
  uStack_5c = (int *)0x1;
  FUN_00422190();
  FUN_00421dd0(0xb44);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(5,6);
  FUN_00556f20(0x3f800000,0x3f800000,0x3f800000);
  ppiStack_54 = (int **)0x44b7d0;
  thunk_FUN_004101e0();
  uStack_5c = *(int **)Pipeline_exref;
  ppiStack_54 = (int **)auStack_24;
  ppvStack_58 = (void **)0x1a;
  uStack_28 = 0x1a;
  piStack_2c = uStack_5c;
  (**(code **)(*uStack_5c + 0xf4))();
  (**(code **)(*piStack_38 + 0xf0))(piStack_38,local_34,0);
  local_1c = (int *)CONCAT31(local_1c._1_3_,1);
  iVar4 = (**(code **)(**(int **)Alchemy_exref + 0x74))(*(int **)Alchemy_exref);
  if (-1 < iVar4) {
    piVar7 = (int *)*piStack_38;
    if (piVar7 != piStack_38) {
      do {
        uStack_5c._0_2_ = CONCAT11((char)piVar7[3],(undefined1)uStack_5c);
        iVar4 = FUN_005593c0();
        piVar6 = (int *)**(int **)(iVar4 + 4);
        if (piVar6 != *(int **)(iVar4 + 4)) {
          do {
            piVar2 = (int *)piVar6[2];
            if ((piVar2[2] == param_1) && (*(char *)((int)piVar2 + 0x16) == uStack_5c._1_1_)) {
              (**(code **)(*piVar2 + 0x24))(*(undefined4 *)(param_1 + 0x500));
            }
            piVar6 = (int *)*piVar6;
          } while (piVar6 != (int *)*(int *)(iVar4 + 4));
        }
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0xe) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xe);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xe);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          piVar6 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar6[2]) {
            do {
              piVar7 = piVar6;
              piVar6 = (int *)piVar7[1];
            } while (piVar7 == (int *)piVar6[2]);
          }
          if ((int *)piVar7[2] != piVar6) {
            piVar7 = piVar6;
          }
        }
      } while (piVar7 != piStack_38);
    }
    FUN_00456740(param_1,*(undefined4 *)(param_1 + 0x500));
    (**(code **)(**(int **)Alchemy_exref + 0x78))(*(int **)Alchemy_exref);
  }
  local_20 = 0;
  (**(code **)(*unaff_EBP + 0xf0))(unaff_EBP,unaff_EBX,uStack_40);
  piStack_2c = (int *)0xffffffff;
  if (piStack_38 == (int *)0x0) {
    piStack_38 = (int *)0x0;
    puVar3 = (undefined4 *)*unaff_EBX;
    while (puVar3 != unaff_EBX) {
      puVar8 = puVar3;
      FUN_0044cd90();
      FUN_0044c730(&uStack_5c,puVar3);
      puVar3 = puVar8;
    }
  }
  else {
    FUN_0044cb00(unaff_EBX[1]);
    unaff_EBX[1] = uStack_40;
    piStack_38 = (int *)0x0;
    *unaff_EBX = unaff_EBX;
    unaff_EBX[2] = unaff_EBX;
  }
  FUN_005b7e1d(unaff_EBX);
  piStack_38 = (int *)0x0;
  FUN_005b7e1d(uStack_40);
  ExceptionList = local_34;
  return;
}

