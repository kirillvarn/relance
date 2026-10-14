
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004496b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_30 [48];
  
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  uVar2 = FUN_0043a2b0(param_2);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_0043a3d0(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  FUN_0044a030();
  RoomData::fixup(*(RoomData **)(param_1 + 0x40),*(long *)(param_1 + 0x44));
  if (*(int *)(param_1 + 0x48) != -1) {
    FUN_00555bf0(*(int *)(param_1 + 0x48));
  }
  FUN_004498b0();
  iVar5 = 0;
  puVar4 = (undefined4 *)(param_1 + 0xe4);
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (*(int *)(iVar1 + 0x148) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x14c) - *(int *)(iVar1 + 0x148) >> 2;
    }
    if (iVar3 <= iVar5) break;
    iVar1 = *(int *)(*(int *)(iVar1 + 0x148) + iVar5 * 4);
    uVar2 = FUN_00556fd0(iVar1,iVar1 + 0x3c,iVar1 + 0x30,*(undefined1 *)(iVar1 + 0xa4));
    *puVar4 = uVar2;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x148);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x14c) - iVar5 >> 2;
  }
  *(int *)(param_1 + 0x2e4) = iVar5;
  uVar2 = FUN_00556be0();
  *(undefined4 *)(param_1 + 0x500) = uVar2;
  FUN_00447bb0(*(int *)(param_1 + 0x40) + 0x1d8,*(int *)(param_1 + 0x40) + 0x1cc);
  FUN_00556cd0(*(undefined4 *)(param_1 + 0x500),local_30);
  FUN_00556ce0(*(undefined4 *)(param_1 + 0x500),*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1fc));
  FUN_00556e00(*(undefined4 *)(param_1 + 0x500),*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x200));
  FUN_00556f10(*(undefined4 *)(param_1 + 0x500),*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x204));
  FUN_004356d0(*(int *)(param_1 + 0x40) + 0x174);
  FUN_0044a3a0();
  uVar2 = FUN_0043a510(*(undefined4 *)(param_1 + 0x34));
  FUN_00448a60(param_1,uVar2);
  FUN_0044ced0();
  FUN_00412050(0,(float)_DAT_005c89b8 / _DAT_0061650c);
  FUN_0041a0f0(0,0x40400000);
  FUN_0041dda0(1);
  FUN_005760d0(0xf);
  FUN_0041dde0("arrow",0);
  FUN_00558bf0();
  FUN_00558dd0();
  FUN_005592a0();
  return;
}

