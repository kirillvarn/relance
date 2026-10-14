
int __thiscall FUN_0044e870(int param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  CostumeDescriptions *this;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_e4 [6];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  char *pcStack_c4;
  char *pcStack_c0;
  undefined4 local_a0 [12];
  CharacterProperties local_70 [36];
  Costume local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9d99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_3 != (char *)0x0) {
    pcStack_c0 = (char *)0x44e8b8;
    ExceptionList = &local_c;
    iVar3 = stricmp(param_3,"player");
    pcStack_c0 = (char *)0x44e8cc;
    iVar4 = stricmp(param_3,"bartender");
    if (iVar4 == 0) {
LAB_0044e900:
      bVar2 = true;
    }
    else {
      pcStack_c0 = (char *)0x44e8db;
      iVar4 = stricmp(param_3,"trader");
      if (iVar4 == 0) goto LAB_0044e900;
      pcStack_c0 = (char *)0x44e8ea;
      iVar4 = stricmp(param_3,"shipdealer");
      if (iVar4 == 0) goto LAB_0044e900;
      pcStack_c0 = (char *)0x44e8f9;
      iVar4 = stricmp(param_3,"equipment");
      if (iVar4 == 0) goto LAB_0044e900;
      bVar2 = false;
    }
    if (iVar3 == 0) {
      iVar3 = FUN_00449cd0();
      if (iVar3 == 0) {
        pcStack_c0 = "E:\\FL\\Scratch\\Source\\Client\\Gf\\Script.cpp";
        pcStack_c4 = "%s(%d) : *** ERROR: %s";
        uStack_c8 = 0x100001;
        uStack_cc = 0x44e943;
        (**(code **)FDUMP_exref)();
        ExceptionList = local_c;
        return 0;
      }
      goto LAB_0044ea3b;
    }
    if (bVar2) {
      iVar3 = FUN_00449d50();
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      goto LAB_0044ea3b;
    }
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      iVar3 = FUN_00453b50();
LAB_0044e97f:
      if (iVar3 != 0) goto LAB_0044ea3b;
    }
    else if (iVar3 == 2) {
      if (param_3 != (char *)0x0) {
        iVar3 = FUN_00453b60();
        goto LAB_0044e97f;
      }
    }
    else {
      pcStack_c0 = "E:\\FL\\Scratch\\Source\\Client\\Gf\\Script.cpp";
      pcStack_c4 = "%s(%d) : *** ERROR: %s";
      uStack_c8 = 0x100001;
      uStack_cc = 0x44eaa2;
      (**(code **)FDUMP_exref)();
    }
  }
  iVar3 = FUN_00455ed0();
  if (iVar3 == 0) {
    CharacterProperties::CharacterProperties(local_70);
    local_4 = iVar3;
    this = GetCostumeDescriptions();
    pcStack_c0 = (char *)0x44e9cb;
    CostumeDescriptions::get_costume(this,*(char **)(param_2 + 0x3c),local_4c);
    local_a0[1] = *(undefined4 *)(param_2 + 0xc);
    local_a0[0] = *(undefined4 *)(param_2 + 8);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    local_a0[2] = *(undefined4 *)(param_2 + 0x10);
    puVar5 = (undefined4 *)(param_2 + 0x14);
    puVar6 = local_a0 + 3;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = local_a0;
    puVar6 = auStack_e4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar3 = FUN_00435b80(local_70,0,0xffffffff,uVar1,1);
    pcStack_c0 = (char *)0x44ea26;
    FUN_00455d70();
    local_4 = 0xffffffff;
    CharacterProperties::~CharacterProperties(local_70);
  }
LAB_0044ea3b:
  FUN_004454e0();
  ExceptionList = local_c;
  return iVar3;
}

