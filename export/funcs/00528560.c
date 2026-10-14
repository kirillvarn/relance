
void __thiscall FUN_00528560(int param_1,undefined4 param_2)

{
  ExhaustNozzleInfo *pEVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  ExhaustNozzleInfo *this;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  switch(param_2) {
  case 0:
    if (*(int *)(param_1 + 0x34) == 3) {
      piVar4 = *(int **)(param_1 + 0x50);
      if (piVar4 != (int *)0x0) {
        cVar3 = (**(code **)(*piVar4 + 0x14))(piVar4);
        if (cVar3 == '\0') {
          FUN_004291c0((*(int **)(param_1 + 0x50))[0x19],0);
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x50) + 100))();
        }
      }
      if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x4c) + 0x60))();
      }
    }
    else {
      if (*(int *)(param_1 + 0x34) != 2) break;
      if (*(int **)(param_1 + 0x48) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x48) + 0x60))();
      }
    }
    piVar4 = *(int **)(param_1 + 0x38);
    if ((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 0x14))(piVar4), cVar3 == '\0')) {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x38) + 100),0);
    }
    piVar4 = *(int **)(param_1 + 0x40);
    if ((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 0x14))(piVar4), cVar3 == '\0')) {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x40) + 100),0);
      *(undefined4 *)(param_1 + 0x34) = param_2;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x34) == 3) {
      if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x4c) + 0x60))();
      }
      piVar4 = *(int **)(param_1 + 0x54);
      if (piVar4 != (int *)0x0) {
        cVar3 = (**(code **)(*piVar4 + 0x14))(piVar4);
        piVar4 = *(int **)(param_1 + 0x54);
        if (cVar3 == '\0') {
LAB_0052868a:
          FUN_004291c0(piVar4[0x19],0);
        }
        else {
          (**(code **)(*piVar4 + 100))();
        }
      }
    }
    else {
      if (*(int **)(param_1 + 0x48) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x48) + 0x60))();
      }
      piVar4 = *(int **)(param_1 + 0x58);
      if (piVar4 != (int *)0x0) {
        cVar3 = (**(code **)(*piVar4 + 0x14))(piVar4);
        piVar4 = *(int **)(param_1 + 0x58);
        if (cVar3 == '\0') goto LAB_0052868a;
        (**(code **)(*piVar4 + 100))(0);
      }
    }
    piVar4 = *(int **)(param_1 + 0x38);
    if ((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 0x14))(piVar4), cVar3 == '\0')) {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x38) + 100),0);
    }
    piVar4 = *(int **)(param_1 + 0x40);
    if ((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 0x14))(piVar4), cVar3 == '\0')) {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x40) + 100),0);
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      uStack_10 = 0x3f800000;
      uStack_20 = 0x3f800000;
      uStack_30 = 0x3f800000;
      uStack_14 = 0;
      uStack_18 = 0;
      uStack_1c = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_2c = 0;
      uStack_4 = 0;
      uStack_8 = 0;
      uStack_c = 0;
      this = *(ExhaustNozzleInfo **)(*(int *)(param_1 + 4) + 0x38);
      pEVar1 = *(ExhaustNozzleInfo **)(*(int *)(param_1 + 4) + 0x3c);
      if (this != pEVar1) {
        do {
          bVar2 = ExhaustNozzleInfo::GetHardpointOffset_NS(this,(Transform *)&uStack_30);
          if (bVar2) {
            FUN_00503070(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(this + 8),&uStack_30,0);
          }
          this = this + 0x3c;
        } while (this != pEVar1);
        *(undefined4 *)(param_1 + 0x34) = param_2;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return;
      }
    }
    break;
  case 2:
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x60))();
    }
    if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x60))();
    }
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x40) + 0x60))();
    }
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
    }
    piVar4 = *(int **)(param_1 + 0x48);
    if (piVar4 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar4 + 0x14))(piVar4);
      if (cVar3 != '\0') {
        (**(code **)(**(int **)(param_1 + 0x48) + 100))();
        *(undefined4 *)(param_1 + 0x34) = param_2;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return;
      }
      FUN_004291c0((*(int **)(param_1 + 0x48))[0x19],0);
      *(undefined4 *)(param_1 + 0x34) = param_2;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    break;
  case 3:
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x60))();
    }
    if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x60))();
    }
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x40) + 0x60))();
    }
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 100),0);
      *(undefined4 *)(param_1 + 0x34) = param_2;
      return;
    }
    goto LAB_00528878;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
LAB_00528878:
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}

