
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052fc20(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  CBeam *pCVar5;
  uint uVar6;
  CollisionEvent *pCVar7;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  int *piVar8;
  CollisionEvent **ppCVar9;
  CollisionEvent **ppCVar10;
  undefined4 uVar11;
  int *local_54;
  CollisionEvent *pCStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  CollisionEvent *pCStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar8 = (int *)0x0;
  local_54 = (int *)0x0;
  local_44 = 3;
  piVar3 = (int *)FUN_00540fc0(&local_44);
  piVar1 = local_54;
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[5]) {
    if (((piVar3 == (int *)0xfffffff4) || (iVar4 = piVar3[4], iVar4 == 0)) ||
       (((byte)*(undefined4 *)(iVar4 + 0x4c) & 0x67) != 0x67)) {
      iVar4 = 0;
    }
    if ((_DAT_005c7474 <= *(float *)(iVar4 + 0xe8)) &&
       (cVar2 = (**(code **)(*piVar3 + 0x158))(), cVar2 == '\0')) {
      piVar8 = (int *)((int)piVar8 + 1);
      if ((piVar3 == (int *)0xfffffff4) ||
         ((pCVar5 = (CBeam *)piVar3[4], pCVar5 == (CBeam *)0x0 ||
          (((byte)*(undefined4 *)(pCVar5 + 0x4c) & 0x67) != 0x67)))) {
        pCVar5 = (CBeam *)0x0;
      }
      PhySys::GenerateCollisions(pCVar5);
    }
    piVar1 = piVar8;
  }
  local_54 = piVar1;
  LogStream::LogEvent("Timing_cu.collide.num_bullets",(float)(int)piVar1,4);
  ppCVar10 = &pCStack_40;
  ppCVar9 = &pCStack_50;
  uVar6 = FUN_00554e90();
  PhySys::GetCollisions(uVar6,ppCVar9,ppCVar10);
  pCVar7 = pCStack_50;
  if (pCStack_50 != pCStack_40) {
    do {
      DAT_006754bc = DAT_006754bc + 1;
      pCStack_50 = pCVar7 + 0x34;
      FUN_0052fe60(*(undefined4 *)pCVar7,*(undefined4 *)(pCVar7 + 8),&local_54,&uStack_48);
      if ((local_54 != (int *)0x0) &&
         (FUN_0052fe60(*(undefined4 *)(pCVar7 + 4),*(undefined4 *)(pCVar7 + 0xc),&iStack_4c,
                       &local_44), iStack_4c != 0)) {
        fStack_3c = -*(float *)(pCVar7 + 0x1c);
        uStack_24 = *(undefined4 *)(pCVar7 + 0x10);
        fStack_38 = -*(float *)(pCVar7 + 0x20);
        fStack_34 = -*(float *)(pCVar7 + 0x24);
        uStack_20 = *(undefined4 *)(pCVar7 + 0x14);
        fStack_1c = *(float *)(pCVar7 + 0x18);
        fStack_30 = -*(float *)(pCVar7 + 0x28);
        fStack_2c = -*(float *)(pCVar7 + 0x2c);
        fStack_28 = -*(float *)(pCVar7 + 0x30);
        uVar11 = local_44;
        fStack_18 = fStack_3c;
        fStack_14 = fStack_38;
        fStack_10 = fStack_34;
        fStack_c = fStack_30;
        fStack_8 = fStack_2c;
        fStack_4 = fStack_28;
        (**(code **)(*local_54 + 0x194))(&uStack_24,uStack_48,iStack_4c,local_44);
        uStack_20 = *(undefined4 *)(pCVar7 + 0x24);
        fStack_28 = *(float *)(pCVar7 + 0x1c);
        uStack_24 = *(undefined4 *)(pCVar7 + 0x20);
        fStack_14 = *(float *)(pCVar7 + 0x30);
        fStack_1c = *(float *)(pCVar7 + 0x28);
        fStack_18 = *(float *)(pCVar7 + 0x2c);
        (**(code **)(*unaff_ESI + 0x194))(&fStack_34,local_54,uVar11,unaff_EBX);
      }
      pCVar7 = pCStack_50;
    } while (pCStack_50 != pCStack_40);
  }
  return;
}

