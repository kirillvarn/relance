
void __fastcall FUN_004440c0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  HardpointSummary *this;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005b97c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005cb930;
  local_4 = 4;
  if (param_1[0xdb] == 1) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\gf\\ObjectDeformable.cpp",0x175,
               "Character is being destroyed while still scripted, GAME IS ABOUT TO CRASH!!!\n");
  }
  iVar3 = 0;
  if (param_1[0xd8] != 0) {
    param_1[0xd8] = 0;
    *(undefined1 *)(param_1 + 0xda) = 0;
    malloc_strfree((char **)(param_1 + 0xd9));
  }
  if (0 < (int)param_1[0xbc]) {
    this = (HardpointSummary *)(param_1 + 0x7c);
    piVar4 = param_1 + 0x74;
    do {
      if (*piVar4 != -1) {
        (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,*piVar4);
        *piVar4 = -1;
      }
      HardpointSummary::destroy(this);
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      this = this + 0x20;
    } while (iVar3 < (int)param_1[0xbc]);
  }
  param_1[0xbc] = 0;
  malloc_wstrfree((ushort **)(param_1 + 0xbf));
  HardpointSummary::destroy((HardpointSummary *)(param_1 + 0xc1));
  CharacterProperties::destroy((CharacterProperties *)(param_1 + 0x55));
  if (*(char *)((int)param_1 + 0x3ad) == '\0') {
    if (param_1[0xc] != 0) {
      (**(code **)(**(int **)Deform_exref + 0x18))(*(int **)Deform_exref,param_1[0xc]);
    }
    param_1[0xc] = 0;
    puVar2 = param_1 + 0x51;
    iVar3 = 4;
    do {
      puVar2[-0x44] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((undefined4 *)param_1[0xbd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xbd])(1);
    param_1[0xbd] = 0;
  }
  local_4._0_1_ = 3;
  FUN_005b7ec6(param_1 + 0xc9,0xc,5,FUN_00444080);
  pcVar1 = ~HardpointSummary_exref;
  local_4._0_1_ = 2;
  HardpointSummary::~HardpointSummary((HardpointSummary *)(param_1 + 0xc1));
  local_4._0_1_ = 1;
  FUN_005b7ec6(param_1 + 0x7c,0x20,8,pcVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  CharacterProperties::~CharacterProperties((CharacterProperties *)(param_1 + 0x55));
  local_4 = 0xffffffff;
  FUN_005594b0();
  ExceptionList = pvStack_c;
  return;
}

