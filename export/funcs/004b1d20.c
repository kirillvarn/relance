
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b1d20(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float local_84;
  undefined1 auStack_80 [128];
  
  if (param_2 == 0x534) {
    uVar6 = 1;
  }
  else {
    if (param_2 != 0x657) goto LAB_004b1d72;
    uVar6 = 8;
  }
  local_84 = 0.0;
  (**(code **)(**(int **)Pipeline_exref + 0x20))(*(int **)Pipeline_exref,uVar6,&local_84);
  if (local_84 == 0.0) {
    return;
  }
LAB_004b1d72:
  bVar1 = _DAT_005c8b68 < (double)param_3;
  piVar3 = (int *)FUN_005b3770(param_2);
  if (piVar3 != (int *)0x0) {
    local_84 = (float)bVar1;
    piVar3[4] = (int)local_84;
    (**(code **)*piVar3)(local_84);
    if ((float)piVar3[5] != (float)piVar3[4]) {
      local_84 = (float)piVar3[4];
      piVar3[5] = (int)local_84;
      (**(code **)(*piVar3 + 4))(local_84);
    }
    piVar3 = *(int **)(param_1 + 0x61c + param_4 * 4);
    if (*(char *)(param_1 + 0x32e) == '\0') {
      if (bVar1) {
        uVar6 = 0x65f;
      }
      else {
        uVar6 = 0x67a;
      }
      FUN_004347e0(DAT_0067eca8,uVar6,auStack_80,0x40);
      (**(code **)(*piVar3 + 0xa8))(0x1d,auStack_80,0);
    }
  }
  if (param_2 == 0x57e) {
    cVar2 = FUN_004b1c00(*(undefined4 *)(param_1 + 0x330),*(undefined1 *)(param_1 + 0x334));
    if (cVar2 == '\0') {
      FUN_004b0920(0xffffffff);
    }
    else {
      *(undefined1 *)(param_1 + 0x84d) = 1;
      FUN_004347e0(DAT_0067eca8,0x778,auStack_80,0x40);
      FUN_0058a530(auStack_80);
      FUN_004347e0(DAT_0067eca8,0x779,auStack_80,0x40);
      FUN_0058a530(auStack_80);
      FUN_004abfb0();
      puVar5 = (undefined4 *)(param_1 + 0x5ac);
      iVar4 = 0xe;
      do {
        (**(code **)(*(int *)*puVar5 + 0xa8))(0x24,0,0);
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_004b1f30(param_2,(float)bVar1);
  return;
}

