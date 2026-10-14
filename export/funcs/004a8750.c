
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a8750(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint local_8;
  int local_4;
  
  local_8 = 0xffffffff;
  bVar6 = SinglePlayer();
  if (!bVar6) {
    local_4 = FUN_004c4670();
    Reputation::Vibe::GetAffiliation(&local_4,&local_8,false);
  }
  do {
    iVar7 = 0;
    bVar6 = true;
    if (*(int *)(param_1 + 0x41c) == 1 || *(int *)(param_1 + 0x41c) + -1 < 0) {
      return;
    }
    do {
      iVar3 = *(int *)(param_1 + 0x410);
      fVar1 = *(float *)(iVar3 + 4 + iVar7 * 8);
      fVar2 = *(float *)(iVar3 + 0xc + iVar7 * 8);
      if (*(uint *)(iVar3 + iVar7 * 8) == local_8) {
        fVar1 = fVar1 + _DAT_005d49b0;
      }
      if (*(uint *)(iVar3 + 8 + iVar7 * 8) == local_8) {
        fVar2 = fVar2 + _DAT_005d49b0;
      }
      if (fVar2 < fVar1) {
        uVar4 = *(undefined4 *)(iVar3 + 4 + iVar7 * 8);
        uVar5 = *(undefined4 *)(iVar3 + iVar7 * 8);
        *(undefined4 *)(iVar3 + iVar7 * 8) = *(undefined4 *)(iVar3 + 8 + iVar7 * 8);
        *(undefined4 *)(iVar3 + 4 + iVar7 * 8) = *(undefined4 *)(iVar3 + 0xc + iVar7 * 8);
        iVar3 = *(int *)(param_1 + 0x410);
        *(undefined4 *)(iVar3 + 8 + iVar7 * 8) = uVar5;
        *(undefined4 *)(iVar3 + 0xc + iVar7 * 8) = uVar4;
        bVar6 = false;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x41c) + -1);
  } while (!bVar6);
  return;
}

