
void __fastcall FUN_00528f90(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  float local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined1 local_30 [36];
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_3c = 0.0;
  uStack_38 = 0;
  local_34 = 0;
  iVar4 = FUN_00528d70(&local_3c);
  if ((iVar4 == 0) && (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x84) == '\0')) {
    return;
  }
  if (*(int *)Sound_exref == 0) {
    return;
  }
  FUN_004215b0();
  local_4 = local_34;
  iVar4 = *(int *)(param_1 + 4);
  local_c = local_3c;
  local_8 = uStack_38;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar4 + 0xc) + 4);
  }
  uStack_38 = 0;
  local_3c = (float)*(uint *)(iVar5 + 0x54);
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar4 + 0xc) + 4);
  }
  fVar1 = (float)*(uint *)(iVar5 + 0x58);
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar4 + 0xc) + 4);
  }
  uVar8 = *(undefined4 *)(iVar5 + 0x5c);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar4 + 0xc) + 4);
  }
  bVar3 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x60));
  if ((bVar3) || (iVar4 = FUN_0042ae40((ID_String *)(iVar4 + 0x60)), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar5 = FUN_00428f80(0x68);
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00527a70(iVar4);
    }
  }
  fVar2 = local_3c;
  *(int *)(param_1 + 0x38) = iVar4;
  if (iVar4 != 0) {
    FUN_00429ea0(local_3c,fVar1);
    FUN_00429f10(uVar8);
    iVar4 = **(int **)(param_1 + 0x38);
    uVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(local_30);
    (**(code **)(iVar4 + 0x94))(uVar6);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x88))(1);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  bVar3 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x74));
  if ((bVar3) || (iVar4 = FUN_0042ae40((ID_String *)(iVar4 + 0x74)), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar5 = FUN_00428f80(0x68);
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00527a70(iVar4);
    }
  }
  *(int *)(param_1 + 0x3c) = iVar4;
  if (iVar4 != 0) {
    FUN_00429ea0(fVar2,fVar1);
    FUN_00429f10(uVar8);
    iVar4 = **(int **)(param_1 + 0x3c);
    uVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(local_30);
    (**(code **)(iVar4 + 0x94))(uVar6);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x88))(0);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  bVar3 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x78));
  if ((bVar3) || (iVar4 = FUN_0042ae40((ID_String *)(iVar4 + 0x78)), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar5 = FUN_00428f80(0x68);
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00527a70(iVar4);
    }
  }
  *(int *)(param_1 + 0x40) = iVar4;
  if (iVar4 != 0) {
    FUN_00429ea0(fVar2,fVar1);
    FUN_00429f10(uVar8);
    iVar4 = **(int **)(param_1 + 0x40);
    uVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(local_30);
    (**(code **)(iVar4 + 0x94))(uVar6);
    (**(code **)(**(int **)(param_1 + 0x40) + 0x88))(1);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  bVar3 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x84));
  if (((bVar3) || (iVar4 = FUN_0042ae40((ID_String *)(iVar4 + 0x84)), iVar4 == 0)) ||
     (iVar5 = FUN_00428f80(0x68), iVar5 == 0)) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_00527a70(iVar4);
  }
  *(int **)(param_1 + 0x44) = piVar7;
  if (piVar7 != (int *)0x0) {
    iVar4 = *piVar7;
    uVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(local_30);
    (**(code **)(iVar4 + 0x94))(uVar6);
    (**(code **)(**(int **)(param_1 + 0x44) + 0x88))(0);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  bVar3 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x88));
  if ((bVar3) || (iVar4 = FUN_0042ae40((ID_String *)(iVar4 + 0x88)), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar5 = FUN_00428f80(0x68);
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00527a70(iVar4);
    }
  }
  *(int *)(param_1 + 0x48) = iVar4;
  if (iVar4 != 0) {
    FUN_00429ea0(fVar2,fVar1);
    FUN_00429f10(uVar8);
    iVar4 = **(int **)(param_1 + 0x48);
    uVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(local_30);
    (**(code **)(iVar4 + 0x94))(uVar6);
    (**(code **)(**(int **)(param_1 + 0x48) + 0x88))(0);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  bVar3 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x8c));
  if ((bVar3) || (iVar4 = FUN_0042ae40((ID_String *)(iVar4 + 0x8c)), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar5 = FUN_00428f80(0x68);
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00527a70(iVar4);
    }
  }
  *(int *)(param_1 + 0x4c) = iVar4;
  if (iVar4 != 0) {
    FUN_00429ea0(fVar2,fVar1);
    FUN_00429f10(uVar8);
    iVar4 = **(int **)(param_1 + 0x4c);
    uVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(local_30);
    (**(code **)(iVar4 + 0x94))(uVar6);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x88))(1);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  bVar3 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x90));
  if ((bVar3) || (iVar4 = FUN_0042ae40((ID_String *)(iVar4 + 0x90)), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar5 = FUN_00428f80(0x68);
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00527a70(iVar4);
    }
  }
  *(int *)(param_1 + 0x50) = iVar4;
  if (iVar4 != 0) {
    FUN_00429ea0(fVar2,fVar1);
    FUN_00429f10(uVar8);
    iVar4 = **(int **)(param_1 + 0x50);
    uVar8 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(local_30);
    (**(code **)(iVar4 + 0x94))(uVar8);
    (**(code **)(**(int **)(param_1 + 0x50) + 0x88))(0);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  bVar3 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x94));
  if (((bVar3) || (iVar4 = FUN_0042ae40((ID_String *)(iVar4 + 0x94)), iVar4 == 0)) ||
     (iVar5 = FUN_00428f80(0x68), iVar5 == 0)) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_00527a70(iVar4);
  }
  *(int **)(param_1 + 0x54) = piVar7;
  if (piVar7 != (int *)0x0) {
    iVar4 = *piVar7;
    uVar8 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(local_30);
    (**(code **)(iVar4 + 0x94))(uVar8);
    (**(code **)(**(int **)(param_1 + 0x54) + 0x88))(0);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  bVar3 = ID_String::IsEmpty((ID_String *)(iVar4 + 0x98));
  if (((bVar3) || (iVar4 = FUN_0042ae40((ID_String *)(iVar4 + 0x98)), iVar4 == 0)) ||
     (iVar5 = FUN_00428f80(0x68), iVar5 == 0)) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_00527a70(iVar4);
  }
  *(int **)(param_1 + 0x58) = piVar7;
  if (piVar7 != (int *)0x0) {
    iVar4 = *piVar7;
    uVar8 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(local_30);
    (**(code **)(iVar4 + 0x94))(uVar8);
    (**(code **)(**(int **)(param_1 + 0x58) + 0x88))(0);
  }
  if (*(char *)(*(int *)(param_1 + 4) + 0x54) == '\0') {
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x38) + 100),0);
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),0);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x40) + 100),0);
    }
  }
  else if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 100),0);
    return;
  }
  return;
}

