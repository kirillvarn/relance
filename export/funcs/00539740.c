
void __fastcall FUN_00539740(int *param_1)

{
  bool bVar1;
  Root *pRVar2;
  Explosion *pEVar3;
  char *pcVar4;
  char *pcVar5;
  uint unaff_EBP;
  ID_String *this;
  int *local_4;
  
  local_4 = param_1;
  pRVar2 = CObject::get_archetype((CObject *)param_1[4]);
  this = (ID_String *)(pRVar2 + 0x24);
  bVar1 = ID_String::IsEmpty(this);
  if (!bVar1) {
    pEVar3 = Archetype::GetExplosion(this);
    param_1[0x10] = (int)pEVar3;
    if (pEVar3 == (Explosion *)0x0) {
      pcVar4 = ID_String::get_string(this);
      pRVar2 = CObject::get_archetype((CObject *)param_1[4]);
      pcVar5 = ID_String::get_string((ID_String *)(pRVar2 + 8));
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: Archtype(%s) explosion_arch(%s) not found.",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\Gameobj.cpp",0x85,pcVar5,pcVar4);
    }
    else {
      FUN_00536100(pEVar3);
    }
  }
  (**(code **)(*param_1 + 0x88))(&local_4);
  if (((unaff_EBP & 0x107ffdff) != 0) && ((char)param_1[0x2a] != '\0')) {
    FUN_0045a890(param_1);
  }
  return;
}

