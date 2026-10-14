
void FUN_004c3e20(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  Ship *this;
  int iVar4;
  
  piVar3 = DAT_00672970;
  if (DAT_0067337c != param_1) {
    DAT_0067337c = param_1;
    piVar2 = (int *)*DAT_00672970;
    while (piVar2 != piVar3) {
      piVar1 = (int *)*piVar2;
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      FUN_005b7e1d(piVar2);
      DAT_00672974 = DAT_00672974 + -1;
      piVar2 = piVar1;
    }
    if ((param_1 & 0x3fffffff) != 0) {
      this = Archetype::GetShip(param_1);
      if (this == (Ship *)0x0) {
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : *** ERROR: Error retrieving ship type %u",
                   "E:\\FL\\Scratch\\Source\\Client\\nn\\Player.cpp",0xae,param_1);
      }
      else {
        Archetype::EqObj::get_undamaged_collision_group_list
                  ((EqObj *)this,
                   (list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)&DAT_0067296c);
      }
    }
    iVar4 = FUN_00446be0();
    if (iVar4 != 0) {
      FUN_00448540(&DAT_00672960);
      FUN_00448680(DAT_0067337c);
      FUN_00447210();
      return;
    }
  }
  return;
}

