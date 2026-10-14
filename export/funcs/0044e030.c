
int __thiscall FUN_0044e030(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int local_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9d2b;
  local_c = ExceptionList;
  local_18 = 0;
  if ((*(byte *)(param_3 + 4) & 1) == 0) {
    ExceptionList = &local_c;
    pvVar4 = operator_new(0xd8);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_00456d80(param_1,param_1,param_3);
    }
    pcVar6 = *(char **)(param_3 + 0x3c);
    uVar7 = 0xffffffff;
    local_10 = CONCAT31(local_10._1_3_,(char)(*(uint *)(param_3 + 4) >> 1)) & 0xffffff01;
    local_4 = 0xffffffff;
    bVar2 = false;
    pcVar8 = PTR_s_VoiceProfile_00611010;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    param_3 = 0;
    iVar5 = _strnicmp(pcVar6,PTR_s_VoiceProfile_00611010,~uVar7 - 1);
    if (iVar5 == 0) {
      uVar7 = 0xffffffff;
      pcVar8 = PTR_s_VoiceProfile_00611010;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      bVar2 = true;
      param_3 = 1;
      pcVar6 = pcVar6 + ~uVar7;
    }
    FUN_00456ff0(pcVar6,param_3);
    if (bVar2) {
      pcVar6 = ThornGetUserString(*(IScriptEngine **)(param_1 + 0x3c),param_2,"speaker");
      if (pcVar6 == (char *)0x0) {
        (**(code **)FDUMP_exref)
                  (0x100001,
                   "%s(%d) : *** ERROR: Voice profile sound %s in script %s needs a speaker property"
                   ,"E:\\FL\\Scratch\\Source\\Client\\Gf\\Script.cpp",0x21f,
                   *(undefined4 *)(iVar3 + 0x3c),*(undefined4 *)(param_1 + 0xa4));
      }
      FUN_004572b0(pcVar6);
    }
    *(undefined1 *)(local_18 + 0x84) = *(undefined1 *)(param_1 + 0x60);
    FUN_004572d0(local_10);
  }
  ExceptionList = local_c;
  return local_18;
}

