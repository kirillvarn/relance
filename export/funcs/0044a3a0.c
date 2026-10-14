
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044a3a0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  float local_28;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9bbb;
  local_c = ExceptionList;
  iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x1a8);
  if ((iVar6 != 0) && (0 < *(int *)(*(int *)(param_1 + 0x40) + 0x1ac) - iVar6 >> 2)) {
    iVar6 = 0;
    ExceptionList = &local_c;
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x40);
      if (*(int *)(iVar1 + 0x1a8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x1ac) - *(int *)(iVar1 + 0x1a8) >> 2;
      }
      if (iVar3 <= iVar6) break;
      iVar1 = *(int *)(*(int *)(iVar1 + 0x1a8) + iVar6 * 4);
      iVar3 = *(int *)(iVar1 + 0xe28);
      if (0 < iVar3) {
        local_28 = 0.0;
        fVar2 = (float)(iVar3 + -1) * *(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x18);
        if ((float)_DAT_005c8ba8 < fVar2) {
          local_28 = *(float *)(iVar1 + 0x10) / fVar2;
        }
        local_24 = 0;
        if (0 < iVar3) {
          iVar3 = iVar1 + 0xe2c;
          do {
            pvVar4 = operator_new(0x7c);
            local_4 = 0;
            if (pvVar4 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              local_18 = 0;
              local_14 = 0;
              local_10 = 0;
              uVar5 = FUN_00557630(iVar1,&local_18,fVar2,-((float)local_24 * local_28),
                                   *(undefined4 *)(iVar1 + 0x14),
                                   *(float *)(iVar1 + 0xc) * (float)_DAT_005cbf58,
                                   *(undefined4 *)(iVar1 + 0xc));
            }
            *(undefined4 *)(param_1 + 0x81c + *(int *)(param_1 + 0x101c) * 4) = uVar5;
            local_4 = 0xffffffff;
            FUN_00557810(iVar3);
            *(int *)(param_1 + 0x101c) = *(int *)(param_1 + 0x101c) + 1;
            local_24 = local_24 + 1;
            iVar3 = iVar3 + 0x30;
          } while (local_24 < *(int *)(iVar1 + 0xe28));
        }
      }
      iVar6 = iVar6 + 1;
    }
  }
  ExceptionList = local_c;
  return;
}

