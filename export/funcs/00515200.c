
int * FUN_00515200(int param_1,char param_2,char param_3)

{
  BaseWatcher *this;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  Watchable *pWVar4;
  CEquip *pCVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_54 [12];
  undefined1 local_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar8 = DAT_006751b4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bfd8a;
  local_c = ExceptionList;
  piVar2 = (int *)0x0;
  if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar7 = *(int *)(param_1 + 0x10), iVar7 == 0)) ||
     ((*(uint *)(iVar7 + 0x4c) & 0x303) != 0x303)) {
    iVar7 = 0;
  }
  if ((*(uint *)(iVar7 + 0xe0) >> 7 & 1) != 0) {
    while( true ) {
      piVar3 = DAT_006751c0;
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)*piVar2;
      }
      if (piVar3 == (int *)0x0) break;
      if (piVar3[5] == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = piVar3[5] + -8;
      }
      piVar2 = piVar3;
      if ((iVar7 == param_1) && ((char)piVar3[7] == param_2)) {
        return piVar3;
      }
    }
    piVar2 = (int *)0x0;
    if (param_3 != '\0') {
      if (DAT_006751bc == 0) {
        ExceptionList = &local_c;
        piVar2 = operator_new(0x40);
        local_4 = 0;
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          *piVar2 = 0;
          piVar2[1] = 0;
          *(char *)(piVar2 + 2) = param_2;
          iVar7 = FUN_0042a7e0(0,0);
          piVar2[3] = iVar7;
          piVar2[4] = 0;
          *(undefined4 *)(piVar2 + 5) = 0;
          piVar2[6] = 0;
          local_4._0_1_ = 2;
          BaseWatcher::set((BaseWatcher *)(piVar2 + 5),(Watchable *)0x0);
          local_4 = CONCAT31(local_4._1_3_,3);
          *(undefined1 *)((int)piVar2 + 0x1d) = 1;
          FUN_004fcbe0();
          FUN_005154a0(0,0,0,0);
        }
      }
      else {
        if ((int *)DAT_006751b4[1] == (int *)0x0) {
          DAT_006751b4 = (int *)*DAT_006751b4;
          ExceptionList = &local_c;
        }
        else {
          ExceptionList = &local_c;
          *(int *)DAT_006751b4[1] = *DAT_006751b4;
        }
        if (*piVar8 == 0) {
          DAT_006751b8 = piVar8[1];
        }
        else {
          *(int *)(*piVar8 + 4) = piVar8[1];
        }
        DAT_006751bc = DAT_006751bc + -1;
        piVar2 = piVar8;
      }
      local_4 = 0xffffffff;
      *(undefined1 *)((int)piVar2 + 0x1d) = 1;
      if (param_1 == 0) {
        pWVar4 = (Watchable *)0x0;
      }
      else {
        pWVar4 = (Watchable *)(param_1 + 8);
      }
      this = (BaseWatcher *)(piVar2 + 5);
      BaseWatcher::set(this,pWVar4);
      *(char *)(piVar2 + 7) = param_2;
      iVar7 = *(int *)this;
      if (((iVar7 == 0) || (iVar7 == 8)) ||
         ((iVar7 == -4 ||
          ((iVar7 = *(int *)(iVar7 + 8), iVar7 == 0 || ((*(uint *)(iVar7 + 0x4c) & 0x303) != 0x303))
          )))) {
        iVar7 = 0;
      }
      pCVar5 = CEquipManager::FindFirst((CEquipManager *)(iVar7 + 0xe4),0x800000);
      if (pCVar5 == (CEquip *)0x0) {
        iVar7 = 0;
      }
      else if (*(int *)(pCVar5 + 0xc) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(pCVar5 + 0xc) + 4);
      }
      if (*(int *)this == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)(*(int *)this + -8);
      }
      uVar6 = FUN_00514110(local_48,piVar8,(char)piVar2[7]);
      (**(code **)(*piVar8 + 0x10))();
      FUN_004e7090(auStack_54,uVar6);
      FUN_00514010(auStack_54);
      piVar2[10] = 0;
      FUN_004fcbf0(0,*(undefined4 *)(iVar7 + 0xa4),*(undefined4 *)(iVar7 + 0xa0));
      piVar3 = DAT_006751c0;
      piVar8 = DAT_006751c4;
      piVar1 = piVar2;
      if (DAT_006751c0 != (int *)0x0) {
        piVar8 = (int *)DAT_006751c0[1];
        DAT_006751c0[1] = (int)piVar2;
        piVar1 = DAT_006751c4;
      }
      DAT_006751c4 = piVar1;
      piVar1 = piVar2;
      if (piVar8 != (int *)0x0) {
        *piVar8 = (int)piVar2;
        piVar1 = DAT_006751c0;
      }
      DAT_006751c0 = piVar1;
      *piVar2 = (int)piVar3;
      piVar2[1] = (int)piVar8;
      DAT_006751c8 = DAT_006751c8 + 1;
    }
  }
  ExceptionList = local_c;
  return piVar2;
}

