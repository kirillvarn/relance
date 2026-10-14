
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00428a40(ID_String *param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  char extraout_AL;
  int iVar4;
  undefined4 uVar5;
  float local_20;
  undefined4 uStack_18;
  byte bStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar1 = DAT_006108d4;
  local_20 = DAT_006108d0;
  if ((float)_DAT_005c8ba8 <= param_3) {
    local_20 = param_3;
  }
  if (DAT_00667cb4 != (int *)0x0) {
    bVar3 = ID_String::IsEmpty(param_1);
    if ((!bVar3) && (iVar4 = FUN_0042ae40(param_1), DAT_00667cb4[6] == iVar4)) {
      return 1;
    }
    piVar2 = DAT_00667cb4;
    DAT_00667cb4[0xd] = iVar1;
    piVar2[0xe] = (int)local_20;
    *(undefined1 *)(DAT_00667cb4 + 0xf) = 1;
    (**(code **)(*DAT_00667cb4 + 8))(DAT_00667cb4);
    DAT_00667cb4 = (int *)0x0;
  }
  bVar3 = ID_String::IsEmpty(param_1);
  if (!bVar3) {
    bStack_14 = (byte)param_2 & 1 ^ bStack_14 & 0xf8 | 4;
    uStack_18 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    iStack_4 = iVar1;
    param_2 = 0;
    uVar5 = FUN_0042ae40(param_1);
    FUN_00428680(uVar5,&uStack_18,&param_2,0);
    if (extraout_AL != '\0') {
      DAT_00667cb4 = (int *)__RTDynamicCast(param_2,0,&Sound::Source::RTTI_Type_Descriptor,
                                            &Sound::StreamedSource::RTTI_Type_Descriptor,0);
      DAT_00667cb4[1] = 4;
      piVar2 = DAT_00667cb4;
      DAT_00667cb4[0xd] = 0;
      piVar2[0xe] = (int)local_20;
      return 1;
    }
  }
  return 0;
}

