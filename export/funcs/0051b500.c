
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051b500(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_c;
  float local_8;
  float local_4;
  
  uVar3 = 0;
  bVar1 = false;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    local_4 = (float)*(byte *)(param_1 + 0xe9) * (float)_DAT_005c89c8;
    local_8 = (float)*(byte *)(param_1 + 0xea) * (float)_DAT_005c89c8;
    local_c = (float)*(byte *)(param_1 + 0xeb) * (float)_DAT_005c89c8;
    cVar2 = FUN_0041a3e0();
    fVar4 = local_4;
    fVar5 = local_8;
    fVar6 = local_c;
    bVar1 = false;
    if ((cVar2 != '\0') &&
       (((*(char *)(param_1 + 0xe9) != '\0' || (*(char *)(param_1 + 0xea) != '\0')) ||
        (*(char *)(param_1 + 0xeb) != '\0')))) {
      fVar4 = 0.0;
      fVar5 = 0.0;
      fVar6 = 0.0;
      bVar1 = true;
    }
    FUN_004214d0(fVar4,fVar5,fVar6,0x3f800000);
    uVar3 = 0x4000;
  }
  if ((*(byte *)(param_1 + 0xe8) & 2) != 0) {
    uVar3 = uVar3 | 0x100;
  }
  if (uVar3 != 0) {
    FUN_00422610(0,"E:\\FL\\Scratch\\Source\\Client\\space\\Gamecam.cpp",0xb7);
    FUN_004215e0(uVar3);
    if (((*(byte *)(param_1 + 0xe8) & 1) != 0) && (bVar1)) {
      FUN_00422610(param_1,"E:\\FL\\Scratch\\Source\\Client\\space\\Gamecam.cpp",0xc0);
      FUN_004214d0(local_4,local_8,local_c,0x3f800000);
      FUN_004215e0(0x4000);
    }
  }
  return;
}

