
/* WARNING: Removing unreachable block (ram,0x00490f9a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00490cd0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined **ppuVar10;
  int *piVar11;
  int *piStack_118;
  int *piStack_114;
  float *pfStack_110;
  int *piStack_10c;
  undefined4 uStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  int *piStack_f8;
  float afStack_f4 [3];
  int *piStack_e8;
  float fStack_e4;
  int iStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  int *piStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  
  if (*(char *)(param_1 + 0x834) == '\0') {
    iStack_b0 = 1;
    uStack_b4 = 0;
    piStack_b8 = (int *)0x5d3c90;
    *(undefined1 *)(param_1 + 0x834) = 1;
    uStack_bc = 0x490d05;
    FUN_0059ec80();
    iStack_b0 = 1;
    uStack_b4 = 0;
    piStack_b8 = (int *)0x5d3c90;
    uStack_bc = 0x490d19;
    FUN_0059ec80();
    iStack_b0 = 1;
    uStack_b4 = 0;
    piStack_b8 = (int *)0x5d3c58;
    uStack_bc = 0x490d2d;
    FUN_0059ec80();
    uStack_b4 = *(undefined4 *)(param_1 + 0x354);
    piStack_b8 = *(int **)Engine_exref;
    iVar6 = param_1 + 0x81c;
    uStack_bc = 0x490d4b;
    iStack_b0 = iVar6;
    (**(code **)(*piStack_b8 + 0x8c))();
    uStack_bc = *(undefined4 *)(param_1 + 0x354);
    piStack_c0 = *(int **)Engine_exref;
    puStack_c4 = (undefined1 *)0x490d62;
    puVar2 = (undefined4 *)(**(code **)(*piStack_c0 + 0xa0))();
    puVar8 = (undefined4 *)&stack0xffffff58;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    puStack_c4 = &stack0xffffff58;
    uStack_c8 = *(undefined4 *)(param_1 + 0x354);
    piStack_cc = *(int **)Engine_exref;
    uStack_d0 = 0x490e09;
    (**(code **)(*piStack_cc + 0x9c))();
    piStack_dc = *(int **)Engine_exref;
    uStack_d8 = *(undefined4 *)(param_1 + 0x354);
    uStack_d0 = 0;
    uStack_d4 = 0;
    iStack_e0 = 0x490e21;
    (**(code **)(*piStack_dc + 0x6c))();
    fStack_e4 = *(float *)(param_1 + 0x37c);
    piStack_e8 = *(int **)Engine_exref;
    afStack_f4[2] = 6.709093e-39;
    iStack_e0 = iVar6;
    (**(code **)(*piStack_e8 + 0x8c))();
    afStack_f4[0] = *(float *)(param_1 + 0x37c);
    piStack_f8 = *(int **)Engine_exref;
    afStack_f4[2] = 0.0;
    afStack_f4[1] = 0.0;
    iStack_fc = 0x490e51;
    (**(code **)(*piStack_f8 + 0x6c))();
    uStack_100 = *(undefined4 *)(param_1 + 0x3a4);
    piStack_104 = *(int **)Engine_exref;
    uStack_108 = 0x490e69;
    iStack_fc = iVar6;
    (**(code **)(*piStack_104 + 0x8c))();
    uStack_108 = *(undefined4 *)(param_1 + 0x3a4);
    piStack_10c = *(int **)Engine_exref;
    pfStack_110 = (float *)0x490e80;
    pfVar3 = (float *)(**(code **)(*piStack_10c + 0xa0))();
    pfVar9 = afStack_f4;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar9 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar9 = pfVar9 + 1;
    }
    afStack_f4[0] = afStack_f4[0] * (float)_DAT_005d3c50;
    fStack_e4 = fStack_e4 * (float)_DAT_005d3c48;
    piStack_118 = *(int **)Engine_exref;
    pfStack_110 = afStack_f4;
    piStack_114 = *(int **)(param_1 + 0x3a4);
    (**(code **)(*piStack_118 + 0x9c))();
    (**(code **)(**(int **)Engine_exref + 0x6c))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x3a4),0,0);
    FUN_00425b30("Interface\\NeuroNet\\NavMap\\NewNavMap\\NavMapTextures.ini",
                 *(undefined4 *)Data_exref);
    ppuVar10 = &PTR_s_asteroidtest_00611c60;
    piStack_114 = (int *)(param_1 + 0xb68);
    do {
      piStack_118 = (int *)*ppuVar10;
      puStack_c4 = (undefined1 *)0x0;
      iStack_e0 = 0;
      piStack_dc = (int *)((uint)piStack_dc & 0xffffff00);
      FUN_00427020(piStack_118);
      cVar1 = FUN_00420690(&iStack_e0);
      if (cVar1 == '\0') {
        piVar11 = (int *)FUN_004206c0(&piStack_c0,&iStack_e0);
        iVar6 = *piVar11;
        *(int *)(param_1 + 0x894) = iVar6;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x894);
      }
      puVar7 = puStack_c4;
      if ((iVar6 == *(int *)(param_1 + 0x884)) ||
         (puVar7 = (undefined1 *)(iVar6 + 0x28), puVar7 == (undefined1 *)0x0)) {
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                   "cmn\\shapedb.h",0xf2,piStack_118);
      }
      *piStack_114 = (int)puVar7;
      ppuVar10 = ppuVar10 + 1;
      piStack_114 = piStack_114 + 1;
    } while ((int)ppuVar10 < 0x611c84);
    piVar11 = (int *)0x0;
    iStack_e0 = 0;
    piStack_dc = (int *)((uint)piStack_dc & 0xffffff00);
    FUN_00427020("nav_waypathtexture");
    cVar1 = FUN_00420690(&iStack_e0);
    if (cVar1 == '\0') {
      FUN_004206c0(&piStack_118,&iStack_e0);
      *(int **)(param_1 + 0x894) = piStack_118;
      piVar4 = piStack_118;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x894);
    }
    if ((piVar4 == *(int **)(param_1 + 0x884)) || (piVar11 = piVar4 + 10, piVar11 == (int *)0x0)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                 "cmn\\shapedb.h",0xf2,"nav_waypathtexture");
    }
    *(int **)(param_1 + 0xbd0) = piVar11;
    iVar6 = 0;
    piStack_114 = (int *)(param_1 + 0xbd4);
    do {
      iVar6 = iVar6 + 1;
      sprintf((char *)&uStack_bc,"TLRanimated_%.2d",iVar6);
      piVar11 = (int *)0x0;
      iStack_e0 = 0;
      piStack_dc = (int *)((uint)piStack_dc & 0xffffff00);
      FUN_00427020(&uStack_bc);
      cVar1 = FUN_00420690(&iStack_e0);
      if (cVar1 == '\0') {
        FUN_004206c0(&piStack_118,&iStack_e0);
        *(int **)(param_1 + 0x894) = piStack_118;
        piVar4 = piStack_118;
      }
      else {
        piVar4 = *(int **)(param_1 + 0x894);
      }
      if ((piVar4 == *(int **)(param_1 + 0x884)) || (piVar11 = piVar4 + 10, piVar11 == (int *)0x0))
      {
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                   "cmn\\shapedb.h",0xf2,&uStack_bc);
      }
      *piStack_114 = (int)piVar11;
      piStack_114 = piStack_114 + 1;
    } while (iVar6 < 0x10);
  }
  return;
}

