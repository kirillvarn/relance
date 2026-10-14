
/* public: void __thiscall OwnerList<struct pub::SpaceObj::CargoDesc>::free(void) */

void __thiscall OwnerList<pub::SpaceObj::CargoDesc>::free(OwnerList<pub::SpaceObj::CargoDesc> *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
                    /* 0xcecf0  58  ?free@?$OwnerList@UCargoDesc@SpaceObj@pub@@@@QAEXXZ */
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(this + 4);
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    FUN_005b7e1d(puVar2[2]);
    puVar2[2] = 0;
  }
  puVar2 = *(undefined4 **)(this + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (this[0xc] == (OwnerList<pub::SpaceObj::CargoDesc>)0x0) {
      FUN_005b7e1d(puVar2);
      puVar2 = puVar1;
    }
    else {
      *puVar2 = *(undefined4 *)(this + 0x10);
      *(undefined4 **)(this + 0x10) = puVar2;
      puVar2 = puVar1;
    }
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

