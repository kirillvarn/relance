
void __fastcall FUN_00528980(int param_1)

{
  ExhaustNozzleInfo *pEVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  ExhaustNozzleInfo *this;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 auStack_48 [4];
  int iStack_44;
  int iStack_40;
  Transform aTStack_3c [36];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c0280;
  pvStack_c = ExceptionList;
  local_5c = 0;
  if (*(int *)(param_1 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  ExceptionList = &pvStack_c;
  bVar2 = ID_String::IsEmpty((ID_String *)(iVar5 + 0x9c));
  if (!bVar2) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
    }
    local_5c = FUN_0040f080(iVar5 + 0x9c);
  }
  local_58 = 0;
  local_54 = 0;
  iVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  iVar5 = *(int *)(param_1 + 4);
  if (iVar4 == DAT_00673378) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
    }
    bVar2 = ID_String::IsEmpty((ID_String *)(iVar5 + 0xa4));
    if (!bVar2) {
      if (*(int *)(param_1 + 4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
      }
      local_54 = FUN_0040f080(iVar5 + 0xa4);
    }
  }
  else {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
    }
    bVar2 = ID_String::IsEmpty((ID_String *)(iVar5 + 0xa0));
    if (!bVar2) {
      if (*(int *)(param_1 + 4) == 0) {
        local_58 = FUN_0040f080(0xa0);
      }
      else {
        local_58 = FUN_0040f080(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4) + 0xa0);
      }
    }
  }
  if (((local_5c != 0) || (local_58 != 0)) || (local_54 != 0)) {
    FUN_004215b0();
    uStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    pEVar1 = *(ExhaustNozzleInfo **)(*(int *)(param_1 + 4) + 0x3c);
    for (this = *(ExhaustNozzleInfo **)(*(int *)(param_1 + 4) + 0x38); this != pEVar1;
        this = this + 0x3c) {
      bVar2 = ExhaustNozzleInfo::GetHardpointOffset_NS(this,aTStack_3c);
      if (bVar2) {
        iStack_44 = 0;
        iStack_40 = 0;
        uStack_4 = 0;
        FUN_005299b0(*(undefined4 *)(param_1 + 0x18),1,auStack_48);
        uStack_4 = 1;
        if (iStack_40 != 0) {
          FUN_004f7a90();
          iStack_40 = 0;
        }
        uStack_4 = 0xffffffff;
        if (iStack_44 != 0) {
          FUN_004f7a90();
          iStack_44 = 0;
        }
        iVar5 = *(int *)(param_1 + 0x18);
        *(undefined2 *)(iVar5 + -0xc) = *(undefined2 *)this;
        if (local_5c != 0) {
          iVar4 = FUN_004f79a0(0x84);
          if (iVar4 == 0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = (undefined4 *)FUN_004f8060(0);
          }
          FUN_004f7d20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(this + 8),aTStack_3c);
          cVar3 = (**(code **)*puVar6)(local_5c);
          if ((cVar3 != '\0') && (*(undefined4 **)(iVar5 + -8) != puVar6)) {
            if (*(undefined4 **)(iVar5 + -8) != (undefined4 *)0x0) {
              FUN_004f7a90();
              *(undefined4 *)(iVar5 + -8) = 0;
            }
            *(undefined4 **)(iVar5 + -8) = puVar6;
            FUN_004f7a80();
          }
          FUN_004f7a90();
        }
        if (local_58 == 0) {
          if (local_54 == 0) goto LAB_00528c94;
          iVar4 = FUN_004f79a0(0x84);
          if (iVar4 == 0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = (undefined4 *)FUN_004f8060(0);
          }
          FUN_004f7d20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(this + 8),aTStack_3c);
          iVar4 = local_54;
        }
        else {
          puVar6 = (undefined4 *)FUN_004f79a0(0x90);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            FUN_004f8060(0);
            puVar6[0x21] = 0x3f800000;
            *puVar6 = &PTR_FUN_005dd144;
          }
          FUN_004f7d20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(this + 8),aTStack_3c);
          iVar4 = local_58;
        }
        cVar3 = (**(code **)*puVar6)(iVar4);
        if ((cVar3 != '\0') && (*(undefined4 **)(iVar5 + -4) != puVar6)) {
          if (*(undefined4 **)(iVar5 + -4) != (undefined4 *)0x0) {
            FUN_004f7a90();
            *(undefined4 *)(iVar5 + -4) = 0;
          }
          *(undefined4 **)(iVar5 + -4) = puVar6;
          FUN_004f7a80();
        }
        FUN_004f7a90();
      }
LAB_00528c94:
    }
  }
  ExceptionList = pvStack_c;
  return;
}

