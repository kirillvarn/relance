
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a5270(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 uStack_89c;
  float fStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  float fStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  int local_820;
  
  iVar4 = 0;
  local_820 = 0;
  if (*(int *)(param_1 + 0x578) < *(int *)(param_1 + 0x588)) {
    iVar1 = *(int *)(param_1 + 0x578) * 0x60;
    puVar7 = (undefined4 *)(param_1 + 0x5f8);
    do {
      iVar4 = *(int *)(param_1 + 0x584);
      uStack_83c = 0;
      uStack_840 = 0;
      uStack_844 = 2;
      uStack_848 = 0x4a52d9;
      (**(code **)(*(int *)puVar7[-0xf] + 0xa8))();
      uStack_848 = 0;
      uStack_84c = 0;
      uStack_850 = 2;
      uStack_854 = 0x4a52ea;
      (**(code **)(*(int *)puVar7[-10] + 0xa8))();
      uStack_854 = 0;
      uStack_858 = 0;
      uStack_85c = 2;
      uStack_860 = 0x4a52fb;
      (**(code **)(*(int *)puVar7[-5] + 0xa8))();
      uStack_860 = 0;
      uStack_864 = 0;
      uStack_868 = 2;
      uStack_86c = 0x4a530b;
      (**(code **)(*(int *)*puVar7 + 0xa8))();
      uStack_86c = 0;
      uStack_870 = 0;
      uStack_874 = 1;
      uStack_878 = 0x4a531c;
      (**(code **)(*(int *)puVar7[-0xf] + 0xa8))();
      uStack_878 = 0;
      uStack_87c = 0;
      uStack_880 = 1;
      uStack_884 = 0x4a532d;
      (**(code **)(*(int *)puVar7[-10] + 0xa8))();
      uStack_884 = 0;
      uStack_888 = 0;
      fStack_88c = 1.4013e-45;
      uStack_890 = 0x4a533e;
      (**(code **)(*(int *)puVar7[-5] + 0xa8))();
      uStack_890 = 0;
      uStack_894 = 0;
      fStack_898 = 1.4013e-45;
      uStack_89c = 0x4a534e;
      (**(code **)(*(int *)*puVar7 + 0xa8))();
      uVar2 = *(uint *)(iVar4 + iVar1 + 0xc);
      uVar5 = **(undefined4 **)(param_1 + 0x58c);
      puVar6 = (undefined4 *)0x42b;
      if (uVar2 < *(uint *)(param_1 + 0x590)) {
        uVar5 = (*(undefined4 **)(param_1 + 0x58c))[uVar2];
        puVar6 = *(undefined4 **)(param_1 + 0x594 + uVar2 * 4);
      }
      uStack_89c = 0;
      (**(code **)(*(int *)puVar7[-0xf] + 0xa8))(4,uVar5);
      (**(code **)(*(int *)puVar7[-10] + 0xa8))(3,puVar6,0);
      FUN_0041c970(&uStack_878,0x400);
      (**(code **)(*(int *)*puVar7 + 0xa8))(0x1d,&uStack_878,0);
      FUN_0058a5d0();
      uVar2 = FUN_004145a0();
      if (uVar2 < 2) {
        fStack_898 = (float)puVar6[1] - (float)_DAT_005d4310;
        puVar3 = &uStack_89c;
        uStack_89c = *puVar6;
        uStack_894 = puVar6[2];
      }
      else {
        puVar3 = &uStack_890;
        uStack_890 = *puVar6;
        fStack_88c = (float)puVar6[1];
        uStack_888 = puVar6[2];
      }
      (**(code **)(*(int *)*puVar7 + 0xa8))(6,puVar3,0);
      bVar8 = puVar6 != *(undefined4 **)(param_1 + 0x580);
      if (bVar8) {
        (**(code **)(*(int *)puVar7[-10] + 0xa8))(0xc,0,0);
      }
      else {
        (**(code **)(*(int *)puVar7[-10] + 0xa8))(0xc,1);
      }
      (**(code **)(*(int *)puVar7[-5] + 0xa8))(0xc,!bVar8,0);
      iVar4 = local_820 + 1;
      puVar7 = puVar7 + 1;
      if (4 < iVar4) {
        return;
      }
      iVar1 = iVar1 + 0x60;
      local_820 = iVar4;
    } while ((int)puVar6 + 1 < *(int *)(param_1 + 0x588));
  }
  puVar7 = (undefined4 *)(param_1 + 0x5bc + iVar4 * 4);
  iVar4 = 5 - iVar4;
  do {
    uStack_83c = 0;
    uStack_840 = 1;
    uStack_844 = 2;
    uStack_848 = 0x4a54b1;
    (**(code **)(*(int *)*puVar7 + 0xa8))();
    uStack_848 = 0;
    uStack_84c = 1;
    uStack_850 = 2;
    uStack_854 = 0x4a54c2;
    (**(code **)(*(int *)puVar7[5] + 0xa8))();
    uStack_854 = 0;
    uStack_858 = 1;
    uStack_85c = 2;
    uStack_860 = 0x4a54d3;
    (**(code **)(*(int *)puVar7[10] + 0xa8))();
    uStack_860 = 0;
    uStack_864 = 1;
    uStack_868 = 2;
    uStack_86c = 0x4a54e4;
    (**(code **)(*(int *)puVar7[0xf] + 0xa8))();
    uStack_86c = 0;
    uStack_870 = 1;
    uStack_874 = 1;
    uStack_878 = 0x4a54f4;
    (**(code **)(*(int *)*puVar7 + 0xa8))();
    uStack_878 = 0;
    uStack_87c = 1;
    uStack_880 = 1;
    uStack_884 = 0x4a5505;
    (**(code **)(*(int *)puVar7[5] + 0xa8))();
    uStack_884 = 0;
    uStack_888 = 1;
    fStack_88c = 1.4013e-45;
    uStack_890 = 0x4a5516;
    (**(code **)(*(int *)puVar7[10] + 0xa8))();
    uStack_890 = 0;
    uStack_894 = 1;
    fStack_898 = 1.4013e-45;
    uStack_89c = 0x4a5527;
    (**(code **)(*(int *)puVar7[0xf] + 0xa8))();
    uStack_89c = 0;
    (**(code **)(*(int *)*puVar7 + 0xa8))(4,**(undefined4 **)(param_1 + 0x58c));
    (**(code **)(*(int *)puVar7[10] + 0xa8))(0x1e,0,0);
    (**(code **)(*(int *)puVar7[0xf] + 0xa8))(0x1e,0,0);
    puVar7 = puVar7 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

