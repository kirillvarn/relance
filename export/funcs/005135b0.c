
void FUN_005135b0(undefined4 param_1)

{
  CShip *this;
  int iVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [36];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar4 = (int *)FUN_0054baf0();
  if ((((piVar4 != (int *)0x0) && (piVar4 != (int *)0xfffffff4)) &&
      (this = (CShip *)piVar4[4], this != (CShip *)0x0)) &&
     ((((*(uint *)(this + 0x4c) & 0x503) == 0x503 &&
       (bVar2 = CShip::is_using_tradelane(this), !bVar2)) &&
      ((*(byte *)(piVar4 + 0x61) & 0x80) != 0)))) {
    iVar1 = piVar4[0x58];
    if (iVar1 != 0) {
      iVar5 = (**(code **)(*piVar4 + 0x20))();
      puVar6 = *(undefined4 **)(iVar1 + 0xc);
      for (puVar7 = (undefined4 *)*puVar6; puVar6 != puVar7; puVar7 = (undefined4 *)*puVar7) {
        if (puVar7[2] == iVar5) {
          if ((*(byte *)(piVar4 + 0x61) & 0x80) != 0) {
            FUN_00514f20(piVar4);
          }
          FUN_005139d0(piVar4);
          FUN_00516f70(auStack_34,puVar7);
          goto LAB_0051365b;
        }
      }
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : ERROR:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\tradelane.cpp",0x367,"bad things (tm)");
    }
LAB_0051365b:
    if ((int *)piVar4[0x5b] != (int *)0x0) {
      (**(code **)(*(int *)piVar4[0x5b] + 4))();
    }
    if (piVar4[0x5a] != 0) {
      FUN_004215b0();
      uStack_4 = 0;
      uStack_8 = 0;
      uStack_c = 0;
      (**(code **)(*(int *)piVar4[0x5a] + 0x94))(0xffffffff,auStack_30);
      (**(code **)(*(int *)piVar4[0x5a] + 0x60))();
    }
    if (piVar4[0x5c] != 0) {
      FUN_005379b0();
      (**(code **)(*(int *)piVar4[0x5c] + 8))();
    }
    FUN_00502d90();
    if ((int *)piVar4[0x5f] != (int *)0x0) {
      (**(code **)(*(int *)piVar4[0x5f] + 4))();
    }
    if (piVar4[0x5e] != 0) {
      FUN_004215b0();
      uStack_4 = 0;
      uStack_8 = 0;
      uStack_c = 0;
      (**(code **)(*(int *)piVar4[0x5e] + 0x94))(0xffffffff,auStack_30);
      (**(code **)(*(int *)piVar4[0x5e] + 0x60))();
    }
    if (piVar4[0x60] != 0) {
      FUN_005379b0();
      (**(code **)(*(int *)piVar4[0x60] + 8))();
    }
    FUN_00502d90();
  }
  puVar6 = (undefined4 *)0x0;
  while( true ) {
    puVar7 = DAT_006751c0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puVar6;
    }
    if (puVar7 == (undefined4 *)0x0) break;
    cVar3 = FUN_00513b40(param_1);
    puVar6 = puVar7;
    if (cVar3 == '\0') {
      puVar6 = (undefined4 *)*puVar7;
      FUN_00404d90(puVar7);
      FUN_00404d50(puVar7,0);
      FUN_005137c0();
    }
  }
  return;
}

