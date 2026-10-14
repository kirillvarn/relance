
void __thiscall FUN_004467e0(int param_1,char *param_2)

{
  uint uVar1;
  Map *pMVar2;
  HardpointSummary *this;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b995b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = CreateID(param_2);
  pMVar2 = Loadout::Get(uVar1);
  if (pMVar2 == (Map *)0x0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Failed to find loadout %s\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\ObjectProp.cpp",0x158,param_2);
  }
  else {
    this = operator_new(0x20);
    local_4 = 0;
    if (this == (HardpointSummary *)0x0) {
      this = (HardpointSummary *)0x0;
    }
    else {
      HardpointSummary::HardpointSummary(this);
      *(undefined ***)this = &PTR_FUN_005cbd68;
    }
    local_4 = 0xffffffff;
    *(HardpointSummary **)(param_1 + 100) = this;
    HardpointSummary::analyze_instance(this,*(long *)(param_1 + 0x30));
    iVar3 = *(int *)(pMVar2 + 8);
    if (iVar3 != *(int *)(pMVar2 + 0xc)) {
      do {
        FUN_004468f0(iVar3,*(undefined4 *)(param_1 + 100));
        iVar3 = iVar3 + 0x20;
      } while (iVar3 != *(int *)(pMVar2 + 0xc));
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

