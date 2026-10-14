
void __thiscall FUN_00533d10(int *param_1,CObject *param_2,ID_String *param_3,ID_String *param_4)

{
  bool bVar1;
  int iVar2;
  Root *pRVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  Explosion *pEVar7;
  IAction *pIVar8;
  
  iVar2 = FUN_005309c0(param_3);
  if (iVar2 == 0) {
    pRVar3 = CObject::get_archetype(param_2);
    pcVar4 = ID_String::get_string((ID_String *)(pRVar3 + 8));
    pcVar5 = ID_String::get_string(param_3);
    uVar6 = (**(code **)(*param_1 + 0x20))(pcVar5,pcVar4);
    (**(code **)FDUMP_exref)
              (0x100002,
               "%s(%d) : *** WARNING: ID(0x%X) Exploding: Couldn\'t find debris_type[%s] with archetype[%s], using default."
               ,"E:\\FL\\Scratch\\Source\\Client\\Space\\EquippedObj.cpp",0x1e8,uVar6);
    iVar2 = FUN_00530a10();
  }
  iVar2 = FUN_00530620(param_2,iVar2);
  FUN_004fd230(*(undefined4 *)(param_2 + 4),iVar2);
  if (param_4 != (ID_String *)0x0) {
    bVar1 = ID_String::IsEmpty(param_4);
    if (!bVar1) {
      pEVar7 = Archetype::GetExplosion(param_4);
      if (pEVar7 != (Explosion *)0x0) {
        uVar6 = (**(code **)*param_1)();
        pIVar8 = (IAction *)FUN_005361e0(pEVar7,iVar2,uVar6);
        ActionDB::add((ActionDB *)(iVar2 + 0x20),pIVar8);
        return;
      }
      pcVar4 = ID_String::get_string(param_4);
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: Couldn\'t find separation_explosion[%s], skipping."
                 ,"E:\\FL\\Scratch\\Source\\Client\\Space\\EquippedObj.cpp",0x202,pcVar4);
    }
  }
  return;
}

