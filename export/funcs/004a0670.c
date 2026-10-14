
void __fastcall FUN_004a0670(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piStack_c28;
  int local_c24;
  int iStack_c20;
  int local_c1c;
  int aiStack_c18 [773];
  int *piStack_4;
  
  *(undefined4 *)(param_1 + 0xec4) = 0;
  *(undefined4 *)(param_1 + 0xec0) = DAT_005d2ecc;
  local_c1c = param_1;
  FUN_005995c0(*(undefined4 *)(param_1 + 0xb90),*(undefined4 *)(param_1 + 0xb94));
  local_c24 = 0;
  do {
    iVar6 = local_c24;
    if (*(int *)(param_1 + 0xb90) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb94) - *(int *)(param_1 + 0xb90) >> 2;
    }
    iVar1 = **(int **)(param_1 + 0x7e0);
    aiStack_c18[local_c24] = iVar3;
    iStack_c20 = (**(code **)(iVar1 + 0x18))();
    piVar7 = (int *)**(int **)(iStack_c20 + 4);
    if (piVar7 != *(int **)(iStack_c20 + 4)) {
      do {
        piVar8 = piVar7 + 2;
        piVar9 = aiStack_c18 + 3;
        for (iVar6 = 0x303; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        piStack_c28 = piStack_4;
        uVar4 = (**(code **)(*piStack_4 + 0x1c))();
        if (local_c24 == 0) {
          if ((-1 < (char)(uVar4 >> 8)) || ((uVar4 & 0x30000) != 0)) goto LAB_004a0760;
LAB_004a074c:
          FUN_00537260(*(undefined4 *)(param_1 + 0xb94),1,&piStack_c28);
        }
        else if (local_c24 == 1) {
          if ((uVar4 & 0x38000) == 0) {
            uVar4 = uVar4 & 0x7fc0;
LAB_004a0745:
            if (uVar4 != 0) goto LAB_004a074c;
          }
        }
        else if (local_c24 == 2) {
          uVar4 = uVar4 & 0x30000;
          goto LAB_004a0745;
        }
LAB_004a0760:
        piVar7 = (int *)*piVar7;
        iVar6 = local_c24;
      } while (piVar7 != (int *)*(int *)(iStack_c20 + 4));
    }
    local_c24 = iVar6 + 1;
    if (2 < local_c24) {
      iStack_c20 = aiStack_c18[2] + -1;
      do {
        bVar2 = true;
        iVar6 = aiStack_c18[1];
        if (iStack_c20 <= aiStack_c18[1]) {
          return;
        }
        do {
          piVar7 = *(int **)(*(int *)(param_1 + 0xb90) + 4 + iVar6 * 4);
          piVar8 = *(int **)(*(int *)(param_1 + 0xb90) + iVar6 * 4);
          uVar4 = (**(code **)(*piVar7 + 0x1c))();
          uVar5 = (**(code **)(*piVar8 + 0x1c))();
          if ((uVar4 & 0x7fc0) < (uVar5 & 0x7fc0)) {
            *(int **)(*(int *)(local_c1c + 0xb90) + iVar6 * 4) = piVar7;
            *(int **)(*(int *)(local_c1c + 0xb90) + 4 + iVar6 * 4) = piVar8;
            bVar2 = false;
          }
          iVar6 = iVar6 + 1;
          param_1 = local_c1c;
        } while (iVar6 < iStack_c20);
      } while (!bVar2);
      return;
    }
  } while( true );
}

