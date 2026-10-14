
void __thiscall FUN_0044fdd0(int param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  char **ppcVar6;
  char **ppcVar7;
  char *pcStack_5c;
  ulong uStack_58;
  char *pcStack_54;
  ulong uStack_50;
  HardpointSummary local_4c [32];
  HardpointSummary local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9de2;
  local_c = ExceptionList;
  iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 0x48);
  piVar1 = *(int **)(iVar5 + param_2 * 4);
  piVar2 = *(int **)(iVar5 + param_4 * 4);
  if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
    ExceptionList = &local_c;
    HardpointSummary::HardpointSummary(local_2c);
    local_4 = 0;
    HardpointSummary::HardpointSummary(local_4c);
    local_4 = CONCAT31(local_4._1_3_,1);
    lVar3 = (**(code **)(*piVar1 + 0x44))();
    HardpointSummary::analyze_instance(local_2c,lVar3);
    lVar3 = (**(code **)(*piVar2 + 0x44))();
    HardpointSummary::analyze_instance(local_4c,lVar3);
    pcStack_5c = param_3;
    uStack_58 = DACOM_CRC::GetCRC32(param_3);
    pcStack_54 = param_5;
    uStack_50 = DACOM_CRC::GetCRC32(param_5);
    iVar5 = **(int **)Hardpoint_exref;
    ppcVar7 = &pcStack_5c;
    lVar3 = HardpointSummary::find_name_instance(local_2c,param_3);
    ppcVar6 = &pcStack_54;
    lVar4 = HardpointSummary::find_name_instance(local_4c,param_5);
    iVar5 = (**(code **)(iVar5 + 0x18))(*(undefined4 *)Hardpoint_exref,lVar4,ppcVar6,lVar3,ppcVar7);
    if (iVar5 != 0) {
      (**(code **)FDUMP_exref)
                (0x100001,
                 "%s(%d) : *** ERROR: Cannot connect hardpoint %s on entity %s to hardpoint %s on entity %s"
                 ,"E:\\FL\\Scratch\\Source\\Client\\Gf\\ScriptBase.cpp",0x5e,param_5,piVar2[0x19],
                 param_3,piVar1[0x19]);
    }
    HardpointSummary::destroy(local_2c);
    HardpointSummary::destroy(local_4c);
    local_4 = local_4 & 0xffffff00;
    HardpointSummary::~HardpointSummary(local_4c);
    local_4 = 0xffffffff;
    HardpointSummary::~HardpointSummary(local_2c);
  }
  ExceptionList = local_c;
  return;
}

