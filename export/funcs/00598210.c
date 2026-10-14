
void __thiscall FUN_00598210(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint local_a4;
  undefined1 local_90 [32];
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [32];
  undefined1 auStack_40 [64];
  
  if ((((*(int *)(param_1 + 0x98) != 0) &&
       (param_2 < (uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2))) &&
      (*(int *)(param_1 + 0xa8) != 0)) &&
     (param_4 < (uint)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2))) {
    if (param_3 == 0) {
      if (*(int *)(param_1 + 0x98) == 0) {
        param_3 = 0;
      }
      else {
        param_3 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
      }
      param_3 = param_3 - param_2;
    }
    if (param_5 == 0) {
      param_5 = 0;
      if (*(int *)(param_1 + 0xa8) != 0) {
        param_5 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
      }
      param_5 = param_5 - param_4;
    }
    local_a4 = param_2;
    if (param_2 < param_3 + param_2) {
      do {
        if (*(int *)(param_1 + 0x98) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
        }
        uVar3 = param_4;
        if (local_a4 < iVar4 - 1U) {
          fVar2 = *(float *)(*(int *)(param_1 + 0x98) + local_a4 * 4) -
                  *(float *)(*(int *)(param_1 + 0x98) + 4 + local_a4 * 4);
        }
        else {
          fVar2 = *(float *)(*(int *)(param_1 + 0x98) + local_a4 * 4) + *(float *)(param_1 + 0x80);
        }
        for (; uVar3 < param_4 + param_5; uVar3 = uVar3 + 1) {
          uVar5 = FUN_005ad970();
          if ((local_a4 < uVar5) && (uVar5 = FUN_005ad970(), uVar3 < uVar5)) {
            iVar4 = FUN_005ad970();
            uVar6 = iVar4 * local_a4 + uVar3;
            uVar5 = FUN_005ad970();
            if (uVar5 <= uVar6) goto LAB_0059837b;
            piVar7 = (int *)(*(int *)(param_1 + 0x88) + uVar6 * 4);
          }
          else {
LAB_0059837b:
            piVar7 = (int *)0x0;
          }
          if (*piVar7 != 0) {
            FUN_004215b0();
            local_68 = *(undefined4 *)(*(int *)(param_1 + 0x98) + local_a4 * 4);
            local_6c = *(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar3 * 4);
            local_64 = 0;
            if (DAT_0067da38 == (int *)0x0) {
              DAT_0067da38 = (int *)FUN_005b73e0();
            }
            (**(code **)(*DAT_0067da38 + 0x1c))(DAT_0067da38,local_60,param_1 + 0x3c,local_90);
            FUN_00406880(auStack_70);
            (**(code **)(*(int *)*piVar7 + 0x20))(auStack_40);
            if (*(int *)(param_1 + 0xa8) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
            }
            if (uVar3 < iVar4 - 1U) {
              fVar1 = *(float *)(*(int *)(param_1 + 0xa8) + 4 + uVar3 * 4);
            }
            else {
              fVar1 = *(float *)(param_1 + 0x7c);
            }
            FUN_00579cc0(fVar1 - *(float *)(*(int *)(param_1 + 0xa8) + uVar3 * 4),fVar2);
            FUN_00579e90();
          }
        }
        local_a4 = local_a4 + 1;
      } while (local_a4 < param_3 + param_2);
    }
  }
  return;
}

