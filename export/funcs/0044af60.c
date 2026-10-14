
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044af60(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  float10 fVar7;
  int **ppiStack_74;
  int **ppiStack_70;
  int ***pppiStack_6c;
  int **ppiStack_68;
  char *pcStack_64;
  undefined4 *puStack_60;
  int *piStack_5c;
  int *piVar8;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int **ppiStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b9c08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)(**(code **)(*param_2 + 0x18))();
  if (piVar3 != (int *)0xffffffff) {
    piStack_5c = (int *)0x44afa0;
    piStack_44 = piVar3;
    FUN_0044ae80();
    piStack_5c = (int *)0x44afab;
    bVar2 = RtcSlider::is_enabled("shadow_glare");
    if ((bVar2) && (*(char *)(*(int *)(param_1 + 0x40) + 0x10c) != '\0')) {
      piStack_5c = *(int **)Engine_exref;
      puStack_60 = (undefined4 *)0x44afd9;
      piVar8 = piVar3;
      puVar4 = (undefined4 *)(**(code **)(*piStack_5c + 0x90))();
      uStack_38 = *puVar4;
      uStack_34 = puVar4[1];
      uStack_30 = puVar4[2];
      iVar5 = *(int *)(param_1 + 0x40);
      if (*(char *)(iVar5 + 0x10d) == '\0') {
        puStack_60 = (undefined4 *)(iVar5 + 0x110);
        pcStack_64 = (char *)&uStack_38;
        ppiStack_68 = &piStack_44;
        pppiStack_6c = (int ***)0x44b020;
        FUN_00423b60();
        puStack_60 = (undefined4 *)0x44b02c;
        FUN_0041a390();
        piStack_20 = piStack_44;
      }
      else {
        uStack_40 = *(undefined4 *)(iVar5 + 0x120);
        uStack_3c = *(undefined4 *)(iVar5 + 0x124);
        piStack_20 = *(int **)(iVar5 + 0x11c);
      }
      iVar5 = *(int *)(param_1 + 0x40);
      piStack_2c = *(int **)(iVar5 + 0x128);
      uStack_28 = *(undefined4 *)(iVar5 + 300);
      uStack_24 = *(undefined4 *)(iVar5 + 0x130);
      uStack_4 = 0;
      pvStack_c = (void *)0x0;
      puStack_60 = (undefined4 *)0x44b073;
      uStack_1c = uStack_40;
      uStack_18 = uStack_3c;
      FUN_00526a20();
      ppiStack_68 = *(int ***)Engine_exref;
      puStack_60 = &uStack_4;
      pcStack_64 = "1.11_IFLAppearance";
      pppiStack_6c = (int ***)0x44b089;
      iVar5 = (*(code *)**ppiStack_68)();
      if (-1 < iVar5) {
        pppiStack_6c = (int ***)&uStack_38;
        ppiStack_70 = &piStack_2c;
        ppiStack_74 = ppiStack_10;
        (*(code *)(*ppiStack_10)[6])();
      }
      uStack_18 = 0xffffffff;
      pppiStack_6c = (int ***)0x44b0b2;
      FUN_00526a20();
    }
    else {
      param_2 = (int *)0x0;
      uStack_4 = 1;
      FUN_00526a20();
      puStack_60 = *(undefined4 **)Engine_exref;
      piVar8 = (int *)&param_2;
      piStack_5c = (int *)0x5cad80;
      pcStack_64 = (char *)0x44b0e3;
      iVar5 = (**(code **)*puStack_60)();
      if (-1 < iVar5) {
        pppiStack_6c = (int ***)0x0;
        ppiStack_70 = ppiStack_10;
        ppiStack_74 = (int **)0x44b0f3;
        (*(code *)(*ppiStack_10)[7])();
      }
      uStack_18 = 0xffffffff;
      pppiStack_6c = (int ***)0x44b104;
      FUN_00526a20();
    }
    pppiStack_6c = (int ***)piVar1[6];
    if (pppiStack_6c == (int ***)0x0) {
      if (*(char *)((int)piVar1 + 0x13) != '\0') {
        pppiStack_6c = (int ***)0x0;
        ppiStack_70 = (int **)0x44b126;
        fVar7 = (float10)FUN_005b3510();
        if ((float10)_DAT_005c7474 < fVar7) {
          ppiStack_10 = (int **)0x0;
          uStack_18 = 2;
          pppiStack_6c = (int ***)0x44b14f;
          FUN_00526a20();
          ppiStack_74 = *(int ***)Engine_exref;
          pppiStack_6c = &ppiStack_10;
          ppiStack_70 = (int **)0x5cad80;
          iVar5 = (*(code *)**ppiStack_74)();
          if (iVar5 < 0) {
            uStack_18 = 0xffffffff;
            pppiStack_6c = (int ***)0x44b22f;
            FUN_00526a20();
          }
          else {
            pppiStack_6c = (int ***)&stack0xffffffac;
            ppiStack_70 = (int **)0x4;
            ppiStack_74 = ppiStack_10;
            iVar5 = (*(code *)(*ppiStack_10)[8])();
            uStack_18 = 0xffffffff;
            pppiStack_6c = (int ***)0x44b195;
            piVar3 = piVar8;
            FUN_00526a20();
            if (-1 < iVar5) {
              pppiStack_6c = (int ***)0x44b1a0;
              pcVar6 = (char *)(**(code **)(*piVar1 + 0x18))();
              ppiStack_10 = (int **)0x0;
              uStack_18 = 3;
              pppiStack_6c = (int ***)0x44b1b7;
              FUN_00526a20();
              ppiStack_74 = *(int ***)Engine_exref;
              pppiStack_6c = &ppiStack_10;
              ppiStack_70 = (int **)0x5cad80;
              iVar5 = (*(code *)**ppiStack_74)();
              if (-1 < iVar5) {
                pppiStack_6c = (int ***)0x5cbfa0;
                ppiStack_74 = ppiStack_10;
                ppiStack_70 = (int **)pcVar6;
                (*(code *)(*ppiStack_10)[3])();
              }
              uStack_18 = 0xffffffff;
              pppiStack_6c = (int ***)0x44b1f3;
              FUN_00526a20();
            }
          }
        }
      }
      ppiStack_70 = (int **)0x0;
      ppiStack_74 = (int **)0x8;
      pppiStack_6c = (int ***)0x0;
      (**(code **)(**(int **)Renderer_exref + 0x1c))
                (*(int **)Renderer_exref,*(undefined4 *)(param_1 + 0x500),piVar3,0x3f800000);
    }
    else if (pppiStack_6c == (int ***)0x1) {
      ppiStack_10 = (int **)0x0;
      uStack_18 = 4;
      pppiStack_6c = (int ***)0x44b24b;
      FUN_00526a20();
      ppiStack_74 = *(int ***)Engine_exref;
      pppiStack_6c = &ppiStack_10;
      ppiStack_70 = (int **)0x5cad80;
      iVar5 = (*(code *)**ppiStack_74)();
      if (iVar5 == 0) {
        (**(code **)(*piStack_2c + 0x28))(piStack_2c,*(undefined4 *)(param_1 + 0x500),piVar3);
      }
      uStack_34 = 0xffffffff;
      if (piStack_2c != (int *)0x0) {
        (**(code **)(*piStack_2c + 8))(piStack_2c);
      }
    }
    else if (pppiStack_6c == (int ***)0x2) {
      ppiStack_10 = (int **)0x0;
      ppiStack_74 = *(int ***)Engine_exref;
      pppiStack_6c = &ppiStack_10;
      ppiStack_70 = (int **)0x5cad80;
      uStack_18 = 5;
      iVar5 = (*(code *)**ppiStack_74)();
      if (iVar5 == 0) {
        (**(code **)(*piStack_2c + 0x24))(piStack_2c,*(undefined4 *)(param_1 + 0x500),piVar3);
      }
      uStack_34 = 0xffffffff;
      if (piStack_2c != (int *)0x0) {
        (**(code **)(*piStack_2c + 8))(piStack_2c);
      }
    }
    else {
      ppiStack_70 = (int **)0x6d1;
      ppiStack_74 = (int **)0x5cbf24;
      (**(code **)FDUMP_exref)(0x100002,"%s(%d) : *** WARNING: Invalid render type %d\n");
    }
    ppiStack_74 = (int **)0x0;
    uStack_34 = 6;
    iVar5 = (**(code **)**(undefined4 **)Engine_exref)
                      (*(undefined4 **)Engine_exref,"1.11_IFLAppearance",&ppiStack_74);
    if (-1 < iVar5) {
      piStack_5c = piStack_44;
      puStack_60 = (undefined4 *)0x44b337;
      (**(code **)(*piStack_44 + 0x1c))();
    }
    uStack_4 = 0xffffffff;
    if (piStack_44 != (int *)0x0) {
      (**(code **)(*piStack_44 + 8))();
    }
  }
  ExceptionList = pvStack_c;
  return;
}

