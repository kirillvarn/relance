
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0045e470(int param_1)

{
  float fVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  int *piStack_9c;
  void *pvStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005ba388;
  local_c = ExceptionList;
  if (*(float *)(param_1 + 0x20) != _DAT_005c7474) {
    if ((*(float *)(param_1 + 0x24) != _DAT_005c7474) && (*(char *)(param_1 + 0x15) != '\0')) {
      piStack_78 = *(int **)Pipeline_exref;
      uStack_70 = 0;
      uStack_74 = 7;
      uStack_7c = 0x45e4d6;
      ExceptionList = &local_c;
      (**(code **)(*piStack_78 + 0xf0))();
      piStack_84 = *(int **)Pipeline_exref;
      uStack_7c = 0;
      fStack_80 = 1.96182e-44;
      uStack_88 = 0x45e4ea;
      (**(code **)(*piStack_84 + 0xf0))();
      piStack_90 = *(int **)Pipeline_exref;
      uStack_88 = 1;
      uStack_8c = 0x16;
      uStack_94 = 0x45e4ff;
      (**(code **)(*piStack_90 + 0xf0))();
      piStack_9c = *(int **)Pipeline_exref;
      uStack_94 = 0;
      pvStack_98 = (void *)0x89;
      fStack_a0 = 6.41883e-39;
      (**(code **)(*piStack_9c + 0xf0))();
      piStack_a8 = *(int **)Pipeline_exref;
      fStack_a0 = 7.00649e-45;
      uStack_a4 = 0x13;
      uStack_ac = 0x45e52b;
      (**(code **)(*piStack_a8 + 0xf0))();
      piStack_b4 = *(int **)Pipeline_exref;
      uStack_ac = 6;
      uStack_b0 = 0x14;
      uStack_b8 = 0x45e540;
      (**(code **)(*piStack_b4 + 0xf0))();
      piStack_c0 = *(int **)Pipeline_exref;
      uStack_b8 = 1;
      piStack_bc = (int *)0x1b;
      uStack_c4 = 0x45e555;
      (**(code **)(*piStack_c0 + 0xf0))();
      piVar4 = *(int **)Pipeline_exref;
      puVar3 = &DAT_005cee48;
      iStack_c8 = 1;
      do {
        uStack_c4 = *(undefined4 *)(puVar3 + 4);
        iStack_cc = 0;
        piStack_d0 = piVar4;
        (**(code **)(*piVar4 + 0xf8))();
        iStack_c8 = *(int *)(puVar3 + 8);
        puVar3 = puVar3 + 8;
      } while (iStack_c8 != 0);
      piVar4 = *(int **)Pipeline_exref;
      puVar3 = &DAT_005cee80;
      iStack_c8 = 1;
      do {
        uStack_c4 = *(undefined4 *)(puVar3 + 4);
        iStack_cc = 1;
        piStack_d0 = piVar4;
        (**(code **)(*piVar4 + 0xf8))();
        iStack_c8 = *(int *)(puVar3 + 8);
        puVar3 = puVar3 + 8;
      } while (iStack_c8 != 0);
      piStack_d0 = *(int **)Pipeline_exref;
      uStack_c4 = 1;
      iStack_c8 = 0xd;
      iStack_cc = 0;
      (**(code **)(*piStack_d0 + 0xf8))();
      piVar4 = *(int **)Pipeline_exref;
      (**(code **)(*piVar4 + 0xf8))(piVar4,0,0xe,1);
      iVar2 = (**(code **)(**(int **)TextureLib_exref + 0x58))
                        (*(int **)TextureLib_exref,*(undefined4 *)(param_1 + 0x1c),0,&piStack_d0);
      if (iVar2 == 0) {
        (**(code **)(**(int **)Pipeline_exref + 0x108))(*(int **)Pipeline_exref,0,piVar4);
      }
      (**(code **)(**(int **)Pipeline_exref + 0x7c))(*(int **)Pipeline_exref,fStack_80);
      piStack_bc = *(int **)Pipeline_exref;
      piStack_d0 = (int *)0x0;
      iStack_cc = 0;
      iStack_c8 = 0x142;
      uStack_c4 = 0;
      piStack_c0 = (int *)0x0;
      if (piStack_bc != (int *)0x0) {
        (**(code **)(*piStack_bc + 4))(piStack_bc);
      }
      uStack_b8 = 0x80;
      piStack_b4 = (int *)0x0;
      uStack_b0 = 0;
      uStack_ac = uStack_ac & 0xffff0000;
      piStack_a8 = (int *)0x0;
      piStack_9c = (int *)0x0;
      fStack_a0 = 0.0;
      piStack_90 = (int *)0x0;
      uStack_a4 = DAT_00611578;
      FUN_0046ebc0();
      piStack_9c = (int *)(fStack_80 / *(float *)(param_1 + 0x24));
      uVar6 = 4;
      uStack_ac = CONCAT22((short)(uStack_ac >> 0x10),0x100);
      fStack_a0 = 0.0;
      FUN_0046eab0(0,0,0);
      piVar4 = piStack_84;
      piStack_9c = (int *)(fStack_80 / *(float *)(param_1 + 0x24));
      fStack_a0 = (float)piStack_84 / *(float *)(param_1 + 0x20);
      FUN_0046eab0(piStack_84,0,0);
      fStack_a0 = (float)piStack_84 / *(float *)(param_1 + 0x20);
      piStack_9c = (int *)0x0;
      fVar1 = -fStack_80;
      piStack_84 = (int *)fVar1;
      FUN_0046eab0(piVar4,fVar1,0);
      fStack_a0 = 0.0;
      piStack_9c = (int *)0x0;
      FUN_0046eab0(0,fVar1,0);
      if (iStack_cc != 0) {
        if ((char)uStack_ac != '\0') {
          piVar4 = piStack_d0;
          piVar5 = piStack_d0 + iStack_cc * 6;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          }
          iStack_cc = iStack_cc + 1;
        }
        if (piStack_bc != (int *)0x0) {
          (**(code **)(*piStack_bc + 0x114))(piStack_bc,uVar6,iStack_c8,piStack_d0,iStack_cc,0);
        }
      }
      piStack_90 = (int *)0xffffffff;
      if (piStack_bc != (int *)0x0) {
        (**(code **)(*piStack_bc + 8))(piStack_bc);
        piStack_bc = (int *)0x0;
      }
      FUN_005b7e1d(piStack_d0);
      piStack_d0 = (int *)0x0;
      FUN_005b7e1d(uStack_c4);
      ExceptionList = pvStack_98;
      return 1;
    }
  }
  return 0;
}

