
int FUN_00401160(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_58;
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 local_40;
  char *local_3c;
  undefined4 local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b8358;
  local_c = ExceptionList;
  if (*(char *)*param_1 == '\0') {
    return -1;
  }
  iVar4 = -1;
  ExceptionList = &local_c;
  FUN_004016f0(&local_58,param_1);
  if (local_58 != DAT_00616444) {
    *(int *)(local_58 + 0x10) = *(int *)(local_58 + 0x10) + 1;
    iVar4 = *(int *)(local_58 + 0x14);
  }
  if ((iVar4 == -1) && (*(int *)Alchemy_exref != 0)) {
    param_1 = (int *)0x0;
    uVar1 = *puVar2;
    local_3c = "FileSystem";
    puVar5 = local_38;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_38[2] = 0x80000000;
    local_38[3] = 1;
    local_24 = 3;
    local_20 = 0x8000080;
    local_40 = 0x34;
    local_4 = 0;
    local_38[1] = uVar1;
    local_10 = iVar4;
    iVar3 = (**(code **)(**(int **)Data_exref + 0xc))(*(int **)Data_exref,&local_40,&param_1);
    if (iVar3 == 0) {
      (**(code **)(**(int **)Alchemy_exref + 0xc))(*(int **)Alchemy_exref,puStack_8);
      (**(code **)(**(int **)FxEffectLibrary_exref + 0x20))(*(int **)FxEffectLibrary_exref,local_10)
      ;
      iVar4 = DAT_006101d0;
      DAT_006101d0 = DAT_006101d0 + 1;
      CacheString::clear((CacheString *)&uStack_4c);
      uStack_4c = *puVar2;
      uStack_48 = 1;
      iStack_44 = iVar4;
      FUN_00401480(auStack_54,&uStack_4c);
    }
    else {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Failed to load %s.",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\ALELib.cpp",0x5c,*puVar2);
    }
    local_4 = 0xffffffff;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  ExceptionList = local_c;
  return iVar4;
}

