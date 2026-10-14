
/* WARNING: Removing unreachable block (ram,0x00536f50) */
/* WARNING: Removing unreachable block (ram,0x00536f65) */
/* WARNING: Removing unreachable block (ram,0x00536f74) */
/* WARNING: Removing unreachable block (ram,0x00536f7d) */
/* WARNING: Removing unreachable block (ram,0x00536f80) */
/* WARNING: Removing unreachable block (ram,0x00536f8d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536c20(undefined4 param_1)

{
  undefined4 *puVar1;
  IDPMsgHandler *this;
  int iVar2;
  CObject *this_00;
  uint uVar3;
  Root *pRVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int *unaff_EBX;
  int iStack_6c;
  int *piStack_68;
  int iStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  CObject *pCStack_30;
  uint uStack_2c;
  IDPMsgHandler *pIStack_28;
  undefined4 uStack_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piStack_58 = *(int **)Engine_exref;
  uStack_4c = 0xffffffff;
  uStack_50 = 1;
  uStack_54 = param_1;
  uStack_5c = 0x536c42;
  iStack_64 = (**(code **)(*piStack_58 + 0xd8))();
  if (iStack_64 != -1) {
    do {
      uStack_5c = uStack_4;
      piStack_60 = (int *)uStack_8;
      piStack_68 = (int *)0x536c5a;
      FUN_00536c20();
      piStack_68 = *(int **)Engine_exref;
      uStack_5c = 0xffffffff;
      piStack_60 = (int *)0x1;
      iStack_64 = param_1;
      iStack_6c = 0x536c70;
      iStack_64 = (**(code **)(*piStack_68 + 0xd8))();
    } while (iStack_64 != -1);
    return;
  }
  piStack_60 = *(int **)Engine_exref;
  uStack_5c = param_1;
  iStack_64 = 0x536c91;
  iVar2 = (**(code **)(*piStack_60 + 0xd4))();
  if (iVar2 != -1) {
    piStack_68 = *(int **)Engine_exref;
    iStack_64 = param_1;
    iStack_6c = 0x536cae;
    uStack_1c = (**(code **)(*piStack_68 + 0x80))();
    iStack_6c = iVar2;
    this_00 = (CObject *)(**(code **)(**(int **)Engine_exref + 0x80))(*(int **)Engine_exref);
    (**(code **)(**(int **)Engine_exref + 0xc0))(*(int **)Engine_exref,iVar2,param_1);
    this = pIStack_28;
    if (pCStack_30 == this_00) {
      if (*(int *)(pIStack_28 + 4) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(pIStack_28 + 8) - *(int *)(pIStack_28 + 4) >> 2;
      }
      if (uStack_2c <= uVar3) {
        (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,param_1);
        return;
      }
      pCStack_30 = CObject::Alloc(1);
      (**(code **)(**(int **)Engine_exref + 0x70))(*(int **)Engine_exref,param_1,pCStack_30);
      pRVar4 = CObject::get_archetype(this_00);
      (**(code **)(*unaff_EBX + 0x4c))(pRVar4);
      FUN_00537260(*(undefined4 *)(pIStack_28 + 8),1,&stack0xffffffc0);
      return;
    }
    if (*(int *)(pIStack_28 + 4) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(pIStack_28 + 8) - *(int *)(pIStack_28 + 4) >> 2;
    }
    if (uVar3 < uStack_2c) {
      if (*(int *)(pCStack_30 + 0x74) == 2) {
        piStack_60 = *(int **)DEFAULT_LINEAR_DAMPING_exref;
        uStack_5c = *(undefined4 *)DEFAULT_ANGULAR_DAMPING_exref;
        piStack_58 = *(int **)(DEFAULT_ANGULAR_DAMPING_exref + 4);
        uStack_54 = *(undefined4 *)(DEFAULT_ANGULAR_DAMPING_exref + 8);
        uStack_50 = uStack_50 & 0xffffff00;
        (**(code **)(*(int *)pCStack_30 + 100))(&iStack_6c);
        PhySys::Detach(pCStack_30,(DetachParms *)&piStack_60);
        CObject::enable_collisions_r(pCStack_30,true);
      }
      else {
        PhySys::DeactivatePhysics(pCStack_30);
      }
      puVar7 = *(undefined4 **)(pIStack_28 + 8);
      if (*(int *)(pIStack_28 + 0xc) - (int)puVar7 >> 2 != 0) {
        FUN_00597c70(puVar7,puVar7,puVar7 + 1);
        FUN_00427730(*(int *)(pIStack_28 + 8),1 - (*(int *)(pIStack_28 + 8) - (int)puVar7 >> 2),
                     &pCStack_30);
        puVar1 = *(undefined4 **)(pIStack_28 + 8);
        for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
          *puVar7 = pCStack_30;
        }
        *(int *)(pIStack_28 + 8) = *(int *)(pIStack_28 + 8) + 4;
        return;
      }
      if ((*(int *)(pIStack_28 + 4) == 0) ||
         ((uint)((int)puVar7 - *(int *)(pIStack_28 + 4) >> 2) < 2)) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_005ad970();
      }
      iVar5 = FUN_005ad970();
      iVar5 = iVar5 + iVar2;
      iVar2 = iVar5;
      if (iVar5 < 0) {
        iVar2 = 0;
      }
      pvVar6 = operator_new(iVar2 << 2);
      pIStack_28 = (IDPMsgHandler *)FUN_00597c70(*(undefined4 *)(pIStack_28 + 4),puVar7,pvVar6);
      FUN_00427730(pIStack_28,1,&pCStack_30);
      FUN_00597c70(puVar7,*(undefined4 *)(this + 8),(int)pIStack_28 + 4);
      IDPMsgHandler::OnReceive(this,*(uchar **)(this + 4),*(ulong *)(this + 8));
      FUN_005b7e1d(*(undefined4 *)(this + 4));
      *(void **)(this + 0xc) = (void *)((int)pvVar6 + iVar5 * 4);
      iVar2 = FUN_005ad970();
      *(void **)(this + 4) = pvVar6;
      *(int *)(this + 8) = (int)pvVar6 + iVar2 * 4 + 4;
      return;
    }
    CObject::Release(pCStack_30);
  }
  return;
}

