
void __thiscall FUN_00553100(uint param_1,Root *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  Root *pRVar4;
  int *piVar5;
  int *piVar6;
  uint local_4;
  
  pRVar4 = param_2;
  local_4 = param_1;
  if (param_3 == 0) {
    local_4 = CreateID((char *)param_2);
    uVar3 = Archetype::GetSimpleID((ID_String *)&local_4);
    pRVar4 = Archetype::GetSimple(uVar3);
  }
  else if (param_3 == 2) {
    param_3 = CreateID((char *)param_2);
    uVar3 = Archetype::GetSolarID((ID_String *)&param_3);
    if ((uVar3 & 0x3fffffff) == 0) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: unknown Solar archetype (%s)\n",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\StarSys.cpp",0x8a,pRVar4);
      pRVar4 = param_2;
    }
    else {
      pRVar4 = (Root *)Archetype::GetSolar(uVar3);
    }
  }
  else if (param_3 == 4) {
    param_2 = (Root *)CreateID((char *)param_2);
    uVar3 = Archetype::GetAsteroidID((ID_String *)&param_2);
    if ((uVar3 & 0x3fffffff) == 0) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: unknown Asteroid archetype (%s)\n",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\StarSys.cpp",0x9b,pRVar4);
      pRVar4 = param_2;
    }
    else {
      pRVar4 = (Root *)Archetype::GetAsteroid(uVar3);
    }
  }
  FUN_00407310(0);
  Archetype::Root::AddRef(pRVar4);
  iVar2 = DAT_006798a4;
  piVar6 = *(int **)(DAT_006798a4 + 4);
  puVar1 = (undefined4 *)(DAT_006798a4 + 4);
  piVar5 = operator_new(0xc);
  *piVar5 = iVar2;
  if (piVar6 == (int *)0x0) {
    piVar6 = piVar5;
  }
  piVar5[1] = (int)piVar6;
  *puVar1 = piVar5;
  *(int **)piVar5[1] = piVar5;
  if (piVar5 + 2 != (int *)0x0) {
    piVar5[2] = (int)pRVar4;
  }
  DAT_006798a8 = DAT_006798a8 + 1;
  return;
}

