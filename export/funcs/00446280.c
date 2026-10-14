
uint __thiscall FUN_00446280(int param_1,char *param_2)

{
  IBase *pIVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_2 != '$') {
    uVar3 = CreateID(param_2);
    return uVar3;
  }
  pIVar1 = Universe::get_base(*(uint *)(*(int *)(param_1 + 8) + 0x34));
  iVar2 = stricmp(param_2,PTR_s__ship_sml_01_0061102c);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x18))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__ship_sml_02_00611030);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x1c))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__ship_sml_03_00611034);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x20))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__ship_mdm_01_00611038);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x24))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__ship_mdm_02_0061103c);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x28))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__ship_mdm_03_00611040);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x2c))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__ship_lrg_01_00611044);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x30))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__ship_lrg_02_00611048);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x34))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__ship_lrg_03_0061104c);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x38))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__ship_lrg_03_0061104c);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x38))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__terrain_tiny_00611050);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x3c))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__terrain_sml_00611054);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x40))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__terrain_mdm_00611058);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x44))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__terrain_lrg_0061105c);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x48))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__terrain_dyna_01_00611060);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x4c))();
    return uVar3;
  }
  iVar2 = stricmp(param_2,PTR_s__terrain_dyna_02_00611064);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)pIVar1 + 0x50))();
    return uVar3;
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: Invalid indirection template name %s in prop\n",
             "E:\\FL\\Scratch\\Source\\Client\\Gf\\ObjectProp.cpp",0xd8,param_2);
  return 0;
}

