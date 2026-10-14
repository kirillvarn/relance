
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall
FUN_00534240(int param_1,uint param_2,ID_String *param_3,undefined4 param_4,float param_5,
            float param_6)

{
  int *piVar1;
  Fuse *pFVar2;
  ID_String *this;
  void **ppvVar3;
  char *pcVar4;
  char cVar5;
  int *piVar6;
  undefined1 local_48 [4];
  undefined **local_44 [13];
  undefined4 local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005c0918;
  local_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0xc4);
  piVar6 = (int *)*piVar1;
  cVar5 = '\0';
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (piVar6 != piVar1) {
    do {
      if (cVar5 != '\0') {
        ExceptionList = local_c;
        return cVar5;
      }
      if (piVar6[3] == *(int *)param_3) {
        cVar5 = '\x01';
        Fuse::IgniteAt((Fuse *)(piVar6 + 2),param_2,(ushort)param_4,param_5);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != piVar1);
    ppvVar3 = ExceptionList;
    if (cVar5 != '\0') {
      ExceptionList = local_c;
      return cVar5;
    }
  }
  ExceptionList = ppvVar3;
  cVar5 = '\0';
  FUN_0052a680();
  this = param_3;
  FUN_00432240(&param_3,param_3);
  pFVar2 = *(Fuse **)(param_3 + 0x10);
  if (pFVar2 == (Fuse *)0x0) {
    pcVar4 = ID_String::get_string(this);
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: Fuse(%s) not found in FuseDB. Aborting.",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\EquippedObj.cpp",0x2b8,pcVar4);
  }
  else {
    cVar5 = '\x01';
    Fuse::Fuse((Fuse *)local_44,pFVar2);
    local_10 = *(undefined4 *)(pFVar2 + 0x34);
    local_44[0] = &PTR_FUN_005dd328;
    local_4 = 0;
    FUN_00535a20(local_48,*(undefined4 *)(param_1 + 0xc4),local_44);
    local_4 = 0xffffffff;
    Fuse::~Fuse((Fuse *)local_44);
    FUN_0052a4d0(param_1);
    Fuse::RandomizeActions((Fuse *)(*(int *)(*(int *)(param_1 + 0xc4) + 4) + 8));
    if (param_6 != _DAT_005c7500) {
      Fuse::OverrideLifetime((Fuse *)(*(int *)(*(int *)(param_1 + 0xc4) + 4) + 8),param_6);
    }
    Fuse::IgniteAt((Fuse *)(*(int *)(*(int *)(param_1 + 0xc4) + 4) + 8),param_2,(ushort)param_4,
                   param_5);
  }
  ExceptionList = local_c;
  return cVar5;
}

