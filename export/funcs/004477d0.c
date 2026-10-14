
void __thiscall
FUN_004477d0(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  Equipment *pEVar2;
  
  if ((char *)*param_5 != *(char **)CARGO_BAY_HP_NAME_exref) {
    iVar1 = HardpointSummary::find_name(*(HardpointSummary **)(param_1 + 0x74),(char *)*param_5);
    if (iVar1 == -1) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: missing hardpoint (%s)",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\ObjectShip.cpp",0x275,*param_5);
      return;
    }
    if (param_2 == 0) {
      pEVar2 = Archetype::GetEquipment(param_3);
      FUN_00457fe0(iVar1,pEVar2);
    }
  }
  return;
}

