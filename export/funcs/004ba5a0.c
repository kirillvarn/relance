
void FUN_004ba5a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  ISystem *pIVar3;
  IBase *pIVar4;
  GoodInfo *pGVar5;
  int iVar6;
  uint uVar7;
  IZone *pIVar8;
  undefined4 uVar9;
  ushort *puStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bd3c2;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  for (puVar1 = (undefined4 *)*param_1; ExceptionList = ppvVar2, puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    switch(*(undefined2 *)(puVar1 + 2)) {
    case 0x21:
      FUN_004ba5a0(puVar1[1]);
      break;
    case 0x42:
      pIVar4 = Universe::get_base(puVar1[1]);
      if (pIVar4 == (IBase *)0x0) {
        puVar1[1] = 0;
      }
      else {
        uVar9 = (**(code **)(*(int *)pIVar4 + 8))();
        puVar1[1] = uVar9;
      }
      break;
    case 0x46:
      uVar7 = Reputation::get_name(puVar1[1]);
      puVar1[1] = (uVar7 == 0xffffffff) - 1 & uVar7;
      break;
    case 0x47:
      pGVar5 = GoodList::find_by_id(puVar1[1]);
      if (pGVar5 == (GoodInfo *)0x0) {
        puVar1[1] = 0;
      }
      else {
        puVar1[1] = *(undefined4 *)(pGVar5 + 0x88);
      }
      break;
    case 0x4e:
      iVar6 = puVar1[1];
      if (iVar6 != 0) {
        uVar9 = *(undefined4 *)(iVar6 + 4);
        FUN_005b7e1d(iVar6);
        puVar1[1] = uVar9;
        *(undefined2 *)(puVar1 + 2) = 0x4d;
      }
      break;
    case 0x52:
      param_1 = (undefined4 *)puVar1[1];
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_33 = 0;
      uStack_32 = 0;
      uStack_31 = 0;
      uStack_30 = 0;
      uStack_2f = 0;
      uStack_2e = 0;
      uStack_2d = 0;
      uStack_2c = 0;
      uStack_2b = 0;
      uStack_2a = 0;
      uStack_29 = 0;
      uStack_28 = 0;
      uStack_27 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_1b = 0;
      uStack_1a = 0;
      uStack_19 = 0;
      uStack_18 = 0;
      uStack_17 = 0;
      uStack_16 = 0;
      uStack_15 = 0;
      uStack_14 = 0;
      uStack_13 = 0;
      uStack_12 = 0;
      uStack_11 = 0;
      uStack_10 = 0;
      uStack_f = 0;
      iStack_4._0_1_ = 1;
      iStack_4._1_3_ = 0;
      iVar6 = Reputation::Vibe::GetName
                        ((int *)&param_1,(FmtStr *)&uStack_3c,(FmtStr *)&uStack_24,&puStack_40);
      puVar1[1] = -(uint)(iVar6 != 0) & uStack_38;
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FmtStr::~FmtStr((FmtStr *)&uStack_24);
      iStack_4 = 0xffffffff;
      FmtStr::~FmtStr((FmtStr *)&uStack_3c);
      break;
    case 0x53:
      pIVar3 = Universe::get_system(puVar1[1]);
      if (pIVar3 == (ISystem *)0x0) {
        puVar1[1] = 0;
      }
      else {
        uVar9 = (**(code **)(*(int *)pIVar3 + 0xc))();
        puVar1[1] = uVar9;
      }
      break;
    case 0x5a:
      pIVar8 = Universe::get_zone(puVar1[1]);
      if (pIVar8 != (IZone *)0x0) {
        uVar9 = (**(code **)(*(int *)pIVar8 + 0x84))();
        puVar1[1] = uVar9;
      }
    }
    ppvVar2 = ExceptionList;
  }
  ExceptionList = local_c;
  return;
}

