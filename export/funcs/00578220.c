
/* WARNING: Removing unreachable block (ram,0x00578446) */
/* WARNING: Removing unreachable block (ram,0x0057845d) */
/* WARNING: Removing unreachable block (ram,0x00578460) */
/* WARNING: Removing unreachable block (ram,0x00578472) */
/* WARNING: Removing unreachable block (ram,0x0057847c) */
/* WARNING: Removing unreachable block (ram,0x00578480) */

uint FUN_00578220(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int local_8;
  int local_4;
  
  iVar6 = param_1;
  puVar1 = (uint *)*DAT_0067c258;
  puVar4 = puVar1;
  if (puVar1 != DAT_0067c258) {
    while (iVar6 != puVar1[2]) {
      FUN_0053ab20(&param_1,0);
      if (puVar1 == DAT_0067c258) {
        return (uint)puVar1 & 0xffffff00;
      }
    }
    if (puVar1 != (uint *)0xfffffff8) {
      puVar4 = (uint *)puVar1[7];
      local_4 = param_3;
      local_8 = param_2;
      for (; puVar4 != (uint *)puVar1[8]; puVar4 = puVar4 + 2) {
        if ((*puVar4 == param_4) && (puVar4[1] == param_5)) {
          if (param_2 != 0) {
            *puVar4 = param_2;
            puVar4[1] = param_3;
            return CONCAT31((int3)((uint)puVar4 >> 8),1);
          }
          piVar2 = (int *)puVar1[8];
          piVar3 = (int *)puVar4;
          while (piVar3 = piVar3 + 2, piVar3 != piVar2) {
            *puVar4 = *piVar3;
            puVar4[1] = piVar3[1];
            puVar4 = puVar4 + 2;
          }
          iVar6 = puVar1[8];
          puVar1[8] = iVar6 + -8;
          return CONCAT31((int3)((uint)(iVar6 + -8) >> 8),1);
        }
      }
      if (((puVar1[7] == 0) ||
          (puVar4 = (uint *)((int)(puVar1[8] - puVar1[7]) >> 3), puVar4 < (int *)0x2)) &&
         (param_2 != 0)) {
        puVar4 = (uint *)puVar1[8];
        if ((int)(puVar1[9] - (int)puVar4) >> 3 == 0) {
          uVar5 = FUN_005995f0();
          if (uVar5 < 2) {
            iVar6 = 1;
          }
          else {
            iVar6 = FUN_005995f0();
          }
          iVar7 = FUN_005995f0();
          iVar7 = iVar7 + iVar6;
          iVar6 = iVar7;
          if (iVar7 < 0) {
            iVar6 = 0;
          }
          pvVar8 = operator_new(iVar6 * 8);
          param_1 = FUN_004363b0(puVar1[7],puVar4,pvVar8);
          FUN_00436bb0(param_1,1,&local_8);
          FUN_004363b0(puVar4,puVar1[8],param_1 + 8);
          IDPMsgHandler::OnReceive((IDPMsgHandler *)(puVar1 + 6),(uchar *)puVar1[7],puVar1[8]);
          FUN_005b7e1d(puVar1[7]);
          puVar1[9] = (uint)((int)pvVar8 + iVar7 * 8);
          uVar5 = FUN_005995f0();
          puVar1[7] = (uint)pvVar8;
          puVar1[8] = (int)pvVar8 + uVar5 * 8 + 8;
          return uVar5 & 0xffffff00;
        }
        FUN_004363b0(puVar4,puVar4,puVar4 + 2);
        FUN_00436bb0(puVar1[8],1 - ((int)(puVar1[8] - (int)puVar4) >> 3),&local_8);
        piVar2 = (int *)puVar1[8];
        if (puVar4 != (uint *)piVar2) {
          do {
            *puVar4 = local_8;
            puVar4[1] = local_4;
            puVar4 = puVar4 + 2;
          } while (puVar4 != (uint *)piVar2);
          iVar6 = puVar1[8];
          puVar1[8] = iVar6 + 8U;
          return iVar6 + 8U & 0xffffff00;
        }
        puVar1[8] = puVar1[8] + 8;
      }
    }
  }
  return (uint)puVar4 & 0xffffff00;
}

