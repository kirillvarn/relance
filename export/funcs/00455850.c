
void __thiscall FUN_00455850(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9ff9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_0059db20("ScriptSequence_OfferDialog","NN_OfferDialog",0,0);
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_1b = 0;
  local_1a = 0;
  local_19 = 0;
  local_18 = 0;
  local_17 = 0;
  local_16 = 0;
  local_15 = 0;
  local_14 = 0;
  local_13 = 0;
  local_12 = 0;
  local_11 = 0;
  local_10 = 0;
  local_f = 0;
  iVar3 = *(int *)(param_1 + 200);
  iVar2 = 0;
  local_4 = 0;
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      FmtStr::operator=((FmtStr *)&local_24,(FmtStr *)(param_1 + 0xec));
      iVar2 = iVar3;
      goto LAB_00455966;
    }
    if (iVar3 == 3) {
      iVar2 = 0;
      FmtStr::operator=((FmtStr *)&local_24,(FmtStr *)(param_1 + 0xd4));
      goto LAB_00455966;
    }
    if (iVar3 != 4) {
      FmtStr::operator=((FmtStr *)&local_24,(FmtStr *)(param_1 + 0xd4));
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: Invalid offer type %d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\ScriptSequence.cpp",0x38b,
                 *(undefined4 *)(param_1 + 200));
      goto LAB_00455966;
    }
    iVar3 = 3;
  }
  FmtStr::operator=((FmtStr *)&local_24,(FmtStr *)(param_1 + 0xd4));
  iVar2 = iVar3;
LAB_00455966:
  FUN_004a6630(iVar2,&local_24,param_3 == '\0',&LAB_004559b0,param_1);
  local_4 = 0xffffffff;
  FmtStr::~FmtStr((FmtStr *)&local_24);
  ExceptionList = local_c;
  return;
}

