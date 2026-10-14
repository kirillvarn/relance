
void FUN_00541580(float param_1)

{
  CRemotePhysicsSimulation *this;
  double *pdVar1;
  int iVar2;
  bool bVar3;
  int *piStack_54;
  int *local_50;
  CRemotePhysicsSimulation *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_c;
  
  bVar3 = SinglePlayer();
  if ((!bVar3) && (local_50 = (int *)*DAT_00678a34, local_50 != DAT_00678a34)) {
    do {
      pdVar1 = (double *)local_50[2];
      iVar2 = *(int *)(pdVar1 + 1);
      this = (CRemotePhysicsSimulation *)(pdVar1 + 2);
      *pdVar1 = (double)(param_1 + (float)*pdVar1);
      local_4c = this;
      CRemotePhysicsSimulation::Doit(this,(double)param_1);
      if (DAT_00678adc == (int *)0x0) {
        DAT_00678adc = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00678adc + 0x50))(DAT_00678adc,&local_48);
      bVar3 = CRemotePhysicsSimulation::CheckForSync
                        (this,(Vector *)(iVar2 + 0x2c),(Vector *)(iVar2 + 0x2c),
                         (Quaternion *)&local_48);
      if (bVar3) {
        uStack_38 = *(undefined4 *)(iVar2 + 0xb0);
        uStack_30 = uStack_44;
        uStack_34 = local_48;
        uStack_2c = uStack_40;
        uStack_28 = uStack_3c;
        uStack_24 = *(undefined4 *)(iVar2 + 0x2c);
        uStack_20 = *(undefined4 *)(iVar2 + 0x30);
        uStack_1c = *(undefined4 *)(iVar2 + 0x34);
        uStack_c = *(undefined1 *)(iVar2 + 0x1a0);
        uStack_18 = *(undefined4 *)pdVar1;
        uStack_14 = *(undefined4 *)((int)pdVar1 + 4);
        (**(code **)(*DAT_0067ecd0 + 0xd0))(&uStack_38,DAT_00673344);
        (**(code **)(*piStack_54 + 4))((undefined4 *)(iVar2 + 0x2c),&local_50,uStack_20,uStack_1c);
      }
      local_50 = (int *)*local_50;
    } while (local_50 != DAT_00678a34);
  }
  return;
}

