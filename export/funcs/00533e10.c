
void __fastcall FUN_00533e10(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  CEquip *pCVar4;
  CArchGroup *this;
  FuseIgnitionList *pFVar5;
  int *piVar6;
  int *piVar7;
  CSimple *this_00;
  float fVar8;
  int local_28;
  int iStack_24;
  int *piStack_20;
  CArchGroupManager *local_1c;
  CArchGrpTraverser local_18 [8];
  CEquipTraverser local_10 [16];
  
  FUN_00533080();
  CEquipTraverser::CEquipTraverser(local_10);
  while( true ) {
    if ((((param_1 == (int *)0x0) || (param_1 == (int *)0xfffffff4)) ||
        (iVar3 = param_1[4], iVar3 == 0)) || ((*(uint *)(iVar3 + 0x4c) & 0x103) != 0x103)) {
      iVar3 = 0;
    }
    pCVar4 = CEquipManager::Traverse((CEquipManager *)(iVar3 + 0xe4),local_10);
    if (pCVar4 == (CEquip *)0x0) break;
    FUN_00533160(*(undefined2 *)(pCVar4 + 8));
  }
  iVar3 = FUN_0052a680();
  if (((param_1 == (int *)0x0) || (param_1 == (int *)0xfffffff4)) ||
     ((this_00 = (CSimple *)param_1[4], this_00 == (CSimple *)0x0 ||
      ((*(uint *)(this_00 + 0x4c) & 0x103) != 0x103)))) {
    this_00 = (CSimple *)0x0;
  }
  puVar1 = *(undefined4 **)(*(int *)(this_00 + 0x88) + 0x78);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    fVar8 = CSimple::get_hit_pts(this_00);
    if (fVar8 < (float)puVar2[4] != (fVar8 == (float)puVar2[4])) {
      (**(code **)(*param_1 + 0x1c0))
                (0,puVar2 + 2,*(undefined2 *)SUBOBJ_ID_ROOT_exref,puVar2[3],0xbf800000);
    }
    FUN_00432240(&local_28,puVar2 + 2);
    if (*(Fuse **)(local_28 + 0x10) != (Fuse *)0x0) {
      Fuse::Load(*(Fuse **)(local_28 + 0x10));
    }
  }
  local_1c = (CArchGroupManager *)(this_00 + 0x144);
  local_18[0] = (CArchGrpTraverser)0x1;
  this = CArchGroupManager::Traverse(local_1c,local_18);
  while (this != (CArchGroup *)0x0) {
    pFVar5 = CArchGroup::FuseIgnitions(this);
    piVar7 = (int *)**(int **)(pFVar5 + 4);
    pFVar5 = CArchGroup::FuseIgnitions(this);
    piStack_20 = *(int **)(pFVar5 + 4);
    if (piVar7 != piStack_20) {
      do {
        fVar8 = CArchGroup::GetHitPoints(this);
        if (fVar8 < (float)piVar7[4] != (fVar8 == (float)piVar7[4])) {
          (**(code **)(*param_1 + 0x1c0))
                    (0,piVar7 + 2,*(undefined2 *)(*(int *)(this + 4) + 4),piVar7[3],0xbf800000);
        }
        local_28 = FUN_0052c7a0(piVar7 + 2);
        if ((local_28 == *(int *)(iVar3 + 4)) || ((uint)piVar7[2] < *(uint *)(local_28 + 0xc))) {
          iStack_24 = *(int *)(iVar3 + 4);
          piVar6 = &iStack_24;
        }
        else {
          piVar6 = &local_28;
        }
        if (*(Fuse **)(*piVar6 + 0x10) != (Fuse *)0x0) {
          Fuse::Load(*(Fuse **)(*piVar6 + 0x10));
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != piStack_20);
    }
    this = CArchGroupManager::Traverse(local_1c,local_18);
  }
  FUN_00539740();
  return;
}

