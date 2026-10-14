
/* WARNING: Removing unreachable block (ram,0x00487720) */

void __fastcall FUN_00487550(int param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *local_a14;
  char *local_a10;
  undefined4 local_a0c;
  undefined4 local_a08;
  undefined4 local_a04;
  undefined4 local_a00 [128];
  undefined1 local_800 [2048];
  
  iVar1 = *(int *)(param_1 + 0xe88);
  iVar4 = 0;
  if (iVar1 != -1) {
    iVar4 = *(int *)(param_1 + 0x344) + iVar1 * 0x24;
    CHARACTER_ID::operator=
              ((CHARACTER_ID *)(param_1 + 0x368),
               *(CHARACTER_ID **)(*(int *)(param_1 + 0x344) + iVar1 * 0x24));
  }
  if (*(int *)(param_1 + 0x1764) == 0) {
    *(undefined2 *)(param_1 + 0x568) = 0;
  }
  else {
    FUN_0057c2c0(param_1 + 0x568,0x1f);
  }
  if (iVar4 != 0) {
    pcVar2 = *(code **)(iVar4 + 0x18);
    if (*(code **)(iVar4 + 0x18) == (code *)0x0) {
      pcVar2 = _C_exref;
    }
    iVar4 = wcscmp((wchar_t *)pcVar2,(wchar_t *)(param_1 + 0x568));
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x368) = 0;
    }
  }
  if (*(short *)(param_1 + 0x568) == 0) {
    pcVar2 = *(code **)(param_1 + 0x354);
    if (*(code **)(param_1 + 0x354) == (code *)0x0) {
      pcVar2 = _C_exref;
    }
    wcscpy((wchar_t *)(param_1 + 0x568),(wchar_t *)pcVar2);
    _ltow(*(long *)(param_1 + 0x364),(wchar_t *)(param_1 + 0x568 + *(int *)(param_1 + 0x360) * 2),10
         );
  }
  if (*(char *)(param_1 + 0x368) == '\0') {
    puVar5 = (undefined4 *)(param_1 + 0x368);
    puVar7 = local_a00;
    for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x348);
    iVar4 = *(int *)(param_1 + 0x344);
    for (iVar6 = iVar4; iVar6 != iVar1; iVar6 = iVar6 + 0x24) {
      FUN_00487c30();
    }
    *(int *)(param_1 + 0x348) = iVar4;
    *(undefined4 *)(param_1 + 0xe80) = 0;
    *(undefined4 *)(param_1 + 0xe88) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x173c) = 0;
    *(undefined4 *)(param_1 + 0x1744) = 0xffffffff;
    FUN_00487cb0(0xffffffff);
    *(undefined1 *)(param_1 + 0x33d) = 0;
    *(undefined1 *)(param_1 + 0x33e) = 0;
    if (DAT_0067ecd0 == (int *)0x0) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_LoadSave.cpp",0x366,
                 "No server, cannot save\n");
    }
    else {
      (**(code **)(*DAT_0067ecd0 + 0xe8))(local_a00,param_1 + 0x568,DAT_00673344);
    }
    FUN_004877f0();
    *(undefined1 *)(param_1 + 0x33e) = 1;
  }
  else {
    FUN_004347e0(DAT_0067eca8,0x706,local_800,0x400);
    *(undefined4 *)(param_1 + 0x338) = 4;
    if (*(int *)(param_1 + 0x1764) != 0) {
      FUN_0057c7d0(0);
    }
    local_a14 = local_800;
    *(undefined1 *)(param_1 + 0xe7e) = 0;
    *(undefined1 *)(param_1 + 0x173a) = 0;
    local_a10 = "ConfirmText";
    iVar4 = FUN_0059d9c0("NN_Confirm");
    if ((iVar4 == 0) &&
       (piVar3 = (int *)FUN_0059db20("NN_Confirm","NN_Confirm",param_1,&local_a14),
       piVar3 != (int *)0x0)) {
      local_a0c = 0;
      local_a08 = 0;
      local_a04 = 0;
      (**(code **)(*piVar3 + 0xa8))(0x42,&local_a0c,0);
      (**(code **)(*piVar3 + 0x80))();
      return;
    }
  }
  return;
}

