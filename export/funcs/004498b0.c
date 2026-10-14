
void __fastcall FUN_004498b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0xb4)) {
    local_4 = 0x14;
    puVar3 = (undefined4 *)(param_1 + 100);
    do {
      iVar1 = FUN_00555b20(*(undefined4 *)(local_4 + iVar1));
      if (iVar1 == -1) {
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : *** ERROR: animation name %s is not present in room mesh",
                   "E:\\FL\\Scratch\\Source\\Client\\gf\\RoomControl.cpp",0xed,
                   *(undefined4 *)(local_4 + *(int *)(param_1 + 0x40)));
      }
      else {
        uVar2 = FUN_00555c70(*(undefined4 *)(param_1 + 0x44),iVar1);
        *puVar3 = uVar2;
        (**(code **)(**(int **)Anim_exref + 0x2c))
                  (*(int **)Anim_exref,uVar2,
                   -(*(char *)(iVar4 + 0x94 + *(int *)(param_1 + 0x40)) != '\0') & 2,0xc0000000,
                   0x3f800000,0,0x3f800000,0x3f800000,0);
      }
      iVar1 = *(int *)(param_1 + 0x40);
      iVar4 = iVar4 + 1;
      local_4 = local_4 + 4;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0xb4));
  }
  return;
}

