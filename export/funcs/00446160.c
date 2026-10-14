
void __thiscall FUN_00446160(int param_1,int param_2,undefined4 param_3)

{
  void **ppvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9938;
  local_c = ExceptionList;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: No valid PetalDB archetype for prop %s\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\ObjectProp.cpp",0x86,param_3);
    ExceptionList = local_c;
    return;
  }
  local_1c[0] = (undefined1)param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  puVar3 = *(undefined4 **)(param_2 + 0x18);
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (puVar3 != *(undefined4 **)(param_2 + 0x1c)) {
    do {
      CacheString::clear((CacheString *)&local_24);
      local_24 = *puVar3;
      local_20 = 0xffffffff;
      FUN_0040d830(local_14,1,&local_24);
      puVar3 = puVar3 + 1;
      ppvVar1 = ExceptionList;
    } while (puVar3 != *(undefined4 **)(param_2 + 0x1c));
  }
  ExceptionList = ppvVar1;
  pcVar4 = *(code **)(param_2 + 8);
  if (*(code **)(param_2 + 8) == (code *)0x0) {
    pcVar4 = _C_exref;
  }
  uVar2 = FUN_0041c540(pcVar4,*(undefined4 *)Data_exref,param_1 + 0x4c,0,local_1c,param_1 + 0x20,0);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  FUN_005b7e1d(local_18);
  ExceptionList = local_c;
  return;
}

