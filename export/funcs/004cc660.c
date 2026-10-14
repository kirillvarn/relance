
void __thiscall FUN_004cc660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00421ed0(0xb71);
  FUN_00421ed0(0xbe2);
  uVar2 = param_2;
  FUN_00422950(param_2);
  FUN_00422610(uVar2,"E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp",0x6a1);
  FUN_00421ed0(0xbe2);
  FUN_004220a0(param_4);
  FUN_00421a70(0x80,0x80,200);
  FUN_00421670(8);
  FUN_00421ca0(0,0);
  FUN_00421cc0(0xc0400000,0x40400000,DAT_00612370);
  FUN_00421ca0(DAT_00612368,0);
  FUN_00421cc0(0x40400000,0x40400000,DAT_00612370);
  FUN_00421ca0(DAT_00612368,DAT_0061236c);
  FUN_00421cc0(0x40400000,0xc0400000,DAT_00612370);
  FUN_00421ca0(0,DAT_0061236c);
  FUN_00421cc0(0xc0400000,0xc0400000,DAT_00612370);
  FUN_00421690();
  local_16 = 0x14;
  local_17 = 0x14;
  local_18 = 0x14;
  FUN_00410240(&local_18);
  FUN_004102c0(&param_3,1,uVar2,0);
  iVar3 = FUN_005792b0(0x18);
  if (iVar3 == 0) {
    param_2 = 0xffffff;
    FUN_00410240(&param_2);
  }
  FUN_00421dd0(0xb44);
  FUN_00421dd0(0xb71);
  FUN_00422120(4);
  FUN_00422190(1);
  piVar1 = *(int **)(param_1 + 0x170);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    (**(code **)(**(int **)Deform_exref + 0x3c))(*(int **)Deform_exref,*piVar1,0,&local_14);
    (**(code **)(**(int **)Deform_exref + 0x40))
              (*(int **)Deform_exref,*piVar1,uVar2,&stack0xffffffdc,0,&local_c,0);
    (**(code **)(**(int **)MaterialBatcher_exref + 0x28))(*(int **)MaterialBatcher_exref,1);
  }
  FUN_004101e0();
  return;
}

