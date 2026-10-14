
void FUN_00540eb0(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piStack_8;
  uint uStack_4;
  
  iVar4 = 0;
  if (DAT_00678ae0 != (int *)0x0) {
    (**(code **)(*DAT_00678ae0 + 8))();
  }
  iVar2 = DAT_00678ab4;
  if (DAT_00678ab4 != 0) {
    DAT_00678ae4 = DAT_00678ae4 + 1;
    if ((DAT_00678ae0 == (int *)0x0) &&
       (DAT_00678ae0 = (int *)NewSpatial((char *)&PTR_LAB_005df8a4),
       (ISpatialPartition *)DAT_00678ae0 == (ISpatialPartition *)0x0)) {
      return;
    }
    pvVar1 = operator_new(iVar2 * 0x14);
    piStack_8 = (int *)0x0;
    iVar2 = FUN_00542330(&piStack_8);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)((int)pvVar1 + 0x10);
      do {
        iVar2 = (**(code **)(*piStack_8 + 0x88))(&uStack_4);
        if ((iVar2 == 0) && ((uStack_4 & 0xfdff) != 0)) {
          puVar3[-4] = piStack_8;
          iVar2 = (**(code **)(*piStack_8 + 0x150))();
          puVar3[-3] = *(undefined4 *)(iVar2 + 0x2c);
          puVar3[-2] = *(undefined4 *)(iVar2 + 0x30);
          puVar3[-1] = *(undefined4 *)(iVar2 + 0x34);
          iVar2 = (**(code **)(*piStack_8 + 0x150))();
          *puVar3 = *(undefined4 *)(iVar2 + 0x38);
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 5;
        }
        iVar2 = FUN_00542330(&piStack_8);
      } while (iVar2 != 0);
    }
    (**(code **)(*DAT_00678ae0 + 0x14))(pvVar1,iVar4);
    FUN_005b7e1d(pvVar1);
  }
  return;
}

