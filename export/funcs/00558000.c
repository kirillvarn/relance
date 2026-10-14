
void FUN_00558000(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 local_28 [4];
  undefined1 auStack_24 [36];
  
  iVar1 = FUN_005792b0(0x25);
  if (((iVar1 != 0) && (iVar1 = FUN_005792b0(0x29), iVar1 != 0)) && (param_2 != 0)) {
    FUN_00422610(param_3,"E:\\FL\\Scratch\\Source\\Client\\supt\\LightsCamera.cpp",0x339);
    FUN_00422950(param_3);
    FUN_00421ed0(0xb44);
    FUN_00421dd0(0xbe2);
    FUN_004220c0(2,2);
    FUN_00422190(0);
    FUN_00421dd0(0xb71);
    FUN_00422120(4);
    FUN_00421ed0(0xb60);
    (**(code **)(**(int **)TextureLib_exref + 0x58))
              (*(int **)TextureLib_exref,DAT_006799c4,0,local_28);
    FUN_004220a0(unaff_EDI);
    FUN_00421670(8);
    iVar1 = 0;
    if (0 < param_2) {
      do {
        FUN_005579b0(param_3);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
    FUN_00421690();
    (**(code **)(**(int **)TextureLib_exref + 0x58))
              (*(int **)TextureLib_exref,DAT_006799c0,0,auStack_24);
    FUN_004220a0(unaff_ESI);
    FUN_00421670(8);
    iVar1 = 0;
    if (0 < param_2) {
      do {
        FUN_00557d70(param_3);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
    FUN_00421690();
    FUN_00422120(2);
    FUN_00421dd0(0xb71);
    FUN_00422190(1);
    FUN_00421dd0(0xb44);
    FUN_00421dd0(0xbe2);
    FUN_004220c0(5,6);
  }
  return;
}

