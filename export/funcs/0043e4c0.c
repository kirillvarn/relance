
void __fastcall FUN_0043e4c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_1 + 0x380);
  piVar4 = (int *)*piVar1;
  iVar3 = 0;
  piVar2 = piVar4;
  if (piVar4 != piVar1) {
    do {
      if (*(char *)((int)piVar2 + 9) != '\0') {
        iVar3 = iVar3 + 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != piVar1);
    if (5 < iVar3) {
      iVar3 = 5;
    }
  }
  puVar5 = (undefined4 *)(&DAT_00610c50)[iVar3];
  if (piVar4 != piVar1) {
    do {
      if (*(char *)((int)piVar4 + 9) != '\0') {
        local_c = *puVar5;
        local_8 = 0x3be56042;
        local_4 = 0;
        puVar5 = puVar5 + 1;
        (**(code **)(*(int *)piVar4[8] + 0xa8))(6,&local_c,0);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x380));
  }
  (**(code **)(**(int **)(param_1 + 0x3d8) + 0xa8))
            (4,(&PTR_s_Interface_HUD_HUD_maneuverbox2_c_00610c68)[iVar3 + -1],0);
  return;
}

