
undefined4 * __thiscall FUN_0052c830(undefined4 *param_1,undefined4 param_2,int param_3)

{
  ID_String *this;
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  Explosion *pEVar8;
  int iVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c044e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00531a30(param_2,param_3);
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_LAB_005dd4bc;
  iVar9 = ((int *)param_1[1])[3];
  pcVar6 = *(char **)(iVar9 + 0x9c);
  local_4 = 2;
  if (*pcVar6 != '\0') {
    uVar4 = *(undefined4 *)(iVar9 + 0x44);
    uVar3 = (**(code **)(*(int *)param_1[1] + 0x84))();
    uVar4 = (**(code **)(**(int **)Anim_exref + 0x24))(*(int **)Anim_exref,uVar4,uVar3,pcVar6,0,0);
    param_1[4] = uVar4;
  }
  iVar9 = 0;
  if ((param_1[1] != 0) && (iVar1 = *(int *)(param_1[1] + 0xc), iVar1 != 0)) {
    iVar9 = *(int *)(iVar1 + 4);
  }
  bVar2 = ID_String::IsEmpty((ID_String *)(iVar9 + 0x80));
  if (!bVar2) {
    iVar9 = 0;
    if ((param_1[1] != 0) && (iVar1 = *(int *)(param_1[1] + 0xc), iVar1 != 0)) {
      iVar9 = *(int *)(iVar1 + 4);
    }
    piVar5 = (int *)FUN_0042ae40(iVar9 + 0x80);
    param_1[5] = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
  }
  if (param_1[1] == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(param_1[1] + 0x4c);
  }
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar9 + 4);
  }
  bVar2 = ID_String::IsEmpty((ID_String *)(iVar9 + 0x5c));
  if (!bVar2) {
    piVar5 = (int *)FUN_0042ae40((ID_String *)(iVar9 + 0x5c));
    param_1[6] = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
  }
  this = (ID_String *)(iVar9 + 0x58);
  bVar2 = ID_String::IsEmpty(this);
  if (!bVar2) {
    iVar9 = FUN_0040f080(this);
    param_1[8] = iVar9;
    if (iVar9 == 0) {
      if (param_1[1] == 0) {
        param_3 = 0;
      }
      else {
        param_3 = *(int *)(param_1[1] + 0x4c);
      }
      pcVar6 = ID_String::get_string(this);
      pcVar7 = ID_String::get_string((ID_String *)(param_3 + 8));
      (**(code **)FDUMP_exref)
                (0x100001,
                 "%s(%d) : *** ERROR: %s: [Effect] const_effect_name %s is missing from effects.ini."
                 ,"E:\\FL\\Scratch\\Source\\Client\\Space\\CliLauncher.cpp",0x51,pcVar7,pcVar6);
    }
    else {
      FUN_0040e960(1);
    }
  }
  if (param_1[1] == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(param_1[1] + 0x4c);
  }
  bVar2 = ID_String::IsEmpty((ID_String *)(iVar9 + 0x24));
  if (!bVar2) {
    if (param_1[1] == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1[1] + 0x4c);
    }
    pEVar8 = Archetype::GetExplosion((ID_String *)(iVar9 + 0x24));
    param_1[9] = pEVar8;
    if (pEVar8 != (Explosion *)0x0) {
      FUN_00536100(pEVar8);
    }
  }
  iVar9 = FUN_0040f080(&DAT_00675448);
  param_1[0xb] = iVar9;
  if (iVar9 != 0) {
    FUN_0040e960(1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

