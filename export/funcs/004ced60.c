
/* public: virtual __thiscall OwnerList<struct pub::SpaceObj::CargoDesc>::~OwnerList<struct
   pub::SpaceObj::CargoDesc>(void) */

void __thiscall
OwnerList<pub::SpaceObj::CargoDesc>::~OwnerList<pub::SpaceObj::CargoDesc>
          (OwnerList<pub::SpaceObj::CargoDesc> *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
                    /* 0xced60  14  ??1?$OwnerList@UCargoDesc@SpaceObj@pub@@@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
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
  *(undefined ***)this = &PTR_FUN_005d7704;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  puVar2 = *(undefined4 **)(this + 0x10);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005b7e1d(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

