
void __fastcall FUN_0043b3e0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  uint local_8;
  undefined1 local_4 [4];
  
  local_8 = *(uint *)(param_1 + 0x34);
  if ((local_8 & 0x3fffffff) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar6 = local_8;
  if ((uVar1 & 0x3fffffff) != 0) {
    FUN_0045b380();
    iVar5 = *(int *)(param_1 + 0x38);
    local_c = iVar5;
    piVar2 = (int *)FUN_00432240(local_4,&local_c);
    if (*piVar2 == *(int *)(param_1 + 0x10)) {
      puVar3 = (undefined4 *)FUN_00411c50(0x10000,1);
      (**(code **)FDUMP_exref)
                (*puVar3,"%s(%d) : *** ERROR: Could not find location id %d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,local_c);
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*piVar2 + 0x10);
    }
    piVar2 = (int *)(iVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_0043a080(iVar5);
    }
    if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
      (**(code **)(*DAT_0067ecd0 + 0x98))(uVar1,DAT_00673344);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    piVar2 = (int *)FUN_0059da10("NN_Inventory");
    uVar6 = local_8;
    if ((piVar2 != (int *)0x0) &&
       (iVar5 = (**(code **)(*piVar2 + 8))(), uVar6 = local_8, iVar5 != 0)) {
      piVar2 = (int *)(**(code **)(*piVar2 + 8))();
      (**(code **)(*piVar2 + 0xa8))(0x4b,0,0);
      uVar6 = local_8;
    }
  }
  local_8 = uVar6;
  FUN_00432240(&local_c,&local_8);
  if (local_c == *(int *)(param_1 + 0x24)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find base id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,local_8);
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_c + 0x10);
  }
  piVar2 = (int *)(iVar5 + 8);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_00439b50(uVar6);
  }
  if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
    (**(code **)(*DAT_0067ecd0 + 0x90))(uVar6,DAT_00673344);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_00442130();
  return;
}

